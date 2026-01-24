import json
import os
import shutil

INPUT_JSON = "output/client_dll.json"
OUTPUT_DIR = "schema"
if os.path.exists(OUTPUT_DIR):
    shutil.rmtree(OUTPUT_DIR)

CLASSES_DIR = os.path.join(OUTPUT_DIR, "classes")
TYPES_DIR = os.path.join(OUTPUT_DIR, "types")
os.makedirs(CLASSES_DIR, exist_ok=True)
os.makedirs(TYPES_DIR, exist_ok=True)

type_map = {
    "int": "int32_t",
    "int32": "int32_t",
    "uint32": "uint32_t",
    "uint16": "uint16_t",
    "uint8": "uint8_t",
    "uint64": "uint64_t",
    "float": "float",
    "bool": "bool",
    "Vector": "Vector3",
    "Quaternion": "QAngle",
    "uintptr_t": "uintptr_t",
    "char*": "char*",
    "string_t": "string_t",
}

builtin_types_cpp = {
    "int",
    "int32_t",
    "uint32_t",
    "uint16_t",
    "uint8_t",
    "uint64_t",
    "float",
    "double",
    "bool",
    "uintptr_t",
    "char",
    "char*",
    "string_t",
}

core_types = ["CHandle", "Vector3", "QAngle", "string_t"]

for t in core_types:
    path = os.path.join(TYPES_DIR, f"{t}.h")
    if not os.path.exists(path):
        with open(path, "w") as f:
            if t == "CHandle":
                f.write(
                    "#pragma once\n#include <cstdint>\ntemplate <typename T>\nclass CHandle { uintptr_t handle; };"
                )
            elif t == "Vector3":
                f.write(
                    "#pragma once\n#include <cstdint>\nstruct Vector3 { float x, y, z; };"
                )
            elif t == "QAngle":
                f.write(
                    "#pragma once\n#include <cstdint>\nstruct QAngle { float x, y, z; };"
                )
            elif t == "string_t":
                f.write(
                    "#pragma once\n#include <cstdint>\nusing string_t = uintptr_t; // string_t placeholder"
                )


with open(os.path.join(TYPES_DIR, "SchemaRead.h"), "w") as f:
    f.write(
        "#pragma once\n#include <cstdint>\n"
        "template <typename t>\nt t read(uintptr_t address) { return *(t*)address; }\n"
        "#define SCHEMA_TYPE(type, add) read<type>(baseAddr + add)\n"
    )


