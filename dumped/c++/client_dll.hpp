//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 16:58:42.004897500 UTC

#pragma once

#include <cstddef>

namespace dump {
    namespace offsets {
        // module: client.dll
        // class count: 490
        // enum count: 8
        namespace client_dll {
            // alignment: 4
            // member count: 15
            // underlying type: uint32_t
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
                LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
                LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
                LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
                LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
                LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
                LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
                LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
                LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
                LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
                LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
                LOOSE_VARIABLE_TYPE_STRING = 0xA,
                LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
                LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
                LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
            };
            // alignment: 4
            // member count: 8
            // underlying type: uint32_t
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6,
                INPUT_TEXTURE_TYPE_POSITION = 0x7
            };
            // alignment: 4
            // member count: 9
            // underlying type: uint32_t
            enum class InventoryNodeType_t : uint32_t {
                NODE_TYPE_INVALID = 0x0,
                VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
                VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
                VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
                VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
                CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
                CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
                CONCRETE_NODE_SCHEMA_STICKER = 0x7,
                CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
            };
            // alignment: 4
            // member count: 6
            // underlying type: uint32_t
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // alignment: 4
            // member count: 10
            // underlying type: uint32_t
            enum class CompMatPropertyMutatorType_t : uint32_t {
                COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
                COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
                COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
                COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
                COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
                COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
                COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
                COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
                COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
                COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
            };
            // alignment: 4
            // member count: 2
            // underlying type: uint32_t
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // alignment: 4
            // member count: 6
            // underlying type: uint32_t
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // alignment: 4
            // member count: 3
            // underlying type: uint32_t
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // class C_CSGO_TeamIntroCharacterPosition has zero fields
            // parent: C_CSGO_TeamPreviewCharacterPosition
            // class C_FireCrackerBlast has zero fields
            // parent: C_Inferno
            // class CCSGO_WingmanIntroCounterTerroristPosition has zero fields
            // parent: CCSGO_WingmanIntroCharacterPosition
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
            }
            // parent: None
            // field count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // parent: CPlayerPawnComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_PlayerPing>
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // class CBaseTriggerAPI has zero fields
            // parent: None
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace PredictedDamageTag_t {
                constexpr std::ptrdiff_t nTagTick = 0x30; // GameTick_t
                constexpr std::ptrdiff_t flFlinchModSmall = 0x34; // float32
                constexpr std::ptrdiff_t flFlinchModLarge = 0x38; // float32
                constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3C; // float32
            }
            // class CFuncRetakeBarrier has zero fields
            // parent: C_DynamicProp
            // parent: 
            // field count: 15
            //
            // metadata: [REMOVED]
            namespace C_EnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
                constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x2A; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2C; // float32
                constexpr std::ptrdiff_t m_location = 0x30; // Vector
                constexpr std::ptrdiff_t m_hEntOwner = 0x3C; // CHandle<C_BaseEntity>
            }
            // parent: C_BaseEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x5F8; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x688; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x68C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x690; // C_SkyCamera*
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // class C_FuncRotating has zero fields
            // parent: C_BaseModelEntity
            //
            // metadata: [REMOVED]
            // parent: C_BaseEntity
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x610; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x614; // bool
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x600; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x604; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x608; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x610; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x614; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x618; // float32
                constexpr std::ptrdiff_t m_bActive = 0x61C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x61D; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x620; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x624; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x628; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x630; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x640; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x641; // bool
            }
            // class C_CSGO_TeamSelectTerroristPosition has zero fields
            // parent: C_CSGO_TeamSelectCharacterPosition
            // parent: None
            // field count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
            }
            // parent: C_ParticleSystem
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x1460; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1464; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1468; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x146C; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1470; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // class CCS_PortraitWorldCallbackHandler has zero fields
            // parent: C_BaseEntity
            // parent: CPlayerControllerComponent
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_vecNetworkableLoadout = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                constexpr std::ptrdiff_t m_unMusicID = 0x58; // uint16
                constexpr std::ptrdiff_t m_rank = 0x5C; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x74; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x78; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x7C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x80; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x84; // int32
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // parent: None
            // field count: 1
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
            }
            // class CPulse_ResumePoint has zero fields
            // parent: None
            // parent: C_BaseTrigger
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0xFF0; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0xFFC; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x1008; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x1009; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x1010; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x1020; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x1024; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x1028; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x1030; // CountdownTimer
            }
            // class C_HostageCarriableProp has zero fields
            // parent: CBaseAnimGraph
            // parent: None
            // field count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0x1158; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0x1188; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0x118C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0x1190; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0x1194; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0x1198; // Vector
            }
            // parent: C_FuncBrush
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xEB0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xEB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xEC0; // bool
            }
            // parent: C_BaseEntity
            // field count: 17
            //
            // metadata: [REMOVED]
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x608; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x60C; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x610; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x710; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x72C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x82C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x92C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xA2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xB2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xC2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xD2C; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xE2C; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xF2C; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xF30; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xF34; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xF38; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0xF3C; // bool
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x5F8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x5FC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x608; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x615; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x618; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x61C; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x620; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x624; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x628; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x62C; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x630; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x634; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x638; // Color
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x63C; // bool
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x63D; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x63E; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x63F; // bool
            }
            // class C_CSGO_EndOfMatchCharacterPosition has zero fields
            // parent: C_CSGO_TeamPreviewCharacterPosition
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CPulseCell_PlaySequence {
                constexpr std::ptrdiff_t m_SequenceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // class C_BaseEntityAPI has zero fields
            // parent: None
            // parent: C_BaseModelEntity
            // field count: 76
            //
            // metadata: [REMOVED]
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0xEB0; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0xEB4; // int32
                constexpr std::ptrdiff_t m_Color = 0xEB8; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0xEBC; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xEC4; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0xEC8; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xECC; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0xED0; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0xED4; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xED8; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xEE0; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0xEE8; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xEF0; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xEF8; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0xF10; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0xF28; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0xF40; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0xFE0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0xFE8; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0xFEC; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0xFF0; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0xFF4; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0xFF8; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0xFFC; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x1008; // float32
                constexpr std::ptrdiff_t m_vShear = 0x100C; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x1018; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x101C; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0x1028; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x102C; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x1030; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x1034; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x1035; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x1038; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x103C; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1040; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x1044; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x1050; // float32
                constexpr std::ptrdiff_t m_nFog = 0x1054; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x1058; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x105C; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x1060; // float32
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x1064; // bool
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x1068; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x106C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x1070; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x1074; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x1078; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x107C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x1088; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x1094; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x10A0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x10AC; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x10B8; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x10BC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x10C8; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x10D4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x10E0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x10EC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x10F8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x1104; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x1110; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x111C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x1128; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x1134; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x1140; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x114C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x1158; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x1164; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x1170; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x117C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x1188; // Vector
                constexpr std::ptrdiff_t m_bInitialBoneSetup = 0x11D8; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0x11E0; // C_NetworkUtlVectorBase<uint16>
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CPulseCell_LerpCameraSettings {
                constexpr std::ptrdiff_t m_flSeconds = 0x90; // float32
                constexpr std::ptrdiff_t m_Start = 0x94; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_End = 0xA4; // PointCameraSettings_t
            }
            // parent: C_PointClientUIWorldPanel
            // field count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0x1100; // bool
                constexpr std::ptrdiff_t m_bHide = 0x1101; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0x1104; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0x1108; // C_PointClientUIWorldPanel*
            }
            // class CCSObserver_UseServices has zero fields
            // parent: CPlayer_UseServices
            // parent: C_BaseTrigger
            // field count: 12
            //
            // metadata: [REMOVED]
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x1000; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x1008; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x100C; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x1010; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x1014; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x1018; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x101C; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x1020; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x1024; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x1028; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x102C; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x102D; // bool
            }
            // class CCSPlayer_UseServices has zero fields
            // parent: CPlayer_UseServices
            // class C_CSGO_CounterTerroristWingmanIntroCamera has zero fields
            // parent: C_CSGO_TeamPreviewCamera
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
                constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
            }
            // parent: C_PointEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x638; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x63C; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x640; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x648; // CUtlSymbolLarge
            }
            // parent: C_BaseEntity
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x608; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x60C; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x610; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x624; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x628; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x629; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x62A; // bool
            }
            // parent: C_BasePlayerPawn
            // field count: 26
            //
            // metadata: [REMOVED]
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x15D8; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x15E0; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x15E4; // CSPlayerState
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x15E8; // bool
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x15EC; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x15F0; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x15F4; // float32
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x15F8; // GameTime_t
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x15FC; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1600; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1604; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1608; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1609; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x160A; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x160C; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1610; // float32
                constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x1614; // GameTime_t
                constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x1618; // int32
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x161C; // float32
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1624; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1628; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x162C; // bool
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1630; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x1634; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1638; // Vector
                constexpr std::ptrdiff_t m_hOriginalController = 0x1660; // CHandle<CCSPlayerController>
            }
            // parent: C_CSWeaponBase
            // field count: 10
            //
            // metadata: [REMOVED]
            namespace C_C4 {
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1F80; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1F84; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x1F88; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x1F8C; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1F90; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1F91; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1F98; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1FB0; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1FB4; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1FBB; // bool
            }
            // parent: CBaseProp
            // field count: 28
            //
            // metadata: [REMOVED]
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x1190; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0x11D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x11F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x1220; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x1248; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x1270; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x1274; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0x1278; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0x127C; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0x1280; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0x128C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x1290; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x1294; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0x1298; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x12A0; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x12A8; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x12B0; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0x12B4; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0x12B8; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0x12C0; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x12C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x12D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x12D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0x12E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x12E8; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x12EC; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x12F0; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0x12F4; // CHandle<C_BaseEntity>
            }
            // class CCSGO_WingmanIntroTerroristPosition has zero fields
            // parent: CCSGO_WingmanIntroCharacterPosition
            // parent: None
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0x138; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0x13C; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0x13D; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x140; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x144; // int32
                constexpr std::ptrdiff_t m_hBombPlanter = 0x148; // CHandle<C_CSPlayerPawn>
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // parent: C_SoundAreaEntityBase
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x620; // float32
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Step_EntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // class C_WeaponAWP has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseToggle
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xEB0; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xEB4; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xEB8; // CUtlSymbolLarge
            }
            // parent: CPlayer_ObserverServices
            // field count: 1
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_obsInterpState = 0x5C; // ObserverInterpState_t
            }
            // parent: CEntityComponent
            // field count: 1
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // class C_CSMinimapBoundary has zero fields
            // parent: C_BaseEntity
            // class CPathQueryComponent has zero fields
            // parent: CEntityComponent
            // parent: C_BaseTrigger
            // field count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0xFF0; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0x1000; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0x1008; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0x1030; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0x1038; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0x1039; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x103A; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0x103C; // int32
            }
            // parent: CLogicalEntity
            // field count: 5
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x5FA; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x5FB; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x5FC; // bool
            }
            // parent: 
            // field count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // class CPlayer_ItemServices has zero fields
            // parent: CPlayerPawnComponent
            // parent: None
            // field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // class C_WeaponUMP45 has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_WeaponG3SG1 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseModelEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xEB0; // float32
                constexpr std::ptrdiff_t m_Radius = 0xEB4; // float32
            }
            // parent: CBaseAnimGraph
            // field count: 23
            //
            // metadata: [REMOVED]
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0x1158; // Vector
                constexpr std::ptrdiff_t m_vel = 0x1164; // Vector
                constexpr std::ptrdiff_t m_angles = 0x1170; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0x117C; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0x1180; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0x1184; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0x1188; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0x1190; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0x11A8; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0x11AC; // float32
                constexpr std::ptrdiff_t m_actualPos = 0x11B0; // Vector
                constexpr std::ptrdiff_t m_actualAngles = 0x11BC; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0x11C8; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0x11D4; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0x11D8; // bool
                constexpr std::ptrdiff_t m_x = 0x11DC; // float32
                constexpr std::ptrdiff_t m_y = 0x11E0; // float32
                constexpr std::ptrdiff_t m_z = 0x11E4; // float32
                constexpr std::ptrdiff_t m_angle = 0x11E8; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0x11EC; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0x123C; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0x1240; // int32
                constexpr std::ptrdiff_t m_averageError = 0x1244; // float32
            }
            // class C_WeaponFamas has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseEntity
            // field count: 36
            //
            // metadata: [REMOVED]
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x5F8; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x5FC; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x604; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x610; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x614; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x618; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x61C; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x620; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x624; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x628; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x62C; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x638; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x644; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x648; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x64C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x650; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x654; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x658; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x65C; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x660; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x664; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x668; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x66C; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x66D; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x66E; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x670; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x678; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x67C; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x680; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x684; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x690; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x694; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x6A0; // bool
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
            // parent: C_BaseEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x5FC; // float32
            }
            // parent: C_BaseEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace C_EnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x5F8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x5FC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x608; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_nShape = 0x618; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x61C; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x620; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x624; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x628; // float32
            }
            // class CBasePlayerControllerAPI has zero fields
            // parent: None
            // class CHostageRescueZoneShim has zero fields
            // parent: C_BaseTrigger
            // class CEnvSoundscapeAlias_snd_soundscape has zero fields
            // parent: CEnvSoundscape
            // parent: CPlayerPawnComponent
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
            }
            // class C_GameRulesProxy has zero fields
            // parent: C_BaseEntity
            // parent: CEntityComponent
            // field count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xA8; // bool
            }
            // parent: C_BaseEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x5F8; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x628; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x62C; // char[129]
            }
            // class C_PathParticleRopeAlias_path_particle_rope_clientside has zero fields
            // parent: C_PathParticleRope
            // parent: C_PointEntity
            // field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x5F8; // bool
            }
            // class C_WeaponNOVA has zero fields
            // parent: C_CSWeaponBaseShotgun
            // class C_DEagle has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_CS2HudModelAddon has zero fields
            // parent: C_LateUpdatedAnimating
            // class C_TriggerMultiple has zero fields
            // parent: C_BaseTrigger
            // parent: C_CSGO_MapPreviewCameraPath
            // field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x680; // int32
            }
            // parent: C_BaseTrigger
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xFF0; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xFF4; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0xFF8; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xFFC; // GameTime_t
                constexpr std::ptrdiff_t m_bEnabled = 0x1000; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x1004; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x1008; // float32
                constexpr std::ptrdiff_t m_Weight = 0x100C; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x1010; // char[512]
            }
            // parent: CPlayerPawnComponent
            // field count: 15
            //
            // metadata: [REMOVED]
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x220; // QAngle
            }
            // parent: CInfoDynamicShadowHint
            // field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x610; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x61C; // Vector
            }
            // parent: CSkeletonAnimationController
            // field count: 22
            //
            // metadata: [REMOVED]
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x14B0; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x14B4; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B8; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14BC; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14C0; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C4; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x14D0; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14D2; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14D3; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D4; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D8; // GameTime_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x1860; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_bIsUsingAG2 = 0x1868; // bool
                constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x1870; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x1888; // int32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x188C; // int32
                constexpr std::ptrdiff_t m_nGraphCreationFlagsAG2 = 0x1890; // uint8
                constexpr std::ptrdiff_t m_nServerGraphDefReloadCountAG2 = 0x1A7C; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x1A84; // int32
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x5F8; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x604; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x610; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x614; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x618; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x61C; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x81C; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x81D; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x81E; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x81F; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x820; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x824; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x828; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x82C; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x830; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x834; // float32[1]
            }
            // parent: 
            // field count: 10
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
                constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2C; // bool
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x78; // CUtlVector<float32>
            }
            // class C_PhysBox has zero fields
            // parent: C_Breakable
            // parent: CCSPlayerBase_CameraServices
            // field count: 2
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x2A0; // float32
                constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x2A8; // Vector
            }
            // parent: CBaseFilter
            // field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x650; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x658; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x6A8; // CHandle<C_BaseEntity>[10]
            }
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
            // parent: C_BaseEntity
            // field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x620; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x630; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x634; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x638; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x640; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x680; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x684; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x688; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x690; // uint32
            }
            // class C_SoundEventEntityAlias_snd_event_point has zero fields
            // parent: C_SoundEventEntity
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x5F8; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x660; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x664; // int32
            }
            // class C_SoundOpvarSetOBBWindEntity has zero fields
            // parent: C_SoundOpvarSetPointBase
            // class C_MolotovGrenade has zero fields
            // parent: C_BaseCSGrenade
            // class C_NetTestBaseCombatCharacter has zero fields
            // parent: C_BaseCombatCharacter
            // parent: CBodyComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // class C_WeaponM4A1Silencer has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: 
            // field count: 29
            //
            // metadata: [REMOVED]
            namespace C_EconItemView {
                constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60; // bool
                constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61; // bool
                constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80; // int32
                constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84; // int32
                constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
                constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x1C8; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x1D8; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bDisallowSOC = 0x1E9; // bool
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x1EA; // bool
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EB; // bool
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC; // int32
                constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0; // int32
                constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4; // int32
                constexpr std::ptrdiff_t m_iOriginOverride = 0x1F8; // int32
                constexpr std::ptrdiff_t m_ubStyleOverride = 0x1FC; // uint8
                constexpr std::ptrdiff_t m_unClientFlags = 0x1FD; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x210; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x288; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x300; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x3A1; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x470; // bool
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
            // parent: C_SoundEventEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x5FC; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x600; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x60C; // bool
            }
            // parent: CPlayer_ItemServices
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // parent: 
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // parent: C_BaseEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x600; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x604; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x610; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x628; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x62C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x630; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x634; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x638; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x640; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x648; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x660; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x678; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x690; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x6A8; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x6C0; // C_NetworkUtlVectorBase<float32>
            }
            // parent: C_BaseCSGrenadeProjectile
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1450; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x1454; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1478; // GameTime_t
            }
            // parent: CAttributeManager
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x4C8; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4D0; // uint64
            }
            // parent: C_BasePlayerWeapon
            // field count: 51
            //
            // metadata: [REMOVED]
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x1970; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x1974; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x1978; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0x197C; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x197D; // bool
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x19A8; // float32
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x19AC; // int32
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x19B0; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x19B4; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x19B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x19E0; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x19E4; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x19E8; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x19F4; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x19F8; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x19FC; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1A00; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x1A04; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x1A08; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x1A0C; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x1A10; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x1A14; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x1A18; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x1A1C; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1A20; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1A24; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1A25; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1A28; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1A2C; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x1A30; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1A34; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1A38; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x1AD8; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1AD9; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x1ADA; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x1ADC; // int32
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x1AE8; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0x1AEC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x1AF0; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x1AF4; // bool
                constexpr std::ptrdiff_t m_donated = 0x1B14; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x1B18; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1B1C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1B1D; // bool
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1B20; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1B24; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x1C90; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1D40; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1D58; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1DB8; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x1DCC; // GameTime_t
            }
            // parent: 
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
            }
            // class CPulseCursorFuncs has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: C_BaseEntity
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x600; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x604; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x608; // float32
            }
            // parent: 
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
            }
            // class C_WeaponMag7 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // class CBasePulseGraphInstance has zero fields
            // parent: None
            // parent: CBaseFilter
            // field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x650; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x654; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x658; // int32
            }
            // parent: C_BaseClientUIEntity
            // field count: 13
            //
            // metadata: [REMOVED]
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xEE8; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x1060; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x1064; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x1068; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x106C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x1070; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x1074; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x1078; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x107C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x1080; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x1084; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x1088; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x1090; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // class SignatureOutflow_Resume has zero fields
            // parent: None
            // class CPathSimpleAPI has zero fields
            // parent: None
            // class C_InfoLadderDismount has zero fields
            // parent: C_BaseEntity
            // parent: CBaseAnimGraph
            // field count: 13
            //
            // metadata: [REMOVED]
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0x1170; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x1171; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0x1174; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0x1178; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x117C; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x1180; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0x1188; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0x1190; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0x1198; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0x119C; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0x11A0; // bool
                constexpr std::ptrdiff_t m_hViewPosition = 0x11B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0x11B4; // bool
            }
            // class CSpriteOriented has zero fields
            // parent: C_Sprite
            // parent: 
            // field count: 13
            //
            // metadata: [REMOVED]
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x20; // ShardSolid_t
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
            }
            // parent: C_CS2WeaponModuleBase
            // field count: 2
            namespace C_KeychainModule {
                constexpr std::ptrdiff_t m_nKeychainDefID = 0x1160; // uint32
                constexpr std::ptrdiff_t m_nKeychainSeed = 0x1164; // uint32
            }
            // parent: C_BaseModelEntity
            // field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xEB0; // CBuoyancyHelper
            }
            // class CCSPlayer_GlowServices has zero fields
            // parent: CPlayerPawnComponent
            // parent: None
            // field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // class C_Flashbang has zero fields
            // parent: C_BaseCSGrenade
            // parent: C_PointClientUIWorldPanel
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x1100; // char[512]
            }
            // parent: CPlayer_WaterServices
            // field count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50; // float32
            }
            // parent: C_CSPlayerPawnBase
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x1668; // CEntityHandle
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // parent: C_BaseModelEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0xEB0; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0xEC0; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0xED8; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xEE4; // VectorWS
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xEF0; // VectorWS
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xEFC; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0xF00; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0xF01; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0xF02; // bool
            }
            // class C_WeaponMP5SD has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_World has zero fields
            // parent: C_BaseModelEntity
            // class C_CSGO_TeamSelectCounterTerroristPosition has zero fields
            // parent: C_CSGO_TeamSelectCharacterPosition
            // class C_WeaponGalilAR has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: CPlayer_CameraServices
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x288; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x28C; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x290; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x294; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x298; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x29C; // float32
            }
            // class C_TeamplayRules has zero fields
            // parent: None
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // class C_WeaponSG556 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_CSPlayerPawnBase
            // field count: 127
            //
            // metadata: [REMOVED]
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x1678; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x1680; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x1688; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x1690; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1698; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0x16A0; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16A8; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x16AC; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x16B0; // bool
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x16B4; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x16B8; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x16BC; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x16CE; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x16CF; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x16D0; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x16D4; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x16D8; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x16DC; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x16E0; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x16E1; // bool
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x16E4; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x16F0; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x16FC; // GameTick_t
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1700; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1708; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bInLanding = 0x1728; // bool
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x172C; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1730; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x1731; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1732; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1734; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1738; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x1890; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1894; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1898; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1899; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x189C; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x18A0; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x18A5; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x18A8; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1D20; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1D21; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1D24; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1D28; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1D34; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1D40; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1D80; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1D84; // Vector
                constexpr std::ptrdiff_t m_lastLandTime = 0x2400; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2404; // bool
                constexpr std::ptrdiff_t m_hHudModelArms = 0x2420; // CHandle<C_CS2HudModelArms>
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x2424; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2430; // bool
                constexpr std::ptrdiff_t m_bLeftHanded = 0x2431; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x2434; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x2438; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x243C; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x2440; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x2444; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x2448; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x2480; // Color
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x24D0; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_bIsWalking = 0x24E8; // bool
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x24F0; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x2580; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x25F8; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x2670; // Vector
                constexpr std::ptrdiff_t m_entitySpottedState = 0x2700; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_bIsScoped = 0x2718; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x2719; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x271A; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x271B; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x271C; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x2720; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x2724; // bool
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x2728; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x272C; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x2730; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x2734; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x2738; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x273C; // int32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x2740; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x2744; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x2749; // bool
                constexpr std::ptrdiff_t m_ArmorValue = 0x274C; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x2750; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x2752; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x2754; // uint16
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x2758; // CEntityIndex
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x275C; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x275D; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x2760; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x2764; // Vector
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x2774; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x2778; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x277C; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x2788; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x2794; // Vector
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x27A0; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x27B8; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x27D0; // Vector[2]
                constexpr std::ptrdiff_t m_PredictedDamageTags = 0x27E8; // C_UtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
                constexpr std::ptrdiff_t m_nPrevHighestReceivedDamageTagTick = 0x2850; // GameTick_t
                constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x2854; // int32
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x3D8C; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x3D90; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x3D94; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x3D98; // GameTime_t
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x3D9C; // float32
                constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x3DA4; // Vector
                constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x3DB0; // float32[4]
                constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x3DC0; // int32
                constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x3DC4; // Vector
                constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x3DD0; // Vector
                constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x3DDC; // bool
                constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x3DDD; // bool
                constexpr std::ptrdiff_t m_pClippingWeapon = 0x3DE0; // C_CSWeaponBase*
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x3DE8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_angEyeAngles = 0x3DF0; // QAngle
                constexpr std::ptrdiff_t m_arrOldEyeAnglesTimes = 0x3E80; // GameTime_t[4]
                constexpr std::ptrdiff_t m_arrOldEyeAngles = 0x3E90; // QAngle[4]
                constexpr std::ptrdiff_t m_angEyeAnglesVelocity = 0x3EC0; // QAngle
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x3ECC; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x3ED0; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x3EE8; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x3EEC; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x3EF0; // CountdownTimer
            }
            // class C_CSGO_TeamIntroTerroristPosition has zero fields
            // parent: C_CSGO_TeamIntroCharacterPosition
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // parent: C_BaseCombatCharacter
            // field count: 23
            //
            // metadata: [REMOVED]
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x13F0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x1408; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1410; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x1428; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x1434; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1435; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x1438; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x143C; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x1440; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x1444; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1448; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x1454; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1458; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x145C; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1460; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x1468; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1480; // Vector
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1490; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x14A8; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x14A9; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x14AA; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x14B0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x14B8; // GameTime_t
            }
            // parent: 
            // field count: 14
            //
            // metadata: [REMOVED]
            namespace C_fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float32
                constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
                constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
                constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
                constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
                constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float32
                constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float32
            }
            // parent: 
            // field count: 36
            //
            // metadata: [REMOVED]
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransformWS
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x78; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xC0; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xCC; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0; // VectorWS
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8; // float32
                constexpr std::ptrdiff_t m_vecWrappedLocalOrigin = 0xEC; // Vector
                constexpr std::ptrdiff_t m_angWrappedLocalRotation = 0xF8; // QAngle
                constexpr std::ptrdiff_t m_flWrappedScale = 0x104; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0x108; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0x10A; // bool
                constexpr std::ptrdiff_t m_bDormant = 0x10B; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0x10C; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0x10F; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0x110; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x111; // uint8
                constexpr std::ptrdiff_t m_name = 0x114; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x158; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x15C; // float32
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x160; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x164; // Vector
            }
            // parent: CPlayerPawnComponent
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
            }
            // parent: C_BaseEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x600; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x610; // Vector
            }
            // parent: C_BaseEntity
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x604; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x608; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x609; // bool
            }
            // parent: None
            // field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
            }
            // parent: C_EconEntity
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x18E0; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x18E4; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x18E8; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x18EC; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x18F0; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x18F4; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x18F8; // int32[2]
            }
            // parent: C_BaseEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x5F8; // int8
            }
            // class C_HEGrenade has zero fields
            // parent: C_BaseCSGrenade
            // parent: C_BaseModelEntity
            // field count: 12
            //
            // metadata: [REMOVED]
            namespace C_EnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xEB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0xEC0; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0xEC1; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xEC5; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xECC; // float32
                constexpr std::ptrdiff_t m_nFogType = 0xED0; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0xED4; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0xED8; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0xEE0; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xEE4; // bool
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
            // parent: C_BaseEntity
            // field count: 11
            //
            // metadata: [REMOVED]
            namespace C_EnvWindController {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x5F8; // C_EnvWindShared
                constexpr std::ptrdiff_t m_fDirectionVariation = 0x6F0; // float32
                constexpr std::ptrdiff_t m_fSpeedVariation = 0x6F4; // float32
                constexpr std::ptrdiff_t m_fTurbulence = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x6FC; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x700; // float32
                constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x704; // int32
                constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x708; // int32
                constexpr std::ptrdiff_t m_nClipmapLevels = 0x70C; // int32
                constexpr std::ptrdiff_t m_bIsMaster = 0x710; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x711; // bool
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace C_GameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x34; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0x38; // bool
            }
            // class C_WeaponMAC10 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseEntity
            // field count: 14
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x5FC; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x600; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x601; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x602; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x604; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x648; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x64C; // float32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x664; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x668; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x66C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x670; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x674; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x678; // float32
            }
            // parent: C_ModelPointEntity
            // field count: 17
            //
            // metadata: [REMOVED]
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xEB8; // bool
                constexpr std::ptrdiff_t m_messageText = 0xED0; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x10D0; // char[64]
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x1110; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0x1150; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0x1151; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x1154; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0x1158; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x115C; // float32
                constexpr std::ptrdiff_t m_bDrawBackground = 0x1160; // bool
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x1164; // float32
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x1168; // float32
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x116C; // float32
                constexpr std::ptrdiff_t m_Color = 0x1170; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x1174; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x1178; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0x117C; // PointWorldTextReorientMode_t
            }
            // parent: C_BaseModelEntity
            // field count: 40
            //
            // metadata: [REMOVED]
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xEB8; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xEBC; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0xEC0; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xEC4; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xEC8; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xECC; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xED0; // Vector[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0xEE8; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xEEC; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0xEF0; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xEF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSegments = 0x1170; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0x1174; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x1178; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x117C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x117D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0x117E; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x1180; // int16
                constexpr std::ptrdiff_t m_Slack = 0x1182; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0x1184; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0x1188; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x1189; // uint8
                constexpr std::ptrdiff_t m_Width = 0x118C; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1190; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0x11A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0x11A8; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0x11AC; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x11B8; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x11C4; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x11C8; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x11CC; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0x11D0; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0x11DC; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x11E8; // Vector[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1200; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1218; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // class C_BaseToggle has zero fields
            // parent: C_BaseModelEntity
            // class C_EnvCubemapBox has zero fields
            // parent: C_EnvCubemap
            // class C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume has zero fields
            // parent: C_EnvCombinedLightProbeVolume
            // parent: None
            // field count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
            }
            // parent: C_PointEntity
            // field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_flRange = 0x5FC; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x600; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x604; // int32
                constexpr std::ptrdiff_t m_hLight = 0x608; // CHandle<C_BaseEntity>
            }
            // class C_FuncMoveLinear has zero fields
            // parent: C_BaseToggle
            //
            // metadata: [REMOVED]
            // class CServerOnlyModelEntity has zero fields
            // parent: C_BaseModelEntity
            // class C_CSGO_TeamSelectCamera has zero fields
            // parent: C_CSGO_TeamPreviewCamera
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
            }
            // class C_WeaponXM1014 has zero fields
            // parent: C_CSWeaponBaseShotgun
            // class C_WorldModelGloves has zero fields
            // parent: CBaseAnimGraph
            // class C_PhysicsPropMultiplayer has zero fields
            // parent: C_PhysicsProp
            // parent: C_SoundEventEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
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
            // class C_WeaponAug has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_DynamicProp
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x1430; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0x1434; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x1435; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x1436; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0x1438; // Vector
                constexpr std::ptrdiff_t m_closedAngles = 0x1444; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0x1450; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x1454; // Vector
            }
            // parent: 
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
            }
            // class C_Item_Healthshot has zero fields
            // parent: C_WeaponBaseItem
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x30; // CScriptComponent*
            }
            // parent: C_BaseEntity
            // field count: 37
            //
            // metadata: [REMOVED]
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0xAE0; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0xAE8; // CHitboxComponent
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0xB00; // CDestructiblePartsComponent*
                constexpr std::ptrdiff_t m_LastHitGroup = 0xB08; // HitGroup_t
                constexpr std::ptrdiff_t m_sLastDamageSourceName = 0xB10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_vLastDamagePosition = 0xB18; // VectorWS
                constexpr std::ptrdiff_t m_bInitModelEffects = 0xB40; // bool
                constexpr std::ptrdiff_t m_bIsStaticProp = 0xB41; // bool
                constexpr std::ptrdiff_t m_nLastAddDecal = 0xB44; // int32
                constexpr std::ptrdiff_t m_nDecalsAdded = 0xB48; // int32
                constexpr std::ptrdiff_t m_iOldHealth = 0xB4C; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xB50; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xB51; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xB52; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xB70; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xB78; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xBF8; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0xBF9; // bool
                constexpr std::ptrdiff_t m_Collision = 0xC00; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xCB0; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xD08; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xD0C; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xD10; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xD14; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xD18; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xD1C; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0xD20; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0xD24; // Vector
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xD30; // Vector
                constexpr std::ptrdiff_t m_nDecalMode = 0xD3C; // DecalMode_t
                constexpr std::ptrdiff_t m_nRequiredDecalMode = 0xD3D; // DecalMode_t
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xD40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xD80; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xE60; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xE68; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xE6C; // bool
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0xEA8; // uint32[1]
            }
            // parent: CPlayerPawnComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
            }
            // class C_SoundOpvarSetAutoRoomEntity has zero fields
            // parent: C_SoundOpvarSetPointEntity
            // parent: C_BaseEntity
            // field count: 29
            //
            // metadata: [REMOVED]
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1670; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1674; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1680; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x16D0; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x16DC; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x16E8; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x16EC; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x16F0; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x16F4; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x16F8; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x16FC; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1700; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x170C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1710; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1714; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1718; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x171C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1720; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1739; // bool
            }
            // class C_MultiplayRules has zero fields
            // parent: None
            // class CPlayer_AutoaimServices has zero fields
            // parent: CPlayerPawnComponent
            // class C_LightDirectionalEntity has zero fields
            // parent: C_LightEntity
            // parent: 
            // field count: 83
            //
            // metadata: [REMOVED]
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x328; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x330; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x338; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x340; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x348; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x34C; // int32
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x350; // float32
                constexpr std::ptrdiff_t m_lifeState = 0x354; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x355; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x360; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x361; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x368; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x36C; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x370; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x374; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x378; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x379; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x37A; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x37B; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x37C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x380; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x390; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x394; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3B0; // bool
                constexpr std::ptrdiff_t m_flAnimTime = 0x3B4; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x3B8; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3BC; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3BD; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3BE; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x3C8; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x3E0; // GameTime_t
                constexpr std::ptrdiff_t m_flSpeed = 0x3E4; // float32
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3E8; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3EA; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x3EB; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x3EC; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3F0; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x3F8; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3FC; // Vector
                constexpr std::ptrdiff_t m_vecServerVelocity = 0x408; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecVelocity = 0x430; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x510; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x51C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x520; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x524; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x525; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x526; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x528; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x52C; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x530; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x534; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x538; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x53C; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x540; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x544; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x548; // bool
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x549; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x54C; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x550; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x560; // uint8
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x564; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x568; // bool
                constexpr std::ptrdiff_t m_bPredictable = 0x569; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x56A; // bool
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x56C; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x570; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x574; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x578; // CParticleProperty
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x5A8; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x5B4; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x5B8; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x5D0; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x5DD; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x5DE; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x5E8; // CUtlString
                constexpr std::ptrdiff_t m_nBloodType = 0x5F0; // BloodType
            }
            // parent: 
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x30; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // class C_WeaponSSG08 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Value_Curve {
                constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
            }
            // parent: C_BaseCombatCharacter
            // field count: 28
            //
            // metadata: [REMOVED]
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x13F0; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0x13F8; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x1400; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0x1408; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0x1410; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0x1418; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x1420; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0x1428; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0x1430; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x1440; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t v_angle = 0x14A8; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0x14B4; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0x14C0; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0x14C8; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0x1558; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0x155C; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1568; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x1588; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1594; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x1598; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x159C; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0x15A0; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x15AC; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x15B0; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x15B4; // int32
                constexpr std::ptrdiff_t m_hController = 0x15B8; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hDefaultController = 0x15BC; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x15C0; // bool
            }
            // parent: C_DynamicProp
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x1428; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x142C; // bool
                constexpr std::ptrdiff_t m_leader = 0x1430; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x1438; // C_AttributeContainer
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1910; // bool
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x1914; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bIsPreviewModel = 0x1918; // bool
            }
            // class C_SoundOpvarSetAABBEntity has zero fields
            // parent: C_SoundOpvarSetPointEntity
            // class C_WeaponBizon has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_CS2WeaponModuleBase
            // field count: 1
            namespace C_StattrakModule {
                constexpr std::ptrdiff_t m_bKnife = 0x1160; // bool
            }
            // class CCSObserver_CameraServices has zero fields
            // parent: CCSPlayerBase_CameraServices
            // class CTakeDamageInfoAPI has zero fields
            // parent: None
            // parent: CEnvSoundscape
            // field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x698; // CUtlSymbolLarge
            }
            // parent: C_BaseEntity
            // field count: 15
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x5FA; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x5FB; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x5FC; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x600; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x618; // CEntityOutputTemplate<uint64>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x640; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x668; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x698; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x6B4; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x6B8; // int32
                constexpr std::ptrdiff_t m_bClientSideOnly = 0x0; // bitfield:1
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // class C_LightOrthoEntity has zero fields
            // parent: C_LightEntity
            // class CPulseCell_BaseFlow has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: C_BaseTrigger
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0xFF0; // bool
            }
            // parent: C_CSWeaponBase
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_Knife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1F80; // bool
            }
            // class C_CSGO_TerroristWingmanIntroCamera has zero fields
            // parent: C_CSGO_TeamPreviewCamera
            // parent: CGameSceneNode
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x190; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x490; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x491; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x492; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x494; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x498; // uint8
            }
            // class CEntityComponent has zero fields
            // parent: 
            // parent: C_Item
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x19E0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x19E4; // CHandle<C_CSPlayerPawn>
            }
            // class C_LateUpdatedAnimating has zero fields
            // parent: CBaseAnimGraph
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
            // class CPulseAnimFuncs has zero fields
            // parent: None
            // parent: C_BaseModelEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0xEB8; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0xEC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0xEC8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0xED0; // CUtlSymbolLarge
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
            // class C_WeaponUSPSilencer has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseCSGrenadeProjectile
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1450; // bool
            }
            // class C_TriggerLerpObject has zero fields
            // parent: C_BaseTrigger
            // class CPointTemplateAPI has zero fields
            // parent: None
            // class C_WeaponRevolver has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_WeaponElite has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_DynamicPropAlias_cable_dynamic has zero fields
            // parent: C_DynamicProp
            // parent: CBaseAnimGraph
            // field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x1158; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x115C; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x1160; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x1170; // CTransform
            }
            // parent: C_PointEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x5FC; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x600; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x630; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x638; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x7B0; // bool
            }
            // parent: None
            // field count: 83
            //
            // metadata: [REMOVED]
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x440; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x444; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szModel_AG2 = 0x448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szAnimSkeleton = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
                constexpr std::ptrdiff_t m_vecMuzzlePos0 = 0x608; // Vector
                constexpr std::ptrdiff_t m_vecMuzzlePos1 = 0x614; // Vector
                constexpr std::ptrdiff_t m_szTracerParticle = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GearSlot = 0x700; // gear_slot_t
                constexpr std::ptrdiff_t m_GearSlotPosition = 0x704; // int32
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0x708; // loadout_slot_t
                constexpr std::ptrdiff_t m_nPrice = 0x70C; // int32
                constexpr std::ptrdiff_t m_nKillAward = 0x710; // int32
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0x714; // int32
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0x718; // int32
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0x71C; // bool
                constexpr std::ptrdiff_t m_bHasBurstMode = 0x71D; // bool
                constexpr std::ptrdiff_t m_bIsRevolver = 0x71E; // bool
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0x71F; // bool
                constexpr std::ptrdiff_t m_szName = 0x720; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eSilencerType = 0x728; // CSWeaponSilencerType
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0x72C; // int32
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0x730; // int32
                constexpr std::ptrdiff_t m_bIsFullAuto = 0x734; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0x738; // int32
                constexpr std::ptrdiff_t m_bReloadsSingleShells = 0x73C; // bool
                constexpr std::ptrdiff_t m_flCycleTime = 0x740; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x748; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0x750; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0x758; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0x760; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0x768; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0x770; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0x778; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0x780; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0x788; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0x790; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0x798; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0x7A0; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0x7A8; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0x7B0; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flDeployDuration = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartDuration = 0x7C8; // float32
                constexpr std::ptrdiff_t m_nBurstShotCount = 0x7CC; // int32
                constexpr std::ptrdiff_t m_bAllowBurstHolster = 0x7D0; // bool
                constexpr std::ptrdiff_t m_nRecoilSeed = 0x7D4; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0x7D8; // int32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0x7E4; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0x7E8; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0x7F1; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0x7F4; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0x7F8; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0x7FC; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0x800; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0x804; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0x808; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0x80C; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0x810; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0x814; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0x818; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0x81C; // float32
                constexpr std::ptrdiff_t m_nDamage = 0x820; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0x824; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0x828; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0x82C; // float32
                constexpr std::ptrdiff_t m_flRange = 0x830; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0x834; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0x838; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0x83C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0x840; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0x844; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0x848; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0x84C; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0x850; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0x854; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0x858; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x85C; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0x868; // CGlobalSymbol
            }
            // parent: 
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // class SignatureOutflow_Continue has zero fields
            // parent: None
            // class CInfoTarget has zero fields
            // parent: C_PointEntity
            // parent: CPlayerPawnComponent
            // field count: 20
            //
            // metadata: [REMOVED]
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
                constexpr std::ptrdiff_t m_CurrentFog = 0x140; // fogparams_t
                constexpr std::ptrdiff_t m_hOldFogController = 0x1A8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1AC; // bool[5]
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B1; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1C5; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1CC; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E0; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x1F8; // QAngle
            }
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
            // parent: C_CSWeaponBase
            // field count: 14
            //
            // metadata: [REMOVED]
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1F80; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F81; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1F82; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x1F83; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1F84; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1F85; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x1F88; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x1F90; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x2008; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x200C; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x2010; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x2014; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x2018; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x201C; // CHandle<C_CSWeaponBase>
            }
            // parent: CBaseFilter
            // field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x650; // CUtlSymbolLarge
            }
            // parent: CLogicalEntity
            // field count: 11
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x610; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x614; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x618; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x61C; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x620; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x638; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x650; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x658; // HSCRIPT
            }
            // class CPlayer_FlashlightServices has zero fields
            // parent: CPlayerPawnComponent
            // parent: CBasePlayerController
            // field count: 68
            //
            // metadata: [REMOVED]
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x7F8; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x800; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x808; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x810; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x818; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x81C; // bool
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x820; // uint32
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x828; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x830; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x834; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x838; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x83C; // bool
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x840; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x850; // CUtlString
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x858; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x860; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x868; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x870; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x874; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x878; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x87C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x880; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x884; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x888; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x88C; // uint16
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x890; // uint32
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x894; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x898; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x8C8; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8CC; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8D0; // uint32
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8D4; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x8D8; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x8D9; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x8DA; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x8DB; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x8DC; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x8DD; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x8E0; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x8F0; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x8F1; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x8F2; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x8F4; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x8F8; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x8FC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x900; // CHandle<C_CSObserverPawn>
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x904; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x908; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x90C; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x910; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x911; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x912; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x914; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x918; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x91C; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x920; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x924; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0x928; // uint8[8]
                constexpr std::ptrdiff_t m_nFirstKill = 0x930; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0x931; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x932; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x934; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x938; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x93C; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x940; // int32
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x944; // bool
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0x945; // bool
            }
            // class C_CSGO_TeamIntroCounterTerroristPosition has zero fields
            // parent: C_CSGO_TeamIntroCharacterPosition
            // parent: C_BaseFlex
            // field count: 4
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_defaultAnim = 0x1368; // CUtlString
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1370; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x1374; // float32
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1378; // CUtlString
            }
            // class C_CSGO_TeamSelectCharacterPosition has zero fields
            // parent: C_CSGO_TeamPreviewCharacterPosition
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // parent: C_SoundEventEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
            }
            // parent: CPlayer_MovementServices_Humanoid
            // field count: 40
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x278; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x284; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x288; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x28C; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x290; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x291; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x294; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x298; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x29C; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x2A0; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x2A4; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x2B0; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x2B8; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x2B9; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x2BA; // bool
                constexpr std::ptrdiff_t m_nTraceCount = 0x4C8; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x4CC; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x4D0; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x4D4; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x4D8; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x4DC; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x4E8; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x4F4; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x500; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x504; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x508; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x50C; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x510; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x518; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x51C; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x520; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x524; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x528; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x52C; // float32
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x530; // float32
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x534; // float32
                constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x538; // float32
                constexpr std::ptrdiff_t m_bWasSurfing = 0x53C; // bool
                constexpr std::ptrdiff_t m_vecInputRotated = 0x5CC; // Vector
                constexpr std::ptrdiff_t m_bJumpApexPending = 0xDF8; // bool
            }
            // parent: 
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCost = 0x34; // int32
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
                constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
            }
            // class C_TintController has zero fields
            // parent: C_BaseEntity
            // parent: C_CSWeaponBase
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1F80; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F81; // bool
            }
            // class CWaterSplasher has zero fields
            // parent: C_BaseModelEntity
            // class C_FuncBrush has zero fields
            // parent: C_BaseModelEntity
            // parent: 
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
            }
            // parent: CEntityComponent
            // field count: 10
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nInteractions = 0x30; // int32
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // bool
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C; // int32
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
            }
            // parent: C_CSWeaponBaseGun
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_WeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1FB0; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0xEB0; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0xEB1; // uint8
                constexpr std::ptrdiff_t m_Radius = 0xEB4; // float32
                constexpr std::ptrdiff_t m_Exponent = 0xEB8; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0xEBC; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0xEC0; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0xEC4; // float32
            }
            // parent: 
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
            }
            // parent: C_SoundEventEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x6C0; // float32
            }
            // parent: CPlayerControllerComponent
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // class C_CSGO_TeamPreviewModel has zero fields
            // parent: C_CSGO_PreviewPlayer
            // class C_TonemapController2Alias_env_tonemap_controller2 has zero fields
            // parent: C_TonemapController2
            // parent: C_BaseModelEntity
            // field count: 24
            //
            // metadata: [REMOVED]
            namespace C_Inferno {
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xEF0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0xEF8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0xF00; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0xF08; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0xF10; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0xF18; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_firePositions = 0xF20; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0x1220; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1520; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0x1560; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1860; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x1864; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x1868; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x186C; // bool
                constexpr std::ptrdiff_t m_lastFireCount = 0x1870; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1874; // int32
                constexpr std::ptrdiff_t m_drawableCount = 0x8480; // int32
                constexpr std::ptrdiff_t m_blosCheck = 0x8484; // bool
                constexpr std::ptrdiff_t m_nlosperiod = 0x8488; // int32
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x848C; // float32
                constexpr std::ptrdiff_t m_maxFireHeight = 0x8490; // float32
                constexpr std::ptrdiff_t m_minBounds = 0x8494; // Vector
                constexpr std::ptrdiff_t m_maxBounds = 0x84A0; // Vector
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x84AC; // float32
            }
            // class CFilterLOS has zero fields
            // parent: CBaseFilter
            // parent: C_BaseEntity
            // field count: 7
            namespace CPointOrient {
                constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bActive = 0x604; // bool
                constexpr std::ptrdiff_t m_nGoalDirection = 0x608; // PointOrientGoalDirectionType_t
                constexpr std::ptrdiff_t m_nConstraint = 0x60C; // PointOrientConstraint_t
                constexpr std::ptrdiff_t m_flMaxTurnRate = 0x610; // float32
                constexpr std::ptrdiff_t m_flLastGameTime = 0x614; // GameTime_t
            }
            // parent: C_BaseEntity
            // field count: 1
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xAC0; // uint16
            }
            // parent: C_BaseEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x5F8; // C_EnvWindShared
            }
            // parent: 
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // class C_FlashbangProjectile has zero fields
            // parent: C_BaseCSGrenadeProjectile
            // parent: 
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x0; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_nLastHitDamageLevel = 0x64; // int32
            }
            // class C_WeaponP90 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x5F8; // C_EnvWindShared
            }
            // class C_CSGO_TerroristTeamIntroCamera has zero fields
            // parent: C_CSGO_TeamPreviewCamera
            // class CPulseCell_Step_DebugLog has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // parent: CPlayerControllerComponent
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xA8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x128; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x12C; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x130; // float32
            }
            // parent: CBodyComponentSkeletonInstance
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x5B0; // CBaseAnimGraphController
            }
            // class C_CSGO_PreviewModelAlias_csgo_item_previewmodel has zero fields
            // parent: C_CSGO_PreviewModel
            // class C_InfoInstructorHintHostageRescueZone has zero fields
            // parent: C_PointEntity
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
            // parent: C_BaseTrigger
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xFF0; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1108; // float32
            }
            // parent: CPlayer_MovementServices
            // field count: 12
            //
            // metadata: [REMOVED]
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x238; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x23C; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x240; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x244; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x248; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x24C; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x24D; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x24E; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x250; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x25C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x260; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x270; // int32
            }
            // parent: None
            // field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
            }
            // class C_WeaponTec9 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BreakableProp
            // field count: 5
            namespace C_PhysPropClientside {
                constexpr std::ptrdiff_t m_flTouchDelta = 0x1300; // GameTime_t
                constexpr std::ptrdiff_t m_fDeathTime = 0x1304; // GameTime_t
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x1308; // Vector
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x1314; // Vector
                constexpr std::ptrdiff_t m_nDamageType = 0x1320; // DamageTypes_t
            }
            // parent: C_BaseToggle
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0xEB0; // bool
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
            }
            // class CFilterMultipleAPI has zero fields
            // parent: None
            // class CHostageRescueZone has zero fields
            // parent: CHostageRescueZoneShim
            // parent: 
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x1A9; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x250; // uint64
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x2A0; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x2EA; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x2EB; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x2EC; // int8
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CPulseCell_LerpCameraSettings__CursorState_t {
                constexpr std::ptrdiff_t m_hCamera = 0x8; // CHandle<C_PointCamera>
                constexpr std::ptrdiff_t m_OverlaidStart = 0xC; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_OverlaidEnd = 0x1C; // PointCameraSettings_t
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: C_CSWeaponBase
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1F80; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1F84; // int32
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1F88; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1F98; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x1F9C; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1F9D; // bool
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1FA0; // int32
            }
            // parent: C_GameRulesProxy
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x5F8; // C_CSGameRules*
            }
            // parent: 
            // field count: 17
            //
            // metadata: [REMOVED]
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
            }
            // class C_WeaponP250 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_PhysicsProp
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x1318; // shard_model_desc_t
            }
            // parent: CBaseFilter
            // field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x650; // float32
            }
            // parent: C_BaseModelEntity
            // field count: 13
            //
            // metadata: [REMOVED]
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0xEBC; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xEC8; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xECC; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xED0; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xED4; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xED8; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xEDC; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0xEE8; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0xEEC; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xEED; // bool
            }
            // class C_SoundOpvarSetOBBEntity has zero fields
            // parent: C_SoundOpvarSetAABBEntity
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // parent: C_FuncBrush
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0xEB0; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0xEB8; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0xEBC; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xEBD; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0xEC0; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0xEC8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0xECC; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xECD; // bool
            }
            // parent: CBaseAnimGraph
            // field count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0x1158; // bool
                constexpr std::ptrdiff_t m_bImportant = 0x1159; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0x115C; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0x1160; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0x1164; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0x1168; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0x116C; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0x1170; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0x1174; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x1175; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0x1176; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0x1178; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x11A0; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x11C8; // GameTime_t[10]
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_PlaySequence__CursorState_t {
                constexpr std::ptrdiff_t m_hTarget = 0x0; // CHandle<CBaseAnimGraph>
            }
            // parent: CBodyComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x80; // CSkeletonInstance
            }
            // class C_CS2WeaponModuleBase has zero fields
            // parent: CBaseAnimGraph
            // parent: C_BaseEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x5F8; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x5FC; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x600; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x608; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x610; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x618; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0xA90; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xF08; // C_EconItemView
            }
            // parent: C_BaseCSGrenadeProjectile
            // field count: 10
            //
            // metadata: [REMOVED]
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1468; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x146C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1470; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x1474; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1480; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x1490; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0x14A8; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0x14AC; // int32
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x14B0; // bool
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x14B1; // bool
            }
            // parent: CEntityComponent
            // field count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // parent: CPlayerPawnComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // class C_PortraitWorldCallbackHandler has zero fields
            // parent: C_BaseEntity
            // parent: C_BreakableProp
            // field count: 23
            //
            // metadata: [REMOVED]
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x1300; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0x1301; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x1308; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1330; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1358; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1380; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x13A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0x13D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x13D8; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0x13DC; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x13DD; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x13DE; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x13DF; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0x13E0; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0x13E1; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0x13E4; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x13E8; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x13EC; // int32
                constexpr std::ptrdiff_t m_glowColor = 0x13F0; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0x13F4; // int32
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0x13F8; // int32
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x13FC; // Vector
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x1408; // Vector
            }
            // parent: C_Team
            // field count: 10
            //
            // metadata: [REMOVED]
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x6B0; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x8B0; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x8B4; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x8B8; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x8BC; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x8C0; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x8C4; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x948; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x94C; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x954; // char[8]
            }
            // class C_CS2HudModelWeapon has zero fields
            // parent: C_CS2HudModelBase
            // parent: C_BaseModelEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0xEB0; // bool
                constexpr std::ptrdiff_t m_flFPS = 0xEB4; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0xEB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0xEC0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xEC8; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xED4; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0xEE0; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0xEE4; // float32
            }
            // class C_LightEnvironmentEntity has zero fields
            // parent: C_LightDirectionalEntity
            // class CLogicRelayAPI has zero fields
            // parent: None
            // parent: C_BaseTrigger
            // field count: 13
            //
            // metadata: [REMOVED]
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0xFF0; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0xFF4; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0xFF8; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0xFFC; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x1000; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x1004; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x1008; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x100C; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x1010; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x101C; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x1020; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x102C; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x1038; // bool
            }
            // class C_PropDoorRotating has zero fields
            // parent: C_BasePropDoor
            // parent: C_BaseEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x5F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x5FC; // bool
            }
            // parent: C_BaseEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x630; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x631; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x632; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x634; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x638; // bool
            }
            // class CBodyComponentBaseModelEntity has zero fields
            // parent: CBodyComponentSkeletonInstance
            // parent: CBaseAnimGraph
            // field count: 1
            namespace C_Multimeter {
                constexpr std::ptrdiff_t m_hTargetC4 = 0x1160; // CHandle<C_PlantedC4>
            }
            // parent: C_BaseToggle
            // field count: 11
            //
            // metadata: [REMOVED]
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0xEB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0xED8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0xF00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0xF28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0xF50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0xF78; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0xFA0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0xFC8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iFilterName = 0xFE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0xFE8; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_bDisabled = 0xFEC; // bool
            }
            // parent: CBaseFilter
            // field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x650; // int32
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // parent: CBaseFilter
            // field count: 1
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x650; // float32
            }
            // parent: None
            // field count: 21
            //
            // metadata: [REMOVED]
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // VectorWS
                constexpr std::ptrdiff_t m_vStart = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_flScale = 0x40; // float32
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // int16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // parent: C_BaseModelEntity
            // field count: 24
            //
            // metadata: [REMOVED]
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xEB0; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x10B0; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x10B1; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x10B4; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x10B8; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x10BC; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x10C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x10C8; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x10CC; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x10D0; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x1100; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x1104; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0x1204; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0x1205; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0x1206; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0x1207; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0x1208; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0x1210; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x1410; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x1414; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x1420; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x1424; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x1448; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x1449; // bool
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // class C_WeaponSCAR20 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: CBaseAnimGraph
            // field count: 19
            //
            // metadata: [REMOVED]
            namespace C_BaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0x1168; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0x1180; // VectorWS
                constexpr std::ptrdiff_t m_blinktoggle = 0x1210; // bool
                constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0x1270; // int32
                constexpr std::ptrdiff_t m_CachedViewTarget = 0x1274; // Vector
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0x1280; // SceneEventId_t
                constexpr std::ptrdiff_t m_iBlink = 0x1284; // int32
                constexpr std::ptrdiff_t m_blinktime = 0x1288; // float32
                constexpr std::ptrdiff_t m_prevblinktoggle = 0x128C; // bool
                constexpr std::ptrdiff_t m_iJawOpen = 0x1290; // int32
                constexpr std::ptrdiff_t m_flJawOpenAmount = 0x1294; // float32
                constexpr std::ptrdiff_t m_flBlinkAmount = 0x1298; // float32
                constexpr std::ptrdiff_t m_iMouthAttachment = 0x129C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x129D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0x129E; // bool
                constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0x12B8; // int32
                constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0x12BC; // matrix3x4_t
                constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0x12EC; // Vector
                constexpr std::ptrdiff_t m_PhonemeClasses = 0x1308; // C_BaseFlex::Emphasized_Phoneme[3]
            }
            // class C_FuncMover has zero fields
            // parent: C_BaseToggle
            // parent: None
            // field count: 3
            namespace CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                constexpr std::ptrdiff_t pItem = 0x0; // C_EconItemView*
                constexpr std::ptrdiff_t team = 0x8; // uint16
                constexpr std::ptrdiff_t slot = 0xA; // uint16
            }
            // parent: CEntityComponent
            // field count: 69
            //
            // metadata: [REMOVED]
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x30; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x6D; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x71; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x78; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x80; // float32
                constexpr std::ptrdiff_t m_flRange = 0x84; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0x88; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x8C; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x90; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x94; // float32
                constexpr std::ptrdiff_t m_flTheta = 0x98; // float32
                constexpr std::ptrdiff_t m_flPhi = 0x9C; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xA0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xA8; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xAC; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB0; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xB4; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xB8; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xBC; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC0; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xC4; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xC8; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xCC; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xD0; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xD8; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xDC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE0; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xE4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xE8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF0; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xF4; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0xF8; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0xFC; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x100; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x104; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x108; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x10C; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x110; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x114; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x118; // bool
                constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x119; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x11C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x120; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x124; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x128; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x12C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x130; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x134; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x135; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x136; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x138; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x144; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x15C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x168; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x174; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x178; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x17C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x180; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x184; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x188; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x18C; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x190; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x191; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x194; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x198; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x19C; // float32
            }
            // class C_DecoyGrenade has zero fields
            // parent: C_BaseCSGrenade
            // class C_WaterBullet has zero fields
            // parent: CBaseAnimGraph
            // parent: CPlayerPawnComponent
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x44; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xB8; // WeaponPurchaseTracker_t
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x680; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x684; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x688; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x694; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x6A0; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x6A4; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x6A8; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x6AC; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x6B0; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x6B4; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x6C0; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x6C4; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x6C5; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x6C6; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x6C7; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x6C8; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x6D8; // bool
            }
            // class CCSObserver_MovementServices has zero fields
            // parent: CPlayer_MovementServices
            // parent: CEntityComponent
            // field count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x48; // CNetworkVarChainer
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
            // parent: C_BaseFlex
            // field count: 6
            //
            // metadata: [REMOVED]
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x1368; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x1380; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x1381; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1384; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1388; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x138C; // float32
            }
            // parent: 
            // field count: 11
            //
            // metadata: [REMOVED]
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
                constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
                constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
                constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
                constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
            }
            // parent: C_BaseClientUIEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0xEE0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0xEE4; // bool
            }
            // class CPulseCell_BaseValue has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class C_WeaponHKP2000 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseTrigger
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0xFF0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0xFF8; // CUtlSymbolLarge
            }
            // parent: C_BaseEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x628; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x634; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x640; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x64C; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x658; // int32
            }
            // class C_CSGO_EndOfMatchLineupStart has zero fields
            // parent: C_CSGO_EndOfMatchLineupEndpoint
            // class CPlayer_WaterServices has zero fields
            // parent: CPlayerPawnComponent
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
            // parent: None
            // field count: 15
            //
            // metadata: [REMOVED]
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x30; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x34; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x38; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x3C; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_DamagerXuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_RecipientXuid = 0x58; // uint64
                constexpr std::ptrdiff_t m_flBulletsDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x64; // float32
                constexpr std::ptrdiff_t m_flActualHealthRemoved = 0x68; // float32
                constexpr std::ptrdiff_t m_iNumHits = 0x6C; // int32
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x70; // int32
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x74; // bool
                constexpr std::ptrdiff_t m_killType = 0x75; // EKillTypes_t
            }
            // parent: 
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8
            }
            // class C_DynamicPropAlias_dynamic_prop has zero fields
            // parent: C_DynamicProp
            // class CEnvSoundscapeProxyAlias_snd_soundscape_proxy has zero fields
            // parent: CEnvSoundscapeProxy
            // parent: C_BarnLight
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0x1200; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0x1204; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0x1208; // bool
            }
            // parent: C_PointEntity
            // field count: 12
            //
            // metadata: [REMOVED]
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x600; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x601; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x602; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x603; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x604; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x608; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x60A; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x60C; // CHandle<C_BaseFlex>
                constexpr std::ptrdiff_t m_hActorList = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x628; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x638; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x650; // float32
            }
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
            // parent: C_CS2WeaponModuleBase
            // field count: 1
            namespace C_NametagModule {
                constexpr std::ptrdiff_t m_strNametagString = 0x1160; // CUtlString
            }
            // parent: C_BaseFlex
            // field count: 20
            //
            // metadata: [REMOVED]
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1378; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1380; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1388; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x1390; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1868; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x186C; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x1870; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x1874; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x1878; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x187C; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x1880; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1881; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1888; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x18A0; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x18A4; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x18A8; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x18AC; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x18B0; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x18C0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x18C8; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // class CPlayer_UseServices has zero fields
            // parent: CPlayerPawnComponent
            // parent: C_BaseEntity
            // field count: 25
            //
            // metadata: [REMOVED]
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x5FA; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x5FC; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x604; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x608; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x60C; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x610; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x614; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x618; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x638; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x63C; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x640; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x644; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x648; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x64C; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x650; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x654; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x658; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x659; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x65C; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x660; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x664; // Vector
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // parent: None
            // field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // class C_WeaponMP7 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: None
            // field count: 13
            //
            // metadata: [REMOVED]
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30; // int32
                constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
                constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
                constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
                constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
                constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
                constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
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
            // class C_CS2HudModelBase has zero fields
            // parent: C_LateUpdatedAnimating
            // parent: None
            // field count: 98
            //
            // metadata: [REMOVED]
            namespace C_CSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x40; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x41; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x4C; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x4D; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x50; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x58; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x5C; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x60; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x61; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0x64; // int32
                constexpr std::ptrdiff_t m_iRoundTime = 0x68; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x6C; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x78; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x7C; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x80; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x84; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x88; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x8C; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x90; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x94; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x98; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x99; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x9A; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x9B; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x9C; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0xA0; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0xA4; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0xA5; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0xA6; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xA8; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xAC; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xB0; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xB4; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xB8; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2B8; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4B8; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6B8; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8B8; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8BC; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8C0; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8C4; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8C5; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8C6; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8C8; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x990; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x9A0; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9A4; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9A8; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x9A9; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9AC; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9B0; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9B4; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9B5; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9B8; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA30; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAA8; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB20; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xBA0; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC20; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC2C; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC38; // float32[8]
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xC58; // uint64
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC60; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xC88; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCB0; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCB4; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCB8; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD78; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD7C; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD7D; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0xD98; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_RetakeRules = 0xDA0; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEF8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEFC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xF00; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xF04; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xF08; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xF0C; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xF10; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xF14; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xF18; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xF20; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xF24; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xF28; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xF2C; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xF30; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xF38; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xF3C; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xF40; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xF44; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xF48; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xF4C; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F58; // float64
            }
            // parent: C_BaseModelEntity
            // field count: 2
            namespace CGrenadeTracer {
                constexpr std::ptrdiff_t m_flTracerDuration = 0xEC8; // float32
                constexpr std::ptrdiff_t m_nType = 0xECC; // GrenadeType_t
            }
            // class CCSGameModeRules_Noop has zero fields
            // parent: None
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
            // parent: C_BaseGrenade
            // field count: 16
            //
            // metadata: [REMOVED]
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x13B8; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x13C4; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x13D0; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x13D8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x13E0; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x13E4; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0x13F0; // GameTime_t
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x13F4; // Vector
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x1400; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x1404; // bool
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x1405; // bool
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x1408; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x1410; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1418; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x1430; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1448; // float32
            }
            // parent: C_BaseEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x5F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x600; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x604; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x608; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x610; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x614; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x618; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x61C; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x620; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x624; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x628; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x62C; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x630; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x631; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x632; // bool
            }
            // parent: CPlayerControllerComponent
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32
            }
            // class C_HEGrenadeProjectile has zero fields
            // parent: C_BaseCSGrenadeProjectile
            // parent: 
            // field count: 24
            //
            // metadata: [REMOVED]
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float32
            }
            // parent: CBaseFilter
            // field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x650; // CUtlSymbolLarge
            }
            // parent: C_SoundAreaEntityBase
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x620; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x62C; // Vector
            }
            // class C_SoundOpvarSetPointEntity has zero fields
            // parent: C_SoundOpvarSetPointBase
            // parent: C_BaseEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x600; // CUtlString
                constexpr std::ptrdiff_t m_strStateBlob = 0x608; // CUtlString
            }
            // class CPulseCell_Value_RandomInt has zero fields
            // parent: None
            //
            // metadata: [REMOVED]
            // class C_CSWeaponBaseShotgun has zero fields
            // parent: C_CSWeaponBase
            // parent: C_RagdollProp
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0x11E8; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x11EC; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x11F0; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x11FC; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0x1208; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0x1214; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x1218; // bool
            }
            // class C_ModelPointEntity has zero fields
            // parent: C_BaseModelEntity
            // parent: C_CSPlayerPawn
            // field count: 2
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3F10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x3F18; // float32
            }
            // parent: C_BarnLight
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x1200; // bool
            }
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_CPathQueryComponent = 0x600; // CPathQueryComponent
                constexpr std::ptrdiff_t m_pathString = 0x6F0; // CUtlString
                constexpr std::ptrdiff_t m_bClosedLoop = 0x6F8; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xEB0; // int32
                constexpr std::ptrdiff_t m_flRadius = 0xEB4; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0xEB8; // float32
            }
            // parent: C_EconEntity
            // field count: 2
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x18E0; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x18E4; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0xEB8; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xEBC; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xEC0; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0xEC4; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0xEC8; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xEC9; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0xECA; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0xECC; // float32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // parent: 
            // field count: 25
            //
            // metadata: [REMOVED]
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
                constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
                constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float32
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
                constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
                constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_bPadding2 = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // class C_WeaponM4A1 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_EconEntity
            // field count: 1
            namespace C_Item {
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x18E0; // char[256]
            }
            // class C_CSPetPlacement has zero fields
            // parent: C_BaseEntity
            // parent: C_BaseModelEntity
            // field count: 24
            //
            // metadata: [REMOVED]
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0xEB0; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xEB4; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0xEBC; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0xEC0; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0xEC4; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0xEE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0xEF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0xEF8; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0xEFC; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0xF00; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0xF28; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0xF34; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0xF38; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0xF3C; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0xF40; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0xF44; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0xF48; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0xF4C; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xF50; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0xF54; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0xF58; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0xF5C; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0xF68; // CHandle<C_BaseEntity>
            }
            // parent: C_BaseEntity
            // field count: 22
            //
            // metadata: [REMOVED]
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1638; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1644; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1650; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1654; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1658; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x165C; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1660; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1664; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1668; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x166C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1670; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1674; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1681; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xEB8; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0xEC4; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0xEC8; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xECC; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xED0; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0xED8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xEF0; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xEF4; // float32
            }
            // parent: CPlayer_WeaponServices
            // field count: 7
            //
            // metadata: [REMOVED]
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xCC; // bool
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xCD; // bool
                constexpr std::ptrdiff_t m_nOldTotalShootPositionHistoryCount = 0xD0; // uint32
                constexpr std::ptrdiff_t m_nOldTotalInputHistoryCount = 0x368; // uint32
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x18E0; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x18F8; // bool
            }
            // parent: CBaseAnimGraph
            // field count: 2
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0x1158; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_aAttachedObjects = 0x1170; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable has zero fields
            // parent: CEnvSoundscapeTriggerable
            // class C_Breakable has zero fields
            // parent: C_BaseModelEntity
            // parent: CBaseAnimGraph
            // field count: 29
            //
            // metadata: [REMOVED]
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x1160; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0x1164; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x1168; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1170; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0x1188; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0x118C; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0x1190; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0x1194; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0x1195; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0x1198; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0x119C; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0x11A0; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0x11A4; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0x11A8; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0x11A9; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0x11AC; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0x11B0; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0x11B4; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0x11B8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x11C0; // C_AttributeContainer
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x1698; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x169C; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0x16A0; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0x16A4; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x16A8; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x16B0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x16B8; // Vector
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x16C4; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x16D0; // float32
            }
            // class CCSGO_WingmanIntroCharacterPosition has zero fields
            // parent: C_CSGO_TeamIntroCharacterPosition
            // parent: CBaseFilter
            // field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x650; // CUtlSymbolLarge
            }
            // parent: CBaseAnimGraph
            // field count: 9
            //
            // metadata: [REMOVED]
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragEnabled = 0x1160; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0x1178; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x1190; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0x11A8; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0x11AC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x11B0; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0x11B4; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0x11B8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0x11D0; // CUtlVector<int32>
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
            // class C_MapPreviewParticleSystem has zero fields
            // parent: C_ParticleSystem
            // parent: C_BaseModelEntity
            // field count: 14
            //
            // metadata: [REMOVED]
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xF30; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xF32; // bool
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xF40; // bool
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xF44; // float32
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xF48; // VectorWS
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xF54; // bool
                constexpr std::ptrdiff_t m_vecForce = 0xF58; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xF64; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xF68; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xF70; // bool
                constexpr std::ptrdiff_t m_RagdollPose = 0xF88; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0xFD0; // bool
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0xFD1; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xFE0; // bool
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
            // parent: C_BaseModelEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xEB0; // CLightComponent*
            }
            // class C_WeaponM249 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: CBaseAnimGraph
            // field count: 25
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0x1158; // int32
                constexpr std::ptrdiff_t die = 0x115C; // GameTime_t
                constexpr std::ptrdiff_t m_flFrameMax = 0x1160; // float32
                constexpr std::ptrdiff_t x = 0x1164; // float32
                constexpr std::ptrdiff_t y = 0x1168; // float32
                constexpr std::ptrdiff_t fadeSpeed = 0x116C; // float32
                constexpr std::ptrdiff_t bounceFactor = 0x1170; // float32
                constexpr std::ptrdiff_t hitSound = 0x1174; // int32
                constexpr std::ptrdiff_t priority = 0x1178; // int32
                constexpr std::ptrdiff_t tentOffset = 0x117C; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0x1188; // QAngle
                constexpr std::ptrdiff_t tempent_renderamt = 0x1194; // int32
                constexpr std::ptrdiff_t m_vecNormal = 0x1198; // Vector
                constexpr std::ptrdiff_t m_flSpriteScale = 0x11A4; // float32
                constexpr std::ptrdiff_t m_nFlickerFrame = 0x11A8; // int32
                constexpr std::ptrdiff_t m_flFrameRate = 0x11AC; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x11B0; // float32
                constexpr std::ptrdiff_t m_pszImpactEffect = 0x11B8; // char*
                constexpr std::ptrdiff_t m_pszParticleEffect = 0x11C0; // char*
                constexpr std::ptrdiff_t m_bParticleCollision = 0x11C8; // bool
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0x11CC; // int32
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0x11D0; // Vector
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0x11DC; // Vector
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0x11E8; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0x11F4; // Vector
            }
            // parent: C_CSWeaponBaseGun
            // field count: 2
            //
            // metadata: [REMOVED]
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1FB0; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1FB4; // int32
            }
            // class C_PointEntity has zero fields
            // parent: C_BaseEntity
            // class C_SingleplayRules has zero fields
            // parent: None
            // class CLogicalEntity has zero fields
            // parent: C_BaseEntity
            // class C_PrecipitationBlocker has zero fields
            // parent: C_BaseModelEntity
            // class C_CSGO_CounterTerroristTeamIntroCamera has zero fields
            // parent: C_CSGO_TeamPreviewCamera
            // class C_SoundOpvarSetPathCornerEntity has zero fields
            // parent: C_SoundOpvarSetPointEntity
            // parent: CPlayerPawnComponent
            // field count: 4
            //
            // metadata: [REMOVED]
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
            }
            // class C_WeaponNegev has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_WeaponFiveSeven has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_WeaponSawedoff has zero fields
            // parent: C_CSWeaponBaseShotgun
            // class C_TriggerVolume has zero fields
            // parent: C_BaseModelEntity
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
            // class C_WeaponMP9 has zero fields
            // parent: C_CSWeaponBaseGun
            // class C_DynamicPropAlias_prop_dynamic_override has zero fields
            // parent: C_DynamicProp
            // class CEnvSoundscapeTriggerable has zero fields
            // parent: CEnvSoundscape
            // parent: C_BaseEntity
            // field count: 5
            //
            // metadata: [REMOVED]
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x628; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x62C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x630; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x634; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x635; // char[18]
            }
            // class C_AK47 has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BaseEntity
            // field count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x600; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x604; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x610; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x61C; // float32
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x620; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x624; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x628; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x62C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x638; // Vector
            }
            // parent: C_BaseEntity
            // field count: 10
            //
            // metadata: [REMOVED]
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x5F8; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x604; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x610; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x640; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x64C; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x658; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x668; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x678; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x688; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x689; // bool
            }
            // parent: C_BaseEntity
            // field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x5F8; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x5FC; // CHandle<C_SkyCamera>
            }
            // class C_IncendiaryGrenade has zero fields
            // parent: C_MolotovGrenade
            // parent: CBaseFilter
            // field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x650; // CUtlSymbolLarge
            }
            // parent: C_PointCamera
            // field count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x658; // float32
            }
            // parent: C_BaseEntity
            // field count: 26
            //
            // metadata: [REMOVED]
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x5F8; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x5FC; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x600; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x601; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x608; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x610; // float32
                constexpr std::ptrdiff_t m_bActive = 0x614; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x615; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x618; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x61C; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x620; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x624; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x628; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x62C; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x62D; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x62E; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x630; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x634; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x638; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x63C; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x640; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x644; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x648; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x64C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x650; // C_PointCamera*
            }
            // parent: CLogicalEntity
            // field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x5F8; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x628; // CEntityIOOutput
            }
            // parent: 
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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
            // parent: C_PointEntity
            // field count: 14
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x5F8; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x5FC; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x600; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x604; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x605; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x60C; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x610; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x611; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x614; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x618; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x61C; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x620; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x624; // float32
            }
            // class C_CSGO_EndOfMatchCamera has zero fields
            // parent: C_CSGO_TeamPreviewCamera
            // parent: C_BaseFlex
            // field count: 12
            //
            // metadata: [REMOVED]
            namespace C_BaseGrenade {
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1368; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1369; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x136A; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x136C; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x1370; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x1374; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x1378; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1380; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1388; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x1394; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x13AC; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x13B0; // CHandle<C_CSPlayerPawn>
            }
            // parent: C_ModelPointEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            namespace C_PlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0xEB0; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0xEB4; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0xEB8; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0xEBC; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0xEC0; // Vector
                constexpr std::ptrdiff_t m_vecStart = 0xECC; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0xED8; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0xEE4; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0xEF0; // int32
                constexpr std::ptrdiff_t m_nEntity = 0xEF4; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0xEF8; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0xEFC; // float32
                constexpr std::ptrdiff_t m_nTintID = 0xF00; // int32
                constexpr std::ptrdiff_t m_nVersion = 0xF04; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0xF05; // uint8[128]
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0xF90; // CPlayerSprayDecalRenderHelper
            }
            // parent: 
            // field count: 11
            //
            // metadata: [REMOVED]
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pPrev = 0x50; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x68; // CEntityIdentity*
            }
            // parent: None
            // field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
            }
            // class C_CS2HudModelArms has zero fields
            // parent: C_CS2HudModelBase
            // parent: None
            // field count: 14
            //
            // metadata: [REMOVED]
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float32
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // float32
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32
                constexpr std::ptrdiff_t m_flUseRange = 0x16C; // float32
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float32
                constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float32
            }
            // class C_LightSpotEntity has zero fields
            // parent: C_LightEntity
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
            }
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
            // parent: C_BaseModelEntity
            // field count: 23
            //
            // metadata: [REMOVED]
            namespace C_Sprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0xEB8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0xEBC; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0xEC8; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0xED8; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0xEE0; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0xEE4; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xEE8; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xEEC; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xEF0; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0xEF4; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0xEF8; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0xEFC; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0xF00; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xF04; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0xF08; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0xF0C; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xF10; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0xF20; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0xF24; // int32
            }
            // parent: C_BaseEntity
            // field count: 2
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x5F8; // CUtlString
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x600; // float32
            }
            // class C_WeaponGlock has zero fields
            // parent: C_CSWeaponBaseGun
            // parent: C_BreakableProp
            // field count: 1
            //
            // metadata: [REMOVED]
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x1300; // bool
            }
            // parent: CBaseFilter
            // field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x650; // int32
            }
            // parent: None
            // field count: 30
            //
            // metadata: [REMOVED]
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x1E9; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1F0; // CAttachmentNameSymbolWithStorage
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x2F0; // CUtlString
                constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x2F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x3D8; // uint8
                constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x3DC; // float32
                constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x3E0; // float32
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x3E4; // bool
                constexpr std::ptrdiff_t m_iFlags = 0x3E5; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x3E6; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x3E7; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x3E8; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x3EC; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x3F0; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x3F4; // int32
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x3F8; // bool
                constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x3F9; // bool
                constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x3FA; // bool
                constexpr std::ptrdiff_t m_iWeight = 0x3FC; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x400; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x401; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x404; // RumbleEffect_t
                constexpr std::ptrdiff_t m_flDropSpeed = 0x408; // float32
                constexpr std::ptrdiff_t m_iSlot = 0x40C; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x410; // int32
                constexpr std::ptrdiff_t m_aShootSounds = 0x418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // class C_CSGO_EndOfMatchLineupEnd has zero fields
            // parent: C_CSGO_EndOfMatchLineupEndpoint
            // class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel has zero fields
            // parent: C_CSGO_PreviewPlayer
            // class C_SmokeGrenade has zero fields
            // parent: C_BaseCSGrenade
            // class CInfoParticleTarget has zero fields
            // parent: C_PointEntity
            // class CCSPlayer_DamageReactServices has zero fields
            // parent: CPlayerPawnComponent
            // parent: C_BaseClientUIEntity
            // field count: 29
            //
            // metadata: [REMOVED]
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xEE8; // bool
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xEE9; // bool
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xEEA; // bool
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xEF0; // CTransform
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0x1080; // CPointOffScreenIndicatorUi*
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x10A8; // bool
                constexpr std::ptrdiff_t m_bLit = 0x10A9; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x10AA; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x10AC; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x10B0; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x10B4; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x10B8; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x10BC; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x10C0; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x10C4; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x10C8; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x10CC; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x10D0; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x10D8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0x10F0; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x10F1; // bool
                constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x10F2; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x10F3; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x10F4; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x10F5; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x10F6; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x10F7; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x10F8; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x10FC; // int32
            }
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x5F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x620; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x624; // bool
            }
            // parent: C_BaseEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_CommandContext = 0x600; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x6A8; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x6B0; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x6B4; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x6B8; // bool
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x6BC; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x6C0; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x6C4; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x6C8; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x6E0; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x6E4; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x6E8; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x770; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x778; // bool
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x779; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x77C; // uint32
            }
            // class C_CSGO_EndOfMatchLineupEndpoint has zero fields
            // parent: C_BaseEntity
        }
    }
}
