//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 00:52:15.620031200 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // module: networksystem.dll
        // class count: 1
        // enum count: 1
        namespace networksystem_dll {
            // alignment: 4
            // member count: 4
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
