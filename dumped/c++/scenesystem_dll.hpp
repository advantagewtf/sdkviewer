//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 16:59:37.846437100 UTC

#pragma once

#include <cstddef>

namespace dump {
    namespace offsets {
        // module: scenesystem.dll
        // class count: 9
        // enum count: 3
        namespace scenesystem_dll {
            // alignment: 1
            // member count: 6
            // underlying type: uint8_t
            enum class DecalMode_t : uint8_t {
                kDecalInvalid = 0xFF,
                kDecalBlood = 0x0,
                kDecalCloak = 0x1,
                kDecalCloakDamage = 0x2,
                kDecalMax = 0x3,
                kDecalDefault = 0x0
            };
            // alignment: 1
            // member count: 4
            // underlying type: uint8_t
            enum class DisableShadows_t : uint8_t {
                kDisableShadows_None = 0x0,
                kDisableShadows_All = 0x1,
                kDisableShadows_Baked = 0x2,
                kDisableShadows_Realtime = 0x3
            };
            // alignment: 4
            // member count: 6
            // underlying type: uint32_t
            enum class ESceneObjectVisualization : uint32_t {
                SCENEOBJECT_VIS_NONE = 0x0,
                SCENEOBJECT_VIS_OBJECT = 0x1,
                SCENEOBJECT_VIS_MATERIAL = 0x2,
                SCENEOBJECT_VIS_TEXTURE_SIZE = 0x3,
                SCENEOBJECT_VIS_LOD = 0x4,
                SCENEOBJECT_VIS_INSTANCING = 0x5
            };
            // parent: None
            // field count: 10
            //
            // metadata: [REMOVED]
            namespace CSSDSMsg_ViewTarget {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_TextureId = 0x8; // uint64
                constexpr std::ptrdiff_t m_nWidth = 0x10; // int32
                constexpr std::ptrdiff_t m_nHeight = 0x14; // int32
                constexpr std::ptrdiff_t m_nRequestedWidth = 0x18; // int32
                constexpr std::ptrdiff_t m_nRequestedHeight = 0x1C; // int32
                constexpr std::ptrdiff_t m_nNumMipLevels = 0x20; // int32
                constexpr std::ptrdiff_t m_nDepth = 0x24; // int32
                constexpr std::ptrdiff_t m_nMultisampleNumSamples = 0x28; // int32
                constexpr std::ptrdiff_t m_nFormat = 0x2C; // int32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace SceneViewId_t {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_nFrameCount = 0x8; // uint64
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CSSDSEndFrameViewInfo {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_ViewName = 0x8; // CUtlString
            }
            // class CSSDSMsg_PostLayer has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CSSDSMsg_LayerBase {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nLayerId = 0x18; // uint64
                constexpr std::ptrdiff_t m_LayerName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_displayText = 0x28; // CUtlString
            }
            // class CSSDSMsg_PreLayer has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CSSDSMsg_ViewTargetList {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CSSDSMsg_ViewRender {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CSSDSMsg_EndFrame {
                constexpr std::ptrdiff_t m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
            }
        }
    }
}
