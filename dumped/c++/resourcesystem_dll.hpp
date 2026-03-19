// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-19 01:10:23.085248900 UTC

#pragma once

#include <cstddef>

namespace sdkviewer {
    namespace schemas {
        // module: resourcesystem.dll
        // Class count: 0
        // Enum count: 2
        namespace resourcesystem_dll {
            // Alignment: 1
            // member count: 9
            enum class FuseVariableType_t : uint8_t {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            };
            // Alignment: 1
            // member count: 2
            enum class FuseVariableAccess_t : uint8_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            };
        }
    }
}
