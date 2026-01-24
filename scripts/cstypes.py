import re
import os
import shutil

input_files = [
    "output/client_dll.hpp",
    "output/engine2_dll.hpp"
]

out = "types"
if os.path.exists(out):
    shutil.rmtree(out)

cstypes_folder = os.path.join(out, "cstypes")
enum_folder = os.path.join(out, "enums")
file_out = "types/README.h"
os.makedirs(cstypes_folder, exist_ok=True)
os.makedirs(enum_folder, exist_ok=True)

code = ""
for f in input_files:
    if os.path.exists(f):
        with open(f, "r", errors="ignore") as file:
            code += file.read() + "\n"

enums = {}
enum_pattern = re.compile(
    r'enum\s+(?:class\s+)?(\w+)\s*:\s*\w+\s*{([^}]*)};',
    re.DOTALL
)
for name, body in enum_pattern.findall(code):
    enums[name] = f"enum class {name} : uint32_t {{\n    " + \
                  ",\n    ".join([line.strip() for line in body.split(",") if line.strip()]) + "\n};"
code = enum_pattern.sub("", code)

cls_dict = {}
ns_pattern = re.compile(
    r'namespace\s+(\w+)\s*{(?:\s*//\s*Parent:\s*(\w+))?([^}]*)}',
    re.DOTALL
)
offset_pattern = re.compile(
    r'constexpr\s+std::ptrdiff_t\s+(\w+)\s*=\s*([^;]+);\s*//\s*(.+)'
)

for name, parent, body in ns_pattern.findall(code):
    if not name.endswith("_t"):
        continue
    offsets = offset_pattern.findall(body)
    valid_offsets = [(n, t.strip()) for n, _, t in offsets if t.strip()]
    if valid_offsets:
        cls_dict[name] = valid_offsets

type_sizes = {
    "float": 4,
    "int": 4,
    "uint8_t": 1,
    "uint16_t": 2,
    "bool": 1,
    "Vector3": 12,
}

type_map = {
    "int32": "int",
    "uint32": "uint32_t",
    "uint16": "uint16_t",
    "uint8": "uint8_t",
    "float32": "float",
    "bool": "bool",
    "Vector": "Vector3",
    "Vector2": "Vector2",
    "QAngle": "QAngle",
}

def get_type(cmt: str):
    cmt = cmt.strip()
    if re.match(r'char\[\d+\]', cmt):
        return "char*"
    if (m := re.match(r'([\w:]+)\*', cmt)):
        name = m.group(1)
        return f"{name}*"
    for key, val in type_map.items():
        if key in cmt:
            return val
    return cmt

# enums
for n, c in enums.items():
    with open(os.path.join(enum_folder, f"{n}.h"), "w") as f:
        f.write(f"#pragma once\n\n{c}\n")

# structs
for cls_name, offsets in cls_dict.items():
    path = os.path.join(cstypes_folder, f"{cls_name}.h")
    offset_list = []

    for var_name, comment in offsets:
        val_match = re.search(r'0x[0-9a-fA-F]+|\d+', comment)
        if not val_match:
            continue
        val = int(val_match.group(0), 0)
        t = get_type(comment)
        offset_list.append((val, var_name, t, comment))

    if not offset_list:
        continue

    offset_list.sort(key=lambda x: x[0])
    current_offset = 0

    with open(path, "w") as f:
        f.write("#pragma once\n\n")
        f.write(f"struct {cls_name} {{\n")
        for val, var_name, t, comment in offset_list:
            if val > current_offset:
                pad_size = val - current_offset
                f.write(f"    char PAD_{current_offset:03X}[0x{pad_size:X}];\n")
                current_offset += pad_size
            if t is None or t not in type_sizes:
                default_size = 8
                f.write(f"    {t if t else 'unknown'} {var_name}; // 0x{current_offset:X}  UNKNOWN TYPE  (struct may be misaligned)\n")
                current_offset += default_size
            else:
                f.write(f"    {t} {var_name}; // 0x{current_offset:X}\n")
                current_offset += type_sizes[t]
        

        f.write("};\n")


with open(file_out, "w") as f:
    f.write("// NOTE: these types are not meant to be included in the current format only used as refrence or copy pasting into an existing sdk!\n")
    f.write("// if you need an sdk goto https://github.com/moonlightrblx/sdkviwer/dumped\n")
    f.write("// some structs are missaligned and i cannot fix that due to not being bothered\n\n\n")
    for cls_name, offsets in cls_dict.items():
        path = f"cstypes/{cls_name}.h"
        f.write(f"#include \"{path}\"\n")
        
print("[+] generated cstypes")
