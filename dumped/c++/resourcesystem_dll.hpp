//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-12-29 16:17:48.437558900 UTC

#pragma once

#include <cstddef>

namespace dump {
    namespace offsets {
        // module: resourcesystem.dll
        // class count: 59
        // enum count: 2
        namespace resourcesystem_dll {
            // alignment: 1
            // member count: 9
            // underlying type: uint8_t
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
            // underlying type: uint8_t
            enum class FuseVariableAccess_t : uint8_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            };
            // class InfoForResourceTypeCNmIKRig has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCResponseRulesList has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCDotaItemDefinitionResource has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCMorphSetData has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCVSoundStackScriptList has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            namespace PackedAABB_t {
                constexpr std::ptrdiff_t m_nPackedMin = 0x0; // uint32
                constexpr std::ptrdiff_t m_nPackedMax = 0x4; // uint32
            }
            // class InfoForResourceTypeCVPhysXSurfacePropertiesList has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeManifestTestResource_t has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
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
            // class InfoForResourceTypeCGcExportableExternalData has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeIAnimGraphModelBinding has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCJavaScriptResource has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
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
            // class InfoForResourceTypeCRenderMesh has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCVoxelVisibility has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCPhysAggregateData has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCNmClip has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeWorld_t has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeProceduralTestResource_t has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCChoreoSceneFileList has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            namespace AABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
            }
            // class InfoForResourceTypeCPostProcessingResource has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
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
            // class InfoForResourceTypeIParticleSnapshot has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 4
            namespace FourQuaternions {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
                constexpr std::ptrdiff_t z = 0x20; // fltx4
                constexpr std::ptrdiff_t w = 0x30; // fltx4
            }
            // class InfoForResourceTypeCPanoramaLayout has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCTypeScriptResource has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCChoreoSceneResource has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCNmSkeleton has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCTestResourceData has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCAnimationGroup has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCVSoundEventScriptList has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCVoiceContainerBase has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCPanoramaStyle has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCWorldNode has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCSurfaceGraph has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCCSGOEconItem has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCNmGraphDefinition has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCSmartProp has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
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
            // class InfoForResourceTypeCCompositeMaterialKit has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCVMixListResource has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCAnimData has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeIMaterial2 has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeIVectorGraphic has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCPanoramaDynamicImages has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeIPulseGraphDef has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
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
            // class InfoForResourceTypeCVDataResource has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCModel has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCDOTANovelsList has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCTextureBase has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 1
            namespace FuseVariableIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
            }
            // class InfoForResourceTypeIParticleSystemDefinition has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCSequenceGroupData has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace ManifestTestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            }
            // class InfoForResourceTypeCEntityLump has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class InfoForResourceTypeCDOTAPatchNotesList has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
        }
    }
}
