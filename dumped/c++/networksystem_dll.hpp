//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 15:57:49.568833300 UTC

#pragma once

#include <cstddef>

namespace dump {
    namespace offsets {
        // module: networksystem.dll
        // class count: 1
        // enum count: 1
        namespace networksystem_dll {
            // alignment: 4
            // member count: 4
            // underlying type: uint32_t
            enum class OutOfPVSUpdates_t : uint32_t {
                OOPVSUpdates_OptOut = 0x0,
                OOPVSUpdates_OptIn = 0x1,
                OOPVSUpdates_Default = 0x2,
                OOPVSUpdates_Count = 0x3
            };
            // parent: None
            // field count: 1
            namespace ChangeAccessorFieldPathIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
        }
    }
}
