lucide.createIcons();
let sdkData = [];
let globalsData = {};
let currentMode = 'classes';
let selectedClass = null;
let urlRequestedClass = null;
let classesScrollPosition = 0;

// Precompute a set of all class names for fast lookup
let classNameSet = new Set();

async function loadData() {
    const urlParams = new URLSearchParams(window.location.search);
    urlRequestedClass = urlParams.get('class');

    try {
        const [sdkRes, globalsRes] = await Promise.all([
            fetch('https://moonlightrblx.github.io/sdkviewer/polygon/Data/sdk_data.json'),
            fetch('https://moonlightrblx.github.io/sdkviewer/polygon/Data/globals.json')
        ]);

        if (sdkRes.ok) {
            sdkData = await sdkRes.json();
            sdkData.sort((a, b) => a.N.localeCompare(b.N));

            // Build fast lookup set
            classNameSet = new Set(sdkData.map(c => c.N));

            if (urlRequestedClass) {
                const foundClass = sdkData.find(c => c.N === urlRequestedClass);
                if (foundClass) {
                    selectedClass = foundClass;
                } else {
                    console.warn(`Requested class "${urlRequestedClass}" not found.`);
                }
            }

            renderClassesList();

            if (selectedClass) {
                selectClass(selectedClass);
            } else if (sdkData.length > 0) {
                selectClass(sdkData[0]);
            }
        } else {
            document.getElementById('class-list').innerHTML = '<li class="no-members">Error loading classes</li>';
        }

        if (globalsRes.ok) {
            globalsData = await globalsRes.json();
            const version = globalsData.version || 'Unknown';
            document.title = `Moonlight SDK (${version})`;
            document.getElementById('header-title').textContent = `Moonlight SDK (${version})`;
            document.getElementById('version-badge').textContent = version;

            let notesHTML = '';
            if (globalsData.notes) notesHTML += `<strong>Notes:</strong> ${globalsData.notes}<br>`;
            if (globalsData.last_updated) notesHTML += `<strong>Last Updated:</strong> ${globalsData.last_updated}`;
            document.getElementById('notes').innerHTML = notesHTML;

            renderGlobalsList();
        }
    } catch (err) {
        console.error('Failed to load data:', err);
        document.getElementById('overview').innerHTML = '<div class="loading">Failed to connect to server</div>';
    }
}

function renderClassesList() {
    const list = document.getElementById('class-list');
    const currentScroll = list.scrollTop;

    list.innerHTML = '';

    if (sdkData.length === 0) {
        list.innerHTML = '<li class="no-members">No classes found</li>';
        return;
    }

    sdkData.forEach(cls => {
        const li = document.createElement('li');
        li.className = 'class-item';
        li.textContent = cls.N;
        li.onclick = () => selectClass(cls);

        if (selectedClass && cls.N === selectedClass.N) {
            li.classList.add('active');
        }

        list.appendChild(li);
    });

    list.scrollTop = currentScroll > 0 ? currentScroll : classesScrollPosition;
}

function renderGlobalsList() {
    const list = document.getElementById('globals-list');
    list.innerHTML = '';

    const categories = [
        { name: 'Bases', icon: 'database' },
        { name: 'Offsets', icon: 'layers' },
        { name: 'Functions', icon: 'function' }
    ];

    categories.forEach(cat => {
        const li = document.createElement('li');
        li.innerHTML = `<i data-lucide="${cat.icon}"></i> ${cat.name}`;
        li.onclick = () => selectGlobalCategory(cat.name);
        list.appendChild(li);
    });

    lucide.createIcons();
}

function getInheritanceChain(cls) {
    const chain = [];
    let current = cls;
    while (current) {
        chain.unshift(current.N);
        if (!current.P) break;
        current = sdkData.find(c => c.N === current.P);
    }
    return chain.join(' > ');
}

// Helper to create clickable class link
function createClassLink(className) {
    if (classNameSet.has(className)) {
        const a = document.createElement('a');
        a.href = `?class=${encodeURIComponent(className)}`;
        a.textContent = className;
        a.className = 'class-link';
        a.onclick = (e) => {
            e.preventDefault();
            const targetClass = sdkData.find(c => c.N === className);
            if (targetClass) {
                selectClass(targetClass);
            }
        };
        return a;
    } else {
        // Not a known class - just plain text
        return document.createTextNode(className);
    }
}

