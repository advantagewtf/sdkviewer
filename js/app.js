const JSON_FILES = [
  "dumped/json/client_dll.json",
  "dumped/json/buttons.json",
  "dumped/json/engine2_dll.json",
  "dumped/json/offsets.json",
  "dumped/json/schemasystem_dll.json",
];

let allClasses = {};
let sortedClassNames = [];
let searchCache = new Map();
let lastQuery = "";
let searchInput = null;

const stripComments = str => str.replace(/\/\/.*$/gm, "").replace(/\/\*[\s\S]*?\*\//g, "");

const readLocalJSON = path => new Promise((resolve, reject) => {
  const xhr = new XMLHttpRequest();
  xhr.open("GET", path, true);
  xhr.onload = () => (xhr.status === 200 || xhr.status === 0)
    ? resolve(JSON.parse(stripComments(xhr.responseText)))
    : reject(`HTTP ${xhr.status}`);
  xhr.onerror = () => reject("Network error");
  xhr.send();
});

async function fetchData() {
  const isLocal = location.protocol === "file:";

  for (const file of JSON_FILES) {
    try {
      let data;
      if (isLocal) {
        data = await readLocalJSON(file);
      } else {
        const res = await fetch(file);
        if (!res.ok) continue;
        data = JSON.parse(stripComments(await res.text()));
      }

      if (file.includes("schemasystem_dll.json")) {
        const moduleName = Object.keys(data)[0];
        const payload = data[moduleName];
        if (payload.classes) Object.assign(allClasses, payload.classes);

        allClasses["[SchemaSystem]"] = { fields: {}, parent: "Global Types" };
        const globalFields = allClasses["[SchemaSystem]"].fields;
        const regClass = payload.classes?.CSchemaSystemInternalRegistration;
        if (regClass?.fields) {
          Object.entries(regClass.fields).forEach(([name, offset]) => {
            globalFields[name] = { offset, type_name: "builtin" };
          });
        }
        continue;
      }

      const rootKey = Object.keys(data)[0];
      const payload = data[rootKey];
      if (payload?.classes) Object.assign(allClasses, payload.classes);

      if (file.includes("offsets.json")) {
        allClasses.MoonLightGlobals ??= { fields: {}, parent: "Global Types" };
        Object.entries(data).forEach(([k, v]) => {
          allClasses.MoonLightGlobals.fields[k] = { type_name: "module", offsets: v };
        });
      }
    } catch (err) {
      console.error(`Failed to load ${file}:`, err);
    }
  }

  sortedClassNames = Object.keys(allClasses).sort((a, b) => a.localeCompare(b));
  const idx = sortedClassNames.indexOf("MoonLightGlobals");
  if (idx > -1) { sortedClassNames.splice(idx, 1); sortedClassNames.unshift("MoonLightGlobals"); }

  const countEl = document.getElementById("class-count");
  if (countEl) countEl.textContent = sortedClassNames.length.toLocaleString() + " classes";

  renderClassList("");
}

function getMatchingClasses(query) {
  if (!query) return sortedClassNames;
  query = query.trim().toLowerCase();
  if (searchCache.has(query)) return searchCache.get(query);

  const [mode, term] = query.startsWith("class:") ? ["class", query.slice(6).trim()] :
                       query.startsWith("offset:") ? ["offset", query.slice(7).trim()] :
                       query.startsWith("enum:") ? ["enum", query.slice(5).trim()] :
                       ["all", query];

  const result = [];
  for (const name of sortedClassNames) {
    const cls = allClasses[name];
    let matches = false;

    if (mode === "class") {
      if (name.toLowerCase().includes(term)) matches = true;
    } else if (mode === "enum" && name === "[SchemaSystem]") {
      matches = Object.keys(cls.fields || {}).some(k => k.toLowerCase().includes(term));
    } else if (mode === "offset" && cls.fields) {
      for (const field of Object.values(cls.fields)) {
        if (field?.offsets && Object.keys(field.offsets).some(k => k.toLowerCase().includes(term))) {
          matches = true; break;
        }
      }
    } else {
      if (name.toLowerCase().includes(term)) matches = true;
      if (!matches && cls.fields) {
        for (const [fieldName, field] of Object.entries(cls.fields)) {
          if (fieldName.toLowerCase().includes(term) ||
              (field?.type_name && field.type_name.toLowerCase().includes(term)) ||
              (field?.enum_values && Object.keys(field.enum_values).some(v => v.toLowerCase().includes(term)))) {
            matches = true; break;
          }
        }
      }
    }

    if (matches) result.push(name);
  }

  if (searchCache.size > 500) searchCache.clear();
  searchCache.set(query, result);
  return result;
}

function renderClassList(query = "") {
  lastQuery = query;
  const container = document.getElementById("classlist");
  container.innerHTML = "";
  const fragment = document.createDocumentFragment();

  const matches = getMatchingClasses(query);
  let firstMatch = null;

  for (const name of matches) {
    const cls = allClasses[name];
    const item = document.createElement("div");
    item.className = "class-item";
    item.dataset.className = name;
    item.onclick = () => selectClass(name, item);

    const nameSpan = document.createElement("span");
    nameSpan.className = "name";
    nameSpan.textContent = name.replace(/^\[|\]$/g, "");

    const parentSpan = document.createElement("span");
    parentSpan.className = "parent";
    parentSpan.textContent = cls.parent || (name === "[SchemaSystem]" ? "Global Types" : "");

    item.appendChild(nameSpan);
    item.appendChild(parentSpan);
    if (!firstMatch) firstMatch = item;
    fragment.appendChild(item);
  }

  container.appendChild(fragment);

  if (query && firstMatch) {
    setTimeout(() => {
      firstMatch.click();
      firstMatch.scrollIntoView({ block: "center", behavior: "smooth" });
    }, 10);
  }
}

const formatHex = val => {
  if (typeof val === "number") return "0x" + val.toString(16).toLowerCase();
  if (typeof val === "string" && /^-?\d+$/.test(val)) return "0x" + Number(val).toString(16).toLowerCase();
  return val ?? "?";
};

function updateTopbar(className, cls) {
  const nameEl = document.getElementById("tb-class-name");
  const metaEl = document.getElementById("tb-meta");
  if (!nameEl || !metaEl) return;

  nameEl.textContent = className.replace(/^\[|\]$/g, "");

  const fieldCount = cls.fields ? Object.keys(cls.fields).length : 0;
  const methodCount = cls.methods ? Object.keys(cls.methods).length : 0;

  const parts = [];

  if (cls.parent && cls.parent !== "Global Types") {
    parts.push(`<span class="tb-meta-item"><span class="lbl">Parent</span><span class="val">${cls.parent}</span></span>`);
    parts.push(`<span class="tb-pipe">|</span>`);
  }

  parts.push(`<span class="tb-meta-item"><span class="lbl">Members</span><span class="val-plain">${fieldCount}</span></span>`);
  parts.push(`<span class="tb-pipe">|</span>`);

  if (methodCount > 0) {
    parts.push(`<span class="tb-meta-item"><span class="lbl">Methods</span><span class="val-plain">${methodCount}</span></span>`);
    parts.push(`<span class="tb-pipe">|</span>`);
  }

  parts.push(`<span class="tb-meta-item"><span class="lbl">Size</span><span class="val-plain">${cls.size ? "0x" + cls.size.toString(16) : "N/A"}</span></span>`);
  parts.push(`<span class="badge-updated">Updated</span>`);

  metaEl.innerHTML = parts.join("");
}

function wrapTable(table) {
  const wrap = document.createElement("div");
  wrap.className = "table-wrap";
  wrap.appendChild(table);
  return wrap;
}

function selectClass(className, element) {
  document.querySelectorAll(".class-item").forEach(el => el.classList.remove("active"));
  element?.classList.add("active");

  const content = document.getElementById("content");
  content.innerHTML = "";

  const cls = allClasses[className] || {};
  updateTopbar(className, cls);

  if (className === "[SchemaSystem]") {
    const card = document.createElement("div");
    card.className = "card";
    card.innerHTML = `<strong class="section-title"><i data-lucide="layers"></i>Schema Types</strong>`;

    const table = document.createElement("table");
    table.innerHTML = `<thead><tr><th>Name</th><th>Type</th><th>Offset / Size</th><th>Values</th></tr></thead><tbody></tbody>`;
    const tbody = table.querySelector("tbody");

    Object.entries(cls.fields || {}).forEach(([name, field]) => {
      let values = "";
      if (field.enum_values) {
        const list = Object.entries(field.enum_values)
          .map(([k, v]) => `<code>${k}</code> = ${v}`).join(", ");
        values = `<details><summary>${Object.keys(field.enum_values).length} values</summary><div style="margin-top:8px;font-size:12px;">${list}</div></details>`;
      }
      const row = document.createElement("tr");
      row.innerHTML = `
        <td>${name}</td>
        <td><code>${field.type_name || "builtin"}</code></td>
        <td>${field.offset !== undefined ? formatHex(field.offset) : field.size ? field.size + "B" : "?"}</td>
        <td>${values}</td>
      `;
      tbody.appendChild(row);
    });

    card.appendChild(wrapTable(table));
    content.appendChild(card);
    lucide?.createIcons();
    return;
  }

  if (cls.fields && Object.keys(cls.fields).length) {
    const card = document.createElement("div");
    card.className = "card";
    card.innerHTML = `<strong class="section-title"><i data-lucide="align-left"></i>Fields</strong>`;

    const hasOffsetTables = Object.values(cls.fields).some(f => f?.offsets);

    if (hasOffsetTables) {
      for (const [fieldName, field] of Object.entries(cls.fields)) {
        if (!field?.offsets) continue;
        const details = document.createElement("details");
        details.open = true;
        const summary = document.createElement("summary");
        summary.textContent = fieldName;
        details.appendChild(summary);

        const table = document.createElement("table");
        table.innerHTML = `<thead><tr><th>Module</th><th>Address</th></tr></thead><tbody></tbody>`;
        const tbody = table.querySelector("tbody");
        for (const [offsetName, value] of Object.entries(field.offsets || {})) {
          const row = document.createElement("tr");
          row.innerHTML = `<td>${offsetName}</td><td>${formatHex(value)}</td>`;
          tbody.appendChild(row);
        }
        details.appendChild(wrapTable(table));
        card.appendChild(details);
      }
    } else {
      const table = document.createElement("table");
      table.innerHTML = `<thead><tr><th>Type</th><th>Name</th><th>Offset</th><th>Size</th><th></th></tr></thead><tbody></tbody>`;
      const tbody = table.querySelector("tbody");

      for (const [fieldName, value] of Object.entries(cls.fields)) {
        const isObj = typeof value === "object" && value !== null;
        const offset = isObj ? (value.offset ?? "?") : value;
        const typeName = isObj ? (value.type_name || "") : "";
        const size = isObj ? (value.size || "") : "";

        const row = document.createElement("tr");
        row.innerHTML = `
          <td>${typeName}</td>
          <td>${fieldName}</td>
          <td>${formatHex(offset)}</td>
          <td>${size ? "0x" + size.toString(16) : ""}</td>
          <td><i data-lucide="copy" class="row-copy" title="Copy offset"></i></td>
        `;

        const copyIcon = row.querySelector(".row-copy");
        copyIcon?.addEventListener("click", (e) => {
          e.stopPropagation();
          navigator.clipboard?.writeText(formatHex(offset));
        });

        tbody.appendChild(row);
      }
      card.appendChild(wrapTable(table));
    }
    content.appendChild(card);
  }

  if (cls.methods && Object.keys(cls.methods).length) {
    const card = document.createElement("div");
    card.className = "card";
    card.innerHTML = `<strong class="section-title"><i data-lucide="code-2"></i>Methods</strong>`;
    const table = document.createElement("table");
    table.innerHTML = `<thead><tr><th>Name</th><th>Return</th><th>Arguments</th></tr></thead><tbody></tbody>`;
    const tbody = table.querySelector("tbody");
    for (const [name, m] of Object.entries(cls.methods)) {
      const args = (m.args || []).map(a => `${a.type_name || "?"} ${a.name || ""}`).filter(Boolean).join(", ") || "void";
      const row = document.createElement("tr");
      row.innerHTML = `<td>${name}</td><td>${m.return_type || "void"}</td><td><code>${args}</code></td>`;
      tbody.appendChild(row);
    }
    card.appendChild(wrapTable(table));
    content.appendChild(card);
  }

  if (!cls.fields && !cls.methods) {
    content.innerHTML += `<div class="card" style="padding:24px 28px;color:var(--text-muted);font-size:12px;">No data available.</div>`;
  }

  lucide?.createIcons();
}

function debouncedSearch() {
  const query = searchInput.value;
  if (query === lastQuery) return;
  renderClassList(query);
}

window.addEventListener("DOMContentLoaded", () => {
  fetchData();
  searchInput = document.getElementById("search-input");
  let timeout;
  searchInput.addEventListener("input", () => {
    clearTimeout(timeout);
    timeout = setTimeout(debouncedSearch, 100);
  });
});