class SchemaParser:
    def __init__(self, json_path):
        self.json_path = json_path
        self.data = {}
        self.defined_classes = set()
        self.includes = set()
        self.generated_files = []
        self.forward_decls = set()

    def load(self):
        with open(self.json_path, "r", encoding="utf-8") as f:
            self.data = json.load(f)
        self.data = self.data.get("client.dll", {}).get("classes", {})

    def sanitize_name(self, name):
        return (
            name.replace("::", "__")
            .replace("<", "_")
            .replace(">", "_")
            .replace(",", "_")
        )

    def ensure_type(self, type_name):
        includes = set()
        forward_decls = set()

        is_pointer = type_name.endswith("*")
        base_type = type_name.rstrip("*").strip()

        # CHandle<T>
        if base_type.startswith("CHandle<") and base_type.endswith(">"):
            inner = base_type[base_type.find("<") + 1 : base_type.rfind(">")]
            inner_sanitized = self.sanitize_name(inner)
            includes.add("../types/CHandle.h")
            if inner_sanitized not in builtin_types_cpp:
                forward_decls.add(inner_sanitized)
            return includes, forward_decls, f"CHandle<{inner_sanitized}>"

        if base_type in type_map:
            t = type_map[base_type]
            if t in ["Vector3", "QAngle", "string_t"]:
                includes.add(f"../types/{t}.h")
            cpp_type = t + ("*" if is_pointer else "")
            return includes, forward_decls, cpp_type

        sanitized = self.sanitize_name(base_type)
        if sanitized not in builtin_types_cpp and not is_pointer:
            forward_decls.add(sanitized)

        cpp_type = sanitized + ("*" if is_pointer else "")
        return includes, forward_decls, cpp_type

    def generate_class(self, class_name: str, cls_data):
        if class_name.endswith("_t"):
            return
        sanitized_name = self.sanitize_name(class_name)
        self.defined_classes.add(sanitized_name)
        metadata_map = {
            m["name"]: m.get("type_name", "uintptr_t")
            for m in cls_data.get("metadata", [])
        }
        parent = cls_data.get("parent")
        parent_name = self.sanitize_name(parent) if parent else ""

        body_lines = []
        body_lines.append("    uintptr_t baseAddr;")
        body_lines.append(f"    {sanitized_name}(uintptr_t addr) : baseAddr(addr) {{}}")
        body_lines.append(
            f"    {sanitized_name}() : baseAddr(0) {{}}"
        )

        for field_name, offset in cls_data.get("fields", {}).items():
            type_name = metadata_map.get(field_name, "uintptr_t")
            incs, fwd, cpp_type = self.ensure_type(type_name)
            self.includes.update(incs)
            self.forward_decls.update(fwd)
            body_lines.append(
                f"    {cpp_type} {field_name}() {{ return SCHEMA_TYPE({cpp_type}, 0x{offset:X}); }}"
            )

        class_def = [
            "#pragma once",
            "#include <cstdint>",
            '#include "../types/SchemaRead.h"',
        ]

        for inc in sorted(self.includes):
            if inc.endswith(".h"):
                class_def.append(f'#include "{inc}"')

    
        for fwd_name in sorted(self.forward_decls):
            if fwd_name != sanitized_name:
                class_def.append(f"class {fwd_name};")

        if parent_name and parent_name in self.defined_classes:
            class_def.append(f"class {sanitized_name} : public {parent_name} {{")
        else:
            class_def.append(f"class {sanitized_name} {{")

        class_def.append("public:")
        class_def.extend(body_lines)
        class_def.append("};\n")

        filename = os.path.join(CLASSES_DIR, f"{sanitized_name}.h")
        with open(filename, "w", encoding="utf-8") as f:
            f.write("\n".join(class_def))
        self.generated_files.append(sanitized_name)
        self.includes.clear()
        self.forward_decls.clear()

    def generate_all(self):
        for class_name, cls_data in self.data.items():
            self.generate_class(class_name, cls_data)
        self.format_files()
        self.generate_sdk_header()

    def format_files(self):
        for root, _, files in os.walk(OUTPUT_DIR):
            for fname in files:
                path = os.path.join(root, fname)
                with open(path, "r", encoding="utf-8") as f:
                    lines = f.readlines()
                formatted = [
                    line.rstrip().replace("\t", "    ") + "\n" for line in lines
                ]
                with open(path, "w", encoding="utf-8") as f:
                    f.writelines(formatted)

    def generate_sdk_header(self):
        sdk_file = os.path.join(OUTPUT_DIR, "SDK_schema.h")
        lines = ["#pragma once", 
                 "#include <cstdint>", 
        ]
        lines.append("""
namespace sdk{
    inline uintptr_t client = nullptr;
    inline uintptr_t engine2 = nullptr;
}""")
        lines.append("\n// core types")
        for t in sorted(core_types):
            lines.append(f'#include "types/{t}.h"')

        lines.append("\n// forward declarations")
        for cls_name in sorted(self.generated_files):
            lines.append(f"class {cls_name};")

        lines.append("\n// generated classes")
        for cls_name in sorted(self.generated_files):
            lines.append(f'#include "classes/{cls_name}.h"')

        with open(sdk_file, "w", encoding="utf-8") as f:
            f.write("\n".join(lines) + "\n")


if __name__ == "__main__":
    parser = SchemaParser(INPUT_JSON)
    parser.load()
    parser.generate_all()
    print("[+] generated schema")
