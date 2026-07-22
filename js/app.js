const schema_dir = "dump/schemas/";
const dump_dir = "dump/";

let all_schemas = {};
let all_globals = { modules: {} };
let all_protobufs = {};
let current_tab = "schemas";
let sorted_items = [];
let manifest_data = {};

async function load_all_data() {
  await Promise.all([
    load_hpp_file(`${schema_dir}client_dll.hpp`, all_schemas),
    load_hpp_file(`${schema_dir}engine2_dll.hpp`, all_schemas),
    load_hpp_file(`${dump_dir}protobufs.hpp`, all_protobufs, true),
    load_hpp_file(`${dump_dir}offsets.hpp`, all_globals, false, true),
    load_manifest()
  ]);
}

async function load_hpp_file(path, target, is_protobuf = false, is_offset = false) {
  try {
    const res = await fetch(path);
    const text = await res.text();
    console.log(`Loaded ${path}, length: ${text.length}`);
    if (is_offset) parse_offsets(text, target);
    else if (is_protobuf) parse_protobuf_hpp(text, target);
    else parse_schema_hpp(text, target);
  } catch (e) {
    console.error(`Failed to load ${path}`, e);
  }
}

async function load_manifest() {
  try {
    const res = await fetch(`${dump_dir}manifest.json`);
    manifest_data = await res.json();
    
    const date = new Date(manifest_data.generated_at).toLocaleString();
    
    // Inject the metadata into the topbar
    const metaEl = document.getElementById("tb-meta");
    if (metaEl) {
        metaEl.innerHTML = `
          Build: <strong>${manifest_data.build_number}</strong> 
          | Dumped: ${date} 
          <span id="update-status">| update checker added soon!</span>
        `;
    }
    
    // Check against live Steam servers (Proxy removed)
    check_steam_update(manifest_data.build_number);
  } catch (e) {
    console.error("Failed to load manifest.json", e);
  }
}

async function check_steam_update(localBuild) {
  const steamCmdUrl = "https://api.steamcmd.net/v1/info/730";
  
  try {
    const res = await fetch(steamCmdUrl);
    const data = await res.json();
    
    const liveBuild = data.data["730"].depots.branches.public.buildid;
    const statusEl = document.getElementById("update-status");
    
    if (statusEl) {
        if (localBuild >= liveBuild) {
          //statusEl.innerHTML = `| <span style="color: var(--accent-glow)">Up to date</span>`;
        } else {
        // statusEl.innerHTML = `| <span style="color: #ff4d4d">Outdated (Live: ${liveBuild})</span>`;
        }
    }
  } catch (e) {
    const statusEl = document.getElementById("update-status");
    if (statusEl) {
        statusEl.innerHTML = "| update check failed";
    }
    console.error("Steam update check failed:", e);
  }
}

function parse_schema_hpp(text, target) {
  const regex = /\/\/\s*(\w+)\s*\n\s*\/\/\s*parent:\s*(\w+)?[\s\S]*?class\s+(\w+).*?\{([\s\S]*?)\};/g;
  let m;
  while ((m = regex.exec(text)) !== null) {
    const name = m[3];
    const parent = m[2] || null;
    const body = m[4];
    const size_match = body.match(/size:\s*0x([0-9a-f]+)/i);
    const size = size_match ? parseInt(size_match[1], 16) : null;

    const fields = [];
    const f_regex = /SCHEMA_FIELD\(([^,]+?),\s*(\w+)\s*,\s*([^)]+)\)/g;
    let fm;
    while ((fm = f_regex.exec(body)) !== null) {
      fields.push({
        type: fm[1].trim(),
        name: fm[2],
        offset: fm[3].trim().replace(/\/\/.*$/, '').trim()
      });
    }
    target[name] = { name, parent, size, fields };
  }
}

