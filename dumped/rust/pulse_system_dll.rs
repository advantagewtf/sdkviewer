//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 16:59:37.846437100 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // module: pulse_system.dll
        // class count: 97
        // enum count: 5
        pub mod pulse_system_dll {
            // alignment: 4
            // member count: 2
            #[repr(u32)]
            pub enum PulseBestOutflowRules_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            }
            // alignment: 4
            // member count: 3
            #[repr(u32)]
            pub enum PulseTestEnumShape_t {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
            }
            // alignment: 4
            // member count: 4
            #[repr(u32)]
            pub enum PulseCursorCancelPriority_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            }
            // alignment: 4
            // member count: 2
            #[repr(u32)]
            pub enum PulseMethodCallMode_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            }
            // alignment: 4
            // member count: 5
            #[repr(u32)]
            pub enum PulseTestEnumColor_t {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x98; // bool
                pub const m_nDesiredKillPriority: usize = 0x9C; // PulseCursorCancelPriority_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Test_NoInflow {
            }
            // parent: None
            // field count: 0
            pub mod CPulseGraphInstance_TestDomain_FakeEntityOwner {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // parent: None
            // field count: 0
            pub mod CPulse_ResumePoint {
            }
            // parent: None
            // field count: 2
            pub mod CTestDomainDerived_Cursor {
                pub const m_nCursorValueA: usize = 0xD0; // int32
                pub const m_nCursorValueB: usize = 0xD4; // int32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_PickBestOutflowSelector {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseTestFuncs_LibraryA {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 4
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            }
            // parent: None
            // field count: 14
            //
            // metadata: [REMOVED]
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x98; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xC8; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xE0; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xF8; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x110; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // parent: None
            // field count: 0
            pub mod CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_FireCursors {
                pub const m_Outflows: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_IntervalTimer__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseRequirement {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseState {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod OutflowWithRequirements_t {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_IsRequirementValid {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_Gradient {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCursorFuncs {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Test_MultiOutflow_WithParams {
                pub const m_Out1: usize = 0x48; // SignatureOutflow_Continue
                pub const m_Out2: usize = 0x90; // SignatureOutflow_Continue
            }
            // parent: None
            // field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            }
            // parent: None
            // field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
                pub const nTestStep: usize = 0x0; // int32
            }
            // parent: None
            // field count: 4
            pub mod CPulseTurtleGraphicsCursor {
                pub const m_Color: usize = 0xD0; // Color
                pub const m_vPos: usize = 0xD4; // Vector2D
                pub const m_flHeadingDeg: usize = 0xDC; // float32
                pub const m_bPenUp: usize = 0xE0; // bool
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_TestWaitWithCursorState__CursorState_t {
                pub const flWaitValue: usize = 0x0; // float32
                pub const bFailOnCancel: usize = 0x4; // bool
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Test_MultiInflow_NoDefault {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_IntervalTimer {
                pub const m_Completed: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x90; // SignatureOutflow_Continue
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseTestScriptLib {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseLerp {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_TestValue50 {
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding {
                pub const m_Out1: usize = 0x48; // SignatureOutflow_Continue
                pub const m_AsyncChild1: usize = 0x90; // SignatureOutflow_Continue
                pub const m_AsyncChild2: usize = 0xD8; // SignatureOutflow_Continue
                pub const m_YieldResume1: usize = 0x120; // SignatureOutflow_Resume
                pub const m_YieldResume2: usize = 0x168; // SignatureOutflow_Resume
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_Curve {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseFlow {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_TestDomainTracepoint {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseLerp__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            }
            // parent: None
            // field count: 1
            pub mod CPulseGraphInstance_TestDomain_Derived {
                pub const m_nInstanceValueX: usize = 0x160; // int32
            }
            // parent: None
            // field count: 1
            pub mod CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                pub const m_TagName: usize = 0x0; // PulseSymbol_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseArraylib {
            }
            // parent: None
            // field count: 9
            pub mod CPulseGraphInstance_TestDomain {
                pub const m_bIsRunningUnitTests: usize = 0x130; // bool
                pub const m_bExplicitTimeStepping: usize = 0x131; // bool
                pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0x132; // bool
                pub const m_bQuietTracepoints: usize = 0x133; // bool
                pub const m_bExpectingCursorTerminatedDueToMaxInstructions: usize = 0x134; // bool
                pub const m_nCursorsTerminatedDueToMaxInstructions: usize = 0x138; // int32
                pub const m_nNextValidateIndex: usize = 0x13C; // int32
                pub const m_Tracepoints: usize = 0x140; // CUtlVector<CUtlString>
                pub const m_bTestYesOrNoPath: usize = 0x158; // bool
            }
            // parent: None
            // field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Timeline {
                pub const m_TimelineEvents: usize = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_EntOutputHandler {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_TestExplicitYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x90; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_TestRandomYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x90; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_LimitCount__InstanceState_t {
                pub const m_nCurrentCount: usize = 0x0; // int32
            }
            // parent: None
            // field count: 0
            pub mod FakeEntity_tAPI {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Test_MultiInflow_WithDefault {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_DebugLog {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseYieldingInflow {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod PulseNodeDynamicOutflows_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // parent: None
            // field count: 1
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
                pub const m_bIsValid: usize = 0x0; // bool
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_ObservableVariableListener {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // parent: None
            // field count: 0
            pub mod CPulseGraphInstance_TurtleGraphics {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Val_TestDomainGetEntityName {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_TestWaitWithCursorState {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
                pub const m_WakeCancel: usize = 0x90; // CPulse_ResumePoint
                pub const m_WakeFail: usize = 0xD8; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_Method {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_ReturnType: usize = 0xA0; // CPulseValueFullType
                pub const m_Args: usize = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseValue {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BooleanSwitchState {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_SubGraph: usize = 0xC0; // CPulse_OutflowConnection
                pub const m_WhenTrue: usize = 0x108; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x150; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 0
            pub mod FakeEntityDerivedB_tAPI {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_Yield {
                pub const m_UnyieldResume: usize = 0x48; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseMathlib {
            }
            // parent: None
            // field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleRandom {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_PublicOutput {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Val_TestDomainFindEntityByName {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CPulse_BlackboardReference {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_RandomInt {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_TestDomainEntFire {
                pub const m_Input: usize = 0x48; // CUtlString
            }
            // parent: None
            // field count: 0
            pub mod FakeEntityDerivedA_tAPI {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_ExampleSelector {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_InlineNodeSkipSelector {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            }
            // parent: None
            // field count: 3
            pub mod CPulseCell_ExampleCriteria__Criteria_t {
                pub const m_flFloatValue1: usize = 0x0; // float32
                pub const m_flFloatValue2: usize = 0x4; // float32
                pub const m_bMyBool: usize = 0x8; // bool
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_ExampleCriteria {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_LimitCount {
                pub const m_nLimitCount: usize = 0x48; // int32
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_CallExternalMethod {
                pub const m_MethodName: usize = 0x48; // PulseSymbol_t
                pub const m_GameBlackboard: usize = 0x58; // PulseSymbol_t
                pub const m_ExpectedArgs: usize = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x78; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x80; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod PulseObservableBoolExpression_t {
                pub const m_EvaluateConnection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DependentObservableVars: usize = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                pub const m_DependentObservableBlackboardReferences: usize = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            }
            // parent: None
            // field count: 1
            pub mod CPulseCell_LimitCount__Criteria_t {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x98; // int32
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_RandomFloat {
            }
            // parent: None
            // field count: 0
            pub mod CPulseExecCursor {
            }
        }
    }
}
