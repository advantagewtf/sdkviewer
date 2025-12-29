//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-12-29 16:17:48.437558900 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // module: resourcesystem.dll
        // class count: 59
        // enum count: 2
        pub mod resourcesystem_dll {
            // alignment: 1
            // member count: 9
            #[repr(u8)]
            pub enum FuseVariableType_t {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            }
            // alignment: 1
            // member count: 2
            #[repr(u8)]
            pub enum FuseVariableAccess_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCNmIKRig {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCResponseRulesList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCDotaItemDefinitionResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCMorphSetData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCVSoundStackScriptList {
            }
            // parent: None
            // field count: 2
            pub mod PackedAABB_t {
                pub const m_nPackedMin: usize = 0x0; // uint32
                pub const m_nPackedMax: usize = 0x4; // uint32
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeManifestTestResource_t {
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod ConstantInfo_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_flValue: usize = 0xC; // float32
            }
            // parent: None
            // field count: 1
            pub mod FuseFunctionIndex_t {
                pub const m_Value: usize = 0x0; // uint16
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCGcExportableExternalData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeIAnimGraphModelBinding {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCJavaScriptResource {
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod CFuseSymbolTable {
                pub const m_constants: usize = 0x0; // CUtlVector<ConstantInfo_t>
                pub const m_variables: usize = 0x18; // CUtlVector<VariableInfo_t>
                pub const m_functions: usize = 0x30; // CUtlVector<FunctionInfo_t>
                pub const m_constantMap: usize = 0x48; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_variableMap: usize = 0x68; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_functionMap: usize = 0x88; // CUtlHashtable<CUtlStringToken,int32>
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCRenderMesh {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCVoxelVisibility {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCPhysAggregateData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCNmClip {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeWorld_t {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeProceduralTestResource_t {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCChoreoSceneFileList {
            }
            // parent: None
            // field count: 2
            pub mod AABB_t {
                pub const m_vMinBounds: usize = 0x0; // Vector
                pub const m_vMaxBounds: usize = 0xC; // Vector
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCPostProcessingResource {
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod VariableInfo_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_nIndex: usize = 0xC; // FuseVariableIndex_t
                pub const m_nNumComponents: usize = 0xE; // uint8
                pub const m_eVarType: usize = 0xF; // FuseVariableType_t
                pub const m_eAccess: usize = 0x10; // FuseVariableAccess_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeIParticleSnapshot {
            }
            // parent: None
            // field count: 4
            pub mod FourQuaternions {
                pub const x: usize = 0x0; // fltx4
                pub const y: usize = 0x10; // fltx4
                pub const z: usize = 0x20; // fltx4
                pub const w: usize = 0x30; // fltx4
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCPanoramaLayout {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCTypeScriptResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCChoreoSceneResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCNmSkeleton {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCTestResourceData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCAnimationGroup {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCVSoundEventScriptList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCVoiceContainerBase {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCPanoramaStyle {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCWorldNode {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCSurfaceGraph {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCCSGOEconItem {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCNmGraphDefinition {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCSmartProp {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CFuseProgram {
                pub const m_programBuffer: usize = 0x0; // CUtlVector<uint8>
                pub const m_variablesRead: usize = 0x18; // CUtlVector<FuseVariableIndex_t>
                pub const m_variablesWritten: usize = 0x30; // CUtlVector<FuseVariableIndex_t>
                pub const m_nMaxTempVarsUsed: usize = 0x48; // int32
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCCompositeMaterialKit {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCVMixListResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCAnimData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeIMaterial2 {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeIVectorGraphic {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCPanoramaDynamicImages {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeIPulseGraphDef {
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod FunctionInfo_t {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_nameToken: usize = 0x10; // CUtlStringToken
                pub const m_nParamCount: usize = 0x14; // int32
                pub const m_nIndex: usize = 0x18; // FuseFunctionIndex_t
                pub const m_bIsPure: usize = 0x1A; // bool
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCVDataResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCModel {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCDOTANovelsList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCTextureBase {
            }
            // parent: None
            // field count: 1
            pub mod FuseVariableIndex_t {
                pub const m_Value: usize = 0x0; // uint16
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeIParticleSystemDefinition {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCSequenceGroupData {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod ManifestTestResource_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_child: usize = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCEntityLump {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod InfoForResourceTypeCDOTAPatchNotesList {
            }
        }
    }
}
