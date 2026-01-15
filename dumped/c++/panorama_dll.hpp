//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2026-01-15 02:29:03.193819400 UTC

#pragma once

#include <cstddef>

namespace dump {
    namespace offsets {
        // module: panorama.dll
        // class count: 0
        // enum count: 2
        namespace panorama_dll {
            // alignment: 4
            // member count: 13
            // underlying type: uint32_t
            enum class ELayoutNodeType : uint32_t {
                ROOT = 0x0,
                STYLES = 0x1,
                SCRIPT_BODY = 0x2,
                SCRIPTS = 0x3,
                SNIPPETS = 0x4,
                INCLUDE = 0x5,
                SNIPPET = 0x6,
                PANEL = 0x7,
                PANEL_ATTRIBUTE = 0x8,
                PANEL_ATTRIBUTE_VALUE = 0x9,
                REFERENCE_CONTENT = 0xA,
                REFERENCE_COMPILED = 0xB,
                REFERENCE_PASSTHROUGH = 0xC
            };
            // alignment: 4
            // member count: 17
            // underlying type: uint32_t
            enum class EStyleNodeType : uint32_t {
                ROOT = 0x0,
                EXPRESSION = 0x1,
                PROPERTY = 0x2,
                DEFINE = 0x3,
                IMPORT = 0x4,
                KEYFRAMES = 0x5,
                KEYFRAME_SELECTOR = 0x6,
                STYLE_SELECTOR = 0x7,
                WHITESPACE = 0x8,
                EXPRESSION_TEXT = 0x9,
                EXPRESSION_URL = 0xA,
                EXPRESSION_CONCAT = 0xB,
                REFERENCE_CONTENT = 0xC,
                REFERENCE_COMPILED = 0xD,
                REFERENCE_PASSTHROUGH = 0xE,
                REFERENCE_PANEL = 0xF,
                COMPILER_CONDITIONAL = 0x10
            };
        }
    }
}
