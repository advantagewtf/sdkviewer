//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-30 04:08:05.545817600 UTC

#pragma once

#include <cstddef>

namespace dump {
    namespace offsets {
        // module: pulse_system.dll
        // class count: 97
        // enum count: 5
        namespace pulse_system_dll {
            // alignment: 4
            // member count: 2
            // underlying type: uint32_t
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // alignment: 4
            // member count: 3
            // underlying type: uint32_t
            enum class PulseTestEnumShape_t : uint32_t {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
            };
            // alignment: 4
            // member count: 4
            // underlying type: uint32_t
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // alignment: 4
            // member count: 2
            // underlying type: uint32_t
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // alignment: 4
            // member count: 5
            // underlying type: uint32_t
            enum class PulseTestEnumColor_t : uint32_t {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            };
            // class CPulseCell_Step_TestDomainDestroyFakeEntity has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
            }
            // class CPulseCell_Test_NoInflow has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class CPulseGraphInstance_TestDomain_FakeEntityOwner has zero fields
            // parent: None
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // class CPulse_ResumePoint has zero fields
            // parent: None
            // parent: None
            // field count: 2
            namespace CTestDomainDerived_Cursor {
                constexpr std::ptrdiff_t m_nCursorValueA = 0xD0; // int32
                constexpr std::ptrdiff_t m_nCursorValueB = 0xD4; // int32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
                constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
            }
            // class CPulseTestFuncs_LibraryA has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // parent: None
            // field count: 14
            //
            // metadata: [REMOVED]
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView has zero fields
            // parent: None
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CPulseCell_IntervalTimer__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flWaitInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xC; // float32
                constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10; // bool
            }
            // class CPulseCell_BaseRequirement has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class CPulseCell_BaseState has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace OutflowWithRequirements_t {
                constexpr std::ptrdiff_t m_Connection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
                constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
            }
            // class CPulseCell_IsRequirementValid has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // class CPulseCursorFuncs has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Test_MultiOutflow_WithParams {
                constexpr std::ptrdiff_t m_Out1 = 0x48; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_Out2 = 0x90; // SignatureOutflow_Continue
            }
            // class CBasePulseGraphInstance has zero fields
            // parent: None
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // class SignatureOutflow_Resume has zero fields
            // parent: None
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
                constexpr std::ptrdiff_t nTestStep = 0x0; // int32
            }
            // parent: None
            // field count: 4
            namespace CPulseTurtleGraphicsCursor {
                constexpr std::ptrdiff_t m_Color = 0xD0; // Color
                constexpr std::ptrdiff_t m_vPos = 0xD4; // Vector2D
                constexpr std::ptrdiff_t m_flHeadingDeg = 0xDC; // float32
                constexpr std::ptrdiff_t m_bPenUp = 0xE0; // bool
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_TestWaitWithCursorState__CursorState_t {
                constexpr std::ptrdiff_t flWaitValue = 0x0; // float32
                constexpr std::ptrdiff_t bFailOnCancel = 0x4; // bool
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // class CPulseCell_Test_MultiInflow_NoDefault has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
            }
            // class CPulseTestScriptLib has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // class CPulseCell_Value_TestValue50 has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding {
                constexpr std::ptrdiff_t m_Out1 = 0x48; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_AsyncChild1 = 0x90; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_AsyncChild2 = 0xD8; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_YieldResume1 = 0x120; // SignatureOutflow_Resume
                constexpr std::ptrdiff_t m_YieldResume2 = 0x168; // SignatureOutflow_Resume
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Value_Curve {
                constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // class CPulseCell_BaseFlow has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class CPulseCell_Step_TestDomainTracepoint has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            }
            // parent: None
            // field count: 1
            namespace CPulseGraphInstance_TestDomain_Derived {
                constexpr std::ptrdiff_t m_nInstanceValueX = 0x160; // int32
            }
            // parent: None
            // field count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
            }
            // class CPulseArraylib has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 9
            namespace CPulseGraphInstance_TestDomain {
                constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0x130; // bool
                constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0x131; // bool
                constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0x132; // bool
                constexpr std::ptrdiff_t m_bQuietTracepoints = 0x133; // bool
                constexpr std::ptrdiff_t m_bExpectingCursorTerminatedDueToMaxInstructions = 0x134; // bool
                constexpr std::ptrdiff_t m_nCursorsTerminatedDueToMaxInstructions = 0x138; // int32
                constexpr std::ptrdiff_t m_nNextValidateIndex = 0x13C; // int32
                constexpr std::ptrdiff_t m_Tracepoints = 0x140; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0x158; // bool
            }
            // class SignatureOutflow_Continue has zero fields
            // parent: None
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_SourceOutput = 0x90; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ExpectedParamType = 0xA0; // CPulseValueFullType
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_TestExplicitYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x90; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_TestRandomYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x90; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
            }
            // class FakeEntity_tAPI has zero fields
            // parent: None
            // class CPulseCell_Test_MultiInflow_WithDefault has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class CPulseCell_Step_DebugLog has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class CPulseCell_BaseYieldingInflow has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // parent: None
            // field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // class CPulseGraphInstance_TurtleGraphics has zero fields
            // parent: None
            // class CPulseCell_Val_TestDomainGetEntityName has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CPulseCell_TestWaitWithCursorState {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeCancel = 0x90; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeFail = 0xD8; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_bIsPublic = 0x98; // bool
                constexpr std::ptrdiff_t m_ReturnType = 0xA0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // class CPulseCell_BaseValue has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_SubGraph = 0xC0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
            }
            // class FakeEntityDerivedB_tAPI has zero fields
            // parent: None
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
            }
            // class CPulseMathlib has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
            }
            // class CPulseCell_Val_TestDomainFindEntityByName has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
            }
            // class CPulseCell_Value_RandomInt has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Step_TestDomainEntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // class FakeEntityDerivedA_tAPI has zero fields
            // parent: None
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_ExampleSelector {
                constexpr std::ptrdiff_t m_OutflowList = 0x48; // PulseSelectorOutflowList_t
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CPulseCell_InlineNodeSkipSelector {
                constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_bAnd = 0x4C; // bool
                constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
                constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 3
            namespace CPulseCell_ExampleCriteria__Criteria_t {
                constexpr std::ptrdiff_t m_flFloatValue1 = 0x0; // float32
                constexpr std::ptrdiff_t m_flFloatValue2 = 0x4; // float32
                constexpr std::ptrdiff_t m_bMyBool = 0x8; // bool
            }
            // class CPulseCell_ExampleCriteria has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_LimitCount {
                constexpr std::ptrdiff_t m_nLimitCount = 0x48; // int32
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48; // PulseSymbol_t
                constexpr std::ptrdiff_t m_GameBlackboard = 0x58; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x80; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace PulseObservableBoolExpression_t {
                constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            }
            // parent: None
            // field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
            }
            // class CPulseCell_Step_TestDomainCreateFakeEntity has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
            }
            // class CPulseCell_Value_RandomFloat has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class CPulseExecCursor has zero fields
            // parent: None
        }
    }
}
