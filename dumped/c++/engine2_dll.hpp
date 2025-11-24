//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 16:51:16.530014700 UTC

#pragma once

#include <cstddef>

namespace dump {
    namespace offsets {
        // module: engine2.dll
        // class count: 48
        // enum count: 2
        namespace engine2_dll {
            // alignment: 4
            // member count: 3
            // underlying type: uint32_t
            enum class EntityDormancyType_t : uint32_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            };
            // alignment: 4
            // member count: 4
            // underlying type: uint32_t
            enum class EntityIOTargetType_t : uint32_t {
                ENTITY_IO_TARGET_INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            };
            // class EventClientPostSimulate_t has zero fields
            // parent: None
            // parent: None
            // field count: 3
            namespace EventSimpleLoopFrameUpdate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
            }
            // parent: None
            // field count: 4
            namespace EventPostAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // int32
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // int32
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // int32
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // int32
            }
            // parent: 
            // field count: 1
            namespace CEntityIOOutput {
                constexpr std::ptrdiff_t m_Value = 0x18; // CVariantBase<CVariantDefaultAllocator>
            }
            // parent: None
            // field count: 1
            namespace EventClientSceneSystemThreadStateChange_t {
                constexpr std::ptrdiff_t m_bThreadsActive = 0x0; // bool
            }
            // parent: None
            // field count: 5
            namespace EventClientOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flRealTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x34; // bool
            }
            // class EventServerPostSimulate_t has zero fields
            // parent: None
            // parent: None
            // field count: 4
            namespace CEntityComponentHelper {
                constexpr std::ptrdiff_t m_flags = 0x8; // uint32
                constexpr std::ptrdiff_t m_pInfo = 0x10; // EntComponentInfo_t*
                constexpr std::ptrdiff_t m_nPriority = 0x18; // int32
                constexpr std::ptrdiff_t m_pNext = 0x20; // CEntityComponentHelper*
            }
            // parent: None
            // field count: 1
            namespace GameTime_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // float32
            }
            // class EventServerEndAsyncPostTickWork_t has zero fields
            // parent: None
            // class EventClientAdvanceTick_t has zero fields
            // parent: None
            // class EntInput_t has zero fields
            // parent: None
            // parent: None
            // field count: 1
            namespace CNetworkVarChainer {
                constexpr std::ptrdiff_t m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
            }
            // class EventClientSimulate_t has zero fields
            // parent: None
            // parent: None
            // field count: 5
            namespace EventClientPostOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float32
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x38; // bool
            }
            // parent: None
            // field count: 1
            namespace GameTick_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // parent: None
            // field count: 2
            namespace EventClientPollInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
            }
            // parent: None
            // field count: 1
            namespace EventPreDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // int32
            }
            // parent: None
            // field count: 3
            namespace EventClientProcessGameInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
            }
            // parent: None
            // field count: 1
            namespace EventFrameBoundary_t {
                constexpr std::ptrdiff_t m_flFrameTime = 0x0; // float32
            }
            // parent: None
            // field count: 1
            namespace EventAppShutdown_t {
                constexpr std::ptrdiff_t m_nDummy0 = 0x0; // int32
            }
            // class EventServerSimulate_t has zero fields
            // parent: None
            // class EventServerPostAdvanceTick_t has zero fields
            // parent: None
            // parent: None
            // field count: 1
            namespace EventProfileStorageAvailable_t {
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
            }
            // parent: None
            // field count: 1
            namespace EventPostDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // int32
            }
            // class EventClientPreSimulate_t has zero fields
            // parent: None
            // class EventClientPauseSimulate_t has zero fields
            // parent: None
            // parent: None
            // field count: 1
            namespace EventClientProcessNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0; // int32
            }
            // parent: None
            // field count: 4
            namespace EventAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // int32
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // int32
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // int32
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // int32
            }
            // class EventSplitScreenStateChanged_t has zero fields
            // parent: None
            // class EventClientPostAdvanceTick_t has zero fields
            // parent: None
            // class CVariantDefaultAllocator has zero fields
            // parent: None
            // class EventModInitialized_t has zero fields
            // parent: None
            // parent: None
            // field count: 6
            namespace EventClientPreOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38; // float64
                constexpr std::ptrdiff_t m_flRealTime = 0x40; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x44; // bool
            }
            // parent: None
            // field count: 4
            namespace EventClientFrameSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_bScheduleSendTickPacket = 0x30; // bool
            }
            // class EventServerAdvanceTick_t has zero fields
            // parent: None
            // parent: None
            // field count: 8
            namespace EventSetTime_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28; // int32
                constexpr std::ptrdiff_t m_flRealTime = 0x30; // float64
                constexpr std::ptrdiff_t m_flRenderTime = 0x38; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50; // float64
                constexpr std::ptrdiff_t m_flTickRemainder = 0x58; // float64
            }
            // class EntOutput_t has zero fields
            // parent: None
            // parent: None
            // field count: 3
            namespace EventSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_bFirstTick = 0x28; // bool
                constexpr std::ptrdiff_t m_bLastTick = 0x29; // bool
            }
            // class EventClientAdvanceNonRenderedFrame_t has zero fields
            // parent: None
            // class EventServerProcessNetworking_t has zero fields
            // parent: None
            // class CEmptyEntityInstance has zero fields
            // parent: None
            // parent: None
            // field count: 7
            namespace EntComponentInfo_t {
                constexpr std::ptrdiff_t m_pName = 0x0; // char*
                constexpr std::ptrdiff_t m_pCPPClassname = 0x8; // char*
                constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10; // char*
                constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
                constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_nFlags = 0x24; // uint32
                constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
            }
            // parent: None
            // field count: 4
            namespace EngineLoopState_t {
                constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18; // int32
                constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1C; // int32
                constexpr std::ptrdiff_t m_nRenderWidth = 0x20; // int32
                constexpr std::ptrdiff_t m_nRenderHeight = 0x24; // int32
            }
            // parent: None
            // field count: 1
            namespace EventClientPollNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0; // int32
            }
            // class EventServerBeginAsyncPostTickWork_t has zero fields
            // parent: None
            // parent: None
            // field count: 4
            namespace EventClientProcessInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flTickInterval = 0x2C; // float32
                constexpr std::ptrdiff_t m_flTickStartTime = 0x30; // float64
            }
            // class EventServerPollNetworking_t has zero fields
            // parent: None
        }
    }
}
