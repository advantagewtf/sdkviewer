//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 00:52:15.620031200 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // module: resourcesystem.dll
        // class count: 59
        // enum count: 2
        namespace resourcesystem_dll {
            // alignment: 1
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
            // alignment: 1
            // member count: 2
            enum class FuseVariableAccess_t : uint8_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            };
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCNmIKRig {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCResponseRulesList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCDotaItemDefinitionResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCMorphSetData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCVSoundStackScriptList {
            }
            // parent: None
            // field count: 2
            namespace PackedAABB_t {
                constexpr std::ptrdiff_t m_nPackedMin = 0x0; // uint32
                constexpr std::ptrdiff_t m_nPackedMax = 0x4; // uint32
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeManifestTestResource_t {
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace ConstantInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_flValue = 0xC; // float32
            }
            // parent: None
            // field count: 1
            namespace FuseFunctionIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCGcExportableExternalData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeIAnimGraphModelBinding {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCJavaScriptResource {
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace CFuseSymbolTable {
                constexpr std::ptrdiff_t m_constants = 0x0; // CUtlVector<ConstantInfo_t>
                constexpr std::ptrdiff_t m_variables = 0x18; // CUtlVector<VariableInfo_t>
                constexpr std::ptrdiff_t m_functions = 0x30; // CUtlVector<FunctionInfo_t>
                constexpr std::ptrdiff_t m_constantMap = 0x48; // CUtlHashtable<CUtlStringToken,int32>
                constexpr std::ptrdiff_t m_variableMap = 0x68; // CUtlHashtable<CUtlStringToken,int32>
                constexpr std::ptrdiff_t m_functionMap = 0x88; // CUtlHashtable<CUtlStringToken,int32>
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCRenderMesh {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCVoxelVisibility {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCPhysAggregateData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCNmClip {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeWorld_t {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeProceduralTestResource_t {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCChoreoSceneFileList {
            }
            // parent: None
            // field count: 2
            namespace AABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCPostProcessingResource {
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace VariableInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_nIndex = 0xC; // FuseVariableIndex_t
                constexpr std::ptrdiff_t m_nNumComponents = 0xE; // uint8
                constexpr std::ptrdiff_t m_eVarType = 0xF; // FuseVariableType_t
                constexpr std::ptrdiff_t m_eAccess = 0x10; // FuseVariableAccess_t
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeIParticleSnapshot {
            }
            // parent: None
            // field count: 4
            namespace FourQuaternions {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
                constexpr std::ptrdiff_t z = 0x20; // fltx4
                constexpr std::ptrdiff_t w = 0x30; // fltx4
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCPanoramaLayout {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCTypeScriptResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCChoreoSceneResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCNmSkeleton {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCTestResourceData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCAnimationGroup {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCVSoundEventScriptList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCVoiceContainerBase {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCPanoramaStyle {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCWorldNode {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCSurfaceGraph {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCCSGOEconItem {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCNmGraphDefinition {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCSmartProp {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CFuseProgram {
                constexpr std::ptrdiff_t m_programBuffer = 0x0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_variablesRead = 0x18; // CUtlVector<FuseVariableIndex_t>
                constexpr std::ptrdiff_t m_variablesWritten = 0x30; // CUtlVector<FuseVariableIndex_t>
                constexpr std::ptrdiff_t m_nMaxTempVarsUsed = 0x48; // int32
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCCompositeMaterialKit {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCVMixListResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCAnimData {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeIMaterial2 {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeIVectorGraphic {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCPanoramaDynamicImages {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeIPulseGraphDef {
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace FunctionInfo_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_nParamCount = 0x14; // int32
                constexpr std::ptrdiff_t m_nIndex = 0x18; // FuseFunctionIndex_t
                constexpr std::ptrdiff_t m_bIsPure = 0x1A; // bool
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCVDataResource {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCModel {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCDOTANovelsList {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCTextureBase {
            }
            // parent: None
            // field count: 1
            namespace FuseVariableIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeIParticleSystemDefinition {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCSequenceGroupData {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace ManifestTestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCEntityLump {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            namespace InfoForResourceTypeCDOTAPatchNotesList {
            }
        }
    }
}