function parse_protobuf_hpp(text, target) {
  const struct_regex = /#pragma pack\(push, 1\)\nstruct\s+(\w+)\s*\{([\s\S]*?)\};\n#pragma pack\(pop\)/g;
  let m;
  while ((m = struct_regex.exec(text)) !== null) {
    const name = m[1];
    const body = m[2];

    const size_match = body.match(/kSizeOf\s*=\s*0x([0-9a-fA-F]+)/);
    const size = size_match ? parseInt(size_match[1], 16) : null;

    const has_bits_match = body.match(/kHasBits\s*=\s*(0x[0-9a-fA-F]+)/);
    const has_bits = has_bits_match ? has_bits_match[1] : null;

    const fields = [];
    const lines = body.split('\n');
    for (const line of lines) {
      const trimmed = line.trim();
      if (!trimmed || trimmed.startsWith('//') || trimmed.startsWith('static')) continue;
      if (trimmed.startsWith('uint8_t _pad_') || trimmed.startsWith('uint8_t _data[')) continue;

      const field_match = trimmed.match(/^(.+?);\s*\/\/\s*(#\d+\s+.+)$/);
      if (!field_match) continue;

      const decl = field_match[1].trim();
      const comment = field_match[2].trim();

      let field_type = null, field_name = null;

      const ptr_match = decl.match(/^(.*?)\*\s*(\w+)$/);
      if (ptr_match) { field_type = ptr_match[1].trim(); field_name = ptr_match[2]; }

      if (!field_name) {
        const arr_match = decl.match(/^(\S+)\s+(\w+)\[(0x[0-9a-fA-F]+)\]$/);
        if (arr_match) { field_type = arr_match[1]; field_name = arr_match[2]; }
      }

      if (!field_name) {
        const simple_match = decl.match(/^(\S+(?:<[^>]+>)?)\s+(\w+)$/);
        if (simple_match) { field_type = simple_match[1]; field_name = simple_match[2]; }
      }

      if (!field_name || !field_type) continue;

      const comment_match = comment.match(/#(\d+)\s+(.+)/);
      if (!comment_match) continue;

      const field_num = comment_match[1];
      const field_info = comment_match[2];

      const has_bit_match = field_info.match(/has-bit\s+(\d+|no has-bit)/);
      const has_bit = has_bit_match ? has_bit_match[1] : null;

      const clean_info = field_info.replace(/,\s*has-bit\s+\w+/, '').replace(/,\s*no has-bit/, '').trim();

      fields.push({
        name: field_name,
        type: field_type,
        field_number: field_num,
        info: clean_info,
        has_bit: has_bit
      });
    }

    target[name] = { name, size, has_bits, fields };
  }
}

function parse_offsets(text, target) {
  target.modules = {};
  const namespace_regex = /namespace\s+(\w+)\s*\{/g;
  let match;

  while ((match = namespace_regex.exec(text)) !== null) {
    let name = match[1];

    if (name === "offsets") {
        continue;
    }

    let start = namespace_regex.lastIndex;
    let depth = 1;
    let end = start;

    while (depth > 0 && end < text.length) {
      if (text[end] === "{") depth++;
      else if (text[end] === "}") depth--;
      end++;
    }

    namespace_regex.lastIndex = end; 

    let content = text.substring(start, end - 1);
    let entries = {};
    const entry_regex = /constexpr\s+std::ptrdiff_t\s+(\w+)\s*=\s*(0x[0-9a-fA-F]+|\d+)/g;
    let e;

    while ((e = entry_regex.exec(content)) !== null) {
      entries[e[1]] = e[2];
    }

    if (Object.keys(entries).length) {
      target.modules[name] = entries;
    }
  }
}

function switch_tab(tab) {
  current_tab = tab;
  document.querySelectorAll(".tab-btn").forEach(b => b.classList.toggle("active", b.dataset.tab === tab));
  
  update_sorted_list();
  
  const countEl = document.getElementById("class-count");
  if (countEl) countEl.textContent = `${sorted_items.length} items`;
  
  const searchInput = document.getElementById("search-input");
  render_class_list(searchInput ? searchInput.value : "");
}

function update_sorted_list() {
  if (current_tab === "schemas") sorted_items = Object.keys(all_schemas).sort();
  else if (current_tab === "globals") sorted_items = Object.keys(all_globals.modules || {}).sort();
  else sorted_items = Object.keys(all_protobufs).sort();
}

function render_class_list(query = "") {
  const container = document.getElementById("classlist");
  if (!container) return;
  container.innerHTML = "";
  
  const q = query.toLowerCase();
  const matches = sorted_items.filter(n => n.toLowerCase().includes(q));

  matches.forEach(name => {
    const div = document.createElement("div");
    div.className = "class-item";
    div.textContent = name;
    div.onclick = () => select_item(name);
    container.appendChild(div);
  });
}

function select_item(name) {
  document.querySelectorAll(".class-item").forEach(el => el.classList.remove("active"));
  
  const items = document.querySelectorAll(".class-item");
  for (let el of items) {
    if (el.textContent === name) {
      el.classList.add("active");
      break;
    }
  }

  const titleEl = document.getElementById("tb-class-name");
  if (titleEl) titleEl.textContent = name;
  
  const content = document.getElementById("content");
  if (!content) return;
  content.innerHTML = "";

  if (current_tab === "schemas") render_schema_view(name);
  else if (current_tab === "globals") render_globals_module(name);
  else if (current_tab === "protobufs") render_protobuf_view(name);
}

function render_schema_view(name) {
  const cls = all_schemas[name];
  if (!cls) return;

  const container = document.getElementById("content");

  const header = document.createElement("div");
  header.className = "card";
  header.innerHTML = `
    <h2>${cls.name}</h2>
    ${cls.parent ? `<p><strong>Parent:</strong> <a href="#" class="parent-link">${cls.parent}</a></p>` : ''}
    <p><strong>Size:</strong> ${cls.size ? "0x" + cls.size.toString(16).toUpperCase() : "unknown"}</p>
  `;
  container.appendChild(header);

  const tabs = document.createElement("div");
  tabs.className = "class-tabs";
  tabs.innerHTML = `
    <button class="class-tab-btn active" data-view="table">Table</button>
    <button class="class-tab-btn" data-view="struct">C++ Struct</button>
  `;
  container.appendChild(tabs);

  const view_content = document.createElement("div");
  view_content.id = "class-view-content";
  container.appendChild(view_content);

  tabs.querySelectorAll("button").forEach(btn => {
    btn.onclick = () => {
      tabs.querySelectorAll("button").forEach(b => b.classList.remove("active"));
      btn.classList.add("active");
      show_class_view(cls, btn.dataset.view);
    };
  });

  show_class_view(cls, "table");

  const plink = header.querySelector(".parent-link");
  if (plink) plink.onclick = e => { e.preventDefault(); select_item(cls.parent); };
}

function show_class_view(cls, view) {
  const content = document.getElementById("class-view-content");
  content.innerHTML = "";

  if (view === "table") {
    const table = document.createElement("table");
    table.className = "data-table";
    table.innerHTML = `<thead><tr><th>Type</th><th>Name</th><th>Offset</th></tr></thead><tbody></tbody>`;
    const tbody = table.querySelector("tbody");
    cls.fields.forEach(f => {
      const tr = document.createElement("tr");
      tr.innerHTML = `<td>${f.type}</td><td>${f.name}</td><td>${f.offset}</td>`;
      tbody.appendChild(tr);
    });
    content.appendChild(table);
  } else {
    let code = `struct ${cls.name}${cls.parent ? ` : public ${cls.parent}` : ""} {\n`;
    cls.fields.forEach(f => {
      code += `    ${f.type} ${f.name}; // ${f.offset}\n`;
    });
    code += `}; // size: ${cls.size ? "0x" + cls.size.toString(16).toUpperCase() : "unknown"}\n`;

    const pre = document.createElement("pre");
    pre.className = "language-cpp";
    pre.textContent = code;
    content.appendChild(pre);

    if (typeof Prism !== 'undefined') Prism.highlightElement(pre);

    const btn = document.createElement("button");
    btn.className = "copy-btn";
    btn.textContent = "Copy Struct";
    btn.onclick = () => {
      navigator.clipboard.writeText(code);
      btn.textContent = "Copied!";
      setTimeout(() => btn.textContent = "Copy Struct", 1500);
    };
    content.appendChild(btn);
  }
}

function render_globals_module(module_name) {
  const module_data = all_globals.modules?.[module_name] || {};
  const card = document.createElement("div");
  card.className = "card";
  card.innerHTML = `<h3>Module: ${module_name}</h3>`;

  const table = document.createElement("table");
  table.className = "data-table";
  table.innerHTML = `<thead><tr><th>Offset Name</th><th>Value</th></tr></thead><tbody></tbody>`;
  const tbody = table.querySelector("tbody");

  Object.entries(module_data)
    .sort(([a], [b]) => a.localeCompare(b))
    .forEach(([offset_name, value]) => {
      const tr = document.createElement("tr");
      tr.innerHTML = `<td>${offset_name}</td><td><code>${value}</code></td>`;
      tbody.appendChild(tr);
    });

  card.appendChild(table);
  document.getElementById("content").appendChild(card);
}

function render_protobuf_view(name) {
  const data = all_protobufs[name];
  if (!data) return;

  const container = document.getElementById("content");

  const header = document.createElement("div");
  header.className = "card";
  header.innerHTML = `
    <h2>${name}</h2>
    ${data.size !== null ? `<p><strong>Size:</strong> 0x${data.size.toString(16).toUpperCase()}</p>` : ''}
    ${data.has_bits ? `<p><strong>HasBits Offset:</strong> ${data.has_bits}</p>` : ''}
    <p><strong>Fields:</strong> ${data.fields.length}</p>
  `;
  container.appendChild(header);

  const tabs = document.createElement("div");
  tabs.className = "class-tabs";
  tabs.innerHTML = `
    <button class="class-tab-btn active" data-view="table">Table</button>
    <button class="class-tab-btn" data-view="struct">C++ Struct</button>
  `;
  container.appendChild(tabs);

  const view_content = document.createElement("div");
  view_content.id = "proto-view-content";
  container.appendChild(view_content);

  tabs.querySelectorAll("button").forEach(btn => {
    btn.onclick = () => {
      tabs.querySelectorAll("button").forEach(b => b.classList.remove("active"));
      btn.classList.add("active");
      show_protobuf_view(data, btn.dataset.view);
    };
  });

  show_protobuf_view(data, "table");
}

function show_protobuf_view(data, view) {
  const content = document.getElementById("proto-view-content");
  content.innerHTML = "";

  if (view === "table") {
    const table = document.createElement("table");
    table.className = "data-table";
    table.innerHTML = `<thead><tr><th>#</th><th>Name</th><th>Type</th><th>Info</th><th>Has-Bit</th></tr></thead><tbody></tbody>`;
    const tbody = table.querySelector("tbody");

    data.fields.forEach(f => {
      const tr = document.createElement("tr");
      const has_bit_display = f.has_bit === 'no has-bit' ? '<span style="color:#888">no has-bit</span>' : (f.has_bit || '<span style="color:#888">-</span>');
      tr.innerHTML = `
        <td>${f.field_number}</td>
        <td><code>${f.name}</code></td>
        <td>${f.type}</td>
        <td>${f.info}</td>
        <td>${has_bit_display}</td>
      `;
      tbody.appendChild(tr);
    });
    content.appendChild(table);
  } else {
    let struct_code = `#pragma pack(push, 1)\nstruct ${data.name} {\n`;
    data.fields.forEach(f => {
      struct_code += `    ${f.type} ${f.name}; // #${f.field_number} ${f.info}\n`;
    });
    struct_code += `    static constexpr std::ptrdiff_t kSizeOf = 0x${data.size ? data.size.toString(16).toUpperCase() : '??'};\n`;
    if (data.has_bits) {
      struct_code += `    static constexpr std::ptrdiff_t kHasBits = ${data.has_bits};\n`;
    }
    struct_code += `};\n#pragma pack(pop)`;

    const pre = document.createElement("pre");
    pre.className = "language-cpp";
    pre.textContent = struct_code;
    content.appendChild(pre);

    if (typeof Prism !== 'undefined') {
      Prism.highlightElement(pre);
    }

    const btn = document.createElement("button");
    btn.className = "copy-btn";
    btn.textContent = "Copy Struct";
    btn.onclick = () => {
      navigator.clipboard.writeText(struct_code);
      btn.textContent = "Copied!";
      setTimeout(() => btn.textContent = "Copy Struct", 1500);
    };
    content.appendChild(btn);
  }
}

document.addEventListener("DOMContentLoaded", async () => {
  await load_all_data();
  update_sorted_list();

  const countEl = document.getElementById("class-count");
  if (countEl) countEl.textContent = `${sorted_items.length} items`;
  
  render_class_list("");

  const searchInput = document.getElementById("search-input");
  if (searchInput) {
      searchInput.addEventListener("input", e => render_class_list(e.target.value));
  }

  document.querySelectorAll(".tab-btn").forEach(btn => {
    btn.addEventListener("click", () => switch_tab(btn.dataset.tab));
  });
});