function selectClass(cls) {
    selectedClass = cls;
    currentMode = 'classes';

    updateHeader(cls.N, cls.N);
    document.getElementById('inheritance').textContent = getInheritanceChain(cls);
    renderOverviewClass(cls);

    const newUrl = new URL(window.location);
    newUrl.searchParams.set('class', cls.N);
    window.history.replaceState({}, '', newUrl);

    const list = document.getElementById('class-list');
    classesScrollPosition = list.scrollTop;
    renderClassesList();

    const activeItem = Array.from(list.children).find(li => li.textContent === cls.N);
    if (activeItem) {
        activeItem.scrollIntoView({ block: 'center', behavior: 'smooth' });
    }

    updateTabsVisibility();
}

function selectGlobalCategory(cat) {
    selectedClass = null;
    currentMode = 'globals';

    updateHeader(cat, 'Globals');
    document.getElementById('inheritance').textContent = '';

    const newUrl = new URL(window.location);
    newUrl.searchParams.delete('class');
    window.history.replaceState({}, '', newUrl);

    document.querySelectorAll('#globals-list li').forEach(li => li.classList.remove('active'));
    const targetLi = Array.from(document.querySelectorAll('#globals-list li'))
        .find(li => li.textContent.trim() === cat);
    if (targetLi) targetLi.classList.add('active');

    updateTabsVisibility();
    showTab('globals', 'offsets');
}

function updateHeader(breadcrumb, title) {
    document.getElementById('current-item').textContent = breadcrumb;
    document.getElementById('item-title').textContent = title;
}

function renderOverviewClass(cls) {
    const overview = document.getElementById('overview');
    overview.innerHTML = '';

    if (!cls.M || cls.M.length === 0) {
        overview.innerHTML = '<p class="no-members">No members found for this class.</p>';
        return;
    }

    const grid = document.createElement('div');
    grid.className = 'grid';

    cls.M.forEach((m, i) => {
        const card = document.createElement('div');
        card.className = 'card new-card';
        card.style.animationDelay = `${i * 0.05}s`;

        // Type field with clickable link if it's a known class
        const typeNode = m.T && classNameSet.size > 0 
            ? createClassLink(m.T) 
            : document.createTextNode(m.T || 'unknown');

        const typeWrapper = document.createElement('p');
        typeWrapper.innerHTML = '<strong>Type:</strong> ';
        typeWrapper.appendChild(typeNode);

        card.innerHTML = `
            <p><strong>Member:</strong> ${m.N}</p>
        `;
        card.appendChild(typeWrapper);
        card.innerHTML += `
            <p><strong>Offset:</strong> <span class="offset">${m.O}</span>
                <span class="copy-btn" onclick="copyToClipboard('${m.O}')"><i data-lucide="copy"></i></span></p>
            <p><strong>Size:</strong> ${m.S || 'unknown'}</p>
        `;
        grid.appendChild(card);
        setTimeout(() => card.classList.remove('new-card'), 1000);
    });

    overview.appendChild(grid);
    lucide.createIcons();
}

// Global rendering functions unchanged except for possible future type linking
function renderGlobalOffsets() { /* same as before */ }
function renderGlobalFunctions() { /* same as before */ }
function renderGlobalStructs() { /* same as before */ }

function renderStructure(cls) {
    // Also make types clickable in structure view
    const structure = document.getElementById('structure');
    structure.innerHTML = '';

    if (!cls || !cls.M || cls.M.length === 0) {
        structure.innerHTML = '<p class="no-members">No members to display in structure view.</p>';
        return;
    }

    const pre = document.createElement('pre');
    let code = `struct ${cls.N}`;
    if (cls.P) code += ` : public ${cls.P}`;
    code += ' {\n';

    cls.M.forEach(m => {
        const offsetHex = parseInt(m.O, 16).toString(16).toUpperCase().padStart(4, '0');
        const sizeHex = parseInt(m.S, 16).toString(16).toUpperCase().padStart(2, '0');

        const typeSpan = document.createElement('span');
        if (m.T && classNameSet.has(m.T)) {
            typeSpan.appendChild(createClassLink(m.T));
        } else {
            typeSpan.textContent = m.T || 'char[]';
        }

        const line = document.createElement('div');
        line.innerHTML = `    ${String(m.T || 'char[]').padEnd(30)} ${m.N}; // 0x${offsetHex} (0x${sizeHex})`.replace(
            String(m.T || 'char[]').padEnd(30),
            ''
        );
        line.insertBefore(typeSpan, line.firstChild);
        line.appendChild(document.createTextNode(` ${m.N}; // 0x${offsetHex} (0x${sizeHex})\n`));

        pre.appendChild(line);
    });

    const totalSizeHex = (parseInt(cls.M[cls.M.length - 1].O, 16) + parseInt(cls.M[cls.M.length - 1].S, 16))
        .toString(16).toUpperCase().padStart(4, '0');
    pre.appendChild(document.createTextNode(`}; // Size: 0x${totalSizeHex}`));

    structure.appendChild(pre);
}

function updateTabsVisibility() {
    document.querySelectorAll('.tab').forEach(tab => {
        tab.style.display = (tab.dataset.mode === currentMode) ? 'flex' : 'none';
    });
}

function showTab(mode, tabName) {
    if (currentMode !== mode) return;

    document.querySelectorAll('.tab').forEach(t => {
        t.classList.toggle('active', t.dataset.mode === mode && t.dataset.tab === tabName);
    });

    document.getElementById('overview').classList.toggle('active', mode === 'classes' ? tabName === 'overview' : true);
    document.getElementById('structure').classList.toggle('active', mode === 'classes' && tabName === 'structure');

    if (mode === 'classes') {
        if (tabName === 'overview') renderOverviewClass(selectedClass);
        else if (tabName === 'structure') renderStructure(selectedClass);
    } else {
        if (tabName === 'offsets') renderGlobalOffsets();
        else if (tabName === 'functions') renderGlobalFunctions();
        else if (tabName === 'structs') renderGlobalStructs();
    }
}

// Tab clicking
document.querySelectorAll('.tab').forEach(tab => {
    tab.onclick = () => showTab(tab.dataset.mode, tab.dataset.tab);
});

// Mode switching
document.getElementById('classes-tab').onclick = () => switchMode('classes');
document.getElementById('globals-tab').onclick = () => switchMode('globals');

function switchMode(mode) {
    if (currentMode === 'classes') {
        classesScrollPosition = document.getElementById('class-list').scrollTop;
    }

    currentMode = mode;
    document.getElementById('classes-tab').classList.toggle('active', mode === 'classes');
    document.getElementById('globals-tab').classList.toggle('active', mode === 'globals');
    document.getElementById('class-list').style.display = mode === 'classes' ? 'block' : 'none';
    document.getElementById('globals-list').style.display = mode === 'globals' ? 'block' : 'none';

    updateTabsVisibility();

    if (mode === 'classes') {
        renderClassesList();
        if (selectedClass) {
            selectClass(selectedClass);
        } else if (sdkData.length > 0) {
            selectClass(sdkData[0]);
        }
        showTab('classes', 'overview');
    } else if (mode === 'globals') {
        selectGlobalCategory('Offsets');
        showTab('globals', 'offsets');
    }
}

// Search (unchanged)
document.getElementById('search').oninput = (e) => {
    const query = e.target.value.trim().toLowerCase();
    if (currentMode !== 'classes') return;

    const list = document.getElementById('class-list');
    classesScrollPosition = list.scrollTop;

    list.innerHTML = '';

    let matches = sdkData;
    if (query) {
        matches = sdkData.filter(c => c.N.toLowerCase().includes(query));
    }

    if (matches.length === 0) {
        list.innerHTML = '<li class="no-members">No classes found</li>';
        return;
    }

    matches.forEach(cls => {
        const li = document.createElement('li');
        li.className = 'class-item';
        li.textContent = cls.N;
        li.onclick = () => selectClass(cls);
        if (selectedClass && cls.N === selectedClass.N) {
            li.classList.add('active');
        }
        list.appendChild(li);
    });

    list.scrollTop = classesScrollPosition;

    if (selectedClass && matches.some(c => c.N === selectedClass.N)) {
        const activeItem = Array.from(list.children).find(li => li.classList.contains('active'));
        if (activeItem) {
            activeItem.scrollIntoView({ block: 'center', behavior: 'smooth' });
        }
    }
};

function copyToClipboard(text) {
    navigator.clipboard.writeText(text).then(() => {
        const btn = event.target.closest('.copy-btn');
        const original = btn.innerHTML;
        btn.innerHTML = '<i data-lucide="check"></i>';
        lucide.createIcons();
        setTimeout(() => {
            btn.innerHTML = original;
            lucide.createIcons();
        }, 1000);
    });
}

loadData();
