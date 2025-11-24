//  dumped by https://moonlightrblx.github.io/sdkviewer
// timestamp: 2025-11-24 15:57:49.568833300 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // module: client.dll
        // class count: 490
        // enum count: 8
        pub mod client_dll {
            // alignment: 4
            // member count: 15
            #[repr(u32)]
            pub enum CompositeMaterialInputLooseVariableType_t {
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
            }
            // alignment: 4
            // member count: 8
            #[repr(u32)]
            pub enum CompositeMaterialInputTextureType_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6,
                INPUT_TEXTURE_TYPE_POSITION = 0x7
            }
            // alignment: 4
            // member count: 9
            #[repr(u32)]
            pub enum InventoryNodeType_t {
                NODE_TYPE_INVALID = 0x0,
                VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
                VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
                VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
                VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
                CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
                CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
                CONCRETE_NODE_SCHEMA_STICKER = 0x7,
                CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
            }
            // alignment: 4
            // member count: 6
            #[repr(u32)]
            pub enum CompositeMaterialInputContainerSourceType_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            }
            // alignment: 4
            // member count: 10
            #[repr(u32)]
            pub enum CompMatPropertyMutatorType_t {
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
            }
            // alignment: 4
            // member count: 2
            #[repr(u32)]
            pub enum CompositeMaterialVarSystemVar_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            }
            // alignment: 4
            // member count: 6
            #[repr(u32)]
            pub enum CompositeMaterialMatchFilterType_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            }
            // alignment: 4
            // member count: 3
            #[repr(u32)]
            pub enum CompMatPropertyMutatorConditionType_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            }
            // parent: C_CSGO_TeamPreviewCharacterPosition
            // field count: 0
            pub mod C_CSGO_TeamIntroCharacterPosition {
            }
            // parent: C_Inferno
            // field count: 0
            pub mod C_FireCrackerBlast {
            }
            // parent: CCSGO_WingmanIntroCharacterPosition
            // field count: 0
            pub mod CCSGO_WingmanIntroCounterTerroristPosition {
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
            // field count: 1
            pub mod C_SceneEntity__QueuedEvents_t {
                pub const starttime: usize = 0x0; // float32
            }
            // parent: CPlayerPawnComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_PingServices {
                pub const m_hPlayerPing: usize = 0x40; // CHandle<C_PlayerPing>
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CEconItemAttribute {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            }
            // parent: None
            // field count: 0
            pub mod CBaseTriggerAPI {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod PredictedDamageTag_t {
                pub const nTagTick: usize = 0x30; // GameTick_t
                pub const flFlinchModSmall: usize = 0x34; // float32
                pub const flFlinchModLarge: usize = 0x38; // float32
                pub const flFriendlyFireDamageReductionRatio: usize = 0x3C; // float32
            }
            // parent: C_DynamicProp
            // field count: 0
            pub mod CFuncRetakeBarrier {
            }
            // parent: 
            // field count: 15
            //
            // metadata: [REMOVED]
            pub mod C_EnvWindShared {
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_iWindSeed: usize = 0xC; // uint32
                pub const m_iMinWind: usize = 0x10; // uint16
                pub const m_iMaxWind: usize = 0x12; // uint16
                pub const m_windRadius: usize = 0x14; // int32
                pub const m_iMinGust: usize = 0x18; // uint16
                pub const m_iMaxGust: usize = 0x1A; // uint16
                pub const m_flMinGustDelay: usize = 0x1C; // float32
                pub const m_flMaxGustDelay: usize = 0x20; // float32
                pub const m_flGustDuration: usize = 0x24; // float32
                pub const m_iGustDirChange: usize = 0x28; // uint16
                pub const m_iInitialWindDir: usize = 0x2A; // uint16
                pub const m_flInitialWindSpeed: usize = 0x2C; // float32
                pub const m_location: usize = 0x30; // Vector
                pub const m_hEntOwner: usize = 0x3C; // CHandle<C_BaseEntity>
            }
            // parent: C_BaseEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod C_SkyCamera {
                pub const m_skyboxData: usize = 0x5F8; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x688; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x68C; // bool
                pub const m_pNext: usize = 0x690; // C_SkyCamera*
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // parent: C_BaseModelEntity
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod C_FuncRotating {
            }
            // parent: C_BaseEntity
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod C_SoundOpvarSetPointBase {
                pub const m_iszStackName: usize = 0x5F8; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x600; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x608; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x610; // int32
                pub const m_bUseAutoCompare: usize = 0x614; // bool
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            pub mod C_EnvCubemapFog {
                pub const m_flEndDistance: usize = 0x5F8; // float32
                pub const m_flStartDistance: usize = 0x5FC; // float32
                pub const m_flFogFalloffExponent: usize = 0x600; // float32
                pub const m_bHeightFogEnabled: usize = 0x604; // bool
                pub const m_flFogHeightWidth: usize = 0x608; // float32
                pub const m_flFogHeightEnd: usize = 0x60C; // float32
                pub const m_flFogHeightStart: usize = 0x610; // float32
                pub const m_flFogHeightExponent: usize = 0x614; // float32
                pub const m_flLODBias: usize = 0x618; // float32
                pub const m_bActive: usize = 0x61C; // bool
                pub const m_bStartDisabled: usize = 0x61D; // bool
                pub const m_flFogMaxOpacity: usize = 0x620; // float32
                pub const m_nCubemapSourceType: usize = 0x624; // int32
                pub const m_hSkyMaterial: usize = 0x628; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x630; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x640; // bool
                pub const m_bFirstTime: usize = 0x641; // bool
            }
            // parent: C_CSGO_TeamSelectCharacterPosition
            // field count: 0
            pub mod C_CSGO_TeamSelectTerroristPosition {
            }
            // parent: None
            // field count: 5
            pub mod C_BaseFlex__Emphasized_Phoneme {
                pub const m_sClassName: usize = 0x0; // CUtlString
                pub const m_flAmount: usize = 0x18; // float32
                pub const m_bRequired: usize = 0x1C; // bool
                pub const m_bBasechecked: usize = 0x1D; // bool
                pub const m_bValid: usize = 0x1E; // bool
            }
            // parent: C_ParticleSystem
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod C_EnvParticleGlow {
                pub const m_flAlphaScale: usize = 0x1460; // float32
                pub const m_flRadiusScale: usize = 0x1464; // float32
                pub const m_flSelfIllumScale: usize = 0x1468; // float32
                pub const m_ColorTint: usize = 0x146C; // Color
                pub const m_hTextureOverride: usize = 0x1470; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod CCS_PortraitWorldCallbackHandler {
            }
            // parent: CPlayerControllerComponent
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod CCSPlayerController_InventoryServices {
                pub const m_vecNetworkableLoadout: usize = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                pub const m_unMusicID: usize = 0x58; // uint16
                pub const m_rank: usize = 0x5C; // MedalRank_t[6]
                pub const m_nPersonaDataPublicLevel: usize = 0x74; // int32
                pub const m_nPersonaDataPublicCommendsLeader: usize = 0x78; // int32
                pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x7C; // int32
                pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x80; // int32
                pub const m_nPersonaDataXpTrailLevel: usize = 0x84; // int32
                pub const m_vecServerAuthoritativeWeaponSlots: usize = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // parent: None
            // field count: 1
            pub mod C_EconEntity__AttachedModelData_t {
                pub const m_iModelDisplayFlags: usize = 0x0; // int32
            }
            // parent: None
            // field count: 0
            pub mod CPulse_ResumePoint {
            }
            // parent: C_BaseTrigger
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod CTriggerFan {
                pub const m_vFanOriginOffset: usize = 0xFF0; // Vector
                pub const m_vDirection: usize = 0xFFC; // Vector
                pub const m_bPushTowardsInfoTarget: usize = 0x1008; // bool
                pub const m_bPushAwayFromInfoTarget: usize = 0x1009; // bool
                pub const m_qNoiseDelta: usize = 0x1010; // Quaternion
                pub const m_hInfoFan: usize = 0x1020; // CHandle<CInfoFan>
                pub const m_flForce: usize = 0x1024; // float32
                pub const m_bFalloff: usize = 0x1028; // bool
                pub const m_RampTimer: usize = 0x1030; // CountdownTimer
            }
            // parent: CBaseAnimGraph
            // field count: 0
            pub mod C_HostageCarriableProp {
            }
            // parent: None
            // field count: 6
            pub mod C_BulletHitModel {
                pub const m_matLocal: usize = 0x1158; // matrix3x4_t
                pub const m_iBoneIndex: usize = 0x1188; // int32
                pub const m_hPlayerParent: usize = 0x118C; // CHandle<C_BaseEntity>
                pub const m_bIsHit: usize = 0x1190; // bool
                pub const m_flTimeCreated: usize = 0x1194; // float32
                pub const m_vecStartPos: usize = 0x1198; // Vector
            }
            // parent: C_FuncBrush
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_FuncElectrifiedVolume {
                pub const m_nAmbientEffect: usize = 0xEB0; // ParticleIndex_t
                pub const m_EffectName: usize = 0xEB8; // CUtlSymbolLarge
                pub const m_bState: usize = 0xEC0; // bool
            }
            // parent: C_BaseEntity
            // field count: 17
            //
            // metadata: [REMOVED]
            pub mod C_MapVetoPickController {
                pub const m_nDraftType: usize = 0x608; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x60C; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x610; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x710; // int32[7]
                pub const m_nAccountIDs: usize = 0x72C; // int32[64]
                pub const m_nMapId0: usize = 0x82C; // int32[64]
                pub const m_nMapId1: usize = 0x92C; // int32[64]
                pub const m_nMapId2: usize = 0xA2C; // int32[64]
                pub const m_nMapId3: usize = 0xB2C; // int32[64]
                pub const m_nMapId4: usize = 0xC2C; // int32[64]
                pub const m_nMapId5: usize = 0xD2C; // int32[64]
                pub const m_nStartingSide0: usize = 0xE2C; // int32[64]
                pub const m_nCurrentPhase: usize = 0xF2C; // int32
                pub const m_nPhaseStartTick: usize = 0xF30; // int32
                pub const m_nPhaseDurationTicks: usize = 0xF34; // int32
                pub const m_nPostDataUpdateTick: usize = 0xF38; // int32
                pub const m_bDisabledHud: usize = 0xF3C; // bool
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            pub mod C_EnvVolumetricFogVolume {
                pub const m_bActive: usize = 0x5F8; // bool
                pub const m_vBoxMins: usize = 0x5FC; // Vector
                pub const m_vBoxMaxs: usize = 0x608; // Vector
                pub const m_bStartDisabled: usize = 0x614; // bool
                pub const m_bIndirectUseLPVs: usize = 0x615; // bool
                pub const m_flStrength: usize = 0x618; // float32
                pub const m_nFalloffShape: usize = 0x61C; // int32
                pub const m_flFalloffExponent: usize = 0x620; // float32
                pub const m_flHeightFogDepth: usize = 0x624; // float32
                pub const m_fHeightFogEdgeWidth: usize = 0x628; // float32
                pub const m_fIndirectLightStrength: usize = 0x62C; // float32
                pub const m_fSunLightStrength: usize = 0x630; // float32
                pub const m_fNoiseStrength: usize = 0x634; // float32
                pub const m_TintColor: usize = 0x638; // Color
                pub const m_bOverrideTintColor: usize = 0x63C; // bool
                pub const m_bOverrideIndirectLightStrength: usize = 0x63D; // bool
                pub const m_bOverrideSunLightStrength: usize = 0x63E; // bool
                pub const m_bOverrideNoiseStrength: usize = 0x63F; // bool
            }
            // parent: C_CSGO_TeamPreviewCharacterPosition
            // field count: 0
            pub mod C_CSGO_EndOfMatchCharacterPosition {
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_PlaySequence {
                pub const m_SequenceName: usize = 0x48; // CUtlString
                pub const m_PulseAnimEvents: usize = 0x50; // PulseNodeDynamicOutflows_t
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            }
            // parent: None
            // field count: 0
            pub mod C_BaseEntityAPI {
            }
            // parent: C_BaseModelEntity
            // field count: 76
            //
            // metadata: [REMOVED]
            pub mod C_BarnLight {
                pub const m_bEnabled: usize = 0xEB0; // bool
                pub const m_nColorMode: usize = 0xEB4; // int32
                pub const m_Color: usize = 0xEB8; // Color
                pub const m_flColorTemperature: usize = 0xEBC; // float32
                pub const m_flBrightness: usize = 0xEC0; // float32
                pub const m_flBrightnessScale: usize = 0xEC4; // float32
                pub const m_nDirectLight: usize = 0xEC8; // int32
                pub const m_nBakedShadowIndex: usize = 0xECC; // int32
                pub const m_nLightPathUniqueId: usize = 0xED0; // int32
                pub const m_nLightMapUniqueId: usize = 0xED4; // int32
                pub const m_nLuminaireShape: usize = 0xED8; // int32
                pub const m_flLuminaireSize: usize = 0xEDC; // float32
                pub const m_flLuminaireAnisotropy: usize = 0xEE0; // float32
                pub const m_LightStyleString: usize = 0xEE8; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0xEF0; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0xEF8; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0xF10; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0xF28; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_StyleEvent: usize = 0xF40; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0xFE0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0xFE8; // float32
                pub const m_flSoftX: usize = 0xFEC; // float32
                pub const m_flSoftY: usize = 0xFF0; // float32
                pub const m_flSkirt: usize = 0xFF4; // float32
                pub const m_flSkirtNear: usize = 0xFF8; // float32
                pub const m_vSizeParams: usize = 0xFFC; // Vector
                pub const m_flRange: usize = 0x1008; // float32
                pub const m_vShear: usize = 0x100C; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0x1018; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0x101C; // Vector
                pub const m_nCastShadows: usize = 0x1028; // int32
                pub const m_nShadowMapSize: usize = 0x102C; // int32
                pub const m_nShadowPriority: usize = 0x1030; // int32
                pub const m_bContactShadow: usize = 0x1034; // bool
                pub const m_bForceShadowsEnabled: usize = 0x1035; // bool
                pub const m_nBounceLight: usize = 0x1038; // int32
                pub const m_flBounceScale: usize = 0x103C; // float32
                pub const m_flMinRoughness: usize = 0x1040; // float32
                pub const m_vAlternateColor: usize = 0x1044; // Vector
                pub const m_fAlternateColorBrightness: usize = 0x1050; // float32
                pub const m_nFog: usize = 0x1054; // int32
                pub const m_flFogStrength: usize = 0x1058; // float32
                pub const m_nFogShadows: usize = 0x105C; // int32
                pub const m_flFogScale: usize = 0x1060; // float32
                pub const m_bFogMixedShadows: usize = 0x1064; // bool
                pub const m_flFadeSizeStart: usize = 0x1068; // float32
                pub const m_flFadeSizeEnd: usize = 0x106C; // float32
                pub const m_flShadowFadeSizeStart: usize = 0x1070; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0x1074; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0x1078; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x107C; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x1088; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x1094; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x10A0; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x10AC; // Vector
                pub const m_nPrecomputedSubFrusta: usize = 0x10B8; // int32
                pub const m_vPrecomputedOBBOrigin0: usize = 0x10BC; // Vector
                pub const m_vPrecomputedOBBAngles0: usize = 0x10C8; // QAngle
                pub const m_vPrecomputedOBBExtent0: usize = 0x10D4; // Vector
                pub const m_vPrecomputedOBBOrigin1: usize = 0x10E0; // Vector
                pub const m_vPrecomputedOBBAngles1: usize = 0x10EC; // QAngle
                pub const m_vPrecomputedOBBExtent1: usize = 0x10F8; // Vector
                pub const m_vPrecomputedOBBOrigin2: usize = 0x1104; // Vector
                pub const m_vPrecomputedOBBAngles2: usize = 0x1110; // QAngle
                pub const m_vPrecomputedOBBExtent2: usize = 0x111C; // Vector
                pub const m_vPrecomputedOBBOrigin3: usize = 0x1128; // Vector
                pub const m_vPrecomputedOBBAngles3: usize = 0x1134; // QAngle
                pub const m_vPrecomputedOBBExtent3: usize = 0x1140; // Vector
                pub const m_vPrecomputedOBBOrigin4: usize = 0x114C; // Vector
                pub const m_vPrecomputedOBBAngles4: usize = 0x1158; // QAngle
                pub const m_vPrecomputedOBBExtent4: usize = 0x1164; // Vector
                pub const m_vPrecomputedOBBOrigin5: usize = 0x1170; // Vector
                pub const m_vPrecomputedOBBAngles5: usize = 0x117C; // QAngle
                pub const m_vPrecomputedOBBExtent5: usize = 0x1188; // Vector
                pub const m_bInitialBoneSetup: usize = 0x11D8; // bool
                pub const m_VisClusters: usize = 0x11E0; // C_NetworkUtlVectorBase<uint16>
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_LerpCameraSettings {
                pub const m_flSeconds: usize = 0x90; // float32
                pub const m_Start: usize = 0x94; // PointCameraSettings_t
                pub const m_End: usize = 0xA4; // PointCameraSettings_t
            }
            // parent: C_PointClientUIWorldPanel
            // field count: 4
            pub mod CPointOffScreenIndicatorUi {
                pub const m_bBeenEnabled: usize = 0x1100; // bool
                pub const m_bHide: usize = 0x1101; // bool
                pub const m_flSeenTargetTime: usize = 0x1104; // float32
                pub const m_pTargetPanel: usize = 0x1108; // C_PointClientUIWorldPanel*
            }
            // parent: CPlayer_UseServices
            // field count: 0
            pub mod CCSObserver_UseServices {
            }
            // parent: C_BaseTrigger
            // field count: 12
            //
            // metadata: [REMOVED]
            pub mod C_PostProcessingVolume {
                pub const m_hPostSettings: usize = 0x1000; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0x1008; // float32
                pub const m_flMinLogExposure: usize = 0x100C; // float32
                pub const m_flMaxLogExposure: usize = 0x1010; // float32
                pub const m_flMinExposure: usize = 0x1014; // float32
                pub const m_flMaxExposure: usize = 0x1018; // float32
                pub const m_flExposureCompensation: usize = 0x101C; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0x1020; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0x1024; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x1028; // float32
                pub const m_bMaster: usize = 0x102C; // bool
                pub const m_bExposureControl: usize = 0x102D; // bool
            }
            // parent: CPlayer_UseServices
            // field count: 0
            pub mod CCSPlayer_UseServices {
            }
            // parent: C_CSGO_TeamPreviewCamera
            // field count: 0
            pub mod C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_PickBestOutflowSelector {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            }
            // parent: C_PointEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CInfoFan {
                pub const m_fFanForceMaxRadius: usize = 0x638; // float32
                pub const m_fFanForceMinRadius: usize = 0x63C; // float32
                pub const m_flCurveDistRange: usize = 0x640; // float32
                pub const m_FanForceCurveString: usize = 0x648; // CUtlSymbolLarge
            }
            // parent: C_BaseEntity
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod C_VoteController {
                pub const m_iActiveIssueIndex: usize = 0x608; // int32
                pub const m_iOnlyTeamToVote: usize = 0x60C; // int32
                pub const m_nVoteOptionCount: usize = 0x610; // int32[5]
                pub const m_nPotentialVotes: usize = 0x624; // int32
                pub const m_bVotesDirty: usize = 0x628; // bool
                pub const m_bTypeDirty: usize = 0x629; // bool
                pub const m_bIsYesNoVote: usize = 0x62A; // bool
            }
            // parent: C_BasePlayerPawn
            // field count: 26
            //
            // metadata: [REMOVED]
            pub mod C_CSPlayerPawnBase {
                pub const m_pPingServices: usize = 0x15D8; // CCSPlayer_PingServices*
                pub const m_previousPlayerState: usize = 0x15E0; // CSPlayerState
                pub const m_iPlayerState: usize = 0x15E4; // CSPlayerState
                pub const m_bHasMovedSinceSpawn: usize = 0x15E8; // bool
                pub const m_flLastSpawnTimeIndex: usize = 0x15EC; // GameTime_t
                pub const m_iProgressBarDuration: usize = 0x15F0; // int32
                pub const m_flProgressBarStartTime: usize = 0x15F4; // float32
                pub const m_flClientDeathTime: usize = 0x15F8; // GameTime_t
                pub const m_flFlashBangTime: usize = 0x15FC; // float32
                pub const m_flFlashScreenshotAlpha: usize = 0x1600; // float32
                pub const m_flFlashOverlayAlpha: usize = 0x1604; // float32
                pub const m_bFlashBuildUp: usize = 0x1608; // bool
                pub const m_bFlashDspHasBeenCleared: usize = 0x1609; // bool
                pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x160A; // bool
                pub const m_flFlashMaxAlpha: usize = 0x160C; // float32
                pub const m_flFlashDuration: usize = 0x1610; // float32
                pub const m_flClientHealthFadeChangeTimestamp: usize = 0x1614; // GameTime_t
                pub const m_nClientHealthFadeParityValue: usize = 0x1618; // int32
                pub const m_fNextThinkPushAway: usize = 0x161C; // float32
                pub const m_flCurrentMusicStartTime: usize = 0x1624; // float32
                pub const m_flMusicRoundStartTime: usize = 0x1628; // float32
                pub const m_bDeferStartMusicOnWarmup: usize = 0x162C; // bool
                pub const m_flLastSmokeOverlayAlpha: usize = 0x1630; // float32
                pub const m_flLastSmokeAge: usize = 0x1634; // float32
                pub const m_vLastSmokeOverlayColor: usize = 0x1638; // Vector
                pub const m_hOriginalController: usize = 0x1660; // CHandle<CCSPlayerController>
            }
            // parent: C_CSWeaponBase
            // field count: 10
            //
            // metadata: [REMOVED]
            pub mod C_C4 {
                pub const m_activeLightParticleIndex: usize = 0x1F80; // ParticleIndex_t
                pub const m_eActiveLightEffect: usize = 0x1F84; // C4LightEffect_t
                pub const m_bStartedArming: usize = 0x1F88; // bool
                pub const m_fArmedTime: usize = 0x1F8C; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x1F90; // bool
                pub const m_bIsPlantingViaUse: usize = 0x1F91; // bool
                pub const m_entitySpottedState: usize = 0x1F98; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1FB0; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x1FB4; // bool[7]
                pub const m_bBombPlanted: usize = 0x1FBB; // bool
            }
            // parent: CBaseProp
            // field count: 28
            //
            // metadata: [REMOVED]
            pub mod C_BreakableProp {
                pub const m_CPropDataComponent: usize = 0x1190; // CPropDataComponent
                pub const m_OnStartDeath: usize = 0x11D0; // CEntityIOOutput
                pub const m_OnBreak: usize = 0x11F8; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0x1220; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0x1248; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0x1270; // float32
                pub const m_iMinHealthDmg: usize = 0x1274; // int32
                pub const m_flPressureDelay: usize = 0x1278; // float32
                pub const m_flDefBurstScale: usize = 0x127C; // float32
                pub const m_vDefBurstOffset: usize = 0x1280; // Vector
                pub const m_hBreaker: usize = 0x128C; // CHandle<C_BaseEntity>
                pub const m_PerformanceMode: usize = 0x1290; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0x1294; // GameTime_t
                pub const m_BreakableContentsType: usize = 0x1298; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0x12A0; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0x12A8; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0x12B0; // bool
                pub const m_explodeDamage: usize = 0x12B4; // float32
                pub const m_explodeRadius: usize = 0x12B8; // float32
                pub const m_explosionDelay: usize = 0x12C0; // float32
                pub const m_explosionBuildupSound: usize = 0x12C8; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0x12D0; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0x12D8; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0x12E0; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0x12E8; // CHandle<C_BasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0x12EC; // GameTime_t
                pub const m_flDefaultFadeScale: usize = 0x12F0; // float32
                pub const m_hLastAttacker: usize = 0x12F4; // CHandle<C_BaseEntity>
            }
            // parent: CCSGO_WingmanIntroCharacterPosition
            // field count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // parent: None
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod CPrecipitationVData {
                pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_flInnerDistance: usize = 0x108; // float32
                pub const m_nAttachType: usize = 0x10C; // ParticleAttachment_t
                pub const m_bBatchSameVolumeType: usize = 0x110; // bool
                pub const m_nRTEnvCP: usize = 0x114; // int32
                pub const m_nRTEnvCPComponent: usize = 0x118; // int32
                pub const m_szModifier: usize = 0x120; // CUtlString
            }
            // parent: None
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod C_RetakeGameRules {
                pub const m_nMatchSeed: usize = 0x138; // int32
                pub const m_bBlockersPresent: usize = 0x13C; // bool
                pub const m_bRoundInProgress: usize = 0x13D; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x140; // int32
                pub const m_iBombSite: usize = 0x144; // int32
                pub const m_hBombPlanter: usize = 0x148; // CHandle<C_CSPlayerPawn>
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            }
            // parent: C_SoundAreaEntityBase
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_SoundAreaEntitySphere {
                pub const m_flRadius: usize = 0x620; // float32
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_EntFire {
                pub const m_Input: usize = 0x48; // CUtlString
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponAWP {
            }
            // parent: C_BaseToggle
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_BaseButton {
                pub const m_glowEntity: usize = 0xEB0; // CHandle<C_BaseModelEntity>
                pub const m_usable: usize = 0xEB4; // bool
                pub const m_szDisplayText: usize = 0xEB8; // CUtlSymbolLarge
            }
            // parent: CPlayer_ObserverServices
            // field count: 1
            pub mod CCSObserver_ObserverServices {
                pub const m_obsInterpState: usize = 0x5C; // ObserverInterpState_t
            }
            // parent: CEntityComponent
            // field count: 1
            pub mod CHitboxComponent {
                pub const m_flBoundsExpandRadius: usize = 0x14; // float32
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_CSMinimapBoundary {
            }
            // parent: CEntityComponent
            // field count: 0
            pub mod CPathQueryComponent {
            }
            // parent: C_BaseTrigger
            // field count: 8
            pub mod C_Precipitation {
                pub const m_flDensity: usize = 0xFF0; // float32
                pub const m_flParticleInnerDist: usize = 0x1000; // float32
                pub const m_pParticleDef: usize = 0x1008; // char*
                pub const m_tParticlePrecipTraceTimer: usize = 0x1030; // TimedEvent[1]
                pub const m_bActiveParticlePrecipEmitter: usize = 0x1038; // bool[1]
                pub const m_bParticlePrecipInitialized: usize = 0x1039; // bool
                pub const m_bHasSimulatedSinceLastSceneObjectUpdate: usize = 0x103A; // bool
                pub const m_nAvailableSheetSequencesMaxIndex: usize = 0x103C; // int32
            }
            // parent: CLogicalEntity
            // field count: 5
            pub mod CLogicRelay {
                pub const m_bDisabled: usize = 0x5F8; // bool
                pub const m_bWaitForRefire: usize = 0x5F9; // bool
                pub const m_bTriggerOnce: usize = 0x5FA; // bool
                pub const m_bFastRetrigger: usize = 0x5FB; // bool
                pub const m_bPassthoughCaller: usize = 0x5FC; // bool
            }
            // parent: 
            // field count: 6
            pub mod SequenceHistory_t {
                pub const m_hSequence: usize = 0x0; // HSequence
                pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x8; // float32
                pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x10; // float32
                pub const m_flCyclesPerSecond: usize = 0x14; // float32
            }
            // parent: CPlayerPawnComponent
            // field count: 0
            pub mod CPlayer_ItemServices {
            }
            // parent: None
            // field count: 4
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponUMP45 {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponG3SG1 {
            }
            // parent: C_BaseModelEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_SpotlightEnd {
                pub const m_flLightScale: usize = 0xEB0; // float32
                pub const m_Radius: usize = 0xEB4; // float32
            }
            // parent: CBaseAnimGraph
            // field count: 23
            //
            // metadata: [REMOVED]
            pub mod C_Fish {
                pub const m_pos: usize = 0x1158; // Vector
                pub const m_vel: usize = 0x1164; // Vector
                pub const m_angles: usize = 0x1170; // QAngle
                pub const m_localLifeState: usize = 0x117C; // int32
                pub const m_deathDepth: usize = 0x1180; // float32
                pub const m_deathAngle: usize = 0x1184; // float32
                pub const m_buoyancy: usize = 0x1188; // float32
                pub const m_wiggleTimer: usize = 0x1190; // CountdownTimer
                pub const m_wigglePhase: usize = 0x11A8; // float32
                pub const m_wiggleRate: usize = 0x11AC; // float32
                pub const m_actualPos: usize = 0x11B0; // Vector
                pub const m_actualAngles: usize = 0x11BC; // QAngle
                pub const m_poolOrigin: usize = 0x11C8; // Vector
                pub const m_waterLevel: usize = 0x11D4; // float32
                pub const m_gotUpdate: usize = 0x11D8; // bool
                pub const m_x: usize = 0x11DC; // float32
                pub const m_y: usize = 0x11E0; // float32
                pub const m_z: usize = 0x11E4; // float32
                pub const m_angle: usize = 0x11E8; // float32
                pub const m_errorHistory: usize = 0x11EC; // float32[20]
                pub const m_errorHistoryIndex: usize = 0x123C; // int32
                pub const m_errorHistoryCount: usize = 0x1240; // int32
                pub const m_averageError: usize = 0x1244; // float32
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponFamas {
            }
            // parent: C_BaseEntity
            // field count: 36
            //
            // metadata: [REMOVED]
            pub mod C_EnvVolumetricFogController {
                pub const m_flScattering: usize = 0x5F8; // float32
                pub const m_TintColor: usize = 0x5FC; // Color
                pub const m_flAnisotropy: usize = 0x600; // float32
                pub const m_flFadeSpeed: usize = 0x604; // float32
                pub const m_flDrawDistance: usize = 0x608; // float32
                pub const m_flFadeInStart: usize = 0x60C; // float32
                pub const m_flFadeInEnd: usize = 0x610; // float32
                pub const m_flIndirectStrength: usize = 0x614; // float32
                pub const m_nVolumeDepth: usize = 0x618; // int32
                pub const m_fFirstVolumeSliceThickness: usize = 0x61C; // float32
                pub const m_nIndirectTextureDimX: usize = 0x620; // int32
                pub const m_nIndirectTextureDimY: usize = 0x624; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x628; // int32
                pub const m_vBoxMins: usize = 0x62C; // Vector
                pub const m_vBoxMaxs: usize = 0x638; // Vector
                pub const m_bActive: usize = 0x644; // bool
                pub const m_flStartAnisoTime: usize = 0x648; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x64C; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x650; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x654; // float32
                pub const m_flStartScattering: usize = 0x658; // float32
                pub const m_flStartDrawDistance: usize = 0x65C; // float32
                pub const m_flDefaultAnisotropy: usize = 0x660; // float32
                pub const m_flDefaultScattering: usize = 0x664; // float32
                pub const m_flDefaultDrawDistance: usize = 0x668; // float32
                pub const m_bStartDisabled: usize = 0x66C; // bool
                pub const m_bEnableIndirect: usize = 0x66D; // bool
                pub const m_bIsMaster: usize = 0x66E; // bool
                pub const m_hFogIndirectTexture: usize = 0x670; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x678; // int32
                pub const m_fNoiseSpeed: usize = 0x67C; // float32
                pub const m_fNoiseStrength: usize = 0x680; // float32
                pub const m_vNoiseScale: usize = 0x684; // Vector
                pub const m_fWindSpeed: usize = 0x690; // float32
                pub const m_vWindDirection: usize = 0x694; // Vector
                pub const m_bFirstTime: usize = 0x6A0; // bool
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
            // parent: C_BaseEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_EnvDetailController {
                pub const m_flFadeStartDist: usize = 0x5F8; // float32
                pub const m_flFadeEndDist: usize = 0x5FC; // float32
            }
            // parent: C_BaseEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod C_EnvWindVolume {
                pub const m_bActive: usize = 0x5F8; // bool
                pub const m_vBoxMins: usize = 0x5FC; // Vector
                pub const m_vBoxMaxs: usize = 0x608; // Vector
                pub const m_bStartDisabled: usize = 0x614; // bool
                pub const m_nShape: usize = 0x618; // int32
                pub const m_fWindSpeedMultiplier: usize = 0x61C; // float32
                pub const m_fWindTurbulenceMultiplier: usize = 0x620; // float32
                pub const m_fWindSpeedVariationMultiplier: usize = 0x624; // float32
                pub const m_fWindDirectionVariationMultiplier: usize = 0x628; // float32
            }
            // parent: None
            // field count: 0
            pub mod CBasePlayerControllerAPI {
            }
            // parent: C_BaseTrigger
            // field count: 0
            pub mod CHostageRescueZoneShim {
            }
            // parent: CEnvSoundscape
            // field count: 0
            pub mod CEnvSoundscapeAlias_snd_soundscape {
            }
            // parent: CPlayerPawnComponent
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_HostageServices {
                pub const m_hCarriedHostage: usize = 0x40; // CHandle<C_BaseEntity>
                pub const m_hCarriedHostageProp: usize = 0x44; // CHandle<C_BaseEntity>
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_GameRulesProxy {
            }
            // parent: CEntityComponent
            // field count: 5
            pub mod CRenderComponent {
                pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
                pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
                pub const m_nSplitscreenFlags: usize = 0x54; // uint32
                pub const m_bEnableRendering: usize = 0x58; // bool
                pub const m_bInterpolationReadyToDraw: usize = 0xA8; // bool
            }
            // parent: C_BaseEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod C_Team {
                pub const m_aPlayerControllers: usize = 0x5F8; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                pub const m_iScore: usize = 0x628; // int32
                pub const m_szTeamname: usize = 0x62C; // char[129]
            }
            // parent: C_PathParticleRope
            // field count: 0
            pub mod C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // parent: C_PointEntity
            // field count: 1
            pub mod CPointChildModifier {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x5F8; // bool
            }
            // parent: C_CSWeaponBaseShotgun
            // field count: 0
            pub mod C_WeaponNOVA {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_DEagle {
            }
            // parent: C_LateUpdatedAnimating
            // field count: 0
            pub mod C_CS2HudModelAddon {
            }
            // parent: C_BaseTrigger
            // field count: 0
            pub mod C_TriggerMultiple {
            }
            // parent: C_CSGO_MapPreviewCameraPath
            // field count: 1
            pub mod C_CSGO_TeamPreviewCamera {
                pub const m_nVariant: usize = 0x680; // int32
            }
            // parent: C_BaseTrigger
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod C_ColorCorrectionVolume {
                pub const m_LastEnterWeight: usize = 0xFF0; // float32
                pub const m_LastEnterTime: usize = 0xFF4; // GameTime_t
                pub const m_LastExitWeight: usize = 0xFF8; // float32
                pub const m_LastExitTime: usize = 0xFFC; // GameTime_t
                pub const m_bEnabled: usize = 0x1000; // bool
                pub const m_MaxWeight: usize = 0x1004; // float32
                pub const m_FadeDuration: usize = 0x1008; // float32
                pub const m_Weight: usize = 0x100C; // float32
                pub const m_lookupFilename: usize = 0x1010; // char[512]
            }
            // parent: CPlayerPawnComponent
            // field count: 15
            //
            // metadata: [REMOVED]
            pub mod CPlayer_MovementServices {
                pub const m_nImpulse: usize = 0x40; // int32
                pub const m_nButtons: usize = 0x48; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64
                pub const m_nButtonDoublePressed: usize = 0x78; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x188; // uint64
                pub const m_flMaxspeed: usize = 0x198; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x19C; // float32[4]
                pub const m_flForwardMove: usize = 0x1AC; // float32
                pub const m_flLeftMove: usize = 0x1B0; // float32
                pub const m_flUpMove: usize = 0x1B4; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1B8; // Vector
                pub const m_vecOldViewAngles: usize = 0x220; // QAngle
            }
            // parent: CInfoDynamicShadowHint
            // field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x610; // Vector
                pub const m_vBoxMaxs: usize = 0x61C; // Vector
            }
            // parent: CSkeletonAnimationController
            // field count: 22
            //
            // metadata: [REMOVED]
            pub mod CBaseAnimGraphController {
                pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
                pub const m_bSequenceFinished: usize = 0x14A8; // bool
                pub const m_flSoundSyncTime: usize = 0x14AC; // float32
                pub const m_nActiveIKChainMask: usize = 0x14B0; // uint32
                pub const m_hSequence: usize = 0x14B4; // HSequence
                pub const m_flSeqStartTime: usize = 0x14B8; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x14BC; // float32
                pub const m_nAnimLoopMode: usize = 0x14C0; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x14C4; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x14D0; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x14D2; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x14D3; // bool
                pub const m_bLastUpdateSkipped: usize = 0x14D4; // bool
                pub const m_flPrevAnimUpdateTime: usize = 0x14D8; // GameTime_t
                pub const m_hGraphDefinitionAG2: usize = 0x1860; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                pub const m_bIsUsingAG2: usize = 0x1868; // bool
                pub const m_serializedPoseRecipeAG2: usize = 0x1870; // C_NetworkUtlVectorBase<uint8>
                pub const m_nSerializePoseRecipeSizeAG2: usize = 0x1888; // int32
                pub const m_nSerializePoseRecipeVersionAG2: usize = 0x188C; // int32
                pub const m_nGraphCreationFlagsAG2: usize = 0x1890; // uint8
                pub const m_nServerGraphDefReloadCountAG2: usize = 0x1A7C; // int32
                pub const m_nServerSerializationContextIteration: usize = 0x1A84; // int32
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            pub mod C_ColorCorrection {
                pub const m_vecOrigin: usize = 0x5F8; // Vector
                pub const m_MinFalloff: usize = 0x604; // float32
                pub const m_MaxFalloff: usize = 0x608; // float32
                pub const m_flFadeInDuration: usize = 0x60C; // float32
                pub const m_flFadeOutDuration: usize = 0x610; // float32
                pub const m_flMaxWeight: usize = 0x614; // float32
                pub const m_flCurWeight: usize = 0x618; // float32
                pub const m_netlookupFilename: usize = 0x61C; // char[512]
                pub const m_bEnabled: usize = 0x81C; // bool
                pub const m_bMaster: usize = 0x81D; // bool
                pub const m_bClientSide: usize = 0x81E; // bool
                pub const m_bExclusive: usize = 0x81F; // bool
                pub const m_bEnabledOnClient: usize = 0x820; // bool[1]
                pub const m_flCurWeightOnClient: usize = 0x824; // float32[1]
                pub const m_bFadingIn: usize = 0x828; // bool[1]
                pub const m_flFadeStartWeight: usize = 0x82C; // float32[1]
                pub const m_flFadeStartTime: usize = 0x830; // float32[1]
                pub const m_flFadeDuration: usize = 0x834; // float32[1]
            }
            // parent: 
            // field count: 10
            pub mod CBuoyancyHelper {
                pub const m_nFluidType: usize = 0x18; // CUtlStringToken
                pub const m_flFluidDensity: usize = 0x1C; // float32
                pub const m_flNeutrallyBuoyantGravity: usize = 0x20; // float32
                pub const m_flNeutrallyBuoyantLinearDamping: usize = 0x24; // float32
                pub const m_flNeutrallyBuoyantAngularDamping: usize = 0x28; // float32
                pub const m_bNeutrallyBuoyant: usize = 0x2C; // bool
                pub const m_vecFractionOfWheelSubmergedForWheelFriction: usize = 0x30; // CUtlVector<float32>
                pub const m_vecWheelFrictionScales: usize = 0x48; // CUtlVector<float32>
                pub const m_vecFractionOfWheelSubmergedForWheelDrag: usize = 0x60; // CUtlVector<float32>
                pub const m_vecWheelDrag: usize = 0x78; // CUtlVector<float32>
            }
            // parent: C_Breakable
            // field count: 0
            pub mod C_PhysBox {
            }
            // parent: CCSPlayerBase_CameraServices
            // field count: 2
            pub mod CCSPlayer_CameraServices {
                pub const m_flDeathCamTilt: usize = 0x2A0; // float32
                pub const m_vClientScopeInaccuracy: usize = 0x2A8; // Vector
            }
            // parent: CBaseFilter
            // field count: 3
            pub mod CFilterMultiple {
                pub const m_nFilterType: usize = 0x650; // filter_t
                pub const m_iFilterName: usize = 0x658; // CUtlSymbolLarge[10]
                pub const m_hFilter: usize = 0x6A8; // CHandle<C_BaseEntity>[10]
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
            // parent: C_BaseEntity
            // field count: 11
            pub mod CEnvSoundscape {
                pub const m_OnPlay: usize = 0x5F8; // CEntityIOOutput
                pub const m_flRadius: usize = 0x620; // float32
                pub const m_soundEventName: usize = 0x628; // CUtlSymbolLarge
                pub const m_bOverrideWithEvent: usize = 0x630; // bool
                pub const m_soundscapeIndex: usize = 0x634; // int32
                pub const m_soundscapeEntityListId: usize = 0x638; // int32
                pub const m_positionNames: usize = 0x640; // CUtlSymbolLarge[8]
                pub const m_hProxySoundscape: usize = 0x680; // CHandle<CEnvSoundscape>
                pub const m_bDisabled: usize = 0x684; // bool
                pub const m_soundscapeName: usize = 0x688; // CUtlSymbolLarge
                pub const m_soundEventHash: usize = 0x690; // uint32
            }
            // parent: C_SoundEventEntity
            // field count: 0
            pub mod C_SoundEventEntityAlias_snd_event_point {
            }
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_FogController {
                pub const m_fog: usize = 0x5F8; // fogparams_t
                pub const m_bUseAngles: usize = 0x660; // bool
                pub const m_iChangedVariables: usize = 0x664; // int32
            }
            // parent: C_SoundOpvarSetPointBase
            // field count: 0
            pub mod C_SoundOpvarSetOBBWindEntity {
            }
            // parent: C_BaseCSGrenade
            // field count: 0
            pub mod C_MolotovGrenade {
            }
            // parent: C_BaseCombatCharacter
            // field count: 0
            pub mod C_NetTestBaseCombatCharacter {
            }
            // parent: CBodyComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x80; // CGameSceneNode
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponM4A1Silencer {
            }
            // parent: 
            // field count: 29
            //
            // metadata: [REMOVED]
            pub mod C_EconItemView {
                pub const m_bInventoryImageRgbaRequested: usize = 0x60; // bool
                pub const m_bInventoryImageTriedCache: usize = 0x61; // bool
                pub const m_nInventoryImageRgbaWidth: usize = 0x80; // int32
                pub const m_nInventoryImageRgbaHeight: usize = 0x84; // int32
                pub const m_szCurrentLoadCachedFileName: usize = 0x88; // char[260]
                pub const m_bRestoreCustomMaterialAfterPrecache: usize = 0x1B8; // bool
                pub const m_iItemDefinitionIndex: usize = 0x1BA; // uint16
                pub const m_iEntityQuality: usize = 0x1BC; // int32
                pub const m_iEntityLevel: usize = 0x1C0; // uint32
                pub const m_iItemID: usize = 0x1C8; // uint64
                pub const m_iItemIDHigh: usize = 0x1D0; // uint32
                pub const m_iItemIDLow: usize = 0x1D4; // uint32
                pub const m_iAccountID: usize = 0x1D8; // uint32
                pub const m_iInventoryPosition: usize = 0x1DC; // uint32
                pub const m_bInitialized: usize = 0x1E8; // bool
                pub const m_bDisallowSOC: usize = 0x1E9; // bool
                pub const m_bIsStoreItem: usize = 0x1EA; // bool
                pub const m_bIsTradeItem: usize = 0x1EB; // bool
                pub const m_iEntityQuantity: usize = 0x1EC; // int32
                pub const m_iRarityOverride: usize = 0x1F0; // int32
                pub const m_iQualityOverride: usize = 0x1F4; // int32
                pub const m_iOriginOverride: usize = 0x1F8; // int32
                pub const m_ubStyleOverride: usize = 0x1FC; // uint8
                pub const m_unClientFlags: usize = 0x1FD; // uint8
                pub const m_AttributeList: usize = 0x210; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0x288; // CAttributeList
                pub const m_szCustomName: usize = 0x300; // char[161]
                pub const m_szCustomNameOverride: usize = 0x3A1; // char[161]
                pub const m_bInitializedTags: usize = 0x470; // bool
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
            // parent: C_SoundEventEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_SoundEventPathCornerEntity {
                pub const m_vecCornerPairsNetworked: usize = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_InfoVisibilityBox {
                pub const m_nMode: usize = 0x5FC; // int32
                pub const m_vBoxSize: usize = 0x600; // Vector
                pub const m_bEnabled: usize = 0x60C; // bool
            }
            // parent: CPlayer_ItemServices
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x40; // bool
                pub const m_bHasHelmet: usize = 0x41; // bool
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_Gradient {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            }
            // parent: 
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            }
            // parent: C_BaseEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            pub mod C_PathParticleRope {
                pub const m_bStartActive: usize = 0x600; // bool
                pub const m_flMaxSimulationTime: usize = 0x604; // float32
                pub const m_iszEffectName: usize = 0x608; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x610; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x628; // float32
                pub const m_flSlack: usize = 0x62C; // float32
                pub const m_flRadius: usize = 0x630; // float32
                pub const m_ColorTint: usize = 0x634; // Color
                pub const m_nEffectState: usize = 0x638; // int32
                pub const m_iEffectIndex: usize = 0x640; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x648; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x660; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x678; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x690; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x6A8; // C_NetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x6C0; // C_NetworkUtlVectorBase<float32>
            }
            // parent: C_BaseCSGrenadeProjectile
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_DecoyProjectile {
                pub const m_nDecoyShotTick: usize = 0x1450; // int32
                pub const m_nClientLastKnownDecoyShotTick: usize = 0x1454; // int32
                pub const m_flTimeParticleEffectSpawn: usize = 0x1478; // GameTime_t
            }
            // parent: CAttributeManager
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_AttributeContainer {
                pub const m_Item: usize = 0x50; // C_EconItemView
                pub const m_iExternalItemProviderRegisteredToken: usize = 0x4C8; // int32
                pub const m_ullRegisteredAsItemID: usize = 0x4D0; // uint64
            }
            // parent: C_BasePlayerWeapon
            // field count: 51
            //
            // metadata: [REMOVED]
            pub mod C_CSWeaponBase {
                pub const m_iWeaponGameplayAnimState: usize = 0x1970; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0x1974; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0x1978; // GameTime_t
                pub const m_bInspectPending: usize = 0x197C; // bool
                pub const m_bInspectShouldLoop: usize = 0x197D; // bool
                pub const m_flCrosshairDistance: usize = 0x19A8; // float32
                pub const m_iAmmoLastCheck: usize = 0x19AC; // int32
                pub const m_nLastEmptySoundCmdNum: usize = 0x19B0; // int32
                pub const m_bFireOnEmpty: usize = 0x19B4; // bool
                pub const m_OnPlayerPickup: usize = 0x19B8; // CEntityIOOutput
                pub const m_weaponMode: usize = 0x19E0; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0x19E4; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x19E8; // Vector
                pub const m_flTurningInaccuracy: usize = 0x19F4; // float32
                pub const m_fAccuracyPenalty: usize = 0x19F8; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0x19FC; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0x1A00; // float32
                pub const m_iRecoilIndex: usize = 0x1A04; // int32
                pub const m_flRecoilIndex: usize = 0x1A08; // float32
                pub const m_bBurstMode: usize = 0x1A0C; // bool
                pub const m_flLastBurstModeChangeTime: usize = 0x1A10; // GameTime_t
                pub const m_nPostponeFireReadyTicks: usize = 0x1A14; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0x1A18; // float32
                pub const m_bInReload: usize = 0x1A1C; // bool
                pub const m_flDroppedAtTime: usize = 0x1A20; // GameTime_t
                pub const m_bIsHauledBack: usize = 0x1A24; // bool
                pub const m_bSilencerOn: usize = 0x1A25; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0x1A28; // GameTime_t
                pub const m_iOriginalTeamNumber: usize = 0x1A2C; // int32
                pub const m_iMostRecentTeamNumber: usize = 0x1A30; // int32
                pub const m_bDroppedNearBuyZone: usize = 0x1A34; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0x1A38; // float32
                pub const m_bClearWeaponIdentifyingUGC: usize = 0x1AD8; // bool
                pub const m_bVisualsDataSet: usize = 0x1AD9; // bool
                pub const m_bUIWeapon: usize = 0x1ADA; // bool
                pub const m_nCustomEconReloadEventId: usize = 0x1ADC; // int32
                pub const m_nextPrevOwnerUseTime: usize = 0x1AE8; // GameTime_t
                pub const m_hPrevOwner: usize = 0x1AEC; // CHandle<C_CSPlayerPawn>
                pub const m_nDropTick: usize = 0x1AF0; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0x1AF4; // bool
                pub const m_donated: usize = 0x1B14; // bool
                pub const m_fLastShotTime: usize = 0x1B18; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0x1B1C; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0x1B1D; // bool
                pub const m_flNextClientFireBulletTime: usize = 0x1B20; // float32
                pub const m_flNextClientFireBulletTime_Repredict: usize = 0x1B24; // float32
                pub const m_IronSightController: usize = 0x1C90; // C_IronSightController
                pub const m_iIronSightMode: usize = 0x1D40; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0x1D58; // GameTime_t
                pub const m_flWatTickOffset: usize = 0x1DB8; // float32
                pub const m_flLastShakeTime: usize = 0x1DCC; // GameTime_t
            }
            // parent: 
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod CTimeline {
                pub const m_flValues: usize = 0x10; // float32[64]
                pub const m_nValueCounts: usize = 0x110; // int32[64]
                pub const m_nBucketCount: usize = 0x210; // int32
                pub const m_flInterval: usize = 0x214; // float32
                pub const m_flFinalValue: usize = 0x218; // float32
                pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
                pub const m_bStopped: usize = 0x220; // bool
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCursorFuncs {
            }
            // parent: C_BaseEntity
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod C_TonemapController2 {
                pub const m_flAutoExposureMin: usize = 0x5F8; // float32
                pub const m_flAutoExposureMax: usize = 0x5FC; // float32
                pub const m_flExposureAdaptationSpeedUp: usize = 0x600; // float32
                pub const m_flExposureAdaptationSpeedDown: usize = 0x604; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x608; // float32
            }
            // parent: 
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // GameTime_t
                pub const m_timescale: usize = 0x10; // float32
                pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponMag7 {
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod WeaponPurchaseCount_t {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            }
            // parent: None
            // field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // parent: CBaseFilter
            // field count: 3
            pub mod FilterHealth {
                pub const m_bAdrenalineActive: usize = 0x650; // bool
                pub const m_iHealthMin: usize = 0x654; // int32
                pub const m_iHealthMax: usize = 0x658; // int32
            }
            // parent: C_BaseClientUIEntity
            // field count: 13
            //
            // metadata: [REMOVED]
            pub mod C_PointClientUIHUD {
                pub const m_bCheckCSSClasses: usize = 0xEE8; // bool
                pub const m_bIgnoreInput: usize = 0x1060; // bool
                pub const m_flWidth: usize = 0x1064; // float32
                pub const m_flHeight: usize = 0x1068; // float32
                pub const m_flDPI: usize = 0x106C; // float32
                pub const m_flInteractDistance: usize = 0x1070; // float32
                pub const m_flDepthOffset: usize = 0x1074; // float32
                pub const m_unOwnerContext: usize = 0x1078; // uint32
                pub const m_unHorizontalAlign: usize = 0x107C; // uint32
                pub const m_unVerticalAlign: usize = 0x1080; // uint32
                pub const m_unOrientation: usize = 0x1084; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x1088; // bool
                pub const m_vecCSSClasses: usize = 0x1090; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
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
            // field count: 0
            pub mod CPathSimpleAPI {
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_InfoLadderDismount {
            }
            // parent: CBaseAnimGraph
            // field count: 13
            //
            // metadata: [REMOVED]
            pub mod C_PointCommentaryNode {
                pub const m_bActive: usize = 0x1170; // bool
                pub const m_bWasActive: usize = 0x1171; // bool
                pub const m_flEndTime: usize = 0x1174; // GameTime_t
                pub const m_flStartTime: usize = 0x1178; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0x117C; // float32
                pub const m_iszCommentaryFile: usize = 0x1180; // CUtlSymbolLarge
                pub const m_iszTitle: usize = 0x1188; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0x1190; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0x1198; // int32
                pub const m_iNodeNumberMax: usize = 0x119C; // int32
                pub const m_bListenedTo: usize = 0x11A0; // bool
                pub const m_hViewPosition: usize = 0x11B0; // CHandle<C_BaseEntity>
                pub const m_bRestartAfterRestore: usize = 0x11B4; // bool
            }
            // parent: C_Sprite
            // field count: 0
            pub mod CSpriteOriented {
            }
            // parent: 
            // field count: 13
            //
            // metadata: [REMOVED]
            pub mod shard_model_desc_t {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterialBase: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hMaterialDamageOverlay: usize = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x20; // ShardSolid_t
                pub const m_vecPanelSize: usize = 0x24; // Vector2D
                pub const m_vecStressPositionA: usize = 0x2C; // Vector2D
                pub const m_vecStressPositionB: usize = 0x34; // Vector2D
                pub const m_vecPanelVertices: usize = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                pub const m_vInitialPanelVertices: usize = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                pub const m_flGlassHalfThickness: usize = 0x70; // float32
                pub const m_bHasParent: usize = 0x74; // bool
                pub const m_bParentFrozen: usize = 0x75; // bool
                pub const m_SurfacePropStringToken: usize = 0x78; // CUtlStringToken
            }
            // parent: C_CS2WeaponModuleBase
            // field count: 2
            pub mod C_KeychainModule {
                pub const m_nKeychainDefID: usize = 0x1160; // uint32
                pub const m_nKeychainSeed: usize = 0x1164; // uint32
            }
            // parent: C_BaseModelEntity
            // field count: 1
            pub mod CFuncWater {
                pub const m_BuoyancyHelper: usize = 0xEB0; // CBuoyancyHelper
            }
            // parent: CPlayerPawnComponent
            // field count: 0
            pub mod CCSPlayer_GlowServices {
            }
            // parent: None
            // field count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // parent: C_BaseCSGrenade
            // field count: 0
            pub mod C_Flashbang {
            }
            // parent: C_PointClientUIWorldPanel
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_PointClientUIWorldTextPanel {
                pub const m_messageText: usize = 0x1100; // char[512]
            }
            // parent: CPlayer_WaterServices
            // field count: 3
            pub mod CCSPlayer_WaterServices {
                pub const m_flWaterJumpTime: usize = 0x40; // float32
                pub const m_vecWaterJumpVel: usize = 0x44; // Vector
                pub const m_flSwimSoundTime: usize = 0x50; // float32
            }
            // parent: C_CSPlayerPawnBase
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_CSObserverPawn {
                pub const m_hDetectParentChange: usize = 0x1668; // CEntityHandle
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // parent: C_BaseModelEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod C_FuncLadder {
                pub const m_vecLadderDir: usize = 0xEB0; // Vector
                pub const m_Dismounts: usize = 0xEC0; // CUtlVector<CHandle<C_InfoLadderDismount>>
                pub const m_vecLocalTop: usize = 0xED8; // Vector
                pub const m_vecPlayerMountPositionTop: usize = 0xEE4; // VectorWS
                pub const m_vecPlayerMountPositionBottom: usize = 0xEF0; // VectorWS
                pub const m_flAutoRideSpeed: usize = 0xEFC; // float32
                pub const m_bDisabled: usize = 0xF00; // bool
                pub const m_bFakeLadder: usize = 0xF01; // bool
                pub const m_bHasSlack: usize = 0xF02; // bool
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponMP5SD {
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod C_World {
            }
            // parent: C_CSGO_TeamSelectCharacterPosition
            // field count: 0
            pub mod C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponGalilAR {
            }
            // parent: CPlayer_CameraServices
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x288; // uint32
                pub const m_iFOVStart: usize = 0x28C; // uint32
                pub const m_flFOVTime: usize = 0x290; // GameTime_t
                pub const m_flFOVRate: usize = 0x294; // float32
                pub const m_hZoomOwner: usize = 0x298; // CHandle<C_BaseEntity>
                pub const m_flLastShotFOV: usize = 0x29C; // float32
            }
            // parent: None
            // field count: 0
            pub mod C_TeamplayRules {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponSG556 {
            }
            // parent: C_CSPlayerPawnBase
            // field count: 127
            //
            // metadata: [REMOVED]
            pub mod C_CSPlayerPawn {
                pub const m_pBulletServices: usize = 0x1678; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0x1680; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0x1688; // CCSPlayer_BuyServices*
                pub const m_pGlowServices: usize = 0x1690; // CCSPlayer_GlowServices*
                pub const m_pActionTrackingServices: usize = 0x1698; // CCSPlayer_ActionTrackingServices*
                pub const m_pDamageReactServices: usize = 0x16A0; // CCSPlayer_DamageReactServices*
                pub const m_flHealthShotBoostExpirationTime: usize = 0x16A8; // GameTime_t
                pub const m_flLastFiredWeaponTime: usize = 0x16AC; // GameTime_t
                pub const m_bHasFemaleVoice: usize = 0x16B0; // bool
                pub const m_flLandingTimeSeconds: usize = 0x16B4; // float32
                pub const m_flOldFallVelocity: usize = 0x16B8; // float32
                pub const m_szLastPlaceName: usize = 0x16BC; // char[18]
                pub const m_bPrevDefuser: usize = 0x16CE; // bool
                pub const m_bPrevHelmet: usize = 0x16CF; // bool
                pub const m_nPrevArmorVal: usize = 0x16D0; // int32
                pub const m_nPrevGrenadeAmmoCount: usize = 0x16D4; // int32
                pub const m_unPreviousWeaponHash: usize = 0x16D8; // uint32
                pub const m_unWeaponHash: usize = 0x16DC; // uint32
                pub const m_bInBuyZone: usize = 0x16E0; // bool
                pub const m_bPreviouslyInBuyZone: usize = 0x16E1; // bool
                pub const m_aimPunchAngle: usize = 0x16E4; // QAngle
                pub const m_aimPunchAngleVel: usize = 0x16F0; // QAngle
                pub const m_aimPunchTickBase: usize = 0x16FC; // GameTick_t
                pub const m_aimPunchTickFraction: usize = 0x1700; // float32
                pub const m_aimPunchCache: usize = 0x1708; // CUtlVector<QAngle>
                pub const m_bInLanding: usize = 0x1728; // bool
                pub const m_flLandingStartTime: usize = 0x172C; // float32
                pub const m_bInHostageRescueZone: usize = 0x1730; // bool
                pub const m_bInBombZone: usize = 0x1731; // bool
                pub const m_bIsBuyMenuOpen: usize = 0x1732; // bool
                pub const m_flTimeOfLastInjury: usize = 0x1734; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0x1738; // GameTime_t
                pub const m_iRetakesOffering: usize = 0x1890; // int32
                pub const m_iRetakesOfferingCard: usize = 0x1894; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0x1898; // bool
                pub const m_bRetakesMVPLastRound: usize = 0x1899; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0x189C; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0x18A0; // loadout_slot_t
                pub const m_bNeedToReApplyGloves: usize = 0x18A5; // bool
                pub const m_EconGloves: usize = 0x18A8; // C_EconItemView
                pub const m_nEconGlovesChanged: usize = 0x1D20; // uint8
                pub const m_bMustSyncRagdollState: usize = 0x1D21; // bool
                pub const m_nRagdollDamageBone: usize = 0x1D24; // int32
                pub const m_vRagdollDamageForce: usize = 0x1D28; // Vector
                pub const m_vRagdollDamagePosition: usize = 0x1D34; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0x1D40; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0x1D80; // bool
                pub const m_vRagdollServerOrigin: usize = 0x1D84; // Vector
                pub const m_lastLandTime: usize = 0x2400; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0x2404; // bool
                pub const m_hHudModelArms: usize = 0x2420; // CHandle<C_CS2HudModelArms>
                pub const m_qDeathEyeAngles: usize = 0x2424; // QAngle
                pub const m_bSkipOneHeadConstraintUpdate: usize = 0x2430; // bool
                pub const m_bLeftHanded: usize = 0x2431; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x2434; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x2438; // float32
                pub const m_flViewmodelOffsetY: usize = 0x243C; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x2440; // float32
                pub const m_flViewmodelFOV: usize = 0x2444; // float32
                pub const m_vecPlayerPatchEconIndices: usize = 0x2448; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x2480; // Color
                pub const m_vecBulletHitModels: usize = 0x24D0; // CUtlVector<C_BulletHitModel*>
                pub const m_bIsWalking: usize = 0x24E8; // bool
                pub const m_thirdPersonHeading: usize = 0x24F0; // QAngle
                pub const m_flSlopeDropOffset: usize = 0x2580; // float32
                pub const m_flSlopeDropHeight: usize = 0x25F8; // float32
                pub const m_vHeadConstraintOffset: usize = 0x2670; // Vector
                pub const m_entitySpottedState: usize = 0x2700; // EntitySpottedState_t
                pub const m_bIsScoped: usize = 0x2718; // bool
                pub const m_bResumeZoom: usize = 0x2719; // bool
                pub const m_bIsDefusing: usize = 0x271A; // bool
                pub const m_bIsGrabbingHostage: usize = 0x271B; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x271C; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x2720; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x2724; // bool
                pub const m_nWhichBombZone: usize = 0x2728; // int32
                pub const m_iShotsFired: usize = 0x272C; // int32
                pub const m_flFlinchStack: usize = 0x2730; // float32
                pub const m_flVelocityModifier: usize = 0x2734; // float32
                pub const m_flHitHeading: usize = 0x2738; // float32
                pub const m_nHitBodyPart: usize = 0x273C; // int32
                pub const m_bWaitForNoAttack: usize = 0x2740; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x2744; // float32
                pub const m_bKilledByHeadshot: usize = 0x2749; // bool
                pub const m_ArmorValue: usize = 0x274C; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x2750; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x2752; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x2754; // uint16
                pub const m_nLastKillerIndex: usize = 0x2758; // CEntityIndex
                pub const m_bOldIsScoped: usize = 0x275C; // bool
                pub const m_bHasDeathInfo: usize = 0x275D; // bool
                pub const m_flDeathInfoTime: usize = 0x2760; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x2764; // Vector
                pub const m_grenadeParameterStashTime: usize = 0x2774; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x2778; // bool
                pub const m_angStashedShootAngles: usize = 0x277C; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x2788; // Vector
                pub const m_vecStashedVelocity: usize = 0x2794; // Vector
                pub const m_angShootAngleHistory: usize = 0x27A0; // QAngle[2]
                pub const m_vecThrowPositionHistory: usize = 0x27B8; // Vector[2]
                pub const m_vecVelocityHistory: usize = 0x27D0; // Vector[2]
                pub const m_PredictedDamageTags: usize = 0x27E8; // C_UtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
                pub const m_nPrevHighestReceivedDamageTagTick: usize = 0x2850; // GameTick_t
                pub const m_nHighestAppliedDamageTagTick: usize = 0x2854; // int32
                pub const m_bShouldAutobuyDMWeapons: usize = 0x3D8C; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x3D90; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x3D94; // bool
                pub const m_fImmuneToGunGameDamageTimeLast: usize = 0x3D98; // GameTime_t
                pub const m_fMolotovDamageTime: usize = 0x3D9C; // float32
                pub const m_vecLastAliveLocalVelocity: usize = 0x3DA4; // Vector
                pub const m_fRenderingClipPlane: usize = 0x3DB0; // float32[4]
                pub const m_nLastClipPlaneSetupFrame: usize = 0x3DC0; // int32
                pub const m_vecLastClipCameraPos: usize = 0x3DC4; // Vector
                pub const m_vecLastClipCameraForward: usize = 0x3DD0; // Vector
                pub const m_bClipHitStaticWorld: usize = 0x3DDC; // bool
                pub const m_bCachedPlaneIsValid: usize = 0x3DDD; // bool
                pub const m_pClippingWeapon: usize = 0x3DE0; // C_CSWeaponBase*
                pub const m_nPlayerInfernoBodyFx: usize = 0x3DE8; // ParticleIndex_t
                pub const m_angEyeAngles: usize = 0x3DF0; // QAngle
                pub const m_arrOldEyeAnglesTimes: usize = 0x3E80; // GameTime_t[4]
                pub const m_arrOldEyeAngles: usize = 0x3E90; // QAngle[4]
                pub const m_angEyeAnglesVelocity: usize = 0x3EC0; // QAngle
                pub const m_iIDEntIndex: usize = 0x3ECC; // CEntityIndex
                pub const m_delayTargetIDTimer: usize = 0x3ED0; // CountdownTimer
                pub const m_iTargetItemEntIdx: usize = 0x3EE8; // CEntityIndex
                pub const m_iOldIDEntIndex: usize = 0x3EEC; // CEntityIndex
                pub const m_holdTargetIDTimer: usize = 0x3EF0; // CountdownTimer
            }
            // parent: C_CSGO_TeamIntroCharacterPosition
            // field count: 0
            pub mod C_CSGO_TeamIntroTerroristPosition {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            }
            // parent: C_BaseCombatCharacter
            // field count: 23
            //
            // metadata: [REMOVED]
            pub mod C_Hostage {
                pub const m_entitySpottedState: usize = 0x13F0; // EntitySpottedState_t
                pub const m_leader: usize = 0x1408; // CHandle<C_BaseEntity>
                pub const m_reuseTimer: usize = 0x1410; // CountdownTimer
                pub const m_vel: usize = 0x1428; // Vector
                pub const m_isRescued: usize = 0x1434; // bool
                pub const m_jumpedThisFrame: usize = 0x1435; // bool
                pub const m_nHostageState: usize = 0x1438; // int32
                pub const m_bHandsHaveBeenCut: usize = 0x143C; // bool
                pub const m_hHostageGrabber: usize = 0x1440; // CHandle<C_CSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x1444; // GameTime_t
                pub const m_vecGrabbedPos: usize = 0x1448; // Vector
                pub const m_flRescueStartTime: usize = 0x1454; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x1458; // GameTime_t
                pub const m_flDropStartTime: usize = 0x145C; // GameTime_t
                pub const m_flDeadOrRescuedTime: usize = 0x1460; // GameTime_t
                pub const m_blinkTimer: usize = 0x1468; // CountdownTimer
                pub const m_lookAt: usize = 0x1480; // Vector
                pub const m_lookAroundTimer: usize = 0x1490; // CountdownTimer
                pub const m_isInit: usize = 0x14A8; // bool
                pub const m_eyeAttachment: usize = 0x14A9; // AttachmentHandle_t
                pub const m_chestAttachment: usize = 0x14AA; // AttachmentHandle_t
                pub const m_pPredictionOwner: usize = 0x14B0; // CBasePlayerController*
                pub const m_fNewestAlphaThinkTime: usize = 0x14B8; // GameTime_t
            }
            // parent: 
            // field count: 14
            //
            // metadata: [REMOVED]
            pub mod C_fogplayerparams_t {
                pub const m_hCtrl: usize = 0x8; // CHandle<C_FogController>
                pub const m_flTransitionTime: usize = 0xC; // float32
                pub const m_OldColor: usize = 0x10; // Color
                pub const m_flOldStart: usize = 0x14; // float32
                pub const m_flOldEnd: usize = 0x18; // float32
                pub const m_flOldMaxDensity: usize = 0x1C; // float32
                pub const m_flOldHDRColorScale: usize = 0x20; // float32
                pub const m_flOldFarZ: usize = 0x24; // float32
                pub const m_NewColor: usize = 0x28; // Color
                pub const m_flNewStart: usize = 0x2C; // float32
                pub const m_flNewEnd: usize = 0x30; // float32
                pub const m_flNewMaxDensity: usize = 0x34; // float32
                pub const m_flNewHDRColorScale: usize = 0x38; // float32
                pub const m_flNewFarZ: usize = 0x3C; // float32
            }
            // parent: 
            // field count: 36
            //
            // metadata: [REMOVED]
            pub mod CGameSceneNode {
                pub const m_nodeToWorld: usize = 0x10; // CTransformWS
                pub const m_pOwner: usize = 0x30; // CEntityInstance*
                pub const m_pParent: usize = 0x38; // CGameSceneNode*
                pub const m_pChild: usize = 0x40; // CGameSceneNode*
                pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
                pub const m_hParent: usize = 0x78; // CGameSceneNodeHandle
                pub const m_vecOrigin: usize = 0x88; // CNetworkOriginCellCoordQuantizedVector
                pub const m_angRotation: usize = 0xC0; // QAngle
                pub const m_flScale: usize = 0xCC; // float32
                pub const m_vecAbsOrigin: usize = 0xD0; // VectorWS
                pub const m_angAbsRotation: usize = 0xDC; // QAngle
                pub const m_flAbsScale: usize = 0xE8; // float32
                pub const m_vecWrappedLocalOrigin: usize = 0xEC; // Vector
                pub const m_angWrappedLocalRotation: usize = 0xF8; // QAngle
                pub const m_flWrappedScale: usize = 0x104; // float32
                pub const m_nParentAttachmentOrBone: usize = 0x108; // int16
                pub const m_bDebugAbsOriginChanges: usize = 0x10A; // bool
                pub const m_bDormant: usize = 0x10B; // bool
                pub const m_bForceParentToBeNetworked: usize = 0x10C; // bool
                pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
                pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
                pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
                pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
                pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
                pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
                pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
                pub const m_nHierarchicalDepth: usize = 0x10F; // uint8
                pub const m_nHierarchyType: usize = 0x110; // uint8
                pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0x111; // uint8
                pub const m_name: usize = 0x114; // CUtlStringToken
                pub const m_hierarchyAttachName: usize = 0x158; // CUtlStringToken
                pub const m_flZOffset: usize = 0x15C; // float32
                pub const m_flClientLocalScale: usize = 0x160; // float32
                pub const m_vRenderOrigin: usize = 0x164; // Vector
            }
            // parent: CPlayerPawnComponent
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x40; // uint8
                pub const m_hObserverTarget: usize = 0x44; // CHandle<C_BaseEntity>
                pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x4C; // bool
                pub const m_flObserverChaseDistance: usize = 0x50; // float32
                pub const m_flObserverChaseDistanceCalcTime: usize = 0x54; // GameTime_t
            }
            // parent: C_BaseEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod C_SoundAreaEntityBase {
                pub const m_bDisabled: usize = 0x5F8; // bool
                pub const m_bWasEnabled: usize = 0x600; // bool
                pub const m_iszSoundAreaType: usize = 0x608; // CUtlSymbolLarge
                pub const m_vPos: usize = 0x610; // Vector
            }
            // parent: C_BaseEntity
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod C_PlayerVisibility {
                pub const m_flVisibilityStrength: usize = 0x5F8; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x5FC; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x600; // float32
                pub const m_flFadeTime: usize = 0x604; // float32
                pub const m_bStartDisabled: usize = 0x608; // bool
                pub const m_bIsEnabled: usize = 0x609; // bool
            }
            // parent: None
            // field count: 3
            pub mod CAttributeManager__cached_attribute_float_t {
                pub const flIn: usize = 0x0; // float32
                pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
                pub const flOut: usize = 0x10; // float32
            }
            // parent: C_EconEntity
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod C_BasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0x18E0; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0x18E4; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0x18E8; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0x18EC; // float32
                pub const m_iClip1: usize = 0x18F0; // int32
                pub const m_iClip2: usize = 0x18F4; // int32
                pub const m_pReserveAmmo: usize = 0x18F8; // int32[2]
            }
            // parent: C_BaseEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CRagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x5F8; // int8
            }
            // parent: C_BaseCSGrenade
            // field count: 0
            pub mod C_HEGrenade {
            }
            // parent: C_BaseModelEntity
            // field count: 12
            //
            // metadata: [REMOVED]
            pub mod C_EnvSky {
                pub const m_hSkyMaterial: usize = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0xEB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0xEC0; // bool
                pub const m_vTintColor: usize = 0xEC1; // Color
                pub const m_vTintColorLightingOnly: usize = 0xEC5; // Color
                pub const m_flBrightnessScale: usize = 0xECC; // float32
                pub const m_nFogType: usize = 0xED0; // int32
                pub const m_flFogMinStart: usize = 0xED4; // float32
                pub const m_flFogMinEnd: usize = 0xED8; // float32
                pub const m_flFogMaxStart: usize = 0xEDC; // float32
                pub const m_flFogMaxEnd: usize = 0xEE0; // float32
                pub const m_bEnabled: usize = 0xEE4; // bool
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
            // parent: C_BaseEntity
            // field count: 11
            //
            // metadata: [REMOVED]
            pub mod C_EnvWindController {
                pub const m_EnvWindShared: usize = 0x5F8; // C_EnvWindShared
                pub const m_fDirectionVariation: usize = 0x6F0; // float32
                pub const m_fSpeedVariation: usize = 0x6F4; // float32
                pub const m_fTurbulence: usize = 0x6F8; // float32
                pub const m_fVolumeHalfExtentXY: usize = 0x6FC; // float32
                pub const m_fVolumeHalfExtentZ: usize = 0x700; // float32
                pub const m_nVolumeResolutionXY: usize = 0x704; // int32
                pub const m_nVolumeResolutionZ: usize = 0x708; // int32
                pub const m_nClipmapLevels: usize = 0x70C; // int32
                pub const m_bIsMaster: usize = 0x710; // bool
                pub const m_bFirstTime: usize = 0x711; // bool
            }
            // parent: None
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod C_GameRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_nTotalPausedTicks: usize = 0x30; // int32
                pub const m_nPauseStartTick: usize = 0x34; // int32
                pub const m_bGamePaused: usize = 0x38; // bool
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponMAC10 {
            }
            // parent: C_BaseEntity
            // field count: 14
            pub mod C_CSGO_MapPreviewCameraPath {
                pub const m_flZFar: usize = 0x5F8; // float32
                pub const m_flZNear: usize = 0x5FC; // float32
                pub const m_bLoop: usize = 0x600; // bool
                pub const m_bVerticalFOV: usize = 0x601; // bool
                pub const m_bConstantSpeed: usize = 0x602; // bool
                pub const m_flDuration: usize = 0x604; // float32
                pub const m_flPathLength: usize = 0x648; // float32
                pub const m_flPathDuration: usize = 0x64C; // float32
                pub const m_bDofEnabled: usize = 0x664; // bool
                pub const m_flDofNearBlurry: usize = 0x668; // float32
                pub const m_flDofNearCrisp: usize = 0x66C; // float32
                pub const m_flDofFarCrisp: usize = 0x670; // float32
                pub const m_flDofFarBlurry: usize = 0x674; // float32
                pub const m_flDofTiltToGround: usize = 0x678; // float32
            }
            // parent: C_ModelPointEntity
            // field count: 17
            //
            // metadata: [REMOVED]
            pub mod C_PointWorldText {
                pub const m_bForceRecreateNextUpdate: usize = 0xEB8; // bool
                pub const m_messageText: usize = 0xED0; // char[512]
                pub const m_FontName: usize = 0x10D0; // char[64]
                pub const m_BackgroundMaterialName: usize = 0x1110; // char[64]
                pub const m_bEnabled: usize = 0x1150; // bool
                pub const m_bFullbright: usize = 0x1151; // bool
                pub const m_flWorldUnitsPerPx: usize = 0x1154; // float32
                pub const m_flFontSize: usize = 0x1158; // float32
                pub const m_flDepthOffset: usize = 0x115C; // float32
                pub const m_bDrawBackground: usize = 0x1160; // bool
                pub const m_flBackgroundBorderWidth: usize = 0x1164; // float32
                pub const m_flBackgroundBorderHeight: usize = 0x1168; // float32
                pub const m_flBackgroundWorldToUV: usize = 0x116C; // float32
                pub const m_Color: usize = 0x1170; // Color
                pub const m_nJustifyHorizontal: usize = 0x1174; // PointWorldTextJustifyHorizontal_t
                pub const m_nJustifyVertical: usize = 0x1178; // PointWorldTextJustifyVertical_t
                pub const m_nReorientMode: usize = 0x117C; // PointWorldTextReorientMode_t
            }
            // parent: C_BaseModelEntity
            // field count: 40
            //
            // metadata: [REMOVED]
            pub mod C_RopeKeyframe {
                pub const m_LinksTouchingSomething: usize = 0xEB8; // CBitVec<10>
                pub const m_nLinksTouchingSomething: usize = 0xEBC; // int32
                pub const m_bApplyWind: usize = 0xEC0; // bool
                pub const m_fPrevLockedPoints: usize = 0xEC4; // int32
                pub const m_iForcePointMoveCounter: usize = 0xEC8; // int32
                pub const m_bPrevEndPointPos: usize = 0xECC; // bool[2]
                pub const m_vPrevEndPointPos: usize = 0xED0; // Vector[2]
                pub const m_flCurScroll: usize = 0xEE8; // float32
                pub const m_flScrollSpeed: usize = 0xEEC; // float32
                pub const m_RopeFlags: usize = 0xEF0; // uint16
                pub const m_iRopeMaterialModelIndex: usize = 0xEF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nSegments: usize = 0x1170; // uint8
                pub const m_hStartPoint: usize = 0x1174; // CHandle<C_BaseEntity>
                pub const m_hEndPoint: usize = 0x1178; // CHandle<C_BaseEntity>
                pub const m_iStartAttachment: usize = 0x117C; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0x117D; // AttachmentHandle_t
                pub const m_Subdiv: usize = 0x117E; // uint8
                pub const m_RopeLength: usize = 0x1180; // int16
                pub const m_Slack: usize = 0x1182; // int16
                pub const m_TextureScale: usize = 0x1184; // float32
                pub const m_fLockedPoints: usize = 0x1188; // uint8
                pub const m_nChangeCount: usize = 0x1189; // uint8
                pub const m_Width: usize = 0x118C; // float32
                pub const m_PhysicsDelegate: usize = 0x1190; // C_RopeKeyframe::CPhysicsDelegate
                pub const m_hMaterial: usize = 0x11A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_TextureHeight: usize = 0x11A8; // int32
                pub const m_vecImpulse: usize = 0x11AC; // Vector
                pub const m_vecPreviousImpulse: usize = 0x11B8; // Vector
                pub const m_flCurrentGustTimer: usize = 0x11C4; // float32
                pub const m_flCurrentGustLifetime: usize = 0x11C8; // float32
                pub const m_flTimeToNextGust: usize = 0x11CC; // float32
                pub const m_vWindDir: usize = 0x11D0; // Vector
                pub const m_vColorMod: usize = 0x11DC; // Vector
                pub const m_vCachedEndPointAttachmentPos: usize = 0x11E8; // Vector[2]
                pub const m_vCachedEndPointAttachmentAngle: usize = 0x1200; // QAngle[2]
                pub const m_bConstrainBetweenEndpoints: usize = 0x1218; // bool
                pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
                pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
                pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
                pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod C_BaseToggle {
            }
            // parent: C_EnvCubemap
            // field count: 0
            pub mod C_EnvCubemapBox {
            }
            // parent: C_EnvCombinedLightProbeVolume
            // field count: 0
            pub mod C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // parent: None
            // field count: 1
            pub mod C_RopeKeyframe__CPhysicsDelegate {
                pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
            }
            // parent: C_PointEntity
            // field count: 5
            pub mod CInfoDynamicShadowHint {
                pub const m_bDisabled: usize = 0x5F8; // bool
                pub const m_flRange: usize = 0x5FC; // float32
                pub const m_nImportance: usize = 0x600; // int32
                pub const m_nLightChoice: usize = 0x604; // int32
                pub const m_hLight: usize = 0x608; // CHandle<C_BaseEntity>
            }
            // parent: C_BaseToggle
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod C_FuncMoveLinear {
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod CServerOnlyModelEntity {
            }
            // parent: C_CSGO_TeamPreviewCamera
            // field count: 0
            pub mod C_CSGO_TeamSelectCamera {
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_IntervalTimer {
                pub const m_Completed: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x90; // SignatureOutflow_Continue
            }
            // parent: C_CSWeaponBaseShotgun
            // field count: 0
            pub mod C_WeaponXM1014 {
            }
            // parent: CBaseAnimGraph
            // field count: 0
            pub mod C_WorldModelGloves {
            }
            // parent: C_PhysicsProp
            // field count: 0
            pub mod C_PhysicsPropMultiplayer {
            }
            // parent: C_SoundEventEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_SoundEventOBBEntity {
                pub const m_vMins: usize = 0x6C0; // Vector
                pub const m_vMaxs: usize = 0x6CC; // Vector
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
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponAug {
            }
            // parent: C_DynamicProp
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod C_BasePropDoor {
                pub const m_eDoorState: usize = 0x1430; // DoorState_t
                pub const m_modelChanged: usize = 0x1434; // bool
                pub const m_bLocked: usize = 0x1435; // bool
                pub const m_bNoNPCs: usize = 0x1436; // bool
                pub const m_closedPosition: usize = 0x1438; // Vector
                pub const m_closedAngles: usize = 0x1444; // QAngle
                pub const m_hMaster: usize = 0x1450; // CHandle<C_BasePropDoor>
                pub const m_vWhereToSetLightingOrigin: usize = 0x1454; // Vector
            }
            // parent: 
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod CNetworkedSequenceOperation {
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
                pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
                pub const m_bDiscontinuity: usize = 0x1D; // bool
                pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
                pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
            }
            // parent: C_WeaponBaseItem
            // field count: 0
            pub mod C_Item_Healthshot {
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x30; // CScriptComponent*
            }
            // parent: C_BaseEntity
            // field count: 37
            //
            // metadata: [REMOVED]
            pub mod C_BaseModelEntity {
                pub const m_CRenderComponent: usize = 0xAE0; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0xAE8; // CHitboxComponent
                pub const m_pDestructiblePartsSystemComponent: usize = 0xB00; // CDestructiblePartsComponent*
                pub const m_LastHitGroup: usize = 0xB08; // HitGroup_t
                pub const m_sLastDamageSourceName: usize = 0xB10; // CGlobalSymbol
                pub const m_vLastDamagePosition: usize = 0xB18; // VectorWS
                pub const m_bInitModelEffects: usize = 0xB40; // bool
                pub const m_bIsStaticProp: usize = 0xB41; // bool
                pub const m_nLastAddDecal: usize = 0xB44; // int32
                pub const m_nDecalsAdded: usize = 0xB48; // int32
                pub const m_iOldHealth: usize = 0xB4C; // int32
                pub const m_nRenderMode: usize = 0xB50; // RenderMode_t
                pub const m_nRenderFX: usize = 0xB51; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0xB52; // bool
                pub const m_clrRender: usize = 0xB70; // Color
                pub const m_vecRenderAttributes: usize = 0xB78; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0xBF8; // bool
                pub const m_bNoInterpolate: usize = 0xBF9; // bool
                pub const m_Collision: usize = 0xC00; // CCollisionProperty
                pub const m_Glow: usize = 0xCB0; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0xD08; // float32
                pub const m_fadeMinDist: usize = 0xD0C; // float32
                pub const m_fadeMaxDist: usize = 0xD10; // float32
                pub const m_flFadeScale: usize = 0xD14; // float32
                pub const m_flShadowStrength: usize = 0xD18; // float32
                pub const m_nObjectCulling: usize = 0xD1C; // uint8
                pub const m_nAddDecal: usize = 0xD20; // int32
                pub const m_vDecalPosition: usize = 0xD24; // Vector
                pub const m_vDecalForwardAxis: usize = 0xD30; // Vector
                pub const m_nDecalMode: usize = 0xD3C; // DecalMode_t
                pub const m_nRequiredDecalMode: usize = 0xD3D; // DecalMode_t
                pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0xD40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_vecViewOffset: usize = 0xD80; // CNetworkViewOffsetVector
                pub const m_pClientAlphaProperty: usize = 0xE60; // CClientAlphaProperty*
                pub const m_ClientOverrideTint: usize = 0xE68; // Color
                pub const m_bUseClientOverrideTint: usize = 0xE6C; // bool
                pub const m_bvDisabledHitGroups: usize = 0xEA8; // uint32[1]
            }
            // parent: CPlayerPawnComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_BulletServices {
                pub const m_totalHitsOnServer: usize = 0x40; // int32
            }
            // parent: C_SoundOpvarSetPointEntity
            // field count: 0
            pub mod C_SoundOpvarSetAutoRoomEntity {
            }
            // parent: C_BaseEntity
            // field count: 29
            //
            // metadata: [REMOVED]
            pub mod C_EnvCombinedLightProbeVolume {
                pub const m_Entity_Color: usize = 0x1670; // Color
                pub const m_Entity_flBrightness: usize = 0x1674; // float32
                pub const m_Entity_hCubemapTexture: usize = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x1680; // bool
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x16D0; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x16DC; // Vector
                pub const m_Entity_bMoveable: usize = 0x16E8; // bool
                pub const m_Entity_nHandshake: usize = 0x16EC; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x16F0; // int32
                pub const m_Entity_nPriority: usize = 0x16F4; // int32
                pub const m_Entity_bStartDisabled: usize = 0x16F8; // bool
                pub const m_Entity_flEdgeFadeDist: usize = 0x16FC; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x1700; // Vector
                pub const m_Entity_nLightProbeSizeX: usize = 0x170C; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1710; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1714; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1718; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x171C; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1720; // int32
                pub const m_Entity_bEnabled: usize = 0x1739; // bool
            }
            // parent: None
            // field count: 0
            pub mod C_MultiplayRules {
            }
            // parent: CPlayerPawnComponent
            // field count: 0
            pub mod CPlayer_AutoaimServices {
            }
            // parent: C_LightEntity
            // field count: 0
            pub mod C_LightDirectionalEntity {
            }
            // parent: 
            // field count: 83
            //
            // metadata: [REMOVED]
            pub mod C_BaseEntity {
                pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
                pub const m_nLastThinkTick: usize = 0x328; // GameTick_t
                pub const m_pGameSceneNode: usize = 0x330; // CGameSceneNode*
                pub const m_pRenderComponent: usize = 0x338; // CRenderComponent*
                pub const m_pCollision: usize = 0x340; // CCollisionProperty*
                pub const m_iMaxHealth: usize = 0x348; // int32
                pub const m_iHealth: usize = 0x34C; // int32
                pub const m_flDamageAccumulator: usize = 0x350; // float32
                pub const m_lifeState: usize = 0x354; // uint8
                pub const m_bTakesDamage: usize = 0x355; // bool
                pub const m_nTakeDamageFlags: usize = 0x358; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x360; // EntityPlatformTypes_t
                pub const m_ubInterpolationFrame: usize = 0x361; // uint8
                pub const m_hSceneObjectController: usize = 0x364; // CHandle<C_BaseEntity>
                pub const m_nNoInterpolationTick: usize = 0x368; // int32
                pub const m_nVisibilityNoInterpolationTick: usize = 0x36C; // int32
                pub const m_flProxyRandomValue: usize = 0x370; // float32
                pub const m_iEFlags: usize = 0x374; // int32
                pub const m_nWaterType: usize = 0x378; // uint8
                pub const m_bInterpolateEvenWithNoModel: usize = 0x379; // bool
                pub const m_bPredictionEligible: usize = 0x37A; // bool
                pub const m_bApplyLayerMatchIDToModel: usize = 0x37B; // bool
                pub const m_tokLayerMatchID: usize = 0x37C; // CUtlStringToken
                pub const m_nSubclassID: usize = 0x380; // CUtlStringToken
                pub const m_nSimulationTick: usize = 0x390; // int32
                pub const m_iCurrentThinkContext: usize = 0x394; // int32
                pub const m_aThinkFunctions: usize = 0x398; // CUtlVector<thinkfunc_t>
                pub const m_bDisabledContextThinks: usize = 0x3B0; // bool
                pub const m_flAnimTime: usize = 0x3B4; // float32
                pub const m_flSimulationTime: usize = 0x3B8; // float32
                pub const m_nSceneObjectOverrideFlags: usize = 0x3BC; // uint8
                pub const m_bHasSuccessfullyInterpolated: usize = 0x3BD; // bool
                pub const m_bHasAddedVarsToInterpolation: usize = 0x3BE; // bool
                pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x3BF; // bool
                pub const m_nInterpolationLatchDirtyFlags: usize = 0x3C0; // int32[2]
                pub const m_ListEntry: usize = 0x3C8; // uint16[11]
                pub const m_flCreateTime: usize = 0x3E0; // GameTime_t
                pub const m_flSpeed: usize = 0x3E4; // float32
                pub const m_EntClientFlags: usize = 0x3E8; // uint16
                pub const m_bClientSideRagdoll: usize = 0x3EA; // bool
                pub const m_iTeamNum: usize = 0x3EB; // uint8
                pub const m_spawnflags: usize = 0x3EC; // uint32
                pub const m_nNextThinkTick: usize = 0x3F0; // GameTick_t
                pub const m_fFlags: usize = 0x3F8; // uint32
                pub const m_vecAbsVelocity: usize = 0x3FC; // Vector
                pub const m_vecServerVelocity: usize = 0x408; // CNetworkVelocityVector
                pub const m_vecVelocity: usize = 0x430; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x510; // Vector
                pub const m_hEffectEntity: usize = 0x51C; // CHandle<C_BaseEntity>
                pub const m_hOwnerEntity: usize = 0x520; // CHandle<C_BaseEntity>
                pub const m_MoveCollide: usize = 0x524; // MoveCollide_t
                pub const m_MoveType: usize = 0x525; // MoveType_t
                pub const m_nActualMoveType: usize = 0x526; // MoveType_t
                pub const m_flWaterLevel: usize = 0x528; // float32
                pub const m_fEffects: usize = 0x52C; // uint32
                pub const m_hGroundEntity: usize = 0x530; // CHandle<C_BaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x534; // int32
                pub const m_flFriction: usize = 0x538; // float32
                pub const m_flElasticity: usize = 0x53C; // float32
                pub const m_flGravityScale: usize = 0x540; // float32
                pub const m_flTimeScale: usize = 0x544; // float32
                pub const m_bAnimatedEveryTick: usize = 0x548; // bool
                pub const m_bGravityDisabled: usize = 0x549; // bool
                pub const m_flNavIgnoreUntilTime: usize = 0x54C; // GameTime_t
                pub const m_hThink: usize = 0x550; // uint16
                pub const m_fBBoxVisFlags: usize = 0x560; // uint8
                pub const m_flActualGravityScale: usize = 0x564; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x568; // bool
                pub const m_bPredictable: usize = 0x569; // bool
                pub const m_bRenderWithViewModels: usize = 0x56A; // bool
                pub const m_nFirstPredictableCommand: usize = 0x56C; // int32
                pub const m_nLastPredictableCommand: usize = 0x570; // int32
                pub const m_hOldMoveParent: usize = 0x574; // CHandle<C_BaseEntity>
                pub const m_Particles: usize = 0x578; // CParticleProperty
                pub const m_vecAngVelocity: usize = 0x5A8; // QAngle
                pub const m_DataChangeEventRef: usize = 0x5B4; // int32
                pub const m_dependencies: usize = 0x5B8; // CUtlVector<CEntityHandle>
                pub const m_nCreationTick: usize = 0x5D0; // int32
                pub const m_bAnimTimeChanged: usize = 0x5DD; // bool
                pub const m_bSimulationTimeChanged: usize = 0x5DE; // bool
                pub const m_sUniqueHammerID: usize = 0x5E8; // CUtlString
                pub const m_nBloodType: usize = 0x5F0; // BloodType
            }
            // parent: 
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x30; // ModelConfigHandle_t
                pub const m_Name: usize = 0x38; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponSSG08 {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_Curve {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            }
            // parent: C_BaseCombatCharacter
            // field count: 28
            //
            // metadata: [REMOVED]
            pub mod C_BasePlayerPawn {
                pub const m_pWeaponServices: usize = 0x13F0; // CPlayer_WeaponServices*
                pub const m_pItemServices: usize = 0x13F8; // CPlayer_ItemServices*
                pub const m_pAutoaimServices: usize = 0x1400; // CPlayer_AutoaimServices*
                pub const m_pObserverServices: usize = 0x1408; // CPlayer_ObserverServices*
                pub const m_pWaterServices: usize = 0x1410; // CPlayer_WaterServices*
                pub const m_pUseServices: usize = 0x1418; // CPlayer_UseServices*
                pub const m_pFlashlightServices: usize = 0x1420; // CPlayer_FlashlightServices*
                pub const m_pCameraServices: usize = 0x1428; // CPlayer_CameraServices*
                pub const m_pMovementServices: usize = 0x1430; // CPlayer_MovementServices*
                pub const m_ServerViewAngleChanges: usize = 0x1440; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                pub const v_angle: usize = 0x14A8; // QAngle
                pub const v_anglePrevious: usize = 0x14B4; // QAngle
                pub const m_iHideHUD: usize = 0x14C0; // uint32
                pub const m_skybox3d: usize = 0x14C8; // sky3dparams_t
                pub const m_flDeathTime: usize = 0x1558; // GameTime_t
                pub const m_vecPredictionError: usize = 0x155C; // Vector
                pub const m_flPredictionErrorTime: usize = 0x1568; // GameTime_t
                pub const m_vecLastCameraSetupLocalOrigin: usize = 0x1588; // Vector
                pub const m_flLastCameraSetupTime: usize = 0x1594; // GameTime_t
                pub const m_flFOVSensitivityAdjust: usize = 0x1598; // float32
                pub const m_flMouseSensitivity: usize = 0x159C; // float32
                pub const m_vOldOrigin: usize = 0x15A0; // Vector
                pub const m_flOldSimulationTime: usize = 0x15AC; // float32
                pub const m_nLastExecutedCommandNumber: usize = 0x15B0; // int32
                pub const m_nLastExecutedCommandTick: usize = 0x15B4; // int32
                pub const m_hController: usize = 0x15B8; // CHandle<CBasePlayerController>
                pub const m_hDefaultController: usize = 0x15BC; // CHandle<CBasePlayerController>
                pub const m_bIsSwappingToPredictableController: usize = 0x15C0; // bool
            }
            // parent: C_DynamicProp
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod C_Chicken {
                pub const m_hHolidayHatAddon: usize = 0x1428; // CHandle<CBaseAnimGraph>
                pub const m_jumpedThisFrame: usize = 0x142C; // bool
                pub const m_leader: usize = 0x1430; // CHandle<C_CSPlayerPawn>
                pub const m_AttributeManager: usize = 0x1438; // C_AttributeContainer
                pub const m_bAttributesInitialized: usize = 0x1910; // bool
                pub const m_hWaterWakeParticles: usize = 0x1914; // ParticleIndex_t
                pub const m_bIsPreviewModel: usize = 0x1918; // bool
            }
            // parent: C_SoundOpvarSetPointEntity
            // field count: 0
            pub mod C_SoundOpvarSetAABBEntity {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponBizon {
            }
            // parent: C_CS2WeaponModuleBase
            // field count: 1
            pub mod C_StattrakModule {
                pub const m_bKnife: usize = 0x1160; // bool
            }
            // parent: CCSPlayerBase_CameraServices
            // field count: 0
            pub mod CCSObserver_CameraServices {
            }
            // parent: None
            // field count: 0
            pub mod CTakeDamageInfoAPI {
            }
            // parent: CEnvSoundscape
            // field count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x698; // CUtlSymbolLarge
            }
            // parent: C_BaseEntity
            // field count: 15
            pub mod C_SoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x5F8; // bool
                pub const m_bToLocalPlayer: usize = 0x5F9; // bool
                pub const m_bStopOnNew: usize = 0x5FA; // bool
                pub const m_bSaveRestore: usize = 0x5FB; // bool
                pub const m_bSavedIsPlaying: usize = 0x5FC; // bool
                pub const m_flSavedElapsedTime: usize = 0x600; // float32
                pub const m_iszSourceEntityName: usize = 0x608; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x610; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x618; // CEntityOutputTemplate<uint64>
                pub const m_onSoundFinished: usize = 0x640; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x668; // float32
                pub const m_iszSoundName: usize = 0x698; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x6B4; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x6B8; // int32
                pub const m_bClientSideOnly: usize = 0x0; // bitfield:1
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // parent: C_LightEntity
            // field count: 0
            pub mod C_LightOrthoEntity {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseFlow {
            }
            // parent: C_BaseTrigger
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CBombTarget {
                pub const m_bBombPlantedHere: usize = 0xFF0; // bool
            }
            // parent: C_CSWeaponBase
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_Knife {
                pub const m_bFirstAttack: usize = 0x1F80; // bool
            }
            // parent: C_CSGO_TeamPreviewCamera
            // field count: 0
            pub mod C_CSGO_TerroristWingmanIntroCamera {
            }
            // parent: CGameSceneNode
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x190; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x490; // bool
                pub const m_bUseParentRenderBounds: usize = 0x491; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x492; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x494; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x498; // uint8
            }
            // parent: 
            // field count: 0
            pub mod CEntityComponent {
            }
            // parent: C_Item
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_ItemDogtags {
                pub const m_OwningPlayer: usize = 0x19E0; // CHandle<C_CSPlayerPawn>
                pub const m_KillingPlayer: usize = 0x19E4; // CHandle<C_CSPlayerPawn>
            }
            // parent: CBaseAnimGraph
            // field count: 0
            pub mod C_LateUpdatedAnimating {
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
            // field count: 0
            pub mod CPulseAnimFuncs {
            }
            // parent: C_BaseModelEntity
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod C_BaseClientUIEntity {
                pub const m_bEnabled: usize = 0xEB8; // bool
                pub const m_DialogXMLName: usize = 0xEC0; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0xEC8; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0xED0; // CUtlSymbolLarge
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
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponUSPSilencer {
            }
            // parent: C_BaseCSGrenadeProjectile
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_MolotovProjectile {
                pub const m_bIsIncGrenade: usize = 0x1450; // bool
            }
            // parent: C_BaseTrigger
            // field count: 0
            pub mod C_TriggerLerpObject {
            }
            // parent: None
            // field count: 0
            pub mod CPointTemplateAPI {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponRevolver {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponElite {
            }
            // parent: C_DynamicProp
            // field count: 0
            pub mod C_DynamicPropAlias_cable_dynamic {
            }
            // parent: CBaseAnimGraph
            // field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0x1158; // bool
                pub const m_iShapeType: usize = 0x115C; // int32
                pub const m_bConformToCollisionBounds: usize = 0x1160; // bool
                pub const m_mPreferredCatchTransform: usize = 0x1170; // CTransform
            }
            // parent: C_PointEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod CInfoOffscreenPanoramaTexture {
                pub const m_bDisabled: usize = 0x5F8; // bool
                pub const m_nResolutionX: usize = 0x5FC; // int32
                pub const m_nResolutionY: usize = 0x600; // int32
                pub const m_szLayoutFileName: usize = 0x608; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x610; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x630; // int32
                pub const m_vecCSSClasses: usize = 0x638; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_bCheckCSSClasses: usize = 0x7B0; // bool
            }
            // parent: None
            // field count: 83
            //
            // metadata: [REMOVED]
            pub mod CCSWeaponBaseVData {
                pub const m_WeaponType: usize = 0x440; // CSWeaponType
                pub const m_WeaponCategory: usize = 0x444; // CSWeaponCategory
                pub const m_szModel_AG2: usize = 0x448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_szAnimSkeleton: usize = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
                pub const m_vecMuzzlePos0: usize = 0x608; // Vector
                pub const m_vecMuzzlePos1: usize = 0x614; // Vector
                pub const m_szTracerParticle: usize = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_GearSlot: usize = 0x700; // gear_slot_t
                pub const m_GearSlotPosition: usize = 0x704; // int32
                pub const m_DefaultLoadoutSlot: usize = 0x708; // loadout_slot_t
                pub const m_nPrice: usize = 0x70C; // int32
                pub const m_nKillAward: usize = 0x710; // int32
                pub const m_nPrimaryReserveAmmoMax: usize = 0x714; // int32
                pub const m_nSecondaryReserveAmmoMax: usize = 0x718; // int32
                pub const m_bMeleeWeapon: usize = 0x71C; // bool
                pub const m_bHasBurstMode: usize = 0x71D; // bool
                pub const m_bIsRevolver: usize = 0x71E; // bool
                pub const m_bCannotShootUnderwater: usize = 0x71F; // bool
                pub const m_szName: usize = 0x720; // CGlobalSymbol
                pub const m_eSilencerType: usize = 0x728; // CSWeaponSilencerType
                pub const m_nCrosshairMinDistance: usize = 0x72C; // int32
                pub const m_nCrosshairDeltaDistance: usize = 0x730; // int32
                pub const m_bIsFullAuto: usize = 0x734; // bool
                pub const m_nNumBullets: usize = 0x738; // int32
                pub const m_bReloadsSingleShells: usize = 0x73C; // bool
                pub const m_flCycleTime: usize = 0x740; // CFiringModeFloat
                pub const m_flMaxSpeed: usize = 0x748; // CFiringModeFloat
                pub const m_flSpread: usize = 0x750; // CFiringModeFloat
                pub const m_flInaccuracyCrouch: usize = 0x758; // CFiringModeFloat
                pub const m_flInaccuracyStand: usize = 0x760; // CFiringModeFloat
                pub const m_flInaccuracyJump: usize = 0x768; // CFiringModeFloat
                pub const m_flInaccuracyLand: usize = 0x770; // CFiringModeFloat
                pub const m_flInaccuracyLadder: usize = 0x778; // CFiringModeFloat
                pub const m_flInaccuracyFire: usize = 0x780; // CFiringModeFloat
                pub const m_flInaccuracyMove: usize = 0x788; // CFiringModeFloat
                pub const m_flRecoilAngle: usize = 0x790; // CFiringModeFloat
                pub const m_flRecoilAngleVariance: usize = 0x798; // CFiringModeFloat
                pub const m_flRecoilMagnitude: usize = 0x7A0; // CFiringModeFloat
                pub const m_flRecoilMagnitudeVariance: usize = 0x7A8; // CFiringModeFloat
                pub const m_nTracerFrequency: usize = 0x7B0; // CFiringModeInt
                pub const m_flInaccuracyJumpInitial: usize = 0x7B8; // float32
                pub const m_flInaccuracyJumpApex: usize = 0x7BC; // float32
                pub const m_flInaccuracyReload: usize = 0x7C0; // float32
                pub const m_flDeployDuration: usize = 0x7C4; // float32
                pub const m_flDisallowAttackAfterReloadStartDuration: usize = 0x7C8; // float32
                pub const m_nBurstShotCount: usize = 0x7CC; // int32
                pub const m_bAllowBurstHolster: usize = 0x7D0; // bool
                pub const m_nRecoilSeed: usize = 0x7D4; // int32
                pub const m_nSpreadSeed: usize = 0x7D8; // int32
                pub const m_flAttackMovespeedFactor: usize = 0x7DC; // float32
                pub const m_flInaccuracyPitchShift: usize = 0x7E0; // float32
                pub const m_flInaccuracyAltSoundThreshold: usize = 0x7E4; // float32
                pub const m_szUseRadioSubtitle: usize = 0x7E8; // CUtlString
                pub const m_bUnzoomsAfterShot: usize = 0x7F0; // bool
                pub const m_bHideViewModelWhenZoomed: usize = 0x7F1; // bool
                pub const m_nZoomLevels: usize = 0x7F4; // int32
                pub const m_nZoomFOV1: usize = 0x7F8; // int32
                pub const m_nZoomFOV2: usize = 0x7FC; // int32
                pub const m_flZoomTime0: usize = 0x800; // float32
                pub const m_flZoomTime1: usize = 0x804; // float32
                pub const m_flZoomTime2: usize = 0x808; // float32
                pub const m_flIronSightPullUpSpeed: usize = 0x80C; // float32
                pub const m_flIronSightPutDownSpeed: usize = 0x810; // float32
                pub const m_flIronSightFOV: usize = 0x814; // float32
                pub const m_flIronSightPivotForward: usize = 0x818; // float32
                pub const m_flIronSightLooseness: usize = 0x81C; // float32
                pub const m_nDamage: usize = 0x820; // int32
                pub const m_flHeadshotMultiplier: usize = 0x824; // float32
                pub const m_flArmorRatio: usize = 0x828; // float32
                pub const m_flPenetration: usize = 0x82C; // float32
                pub const m_flRange: usize = 0x830; // float32
                pub const m_flRangeModifier: usize = 0x834; // float32
                pub const m_flFlinchVelocityModifierLarge: usize = 0x838; // float32
                pub const m_flFlinchVelocityModifierSmall: usize = 0x83C; // float32
                pub const m_flRecoveryTimeCrouch: usize = 0x840; // float32
                pub const m_flRecoveryTimeStand: usize = 0x844; // float32
                pub const m_flRecoveryTimeCrouchFinal: usize = 0x848; // float32
                pub const m_flRecoveryTimeStandFinal: usize = 0x84C; // float32
                pub const m_nRecoveryTransitionStartBullet: usize = 0x850; // int32
                pub const m_nRecoveryTransitionEndBullet: usize = 0x854; // int32
                pub const m_flThrowVelocity: usize = 0x858; // float32
                pub const m_vSmokeColor: usize = 0x85C; // Vector
                pub const m_szAnimClass: usize = 0x868; // CGlobalSymbol
            }
            // parent: 
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod CAttributeManager {
                pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iReapplyProvisionParity: usize = 0x20; // int32
                pub const m_hOuter: usize = 0x24; // CHandle<C_BaseEntity>
                pub const m_bPreventLoopback: usize = 0x28; // bool
                pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
                pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // parent: None
            // field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // parent: C_PointEntity
            // field count: 0
            pub mod CInfoTarget {
            }
            // parent: CPlayerPawnComponent
            // field count: 20
            //
            // metadata: [REMOVED]
            pub mod CPlayer_CameraServices {
                pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float32
                pub const m_PlayerFog: usize = 0x58; // C_fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle<C_ColorCorrection>
                pub const m_hViewEntity: usize = 0x9C; // CHandle<C_BaseEntity>
                pub const m_hTonemapController: usize = 0xA0; // CHandle<C_TonemapController2>
                pub const m_audio: usize = 0xA8; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x138; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float32
                pub const m_CurrentFog: usize = 0x140; // fogparams_t
                pub const m_hOldFogController: usize = 0x1A8; // CHandle<C_FogController>
                pub const m_bOverrideFogColor: usize = 0x1AC; // bool[5]
                pub const m_OverrideFogColor: usize = 0x1B1; // Color[5]
                pub const m_bOverrideFogStartEnd: usize = 0x1C5; // bool[5]
                pub const m_fOverrideFogStart: usize = 0x1CC; // float32[5]
                pub const m_fOverrideFogEnd: usize = 0x1E0; // float32[5]
                pub const m_hActivePostProcessingVolume: usize = 0x1F4; // CHandle<C_PostProcessingVolume>
                pub const m_angDemoViewAngles: usize = 0x1F8; // QAngle
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
            // parent: C_CSWeaponBase
            // field count: 14
            //
            // metadata: [REMOVED]
            pub mod C_BaseCSGrenade {
                pub const m_bClientPredictDelete: usize = 0x1F80; // bool
                pub const m_bRedraw: usize = 0x1F81; // bool
                pub const m_bIsHeldByPlayer: usize = 0x1F82; // bool
                pub const m_bPinPulled: usize = 0x1F83; // bool
                pub const m_bJumpThrow: usize = 0x1F84; // bool
                pub const m_bThrowAnimating: usize = 0x1F85; // bool
                pub const m_fThrowTime: usize = 0x1F88; // GameTime_t
                pub const m_flThrowStrength: usize = 0x1F90; // float32
                pub const m_fDropTime: usize = 0x2008; // GameTime_t
                pub const m_fPinPullTime: usize = 0x200C; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x2010; // bool
                pub const m_nNextHoldTick: usize = 0x2014; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x2018; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x201C; // CHandle<C_CSWeaponBase>
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod CFilterAttributeInt {
                pub const m_sAttributeName: usize = 0x650; // CUtlSymbolLarge
            }
            // parent: CLogicalEntity
            // field count: 11
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x5F8; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x600; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x608; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x610; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x614; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x618; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x61C; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x620; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x638; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x650; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x658; // HSCRIPT
            }
            // parent: CPlayerPawnComponent
            // field count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // parent: CBasePlayerController
            // field count: 68
            //
            // metadata: [REMOVED]
            pub mod CCSPlayerController {
                pub const m_pInGameMoneyServices: usize = 0x7F8; // CCSPlayerController_InGameMoneyServices*
                pub const m_pInventoryServices: usize = 0x800; // CCSPlayerController_InventoryServices*
                pub const m_pActionTrackingServices: usize = 0x808; // CCSPlayerController_ActionTrackingServices*
                pub const m_pDamageServices: usize = 0x810; // CCSPlayerController_DamageServices*
                pub const m_iPing: usize = 0x818; // uint32
                pub const m_bHasCommunicationAbuseMute: usize = 0x81C; // bool
                pub const m_uiCommunicationMuteFlags: usize = 0x820; // uint32
                pub const m_szCrosshairCodes: usize = 0x828; // CUtlSymbolLarge
                pub const m_iPendingTeamNum: usize = 0x830; // uint8
                pub const m_flForceTeamTime: usize = 0x834; // GameTime_t
                pub const m_iCompTeammateColor: usize = 0x838; // int32
                pub const m_bEverPlayedOnTeam: usize = 0x83C; // bool
                pub const m_flPreviousForceJoinTeamTime: usize = 0x840; // GameTime_t
                pub const m_szClan: usize = 0x848; // CUtlSymbolLarge
                pub const m_sSanitizedPlayerName: usize = 0x850; // CUtlString
                pub const m_iCoachingTeam: usize = 0x858; // int32
                pub const m_nPlayerDominated: usize = 0x860; // uint64
                pub const m_nPlayerDominatingMe: usize = 0x868; // uint64
                pub const m_iCompetitiveRanking: usize = 0x870; // int32
                pub const m_iCompetitiveWins: usize = 0x874; // int32
                pub const m_iCompetitiveRankType: usize = 0x878; // int8
                pub const m_iCompetitiveRankingPredicted_Win: usize = 0x87C; // int32
                pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x880; // int32
                pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x884; // int32
                pub const m_nEndMatchNextMapVote: usize = 0x888; // int32
                pub const m_unActiveQuestId: usize = 0x88C; // uint16
                pub const m_rtActiveMissionPeriod: usize = 0x890; // uint32
                pub const m_nQuestProgressReason: usize = 0x894; // QuestProgress::Reason
                pub const m_unPlayerTvControlFlags: usize = 0x898; // uint32
                pub const m_iDraftIndex: usize = 0x8C8; // int32
                pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x8CC; // uint32
                pub const m_uiAbandonRecordedReason: usize = 0x8D0; // uint32
                pub const m_eNetworkDisconnectionReason: usize = 0x8D4; // uint32
                pub const m_bCannotBeKicked: usize = 0x8D8; // bool
                pub const m_bEverFullyConnected: usize = 0x8D9; // bool
                pub const m_bAbandonAllowsSurrender: usize = 0x8DA; // bool
                pub const m_bAbandonOffersInstantSurrender: usize = 0x8DB; // bool
                pub const m_bDisconnection1MinWarningPrinted: usize = 0x8DC; // bool
                pub const m_bScoreReported: usize = 0x8DD; // bool
                pub const m_nDisconnectionTick: usize = 0x8E0; // int32
                pub const m_bControllingBot: usize = 0x8F0; // bool
                pub const m_bHasControlledBotThisRound: usize = 0x8F1; // bool
                pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x8F2; // bool
                pub const m_nBotsControlledThisRound: usize = 0x8F4; // int32
                pub const m_bCanControlObservedBot: usize = 0x8F8; // bool
                pub const m_hPlayerPawn: usize = 0x8FC; // CHandle<C_CSPlayerPawn>
                pub const m_hObserverPawn: usize = 0x900; // CHandle<C_CSObserverPawn>
                pub const m_bPawnIsAlive: usize = 0x904; // bool
                pub const m_iPawnHealth: usize = 0x908; // uint32
                pub const m_iPawnArmor: usize = 0x90C; // int32
                pub const m_bPawnHasDefuser: usize = 0x910; // bool
                pub const m_bPawnHasHelmet: usize = 0x911; // bool
                pub const m_nPawnCharacterDefIndex: usize = 0x912; // uint16
                pub const m_iPawnLifetimeStart: usize = 0x914; // int32
                pub const m_iPawnLifetimeEnd: usize = 0x918; // int32
                pub const m_iPawnBotDifficulty: usize = 0x91C; // int32
                pub const m_hOriginalControllerOfCurrentPawn: usize = 0x920; // CHandle<CCSPlayerController>
                pub const m_iScore: usize = 0x924; // int32
                pub const m_recentKillQueue: usize = 0x928; // uint8[8]
                pub const m_nFirstKill: usize = 0x930; // uint8
                pub const m_nKillCount: usize = 0x931; // uint8
                pub const m_bMvpNoMusic: usize = 0x932; // bool
                pub const m_eMvpReason: usize = 0x934; // int32
                pub const m_iMusicKitID: usize = 0x938; // int32
                pub const m_iMusicKitMVPs: usize = 0x93C; // int32
                pub const m_iMVPs: usize = 0x940; // int32
                pub const m_bIsPlayerNameDirty: usize = 0x944; // bool
                pub const m_bFireBulletsSeedSynchronized: usize = 0x945; // bool
            }
            // parent: C_CSGO_TeamIntroCharacterPosition
            // field count: 0
            pub mod C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // parent: C_BaseFlex
            // field count: 4
            pub mod C_CSGO_PreviewModel {
                pub const m_defaultAnim: usize = 0x1368; // CUtlString
                pub const m_nDefaultAnimLoopMode: usize = 0x1370; // AnimLoopMode_t
                pub const m_flInitialModelScale: usize = 0x1374; // float32
                pub const m_sInitialWeaponState: usize = 0x1378; // CUtlString
            }
            // parent: C_CSGO_TeamPreviewCharacterPosition
            // field count: 0
            pub mod C_CSGO_TeamSelectCharacterPosition {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // parent: C_SoundEventEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_SoundEventAABBEntity {
                pub const m_vMins: usize = 0x6C0; // Vector
                pub const m_vMaxs: usize = 0x6CC; // Vector
            }
            // parent: CPlayer_MovementServices_Humanoid
            // field count: 40
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_MovementServices {
                pub const m_vecLadderNormal: usize = 0x278; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x284; // int32
                pub const m_flDuckAmount: usize = 0x288; // float32
                pub const m_flDuckSpeed: usize = 0x28C; // float32
                pub const m_bDuckOverride: usize = 0x290; // bool
                pub const m_bDesiresDuck: usize = 0x291; // bool
                pub const m_flDuckOffset: usize = 0x294; // float32
                pub const m_nDuckTimeMsecs: usize = 0x298; // uint32
                pub const m_nDuckJumpTimeMsecs: usize = 0x29C; // uint32
                pub const m_nJumpTimeMsecs: usize = 0x2A0; // uint32
                pub const m_flLastDuckTime: usize = 0x2A4; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x2B0; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x2B8; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x2B9; // bool
                pub const m_bInStuckTest: usize = 0x2BA; // bool
                pub const m_nTraceCount: usize = 0x4C8; // int32
                pub const m_StuckLast: usize = 0x4CC; // int32
                pub const m_bSpeedCropped: usize = 0x4D0; // bool
                pub const m_nOldWaterLevel: usize = 0x4D4; // int32
                pub const m_flWaterEntryTime: usize = 0x4D8; // float32
                pub const m_vecForward: usize = 0x4DC; // Vector
                pub const m_vecLeft: usize = 0x4E8; // Vector
                pub const m_vecUp: usize = 0x4F4; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x500; // int32
                pub const m_bOldJumpPressed: usize = 0x504; // bool
                pub const m_flJumpPressedTime: usize = 0x508; // float32
                pub const m_fStashGrenadeParameterWhen: usize = 0x50C; // GameTime_t
                pub const m_nButtonDownMaskPrev: usize = 0x510; // uint64
                pub const m_flOffsetTickCompleteTime: usize = 0x518; // float32
                pub const m_flOffsetTickStashedSpeed: usize = 0x51C; // float32
                pub const m_flStamina: usize = 0x520; // float32
                pub const m_flHeightAtJumpStart: usize = 0x524; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x528; // float32
                pub const m_flMaxJumpHeightLastJump: usize = 0x52C; // float32
                pub const m_flStaminaAtJumpStart: usize = 0x530; // float32
                pub const m_flAccumulatedJumpError: usize = 0x534; // float32
                pub const m_flTicksSinceLastSurfingDetected: usize = 0x538; // float32
                pub const m_bWasSurfing: usize = 0x53C; // bool
                pub const m_vecInputRotated: usize = 0x5CC; // Vector
                pub const m_bJumpApexPending: usize = 0xDF8; // bool
            }
            // parent: 
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod SellbackPurchaseEntry_t {
                pub const m_unDefIdx: usize = 0x30; // uint16
                pub const m_nCost: usize = 0x34; // int32
                pub const m_nPrevArmor: usize = 0x38; // int32
                pub const m_bPrevHelmet: usize = 0x3C; // bool
                pub const m_hItem: usize = 0x40; // CEntityHandle
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_TintController {
            }
            // parent: C_CSWeaponBase
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_WeaponBaseItem {
                pub const m_bSequenceInProgress: usize = 0x1F80; // bool
                pub const m_bRedraw: usize = 0x1F81; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod CWaterSplasher {
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod C_FuncBrush {
            }
            // parent: 
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod PhysicsRagdollPose_t {
                pub const m_Transforms: usize = 0x8; // C_NetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x20; // CHandle<C_BaseEntity>
                pub const m_bSetFromDebugHistory: usize = 0x24; // bool
            }
            // parent: CEntityComponent
            // field count: 10
            pub mod CPropDataComponent {
                pub const m_flDmgModBullet: usize = 0x10; // float32
                pub const m_flDmgModClub: usize = 0x14; // float32
                pub const m_flDmgModExplosive: usize = 0x18; // float32
                pub const m_flDmgModFire: usize = 0x1C; // float32
                pub const m_iszPhysicsDamageTableName: usize = 0x20; // CUtlSymbolLarge
                pub const m_iszBasePropData: usize = 0x28; // CUtlSymbolLarge
                pub const m_nInteractions: usize = 0x30; // int32
                pub const m_bSpawnMotionDisabled: usize = 0x34; // bool
                pub const m_nDisableTakePhysicsDamageSpawnFlag: usize = 0x38; // int32
                pub const m_nMotionDisabledSpawnFlag: usize = 0x3C; // int32
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_LimitCount__InstanceState_t {
                pub const m_nCurrentCount: usize = 0x0; // int32
            }
            // parent: C_CSWeaponBaseGun
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_WeaponCZ75a {
                pub const m_bMagazineRemoved: usize = 0x1FB0; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod C_DynamicLight {
                pub const m_Flags: usize = 0xEB0; // uint8
                pub const m_LightStyle: usize = 0xEB1; // uint8
                pub const m_Radius: usize = 0xEB4; // float32
                pub const m_Exponent: usize = 0xEB8; // int32
                pub const m_InnerAngle: usize = 0xEBC; // float32
                pub const m_OuterAngle: usize = 0xEC0; // float32
                pub const m_SpotRadius: usize = 0xEC4; // float32
            }
            // parent: 
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod EngineCountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // float32
                pub const m_timescale: usize = 0x10; // float32
            }
            // parent: C_SoundEventEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_SoundEventSphereEntity {
                pub const m_flRadius: usize = 0x6C0; // float32
            }
            // parent: CPlayerControllerComponent
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CCSPlayerController_DamageServices {
                pub const m_nSendUpdate: usize = 0x40; // int32
                pub const m_DamageList: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // parent: C_CSGO_PreviewPlayer
            // field count: 0
            pub mod C_CSGO_TeamPreviewModel {
            }
            // parent: C_TonemapController2
            // field count: 0
            pub mod C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // parent: C_BaseModelEntity
            // field count: 24
            //
            // metadata: [REMOVED]
            pub mod C_Inferno {
                pub const m_nfxFireDamageEffect: usize = 0xEF0; // ParticleIndex_t
                pub const m_hInfernoPointsSnapshot: usize = 0xEF8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoFillerPointsSnapshot: usize = 0xF00; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoOutlinePointsSnapshot: usize = 0xF08; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoClimbingOutlinePointsSnapshot: usize = 0xF10; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoDecalsSnapshot: usize = 0xF18; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_firePositions: usize = 0xF20; // Vector[64]
                pub const m_fireParentPositions: usize = 0x1220; // Vector[64]
                pub const m_bFireIsBurning: usize = 0x1520; // bool[64]
                pub const m_BurnNormal: usize = 0x1560; // Vector[64]
                pub const m_fireCount: usize = 0x1860; // int32
                pub const m_nInfernoType: usize = 0x1864; // int32
                pub const m_nFireLifetime: usize = 0x1868; // float32
                pub const m_bInPostEffectTime: usize = 0x186C; // bool
                pub const m_lastFireCount: usize = 0x1870; // int32
                pub const m_nFireEffectTickBegin: usize = 0x1874; // int32
                pub const m_drawableCount: usize = 0x8480; // int32
                pub const m_blosCheck: usize = 0x8484; // bool
                pub const m_nlosperiod: usize = 0x8488; // int32
                pub const m_maxFireHalfWidth: usize = 0x848C; // float32
                pub const m_maxFireHeight: usize = 0x8490; // float32
                pub const m_minBounds: usize = 0x8494; // Vector
                pub const m_maxBounds: usize = 0x84A0; // Vector
                pub const m_flLastGrassBurnThink: usize = 0x84AC; // float32
            }
            // parent: CBaseFilter
            // field count: 0
            pub mod CFilterLOS {
            }
            // parent: C_BaseEntity
            // field count: 7
            pub mod CPointOrient {
                pub const m_iszSpawnTargetName: usize = 0x5F8; // CUtlSymbolLarge
                pub const m_hTarget: usize = 0x600; // CHandle<C_BaseEntity>
                pub const m_bActive: usize = 0x604; // bool
                pub const m_nGoalDirection: usize = 0x608; // PointOrientGoalDirectionType_t
                pub const m_nConstraint: usize = 0x60C; // PointOrientConstraint_t
                pub const m_flMaxTurnRate: usize = 0x610; // float32
                pub const m_flLastGameTime: usize = 0x614; // GameTime_t
            }
            // parent: C_BaseEntity
            // field count: 1
            pub mod C_GlobalLight {
                pub const m_WindClothForceHandle: usize = 0xAC0; // uint16
            }
            // parent: C_BaseEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_EnvWindClientside {
                pub const m_EnvWindShared: usize = 0x5F8; // C_EnvWindShared
            }
            // parent: 
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // Vector
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // parent: C_BaseCSGrenadeProjectile
            // field count: 0
            pub mod C_FlashbangProjectile {
            }
            // parent: 
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CDestructiblePartsComponent {
                pub const __m_pChainEntity: usize = 0x0; // CNetworkVarChainer
                pub const m_vecDamageTakenByHitGroup: usize = 0x48; // CUtlVector<uint16>
                pub const m_hOwner: usize = 0x60; // CHandle<C_BaseModelEntity>
                pub const m_nLastHitDamageLevel: usize = 0x64; // int32
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponP90 {
            }
            // parent: C_BaseEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_EnvWind {
                pub const m_EnvWindShared: usize = 0x5F8; // C_EnvWindShared
            }
            // parent: C_CSGO_TeamPreviewCamera
            // field count: 0
            pub mod C_CSGO_TerroristTeamIntroCamera {
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Step_DebugLog {
            }
            // parent: CPlayerControllerComponent
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0xA8; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x128; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x12C; // int32
                pub const m_flTotalRoundDamageDealt: usize = 0x130; // float32
            }
            // parent: CBodyComponentSkeletonInstance
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x5B0; // CBaseAnimGraphController
            }
            // parent: C_CSGO_PreviewModel
            // field count: 0
            pub mod C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // parent: C_PointEntity
            // field count: 0
            pub mod C_InfoInstructorHintHostageRescueZone {
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
            // parent: C_BaseTrigger
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_TriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0xFF0; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0x1108; // float32
            }
            // parent: CPlayer_MovementServices
            // field count: 12
            //
            // metadata: [REMOVED]
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x238; // float32
                pub const m_flFallVelocity: usize = 0x23C; // float32
                pub const m_bInCrouch: usize = 0x240; // bool
                pub const m_nCrouchState: usize = 0x244; // uint32
                pub const m_flCrouchTransitionStartTime: usize = 0x248; // GameTime_t
                pub const m_bDucked: usize = 0x24C; // bool
                pub const m_bDucking: usize = 0x24D; // bool
                pub const m_bInDuckJump: usize = 0x24E; // bool
                pub const m_groundNormal: usize = 0x250; // Vector
                pub const m_flSurfaceFriction: usize = 0x25C; // float32
                pub const m_surfaceProps: usize = 0x260; // CUtlStringToken
                pub const m_nStepside: usize = 0x270; // int32
            }
            // parent: None
            // field count: 1
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
                pub const m_bIsValid: usize = 0x0; // bool
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponTec9 {
            }
            // parent: C_BreakableProp
            // field count: 5
            pub mod C_PhysPropClientside {
                pub const m_flTouchDelta: usize = 0x1300; // GameTime_t
                pub const m_fDeathTime: usize = 0x1304; // GameTime_t
                pub const m_vecDamagePosition: usize = 0x1308; // Vector
                pub const m_vecDamageDirection: usize = 0x1314; // Vector
                pub const m_nDamageType: usize = 0x1320; // DamageTypes_t
            }
            // parent: C_BaseToggle
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_BaseDoor {
                pub const m_bIsUsable: usize = 0xEB0; // bool
            }
            // parent: None
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x68; // int32
                pub const m_iEnemy4Ks: usize = 0x6C; // int32
                pub const m_iEnemy3Ks: usize = 0x70; // int32
                pub const m_iEnemyKnifeKills: usize = 0x74; // int32
                pub const m_iEnemyTaserKills: usize = 0x78; // int32
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod EntityRenderAttribute_t {
                pub const m_ID: usize = 0x30; // CUtlStringToken
                pub const m_Values: usize = 0x34; // Vector4D
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
            // field count: 0
            pub mod CFilterMultipleAPI {
            }
            // parent: CHostageRescueZoneShim
            // field count: 0
            pub mod CHostageRescueZone {
            }
            // parent: 
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod CModelState {
                pub const m_hModel: usize = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xD8; // CUtlSymbolLarge
                pub const m_bClientClothCreationSuppressed: usize = 0x1A9; // bool
                pub const m_MeshGroupMask: usize = 0x250; // uint64
                pub const m_nBodyGroupChoices: usize = 0x2A0; // C_NetworkUtlVectorBase<int32>
                pub const m_nIdealMotionType: usize = 0x2EA; // int8
                pub const m_nForceLOD: usize = 0x2EB; // int8
                pub const m_nClothUpdateFlags: usize = 0x2EC; // int8
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_LerpCameraSettings__CursorState_t {
                pub const m_hCamera: usize = 0x8; // CHandle<C_PointCamera>
                pub const m_OverlaidStart: usize = 0xC; // PointCameraSettings_t
                pub const m_OverlaidEnd: usize = 0x1C; // PointCameraSettings_t
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: C_CSWeaponBase
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod C_CSWeaponBaseGun {
                pub const m_zoomLevel: usize = 0x1F80; // int32
                pub const m_iBurstShotsRemaining: usize = 0x1F84; // int32
                pub const m_iSilencerBodygroup: usize = 0x1F88; // int32
                pub const m_silencedModelIndex: usize = 0x1F98; // int32
                pub const m_inPrecache: usize = 0x1F9C; // bool
                pub const m_bNeedsBoltAction: usize = 0x1F9D; // bool
                pub const m_nRevolverCylinderIdx: usize = 0x1FA0; // int32
            }
            // parent: C_GameRulesProxy
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_CSGameRulesProxy {
                pub const m_pGameRules: usize = 0x5F8; // C_CSGameRules*
            }
            // parent: 
            // field count: 17
            //
            // metadata: [REMOVED]
            pub mod CCollisionProperty {
                pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
                pub const m_vecMins: usize = 0x40; // Vector
                pub const m_vecMaxs: usize = 0x4C; // Vector
                pub const m_usSolidFlags: usize = 0x5A; // uint8
                pub const m_nSolidType: usize = 0x5B; // SolidType_t
                pub const m_triggerBloat: usize = 0x5C; // uint8
                pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
                pub const m_CollisionGroup: usize = 0x5E; // uint8
                pub const m_nEnablePhysics: usize = 0x5F; // uint8
                pub const m_flBoundingRadius: usize = 0x60; // float32
                pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
                pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
                pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
                pub const m_vecSurroundingMins: usize = 0x88; // Vector
                pub const m_vCapsuleCenter1: usize = 0x94; // Vector
                pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
                pub const m_flCapsuleRadius: usize = 0xAC; // float32
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponP250 {
            }
            // parent: C_PhysicsProp
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_ShatterGlassShardPhysics {
                pub const m_ShardDesc: usize = 0x1318; // shard_model_desc_t
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod CFilterMassGreater {
                pub const m_fFilterMass: usize = 0x650; // float32
            }
            // parent: C_BaseModelEntity
            // field count: 13
            //
            // metadata: [REMOVED]
            pub mod C_EntityDissolve {
                pub const m_flStartTime: usize = 0xEB8; // GameTime_t
                pub const m_flFadeInStart: usize = 0xEBC; // float32
                pub const m_flFadeInLength: usize = 0xEC0; // float32
                pub const m_flFadeOutModelStart: usize = 0xEC4; // float32
                pub const m_flFadeOutModelLength: usize = 0xEC8; // float32
                pub const m_flFadeOutStart: usize = 0xECC; // float32
                pub const m_flFadeOutLength: usize = 0xED0; // float32
                pub const m_flNextSparkTime: usize = 0xED4; // GameTime_t
                pub const m_nDissolveType: usize = 0xED8; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0xEDC; // Vector
                pub const m_nMagnitude: usize = 0xEE8; // uint32
                pub const m_bCoreExplode: usize = 0xEEC; // bool
                pub const m_bLinkedToServerEnt: usize = 0xEED; // bool
            }
            // parent: C_SoundOpvarSetAABBEntity
            // field count: 0
            pub mod C_SoundOpvarSetOBBEntity {
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CCSGameModeRules_ArmsRace {
                pub const m_WeaponSequence: usize = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // parent: C_FuncBrush
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod C_FuncMonitor {
                pub const m_targetCamera: usize = 0xEB0; // CUtlString
                pub const m_nResolutionEnum: usize = 0xEB8; // int32
                pub const m_bRenderShadows: usize = 0xEBC; // bool
                pub const m_bUseUniqueColorTarget: usize = 0xEBD; // bool
                pub const m_brushModelName: usize = 0xEC0; // CUtlString
                pub const m_hTargetCamera: usize = 0xEC8; // CHandle<C_BaseEntity>
                pub const m_bEnabled: usize = 0xECC; // bool
                pub const m_bDraw3DSkybox: usize = 0xECD; // bool
            }
            // parent: CBaseAnimGraph
            // field count: 14
            pub mod C_ClientRagdoll {
                pub const m_bFadeOut: usize = 0x1158; // bool
                pub const m_bImportant: usize = 0x1159; // bool
                pub const m_flEffectTime: usize = 0x115C; // GameTime_t
                pub const m_gibDespawnTime: usize = 0x1160; // GameTime_t
                pub const m_iCurrentFriction: usize = 0x1164; // int32
                pub const m_iMinFriction: usize = 0x1168; // int32
                pub const m_iMaxFriction: usize = 0x116C; // int32
                pub const m_iFrictionAnimState: usize = 0x1170; // int32
                pub const m_bReleaseRagdoll: usize = 0x1174; // bool
                pub const m_iEyeAttachment: usize = 0x1175; // AttachmentHandle_t
                pub const m_bFadingOut: usize = 0x1176; // bool
                pub const m_flScaleEnd: usize = 0x1178; // float32[10]
                pub const m_flScaleTimeStart: usize = 0x11A0; // GameTime_t[10]
                pub const m_flScaleTimeEnd: usize = 0x11C8; // GameTime_t[10]
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_PlaySequence__CursorState_t {
                pub const m_hTarget: usize = 0x0; // CHandle<CBaseAnimGraph>
            }
            // parent: CBodyComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CBodyComponentSkeletonInstance {
                pub const m_skeletonInstance: usize = 0x80; // CSkeletonInstance
            }
            // parent: CBaseAnimGraph
            // field count: 0
            pub mod C_CS2WeaponModuleBase {
            }
            // parent: C_BaseEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod C_CSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x5F8; // int32
                pub const m_nRandom: usize = 0x5FC; // int32
                pub const m_nOrdinal: usize = 0x600; // int32
                pub const m_sWeaponName: usize = 0x608; // CUtlString
                pub const m_xuid: usize = 0x610; // uint64
                pub const m_agentItem: usize = 0x618; // C_EconItemView
                pub const m_glovesItem: usize = 0xA90; // C_EconItemView
                pub const m_weaponItem: usize = 0xF08; // C_EconItemView
            }
            // parent: C_BaseCSGrenadeProjectile
            // field count: 10
            //
            // metadata: [REMOVED]
            pub mod C_SmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0x1468; // int32
                pub const m_bDidSmokeEffect: usize = 0x146C; // bool
                pub const m_nRandomSeed: usize = 0x1470; // int32
                pub const m_vSmokeColor: usize = 0x1474; // Vector
                pub const m_vSmokeDetonationPos: usize = 0x1480; // Vector
                pub const m_VoxelFrameData: usize = 0x1490; // C_NetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0x14A8; // int32
                pub const m_nVoxelUpdate: usize = 0x14AC; // int32
                pub const m_bSmokeVolumeDataReceived: usize = 0x14B0; // bool
                pub const m_bSmokeEffectSpawned: usize = 0x14B1; // bool
            }
            // parent: CEntityComponent
            // field count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // parent: CPlayerPawnComponent
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_PortraitWorldCallbackHandler {
            }
            // parent: C_BreakableProp
            // field count: 23
            //
            // metadata: [REMOVED]
            pub mod C_DynamicProp {
                pub const m_bUseHitboxesForRenderBox: usize = 0x1300; // bool
                pub const m_bUseAnimGraph: usize = 0x1301; // bool
                pub const m_pOutputAnimBegun: usize = 0x1308; // CEntityIOOutput
                pub const m_pOutputAnimOver: usize = 0x1330; // CEntityIOOutput
                pub const m_pOutputAnimLoopCycleOver: usize = 0x1358; // CEntityIOOutput
                pub const m_OnAnimReachedStart: usize = 0x1380; // CEntityIOOutput
                pub const m_OnAnimReachedEnd: usize = 0x13A8; // CEntityIOOutput
                pub const m_iszIdleAnim: usize = 0x13D0; // CUtlSymbolLarge
                pub const m_nIdleAnimLoopMode: usize = 0x13D8; // AnimLoopMode_t
                pub const m_bRandomizeCycle: usize = 0x13DC; // bool
                pub const m_bStartDisabled: usize = 0x13DD; // bool
                pub const m_bFiredStartEndOutput: usize = 0x13DE; // bool
                pub const m_bForceNpcExclude: usize = 0x13DF; // bool
                pub const m_bCreateNonSolid: usize = 0x13E0; // bool
                pub const m_bIsOverrideProp: usize = 0x13E1; // bool
                pub const m_iInitialGlowState: usize = 0x13E4; // int32
                pub const m_nGlowRange: usize = 0x13E8; // int32
                pub const m_nGlowRangeMin: usize = 0x13EC; // int32
                pub const m_glowColor: usize = 0x13F0; // Color
                pub const m_nGlowTeam: usize = 0x13F4; // int32
                pub const m_iCachedFrameCount: usize = 0x13F8; // int32
                pub const m_vecCachedRenderMins: usize = 0x13FC; // Vector
                pub const m_vecCachedRenderMaxs: usize = 0x1408; // Vector
            }
            // parent: C_Team
            // field count: 10
            //
            // metadata: [REMOVED]
            pub mod C_CSTeam {
                pub const m_szTeamMatchStat: usize = 0x6B0; // char[512]
                pub const m_numMapVictories: usize = 0x8B0; // int32
                pub const m_bSurrendered: usize = 0x8B4; // bool
                pub const m_scoreFirstHalf: usize = 0x8B8; // int32
                pub const m_scoreSecondHalf: usize = 0x8BC; // int32
                pub const m_scoreOvertime: usize = 0x8C0; // int32
                pub const m_szClanTeamname: usize = 0x8C4; // char[129]
                pub const m_iClanID: usize = 0x948; // uint32
                pub const m_szTeamFlagImage: usize = 0x94C; // char[8]
                pub const m_szTeamLogoImage: usize = 0x954; // char[8]
            }
            // parent: C_CS2HudModelBase
            // field count: 0
            pub mod C_CS2HudModelWeapon {
            }
            // parent: C_BaseModelEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod C_TextureBasedAnimatable {
                pub const m_bLoop: usize = 0xEB0; // bool
                pub const m_flFPS: usize = 0xEB4; // float32
                pub const m_hPositionKeys: usize = 0xEB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hRotationKeys: usize = 0xEC0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vAnimationBoundsMin: usize = 0xEC8; // Vector
                pub const m_vAnimationBoundsMax: usize = 0xED4; // Vector
                pub const m_flStartTime: usize = 0xEE0; // float32
                pub const m_flStartFrame: usize = 0xEE4; // float32
            }
            // parent: C_LightDirectionalEntity
            // field count: 0
            pub mod C_LightEnvironmentEntity {
            }
            // parent: None
            // field count: 0
            pub mod CLogicRelayAPI {
            }
            // parent: C_BaseTrigger
            // field count: 13
            //
            // metadata: [REMOVED]
            pub mod C_TriggerPhysics {
                pub const m_gravityScale: usize = 0xFF0; // float32
                pub const m_linearLimit: usize = 0xFF4; // float32
                pub const m_linearDamping: usize = 0xFF8; // float32
                pub const m_angularLimit: usize = 0xFFC; // float32
                pub const m_angularDamping: usize = 0x1000; // float32
                pub const m_linearForce: usize = 0x1004; // float32
                pub const m_flFrequency: usize = 0x1008; // float32
                pub const m_flDampingRatio: usize = 0x100C; // float32
                pub const m_vecLinearForcePointAt: usize = 0x1010; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x101C; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x1020; // Vector
                pub const m_vecLinearForceDirection: usize = 0x102C; // Vector
                pub const m_bConvertToDebrisWhenPossible: usize = 0x1038; // bool
            }
            // parent: C_BasePropDoor
            // field count: 0
            pub mod C_PropDoorRotating {
            }
            // parent: C_BaseEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_HandleTest {
                pub const m_Handle: usize = 0x5F8; // CHandle<C_BaseEntity>
                pub const m_bSendHandle: usize = 0x5FC; // bool
            }
            // parent: C_BaseEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x5F8; // CEntityIOOutput
                pub const m_worldName: usize = 0x620; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x628; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x630; // bool
                pub const m_bEntitiesSpawned: usize = 0x631; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x632; // bool
                pub const m_hLayerSpawnGroup: usize = 0x634; // uint32
                pub const m_bWorldLayerActuallyVisible: usize = 0x638; // bool
            }
            // parent: CBodyComponentSkeletonInstance
            // field count: 0
            pub mod CBodyComponentBaseModelEntity {
            }
            // parent: CBaseAnimGraph
            // field count: 1
            pub mod C_Multimeter {
                pub const m_hTargetC4: usize = 0x1160; // CHandle<C_PlantedC4>
            }
            // parent: C_BaseToggle
            // field count: 11
            //
            // metadata: [REMOVED]
            pub mod C_BaseTrigger {
                pub const m_OnStartTouch: usize = 0xEB0; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0xED8; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0xF00; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0xF28; // CEntityIOOutput
                pub const m_OnTouching: usize = 0xF50; // CEntityIOOutput
                pub const m_OnTouchingEachEntity: usize = 0xF78; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0xFA0; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0xFC8; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iFilterName: usize = 0xFE0; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0xFE8; // CHandle<CBaseFilter>
                pub const m_bDisabled: usize = 0xFEC; // bool
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod FilterDamageType {
                pub const m_iDamageType: usize = 0x650; // int32
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x70; // CAttributeManager*
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod CFilterProximity {
                pub const m_flRadius: usize = 0x650; // float32
            }
            // parent: None
            // field count: 21
            //
            // metadata: [REMOVED]
            pub mod CEffectData {
                pub const m_vOrigin: usize = 0x8; // VectorWS
                pub const m_vStart: usize = 0x14; // VectorWS
                pub const m_vNormal: usize = 0x20; // Vector
                pub const m_vAngles: usize = 0x2C; // QAngle
                pub const m_hEntity: usize = 0x38; // CEntityHandle
                pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
                pub const m_flScale: usize = 0x40; // float32
                pub const m_flMagnitude: usize = 0x44; // float32
                pub const m_flRadius: usize = 0x48; // float32
                pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
                pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nDamageType: usize = 0x58; // uint32
                pub const m_nPenetrate: usize = 0x5C; // uint8
                pub const m_nMaterial: usize = 0x5E; // uint16
                pub const m_nHitBox: usize = 0x60; // int16
                pub const m_nColor: usize = 0x62; // uint8
                pub const m_fFlags: usize = 0x63; // uint8
                pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
                pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
                pub const m_iEffectName: usize = 0x6C; // uint16
                pub const m_nExplosionType: usize = 0x6E; // uint8
            }
            // parent: C_BaseModelEntity
            // field count: 24
            //
            // metadata: [REMOVED]
            pub mod C_ParticleSystem {
                pub const m_szSnapshotFileName: usize = 0xEB0; // char[512]
                pub const m_bActive: usize = 0x10B0; // bool
                pub const m_bFrozen: usize = 0x10B1; // bool
                pub const m_flFreezeTransitionDuration: usize = 0x10B4; // float32
                pub const m_nStopType: usize = 0x10B8; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0x10BC; // bool
                pub const m_iEffectIndex: usize = 0x10C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0x10C8; // GameTime_t
                pub const m_flPreSimTime: usize = 0x10CC; // float32
                pub const m_vServerControlPoints: usize = 0x10D0; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0x1100; // uint8[4]
                pub const m_hControlPointEnts: usize = 0x1104; // CHandle<C_BaseEntity>[64]
                pub const m_bNoSave: usize = 0x1204; // bool
                pub const m_bNoFreeze: usize = 0x1205; // bool
                pub const m_bNoRamp: usize = 0x1206; // bool
                pub const m_bStartActive: usize = 0x1207; // bool
                pub const m_iszEffectName: usize = 0x1208; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0x1210; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0x1410; // int32
                pub const m_vecDataCPValue: usize = 0x1414; // Vector
                pub const m_nTintCP: usize = 0x1420; // int32
                pub const m_clrTint: usize = 0x1424; // Color
                pub const m_bOldActive: usize = 0x1448; // bool
                pub const m_bOldFrozen: usize = 0x1449; // bool
            }
            // parent: None
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponSCAR20 {
            }
            // parent: CBaseAnimGraph
            // field count: 19
            //
            // metadata: [REMOVED]
            pub mod C_BaseFlex {
                pub const m_flexWeight: usize = 0x1168; // C_NetworkUtlVectorBase<float32>
                pub const m_vLookTargetPosition: usize = 0x1180; // VectorWS
                pub const m_blinktoggle: usize = 0x1210; // bool
                pub const m_nLastFlexUpdateFrameCount: usize = 0x1270; // int32
                pub const m_CachedViewTarget: usize = 0x1274; // Vector
                pub const m_nNextSceneEventId: usize = 0x1280; // SceneEventId_t
                pub const m_iBlink: usize = 0x1284; // int32
                pub const m_blinktime: usize = 0x1288; // float32
                pub const m_prevblinktoggle: usize = 0x128C; // bool
                pub const m_iJawOpen: usize = 0x1290; // int32
                pub const m_flJawOpenAmount: usize = 0x1294; // float32
                pub const m_flBlinkAmount: usize = 0x1298; // float32
                pub const m_iMouthAttachment: usize = 0x129C; // AttachmentHandle_t
                pub const m_iEyeAttachment: usize = 0x129D; // AttachmentHandle_t
                pub const m_bResetFlexWeightsOnModelChange: usize = 0x129E; // bool
                pub const m_nEyeOcclusionRendererBone: usize = 0x12B8; // int32
                pub const m_mEyeOcclusionRendererCameraToBoneTransform: usize = 0x12BC; // matrix3x4_t
                pub const m_vEyeOcclusionRendererHalfExtent: usize = 0x12EC; // Vector
                pub const m_PhonemeClasses: usize = 0x1308; // C_BaseFlex::Emphasized_Phoneme[3]
            }
            // parent: C_BaseToggle
            // field count: 0
            pub mod C_FuncMover {
            }
            // parent: None
            // field count: 3
            pub mod CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                pub const pItem: usize = 0x0; // C_EconItemView*
                pub const team: usize = 0x8; // uint16
                pub const slot: usize = 0xA; // uint16
            }
            // parent: CEntityComponent
            // field count: 69
            //
            // metadata: [REMOVED]
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x30; // CNetworkVarChainer
                pub const m_Color: usize = 0x6D; // Color
                pub const m_SecondaryColor: usize = 0x71; // Color
                pub const m_flBrightness: usize = 0x78; // float32
                pub const m_flBrightnessScale: usize = 0x7C; // float32
                pub const m_flBrightnessMult: usize = 0x80; // float32
                pub const m_flRange: usize = 0x84; // float32
                pub const m_flFalloff: usize = 0x88; // float32
                pub const m_flAttenuation0: usize = 0x8C; // float32
                pub const m_flAttenuation1: usize = 0x90; // float32
                pub const m_flAttenuation2: usize = 0x94; // float32
                pub const m_flTheta: usize = 0x98; // float32
                pub const m_flPhi: usize = 0x9C; // float32
                pub const m_hLightCookie: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xA8; // int32
                pub const m_nCastShadows: usize = 0xAC; // int32
                pub const m_nShadowWidth: usize = 0xB0; // int32
                pub const m_nShadowHeight: usize = 0xB4; // int32
                pub const m_bRenderDiffuse: usize = 0xB8; // bool
                pub const m_nRenderSpecular: usize = 0xBC; // int32
                pub const m_bRenderTransmissive: usize = 0xC0; // bool
                pub const m_flOrthoLightWidth: usize = 0xC4; // float32
                pub const m_flOrthoLightHeight: usize = 0xC8; // float32
                pub const m_nStyle: usize = 0xCC; // int32
                pub const m_Pattern: usize = 0xD0; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0xD8; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0xDC; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0xE0; // float32
                pub const m_flShadowCascadeDistance0: usize = 0xE4; // float32
                pub const m_flShadowCascadeDistance1: usize = 0xE8; // float32
                pub const m_flShadowCascadeDistance2: usize = 0xEC; // float32
                pub const m_flShadowCascadeDistance3: usize = 0xF0; // float32
                pub const m_nShadowCascadeResolution0: usize = 0xF4; // int32
                pub const m_nShadowCascadeResolution1: usize = 0xF8; // int32
                pub const m_nShadowCascadeResolution2: usize = 0xFC; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x100; // int32
                pub const m_bUsesBakedShadowing: usize = 0x104; // bool
                pub const m_nShadowPriority: usize = 0x108; // int32
                pub const m_nBakedShadowIndex: usize = 0x10C; // int32
                pub const m_nLightPathUniqueId: usize = 0x110; // int32
                pub const m_nLightMapUniqueId: usize = 0x114; // int32
                pub const m_bRenderToCubemaps: usize = 0x118; // bool
                pub const m_bAllowSSTGeneration: usize = 0x119; // bool
                pub const m_nDirectLight: usize = 0x11C; // int32
                pub const m_nIndirectLight: usize = 0x120; // int32
                pub const m_flFadeMinDist: usize = 0x124; // float32
                pub const m_flFadeMaxDist: usize = 0x128; // float32
                pub const m_flShadowFadeMinDist: usize = 0x12C; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x130; // float32
                pub const m_bEnabled: usize = 0x134; // bool
                pub const m_bFlicker: usize = 0x135; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x136; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x138; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x144; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x150; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x15C; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x168; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x174; // float32
                pub const m_nFogLightingMode: usize = 0x178; // int32
                pub const m_flFogContributionStength: usize = 0x17C; // float32
                pub const m_flNearClipPlane: usize = 0x180; // float32
                pub const m_SkyColor: usize = 0x184; // Color
                pub const m_flSkyIntensity: usize = 0x188; // float32
                pub const m_SkyAmbientBounce: usize = 0x18C; // Color
                pub const m_bUseSecondaryColor: usize = 0x190; // bool
                pub const m_bMixedShadows: usize = 0x191; // bool
                pub const m_flLightStyleStartTime: usize = 0x194; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x198; // float32
                pub const m_flMinRoughness: usize = 0x19C; // float32
            }
            // parent: C_BaseCSGrenade
            // field count: 0
            pub mod C_DecoyGrenade {
            }
            // parent: CBaseAnimGraph
            // field count: 0
            pub mod C_WaterBullet {
            }
            // parent: CPlayerPawnComponent
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x40; // CHandle<C_BasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x44; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x48; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0xB8; // WeaponPurchaseTracker_t
            }
            // parent: C_BaseEntity
            // field count: 18
            //
            // metadata: [REMOVED]
            pub mod C_EnvCubemap {
                pub const m_Entity_hCubemapTexture: usize = 0x678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x680; // bool
                pub const m_Entity_flInfluenceRadius: usize = 0x684; // float32
                pub const m_Entity_vBoxProjectMins: usize = 0x688; // Vector
                pub const m_Entity_vBoxProjectMaxs: usize = 0x694; // Vector
                pub const m_Entity_bMoveable: usize = 0x6A0; // bool
                pub const m_Entity_nHandshake: usize = 0x6A4; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x6A8; // int32
                pub const m_Entity_nPriority: usize = 0x6AC; // int32
                pub const m_Entity_flEdgeFadeDist: usize = 0x6B0; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x6B4; // Vector
                pub const m_Entity_flDiffuseScale: usize = 0x6C0; // float32
                pub const m_Entity_bStartDisabled: usize = 0x6C4; // bool
                pub const m_Entity_bDefaultEnvMap: usize = 0x6C5; // bool
                pub const m_Entity_bDefaultSpecEnvMap: usize = 0x6C6; // bool
                pub const m_Entity_bIndoorCubeMap: usize = 0x6C7; // bool
                pub const m_Entity_bCopyDiffuseFromDefaultCubemap: usize = 0x6C8; // bool
                pub const m_Entity_bEnabled: usize = 0x6D8; // bool
            }
            // parent: CPlayer_MovementServices
            // field count: 0
            pub mod CCSObserver_MovementServices {
            }
            // parent: CEntityComponent
            // field count: 2
            pub mod CBodyComponent {
                pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
                pub const __m_pChainEntity: usize = 0x48; // CNetworkVarChainer
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
            // parent: C_BaseFlex
            // field count: 6
            //
            // metadata: [REMOVED]
            pub mod C_BaseCombatCharacter {
                pub const m_hMyWearables: usize = 0x1368; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                pub const m_leftFootAttachment: usize = 0x1380; // AttachmentHandle_t
                pub const m_rightFootAttachment: usize = 0x1381; // AttachmentHandle_t
                pub const m_nWaterWakeMode: usize = 0x1384; // C_BaseCombatCharacter::WaterWakeMode_t
                pub const m_flWaterWorldZ: usize = 0x1388; // float32
                pub const m_flWaterNextTraceTime: usize = 0x138C; // float32
            }
            // parent: 
            // field count: 11
            //
            // metadata: [REMOVED]
            pub mod CGlowProperty {
                pub const m_fGlowColor: usize = 0x8; // Vector
                pub const m_iGlowType: usize = 0x30; // int32
                pub const m_iGlowTeam: usize = 0x34; // int32
                pub const m_nGlowRange: usize = 0x38; // int32
                pub const m_nGlowRangeMin: usize = 0x3C; // int32
                pub const m_glowColorOverride: usize = 0x40; // Color
                pub const m_bFlashing: usize = 0x44; // bool
                pub const m_flGlowTime: usize = 0x48; // float32
                pub const m_flGlowStartTime: usize = 0x4C; // float32
                pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
                pub const m_bGlowing: usize = 0x51; // bool
            }
            // parent: C_BaseClientUIEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_PointClientUIDialog {
                pub const m_hActivator: usize = 0xEE0; // CHandle<C_BaseEntity>
                pub const m_bStartEnabled: usize = 0xEE4; // bool
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_BaseValue {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponHKP2000 {
            }
            // parent: C_BaseTrigger
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_FootstepControl {
                pub const m_source: usize = 0xFF0; // CUtlSymbolLarge
                pub const m_destination: usize = 0xFF8; // CUtlSymbolLarge
            }
            // parent: C_BaseEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod CCitadelSoundOpvarSetOBB {
                pub const m_iszStackName: usize = 0x610; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x618; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x620; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x628; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x634; // Vector
                pub const m_vDistanceOuterMins: usize = 0x640; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x64C; // Vector
                pub const m_nAABBDirection: usize = 0x658; // int32
            }
            // parent: C_CSGO_EndOfMatchLineupEndpoint
            // field count: 0
            pub mod C_CSGO_EndOfMatchLineupStart {
            }
            // parent: CPlayerPawnComponent
            // field count: 0
            pub mod CPlayer_WaterServices {
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
            // field count: 15
            //
            // metadata: [REMOVED]
            pub mod CDamageRecord {
                pub const m_PlayerDamager: usize = 0x30; // CHandle<C_CSPlayerPawn>
                pub const m_PlayerRecipient: usize = 0x34; // CHandle<C_CSPlayerPawn>
                pub const m_hPlayerControllerDamager: usize = 0x38; // CHandle<CCSPlayerController>
                pub const m_hPlayerControllerRecipient: usize = 0x3C; // CHandle<CCSPlayerController>
                pub const m_szPlayerDamagerName: usize = 0x40; // CUtlString
                pub const m_szPlayerRecipientName: usize = 0x48; // CUtlString
                pub const m_DamagerXuid: usize = 0x50; // uint64
                pub const m_RecipientXuid: usize = 0x58; // uint64
                pub const m_flBulletsDamage: usize = 0x60; // float32
                pub const m_flDamage: usize = 0x64; // float32
                pub const m_flActualHealthRemoved: usize = 0x68; // float32
                pub const m_iNumHits: usize = 0x6C; // int32
                pub const m_iLastBulletUpdate: usize = 0x70; // int32
                pub const m_bIsOtherEnemy: usize = 0x74; // bool
                pub const m_killType: usize = 0x75; // EKillTypes_t
            }
            // parent: 
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod VPhysicsCollisionAttribute_t {
                pub const m_nInteractsAs: usize = 0x8; // uint64
                pub const m_nInteractsWith: usize = 0x10; // uint64
                pub const m_nInteractsExclude: usize = 0x18; // uint64
                pub const m_nEntityId: usize = 0x20; // uint32
                pub const m_nOwnerId: usize = 0x24; // uint32
                pub const m_nHierarchyId: usize = 0x28; // uint16
                pub const m_nCollisionGroup: usize = 0x2A; // uint8
                pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8
            }
            // parent: C_DynamicProp
            // field count: 0
            pub mod C_DynamicPropAlias_dynamic_prop {
            }
            // parent: CEnvSoundscapeProxy
            // field count: 0
            pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // parent: C_BarnLight
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_OmniLight {
                pub const m_flInnerAngle: usize = 0x1200; // float32
                pub const m_flOuterAngle: usize = 0x1204; // float32
                pub const m_bShowLight: usize = 0x1208; // bool
            }
            // parent: C_PointEntity
            // field count: 12
            //
            // metadata: [REMOVED]
            pub mod C_SceneEntity {
                pub const m_bIsPlayingBack: usize = 0x600; // bool
                pub const m_bPaused: usize = 0x601; // bool
                pub const m_bMultiplayer: usize = 0x602; // bool
                pub const m_bAutogenerated: usize = 0x603; // bool
                pub const m_flForceClientTime: usize = 0x604; // float32
                pub const m_nSceneStringIndex: usize = 0x608; // uint16
                pub const m_bClientOnly: usize = 0x60A; // bool
                pub const m_hOwner: usize = 0x60C; // CHandle<C_BaseFlex>
                pub const m_hActorList: usize = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                pub const m_bWasPlaying: usize = 0x628; // bool
                pub const m_QueuedEvents: usize = 0x638; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                pub const m_flCurrentTime: usize = 0x650; // float32
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
            // parent: C_CS2WeaponModuleBase
            // field count: 1
            pub mod C_NametagModule {
                pub const m_strNametagString: usize = 0x1160; // CUtlString
            }
            // parent: C_BaseFlex
            // field count: 20
            //
            // metadata: [REMOVED]
            pub mod C_EconEntity {
                pub const m_flFlexDelayTime: usize = 0x1378; // float32
                pub const m_flFlexDelayedWeight: usize = 0x1380; // float32*
                pub const m_bAttributesInitialized: usize = 0x1388; // bool
                pub const m_AttributeManager: usize = 0x1390; // C_AttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0x1868; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0x186C; // uint32
                pub const m_nFallbackPaintKit: usize = 0x1870; // int32
                pub const m_nFallbackSeed: usize = 0x1874; // int32
                pub const m_flFallbackWear: usize = 0x1878; // float32
                pub const m_nFallbackStatTrak: usize = 0x187C; // int32
                pub const m_bClientside: usize = 0x1880; // bool
                pub const m_bParticleSystemsCreated: usize = 0x1881; // bool
                pub const m_vecAttachedParticles: usize = 0x1888; // CUtlVector<int32>
                pub const m_hViewmodelAttachment: usize = 0x18A0; // CHandle<CBaseAnimGraph>
                pub const m_iOldTeam: usize = 0x18A4; // int32
                pub const m_bAttachmentDirty: usize = 0x18A8; // bool
                pub const m_nUnloadedModelIndex: usize = 0x18AC; // int32
                pub const m_iNumOwnerValidationRetries: usize = 0x18B0; // int32
                pub const m_hOldProvidee: usize = 0x18C0; // CHandle<C_BaseEntity>
                pub const m_vecAttachedModels: usize = 0x18C8; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // parent: CPlayerPawnComponent
            // field count: 0
            pub mod CPlayer_UseServices {
            }
            // parent: C_BaseEntity
            // field count: 25
            //
            // metadata: [REMOVED]
            pub mod C_PointValueRemapper {
                pub const m_bDisabled: usize = 0x5F8; // bool
                pub const m_bDisabledOld: usize = 0x5F9; // bool
                pub const m_bUpdateOnClient: usize = 0x5FA; // bool
                pub const m_nInputType: usize = 0x5FC; // ValueRemapperInputType_t
                pub const m_hRemapLineStart: usize = 0x600; // CHandle<C_BaseEntity>
                pub const m_hRemapLineEnd: usize = 0x604; // CHandle<C_BaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x608; // float32
                pub const m_flDisengageDistance: usize = 0x60C; // float32
                pub const m_flEngageDistance: usize = 0x610; // float32
                pub const m_bRequiresUseKey: usize = 0x614; // bool
                pub const m_nOutputType: usize = 0x618; // ValueRemapperOutputType_t
                pub const m_hOutputEntities: usize = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_nHapticsType: usize = 0x638; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x63C; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x640; // float32
                pub const m_flSnapValue: usize = 0x644; // float32
                pub const m_flCurrentMomentum: usize = 0x648; // float32
                pub const m_nRatchetType: usize = 0x64C; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x650; // float32
                pub const m_flInputOffset: usize = 0x654; // float32
                pub const m_bEngaged: usize = 0x658; // bool
                pub const m_bFirstUpdate: usize = 0x659; // bool
                pub const m_flPreviousValue: usize = 0x65C; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x660; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x664; // Vector
            }
            // parent: 
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CGameSceneNodeHandle {
                pub const m_hOwner: usize = 0x8; // CEntityHandle
                pub const m_name: usize = 0xC; // CUtlStringToken
            }
            // parent: None
            // field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponMP7 {
            }
            // parent: None
            // field count: 13
            //
            // metadata: [REMOVED]
            pub mod CSPerRoundStats_t {
                pub const m_iKills: usize = 0x30; // int32
                pub const m_iDeaths: usize = 0x34; // int32
                pub const m_iAssists: usize = 0x38; // int32
                pub const m_iDamage: usize = 0x3C; // int32
                pub const m_iEquipmentValue: usize = 0x40; // int32
                pub const m_iMoneySaved: usize = 0x44; // int32
                pub const m_iKillReward: usize = 0x48; // int32
                pub const m_iLiveTime: usize = 0x4C; // int32
                pub const m_iHeadShotKills: usize = 0x50; // int32
                pub const m_iObjective: usize = 0x54; // int32
                pub const m_iCashEarned: usize = 0x58; // int32
                pub const m_iUtilityDamage: usize = 0x5C; // int32
                pub const m_iEnemiesFlashed: usize = 0x60; // int32
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
            // parent: C_LateUpdatedAnimating
            // field count: 0
            pub mod C_CS2HudModelBase {
            }
            // parent: None
            // field count: 98
            //
            // metadata: [REMOVED]
            pub mod C_CSGameRules {
                pub const m_bFreezePeriod: usize = 0x40; // bool
                pub const m_bWarmupPeriod: usize = 0x41; // bool
                pub const m_fWarmupPeriodEnd: usize = 0x44; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0x48; // GameTime_t
                pub const m_bTerroristTimeOutActive: usize = 0x4C; // bool
                pub const m_bCTTimeOutActive: usize = 0x4D; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0x50; // float32
                pub const m_flCTTimeOutRemaining: usize = 0x54; // float32
                pub const m_nTerroristTimeOuts: usize = 0x58; // int32
                pub const m_nCTTimeOuts: usize = 0x5C; // int32
                pub const m_bTechnicalTimeOut: usize = 0x60; // bool
                pub const m_bMatchWaitingForResume: usize = 0x61; // bool
                pub const m_iFreezeTime: usize = 0x64; // int32
                pub const m_iRoundTime: usize = 0x68; // int32
                pub const m_fMatchStartTime: usize = 0x6C; // float32
                pub const m_fRoundStartTime: usize = 0x70; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0x74; // GameTime_t
                pub const m_bGameRestart: usize = 0x78; // bool
                pub const m_flGameStartTime: usize = 0x7C; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x80; // float32
                pub const m_gamePhase: usize = 0x84; // int32
                pub const m_totalRoundsPlayed: usize = 0x88; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x8C; // int32
                pub const m_nOvertimePlaying: usize = 0x90; // int32
                pub const m_iHostagesRemaining: usize = 0x94; // int32
                pub const m_bAnyHostageReached: usize = 0x98; // bool
                pub const m_bMapHasBombTarget: usize = 0x99; // bool
                pub const m_bMapHasRescueZone: usize = 0x9A; // bool
                pub const m_bMapHasBuyZone: usize = 0x9B; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x9C; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0xA0; // int32
                pub const m_bIsValveDS: usize = 0xA4; // bool
                pub const m_bLogoMap: usize = 0xA5; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0xA6; // bool
                pub const m_iSpectatorSlotCount: usize = 0xA8; // int32
                pub const m_MatchDevice: usize = 0xAC; // int32
                pub const m_bHasMatchStarted: usize = 0xB0; // bool
                pub const m_nNextMapInMapgroup: usize = 0xB4; // int32
                pub const m_szTournamentEventName: usize = 0xB8; // char[512]
                pub const m_szTournamentEventStage: usize = 0x2B8; // char[512]
                pub const m_szMatchStatTxt: usize = 0x4B8; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x6B8; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x8B8; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x8BC; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x8C0; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x8C4; // bool
                pub const m_bIsQuestEligible: usize = 0x8C5; // bool
                pub const m_bIsHltvActive: usize = 0x8C6; // bool
                pub const m_arrProhibitedItemIndices: usize = 0x8C8; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0x990; // uint32[4]
                pub const m_numBestOfMaps: usize = 0x9A0; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0x9A4; // int32
                pub const m_bBombDropped: usize = 0x9A8; // bool
                pub const m_bBombPlanted: usize = 0x9A9; // bool
                pub const m_iRoundWinStatus: usize = 0x9AC; // int32
                pub const m_eRoundWinReason: usize = 0x9B0; // int32
                pub const m_bTCantBuy: usize = 0x9B4; // bool
                pub const m_bCTCantBuy: usize = 0x9B5; // bool
                pub const m_iMatchStats_RoundResults: usize = 0x9B8; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xA30; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xAA8; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xB20; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xBA0; // GameTime_t[32]
                pub const m_vMinimapMins: usize = 0xC20; // Vector
                pub const m_vMinimapMaxs: usize = 0xC2C; // Vector
                pub const m_MinimapVerticalSectionHeights: usize = 0xC38; // float32[8]
                pub const m_ullLocalMatchID: usize = 0xC58; // uint64
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xC60; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xC88; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xCB0; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xCB4; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xCB8; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0xD78; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0xD7C; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0xD7D; // bool
                pub const m_pGameModeRules: usize = 0xD98; // CCSGameModeRules*
                pub const m_RetakeRules: usize = 0xDA0; // C_RetakeGameRules
                pub const m_nMatchEndCount: usize = 0xEF8; // uint8
                pub const m_nTTeamIntroVariant: usize = 0xEFC; // int32
                pub const m_nCTTeamIntroVariant: usize = 0xF00; // int32
                pub const m_bTeamIntroPeriod: usize = 0xF04; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0xF08; // int32
                pub const m_eRoundEndReason: usize = 0xF0C; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0xF10; // bool
                pub const m_iRoundEndTimerTime: usize = 0xF14; // int32
                pub const m_sRoundEndFunFactToken: usize = 0xF18; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0xF20; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0xF24; // int32
                pub const m_iRoundEndFunFactData2: usize = 0xF28; // int32
                pub const m_iRoundEndFunFactData3: usize = 0xF2C; // int32
                pub const m_sRoundEndMessage: usize = 0xF30; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0xF38; // int32
                pub const m_bRoundEndNoMusic: usize = 0xF3C; // bool
                pub const m_iRoundEndLegacy: usize = 0xF40; // int32
                pub const m_nRoundEndCount: usize = 0xF44; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0xF48; // int32
                pub const m_nRoundStartCount: usize = 0xF4C; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x4F58; // float64
            }
            // parent: C_BaseModelEntity
            // field count: 2
            pub mod CGrenadeTracer {
                pub const m_flTracerDuration: usize = 0xEC8; // float32
                pub const m_nType: usize = 0xECC; // GrenadeType_t
            }
            // parent: None
            // field count: 0
            pub mod CCSGameModeRules_Noop {
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
            // parent: C_BaseGrenade
            // field count: 16
            //
            // metadata: [REMOVED]
            pub mod C_BaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0x13B8; // Vector
                pub const m_vInitialVelocity: usize = 0x13C4; // Vector
                pub const m_nBounces: usize = 0x13D0; // int32
                pub const m_nExplodeEffectIndex: usize = 0x13D8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0x13E0; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0x13E4; // Vector
                pub const m_flSpawnTime: usize = 0x13F0; // GameTime_t
                pub const vecLastTrailLinePos: usize = 0x13F4; // Vector
                pub const flNextTrailLineTime: usize = 0x1400; // GameTime_t
                pub const m_bExplodeEffectBegan: usize = 0x1404; // bool
                pub const m_bCanCreateGrenadeTrail: usize = 0x1405; // bool
                pub const m_nSnapshotTrajectoryEffectIndex: usize = 0x1408; // ParticleIndex_t
                pub const m_hSnapshotTrajectoryParticleSnapshot: usize = 0x1410; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_arrTrajectoryTrailPoints: usize = 0x1418; // CUtlVector<Vector>
                pub const m_arrTrajectoryTrailPointCreationTimes: usize = 0x1430; // CUtlVector<float32>
                pub const m_flTrajectoryTrailEffectCreationTime: usize = 0x1448; // float32
            }
            // parent: C_BaseEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            pub mod C_GradientFog {
                pub const m_hGradientFogTexture: usize = 0x5F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x600; // float32
                pub const m_flFogEndDistance: usize = 0x604; // float32
                pub const m_bHeightFogEnabled: usize = 0x608; // bool
                pub const m_flFogStartHeight: usize = 0x60C; // float32
                pub const m_flFogEndHeight: usize = 0x610; // float32
                pub const m_flFarZ: usize = 0x614; // float32
                pub const m_flFogMaxOpacity: usize = 0x618; // float32
                pub const m_flFogFalloffExponent: usize = 0x61C; // float32
                pub const m_flFogVerticalExponent: usize = 0x620; // float32
                pub const m_fogColor: usize = 0x624; // Color
                pub const m_flFogStrength: usize = 0x628; // float32
                pub const m_flFadeTime: usize = 0x62C; // float32
                pub const m_bStartDisabled: usize = 0x630; // bool
                pub const m_bIsEnabled: usize = 0x631; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x632; // bool
            }
            // parent: CPlayerControllerComponent
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_iAccount: usize = 0x40; // int32
                pub const m_iStartAccount: usize = 0x44; // int32
                pub const m_iTotalCashSpent: usize = 0x48; // int32
                pub const m_iCashSpentThisRound: usize = 0x4C; // int32
            }
            // parent: C_BaseCSGrenadeProjectile
            // field count: 0
            pub mod C_HEGrenadeProjectile {
            }
            // parent: 
            // field count: 24
            //
            // metadata: [REMOVED]
            pub mod CAnimGraphNetworkedVariables {
                pub const m_PredNetBoolVariables: usize = 0x8; // C_NetworkUtlVectorBase<uint32>
                pub const m_PredNetByteVariables: usize = 0x20; // C_NetworkUtlVectorBase<uint8>
                pub const m_PredNetUInt16Variables: usize = 0x38; // C_NetworkUtlVectorBase<uint16>
                pub const m_PredNetIntVariables: usize = 0x50; // C_NetworkUtlVectorBase<int32>
                pub const m_PredNetUInt32Variables: usize = 0x68; // C_NetworkUtlVectorBase<uint32>
                pub const m_PredNetUInt64Variables: usize = 0x80; // C_NetworkUtlVectorBase<uint64>
                pub const m_PredNetFloatVariables: usize = 0x98; // C_NetworkUtlVectorBase<float32>
                pub const m_PredNetVectorVariables: usize = 0xB0; // C_NetworkUtlVectorBase<Vector>
                pub const m_PredNetQuaternionVariables: usize = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
                pub const m_PredNetGlobalSymbolVariables: usize = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xF8; // C_NetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetByteVariables: usize = 0x110; // C_NetworkUtlVectorBase<uint8>
                pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x128; // C_NetworkUtlVectorBase<uint16>
                pub const m_OwnerOnlyPredNetIntVariables: usize = 0x140; // C_NetworkUtlVectorBase<int32>
                pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x158; // C_NetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x170; // C_NetworkUtlVectorBase<uint64>
                pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x188; // C_NetworkUtlVectorBase<float32>
                pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x1A0; // C_NetworkUtlVectorBase<Vector>
                pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
                pub const m_OwnerOnlyPredNetGlobalSymbolVariables: usize = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                pub const m_nBoolVariablesCount: usize = 0x1E8; // int32
                pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1EC; // int32
                pub const m_nRandomSeedOffset: usize = 0x1F0; // int32
                pub const m_flLastTeleportTime: usize = 0x1F4; // float32
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod CFilterModel {
                pub const m_iFilterModel: usize = 0x650; // CUtlSymbolLarge
            }
            // parent: C_SoundAreaEntityBase
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_SoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x620; // Vector
                pub const m_vMax: usize = 0x62C; // Vector
            }
            // parent: C_SoundOpvarSetPointBase
            // field count: 0
            pub mod C_SoundOpvarSetPointEntity {
            }
            // parent: C_BaseEntity
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod CPulseGameBlackboard {
                pub const m_strGraphName: usize = 0x600; // CUtlString
                pub const m_strStateBlob: usize = 0x608; // CUtlString
            }
            // parent: None
            // field count: 0
            //
            // metadata: [REMOVED]
            pub mod CPulseCell_Value_RandomInt {
            }
            // parent: C_CSWeaponBase
            // field count: 0
            pub mod C_CSWeaponBaseShotgun {
            }
            // parent: C_RagdollProp
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod C_RagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0x11E8; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0x11EC; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0x11F0; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0x11FC; // Vector
                pub const m_vecOffset: usize = 0x1208; // Vector
                pub const m_parentTime: usize = 0x1214; // float32
                pub const m_bHasParent: usize = 0x1218; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod C_ModelPointEntity {
            }
            // parent: C_CSPlayerPawn
            // field count: 2
            pub mod C_CSGO_PreviewPlayer {
                pub const m_animgraphCharacterModeString: usize = 0x3F10; // CGlobalSymbol
                pub const m_flInitialModelScale: usize = 0x3F18; // float32
            }
            // parent: C_BarnLight
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_RectLight {
                pub const m_bShowLight: usize = 0x1200; // bool
            }
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod CPathSimple {
                pub const m_CPathQueryComponent: usize = 0x600; // CPathQueryComponent
                pub const m_pathString: usize = 0x6F0; // CUtlString
                pub const m_bClosedLoop: usize = 0x6F8; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 3
            pub mod C_FuncTrackTrain {
                pub const m_nLongAxis: usize = 0xEB0; // int32
                pub const m_flRadius: usize = 0xEB4; // float32
                pub const m_flLineLength: usize = 0xEB8; // float32
            }
            // parent: C_EconEntity
            // field count: 2
            pub mod C_EconWearable {
                pub const m_nForceSkin: usize = 0x18E0; // int32
                pub const m_bAlwaysAllow: usize = 0x18E4; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod C_EnvDecal {
                pub const m_hDecalMaterial: usize = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flWidth: usize = 0xEB8; // float32
                pub const m_flHeight: usize = 0xEBC; // float32
                pub const m_flDepth: usize = 0xEC0; // float32
                pub const m_nRenderOrder: usize = 0xEC4; // uint32
                pub const m_bProjectOnWorld: usize = 0xEC8; // bool
                pub const m_bProjectOnCharacters: usize = 0xEC9; // bool
                pub const m_bProjectOnWater: usize = 0xECA; // bool
                pub const m_flDepthSortBias: usize = 0xECC; // float32
            }
            // parent: None
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // parent: 
            // field count: 25
            //
            // metadata: [REMOVED]
            pub mod fogparams_t {
                pub const dirPrimary: usize = 0x8; // Vector
                pub const colorPrimary: usize = 0x14; // Color
                pub const colorSecondary: usize = 0x18; // Color
                pub const colorPrimaryLerpTo: usize = 0x1C; // Color
                pub const colorSecondaryLerpTo: usize = 0x20; // Color
                pub const start: usize = 0x24; // float32
                pub const end: usize = 0x28; // float32
                pub const farz: usize = 0x2C; // float32
                pub const maxdensity: usize = 0x30; // float32
                pub const exponent: usize = 0x34; // float32
                pub const HDRColorScale: usize = 0x38; // float32
                pub const skyboxFogFactor: usize = 0x3C; // float32
                pub const skyboxFogFactorLerpTo: usize = 0x40; // float32
                pub const startLerpTo: usize = 0x44; // float32
                pub const endLerpTo: usize = 0x48; // float32
                pub const maxdensityLerpTo: usize = 0x4C; // float32
                pub const lerptime: usize = 0x50; // GameTime_t
                pub const duration: usize = 0x54; // float32
                pub const blendtobackground: usize = 0x58; // float32
                pub const scattering: usize = 0x5C; // float32
                pub const locallightscale: usize = 0x60; // float32
                pub const enable: usize = 0x64; // bool
                pub const blend: usize = 0x65; // bool
                pub const m_bPadding2: usize = 0x66; // bool
                pub const m_bPadding: usize = 0x67; // bool
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponM4A1 {
            }
            // parent: C_EconEntity
            // field count: 1
            pub mod C_Item {
                pub const m_pReticleHintTextName: usize = 0x18E0; // char[256]
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_CSPetPlacement {
            }
            // parent: C_BaseModelEntity
            // field count: 24
            //
            // metadata: [REMOVED]
            pub mod C_Beam {
                pub const m_flFrameRate: usize = 0xEB0; // float32
                pub const m_flHDRColorScale: usize = 0xEB4; // float32
                pub const m_flFireTime: usize = 0xEB8; // GameTime_t
                pub const m_flDamage: usize = 0xEBC; // float32
                pub const m_nNumBeamEnts: usize = 0xEC0; // uint8
                pub const m_queryHandleHalo: usize = 0xEC4; // int32
                pub const m_hBaseMaterial: usize = 0xEE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0xEF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0xEF8; // BeamType_t
                pub const m_nBeamFlags: usize = 0xEFC; // uint32
                pub const m_hAttachEntity: usize = 0xF00; // CHandle<C_BaseEntity>[10]
                pub const m_nAttachIndex: usize = 0xF28; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0xF34; // float32
                pub const m_fEndWidth: usize = 0xF38; // float32
                pub const m_fFadeLength: usize = 0xF3C; // float32
                pub const m_fHaloScale: usize = 0xF40; // float32
                pub const m_fAmplitude: usize = 0xF44; // float32
                pub const m_fStartFrame: usize = 0xF48; // float32
                pub const m_fSpeed: usize = 0xF4C; // float32
                pub const m_flFrame: usize = 0xF50; // float32
                pub const m_nClipStyle: usize = 0xF54; // BeamClipStyle_t
                pub const m_bTurnedOff: usize = 0xF58; // bool
                pub const m_vecEndPos: usize = 0xF5C; // VectorWS
                pub const m_hEndEntity: usize = 0xF68; // CHandle<C_BaseEntity>
            }
            // parent: C_BaseEntity
            // field count: 22
            //
            // metadata: [REMOVED]
            pub mod C_EnvLightProbeVolume {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x1638; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x1644; // Vector
                pub const m_Entity_bMoveable: usize = 0x1650; // bool
                pub const m_Entity_nHandshake: usize = 0x1654; // int32
                pub const m_Entity_nPriority: usize = 0x1658; // int32
                pub const m_Entity_bStartDisabled: usize = 0x165C; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x1660; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1664; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1668; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x166C; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1670; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1674; // int32
                pub const m_Entity_bEnabled: usize = 0x1681; // bool
            }
            // parent: C_BaseModelEntity
            // field count: 8
            //
            // metadata: [REMOVED]
            pub mod C_FuncConveyor {
                pub const m_vecMoveDirEntitySpace: usize = 0xEB8; // Vector
                pub const m_flTargetSpeed: usize = 0xEC4; // float32
                pub const m_nTransitionStartTick: usize = 0xEC8; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0xECC; // int32
                pub const m_flTransitionStartSpeed: usize = 0xED0; // float32
                pub const m_hConveyorModels: usize = 0xED8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_flCurrentConveyorOffset: usize = 0xEF0; // float32
                pub const m_flCurrentConveyorSpeed: usize = 0xEF4; // float32
            }
            // parent: CPlayer_WeaponServices
            // field count: 7
            //
            // metadata: [REMOVED]
            pub mod CCSPlayer_WeaponServices {
                pub const m_flNextAttack: usize = 0xC8; // GameTime_t
                pub const m_bIsLookingAtWeapon: usize = 0xCC; // bool
                pub const m_bIsHoldingLookAtWeapon: usize = 0xCD; // bool
                pub const m_nOldTotalShootPositionHistoryCount: usize = 0xD0; // uint32
                pub const m_nOldTotalInputHistoryCount: usize = 0x368; // uint32
                pub const m_networkAnimTiming: usize = 0x18E0; // C_NetworkUtlVectorBase<uint8>
                pub const m_bBlockInspectUntilNextGraphUpdate: usize = 0x18F8; // bool
            }
            // parent: CBaseAnimGraph
            // field count: 2
            pub mod C_PhysMagnet {
                pub const m_aAttachedObjectsFromServer: usize = 0x1158; // CUtlVector<int32>
                pub const m_aAttachedObjects: usize = 0x1170; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // parent: CEnvSoundscapeTriggerable
            // field count: 0
            pub mod CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod C_Breakable {
            }
            // parent: CBaseAnimGraph
            // field count: 29
            //
            // metadata: [REMOVED]
            pub mod C_PlantedC4 {
                pub const m_bBombTicking: usize = 0x1160; // bool
                pub const m_nBombSite: usize = 0x1164; // int32
                pub const m_nSourceSoundscapeHash: usize = 0x1168; // int32
                pub const m_entitySpottedState: usize = 0x1170; // EntitySpottedState_t
                pub const m_flNextGlow: usize = 0x1188; // GameTime_t
                pub const m_flNextBeep: usize = 0x118C; // GameTime_t
                pub const m_flC4Blow: usize = 0x1190; // GameTime_t
                pub const m_bCannotBeDefused: usize = 0x1194; // bool
                pub const m_bHasExploded: usize = 0x1195; // bool
                pub const m_flTimerLength: usize = 0x1198; // float32
                pub const m_bBeingDefused: usize = 0x119C; // bool
                pub const m_bTriggerWarning: usize = 0x11A0; // float32
                pub const m_bExplodeWarning: usize = 0x11A4; // float32
                pub const m_bC4Activated: usize = 0x11A8; // bool
                pub const m_bTenSecWarning: usize = 0x11A9; // bool
                pub const m_flDefuseLength: usize = 0x11AC; // float32
                pub const m_flDefuseCountDown: usize = 0x11B0; // GameTime_t
                pub const m_bBombDefused: usize = 0x11B4; // bool
                pub const m_hBombDefuser: usize = 0x11B8; // CHandle<C_CSPlayerPawn>
                pub const m_AttributeManager: usize = 0x11C0; // C_AttributeContainer
                pub const m_hDefuserMultimeter: usize = 0x1698; // CHandle<C_Multimeter>
                pub const m_flNextRadarFlashTime: usize = 0x169C; // GameTime_t
                pub const m_bRadarFlash: usize = 0x16A0; // bool
                pub const m_pBombDefuser: usize = 0x16A4; // CHandle<C_CSPlayerPawn>
                pub const m_fLastDefuseTime: usize = 0x16A8; // GameTime_t
                pub const m_pPredictionOwner: usize = 0x16B0; // CBasePlayerController*
                pub const m_vecC4ExplodeSpectatePos: usize = 0x16B8; // Vector
                pub const m_vecC4ExplodeSpectateAng: usize = 0x16C4; // QAngle
                pub const m_flC4ExplodeSpectateDuration: usize = 0x16D0; // float32
            }
            // parent: C_CSGO_TeamIntroCharacterPosition
            // field count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod CFilterName {
                pub const m_iFilterName: usize = 0x650; // CUtlSymbolLarge
            }
            // parent: CBaseAnimGraph
            // field count: 9
            //
            // metadata: [REMOVED]
            pub mod C_RagdollProp {
                pub const m_ragEnabled: usize = 0x1160; // C_NetworkUtlVectorBase<bool>
                pub const m_ragPos: usize = 0x1178; // C_NetworkUtlVectorBase<Vector>
                pub const m_ragAngles: usize = 0x1190; // C_NetworkUtlVectorBase<QAngle>
                pub const m_flBlendWeight: usize = 0x11A8; // float32
                pub const m_hRagdollSource: usize = 0x11AC; // CHandle<C_BaseEntity>
                pub const m_iEyeAttachment: usize = 0x11B0; // AttachmentHandle_t
                pub const m_flBlendWeightCurrent: usize = 0x11B4; // float32
                pub const m_parentPhysicsBoneIndices: usize = 0x11B8; // CUtlVector<int32>
                pub const m_worldSpaceBoneComputationOrder: usize = 0x11D0; // CUtlVector<int32>
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
            // parent: C_ParticleSystem
            // field count: 0
            pub mod C_MapPreviewParticleSystem {
            }
            // parent: C_BaseModelEntity
            // field count: 14
            //
            // metadata: [REMOVED]
            pub mod CBaseAnimGraph {
                pub const m_bInitiallyPopulateInterpHistory: usize = 0xF30; // bool
                pub const m_bSuppressAnimEventSounds: usize = 0xF32; // bool
                pub const m_bAnimGraphUpdateEnabled: usize = 0xF40; // bool
                pub const m_flMaxSlopeDistance: usize = 0xF44; // float32
                pub const m_vLastSlopeCheckPos: usize = 0xF48; // VectorWS
                pub const m_bAnimationUpdateScheduled: usize = 0xF54; // bool
                pub const m_vecForce: usize = 0xF58; // Vector
                pub const m_nForceBone: usize = 0xF64; // int32
                pub const m_pClientsideRagdoll: usize = 0xF68; // CBaseAnimGraph*
                pub const m_bBuiltRagdoll: usize = 0xF70; // bool
                pub const m_RagdollPose: usize = 0xF88; // PhysicsRagdollPose_t
                pub const m_bRagdollEnabled: usize = 0xFD0; // bool
                pub const m_bRagdollClientSide: usize = 0xFD1; // bool
                pub const m_bHasAnimatedMaterialAttributes: usize = 0xFE0; // bool
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
            // parent: C_BaseModelEntity
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_LightEntity {
                pub const m_CLightComponent: usize = 0xEB0; // CLightComponent*
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponM249 {
            }
            // parent: CBaseAnimGraph
            // field count: 25
            pub mod C_LocalTempEntity {
                pub const flags: usize = 0x1158; // int32
                pub const die: usize = 0x115C; // GameTime_t
                pub const m_flFrameMax: usize = 0x1160; // float32
                pub const x: usize = 0x1164; // float32
                pub const y: usize = 0x1168; // float32
                pub const fadeSpeed: usize = 0x116C; // float32
                pub const bounceFactor: usize = 0x1170; // float32
                pub const hitSound: usize = 0x1174; // int32
                pub const priority: usize = 0x1178; // int32
                pub const tentOffset: usize = 0x117C; // Vector
                pub const m_vecTempEntAngVelocity: usize = 0x1188; // QAngle
                pub const tempent_renderamt: usize = 0x1194; // int32
                pub const m_vecNormal: usize = 0x1198; // Vector
                pub const m_flSpriteScale: usize = 0x11A4; // float32
                pub const m_nFlickerFrame: usize = 0x11A8; // int32
                pub const m_flFrameRate: usize = 0x11AC; // float32
                pub const m_flFrame: usize = 0x11B0; // float32
                pub const m_pszImpactEffect: usize = 0x11B8; // char*
                pub const m_pszParticleEffect: usize = 0x11C0; // char*
                pub const m_bParticleCollision: usize = 0x11C8; // bool
                pub const m_iLastCollisionFrame: usize = 0x11CC; // int32
                pub const m_vLastCollisionOrigin: usize = 0x11D0; // Vector
                pub const m_vecTempEntVelocity: usize = 0x11DC; // Vector
                pub const m_vecPrevAbsOrigin: usize = 0x11E8; // Vector
                pub const m_vecTempEntAcceleration: usize = 0x11F4; // Vector
            }
            // parent: C_CSWeaponBaseGun
            // field count: 2
            //
            // metadata: [REMOVED]
            pub mod C_WeaponTaser {
                pub const m_fFireTime: usize = 0x1FB0; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x1FB4; // int32
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_PointEntity {
            }
            // parent: None
            // field count: 0
            pub mod C_SingleplayRules {
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod CLogicalEntity {
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod C_PrecipitationBlocker {
            }
            // parent: C_CSGO_TeamPreviewCamera
            // field count: 0
            pub mod C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // parent: C_SoundOpvarSetPointEntity
            // field count: 0
            pub mod C_SoundOpvarSetPathCornerEntity {
            }
            // parent: CPlayerPawnComponent
            // field count: 4
            //
            // metadata: [REMOVED]
            pub mod CPlayer_WeaponServices {
                pub const m_hMyWeapons: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x58; // CHandle<C_BasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x5C; // CHandle<C_BasePlayerWeapon>
                pub const m_iAmmo: usize = 0x60; // uint16[32]
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponNegev {
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponFiveSeven {
            }
            // parent: C_CSWeaponBaseShotgun
            // field count: 0
            pub mod C_WeaponSawedoff {
            }
            // parent: C_BaseModelEntity
            // field count: 0
            pub mod C_TriggerVolume {
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
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponMP9 {
            }
            // parent: C_DynamicProp
            // field count: 0
            pub mod C_DynamicPropAlias_prop_dynamic_override {
            }
            // parent: CEnvSoundscape
            // field count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // parent: C_BaseEntity
            // field count: 5
            //
            // metadata: [REMOVED]
            pub mod C_PlayerPing {
                pub const m_hPlayer: usize = 0x628; // CHandle<C_CSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x62C; // CHandle<C_BaseEntity>
                pub const m_iType: usize = 0x630; // int32
                pub const m_bUrgent: usize = 0x634; // bool
                pub const m_szPlaceName: usize = 0x635; // char[18]
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_AK47 {
            }
            // parent: C_BaseEntity
            // field count: 10
            pub mod C_CSGO_MapPreviewCameraPathNode {
                pub const m_szParentPathUniqueID: usize = 0x5F8; // CUtlSymbolLarge
                pub const m_nPathIndex: usize = 0x600; // int32
                pub const m_vInTangentLocal: usize = 0x604; // Vector
                pub const m_vOutTangentLocal: usize = 0x610; // Vector
                pub const m_flFOV: usize = 0x61C; // float32
                pub const m_flCameraSpeed: usize = 0x620; // float32
                pub const m_flEaseIn: usize = 0x624; // float32
                pub const m_flEaseOut: usize = 0x628; // float32
                pub const m_vInTangentWorld: usize = 0x62C; // Vector
                pub const m_vOutTangentWorld: usize = 0x638; // Vector
            }
            // parent: C_BaseEntity
            // field count: 10
            //
            // metadata: [REMOVED]
            pub mod C_CSPlayerResource {
                pub const m_bHostageAlive: usize = 0x5F8; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x604; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x610; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x640; // Vector
                pub const m_bombsiteCenterB: usize = 0x64C; // Vector
                pub const m_hostageRescueX: usize = 0x658; // int32[4]
                pub const m_hostageRescueY: usize = 0x668; // int32[4]
                pub const m_hostageRescueZ: usize = 0x678; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x688; // bool
                pub const m_foundGoalPositions: usize = 0x689; // bool
            }
            // parent: C_BaseEntity
            // field count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x5F8; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x5FC; // CHandle<C_SkyCamera>
            }
            // parent: C_MolotovGrenade
            // field count: 0
            pub mod C_IncendiaryGrenade {
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod CFilterClass {
                pub const m_iFilterClass: usize = 0x650; // CUtlSymbolLarge
            }
            // parent: C_PointCamera
            // field count: 1
            pub mod C_PointCameraVFOV {
                pub const m_flVerticalFOV: usize = 0x658; // float32
            }
            // parent: C_BaseEntity
            // field count: 26
            //
            // metadata: [REMOVED]
            pub mod C_PointCamera {
                pub const m_FOV: usize = 0x5F8; // float32
                pub const m_Resolution: usize = 0x5FC; // float32
                pub const m_bFogEnable: usize = 0x600; // bool
                pub const m_FogColor: usize = 0x601; // Color
                pub const m_flFogStart: usize = 0x608; // float32
                pub const m_flFogEnd: usize = 0x60C; // float32
                pub const m_flFogMaxDensity: usize = 0x610; // float32
                pub const m_bActive: usize = 0x614; // bool
                pub const m_bUseScreenAspectRatio: usize = 0x615; // bool
                pub const m_flAspectRatio: usize = 0x618; // float32
                pub const m_bNoSky: usize = 0x61C; // bool
                pub const m_fBrightness: usize = 0x620; // float32
                pub const m_flZFar: usize = 0x624; // float32
                pub const m_flZNear: usize = 0x628; // float32
                pub const m_bCanHLTVUse: usize = 0x62C; // bool
                pub const m_bAlignWithParent: usize = 0x62D; // bool
                pub const m_bDofEnabled: usize = 0x62E; // bool
                pub const m_flDofNearBlurry: usize = 0x630; // float32
                pub const m_flDofNearCrisp: usize = 0x634; // float32
                pub const m_flDofFarCrisp: usize = 0x638; // float32
                pub const m_flDofFarBlurry: usize = 0x63C; // float32
                pub const m_flDofTiltToGround: usize = 0x640; // float32
                pub const m_TargetFOV: usize = 0x644; // float32
                pub const m_DegreesPerSecond: usize = 0x648; // float32
                pub const m_bIsOn: usize = 0x64C; // bool
                pub const m_pNext: usize = 0x650; // C_PointCamera*
            }
            // parent: CLogicalEntity
            // field count: 3
            pub mod CBaseFilter {
                pub const m_bNegated: usize = 0x5F8; // bool
                pub const m_OnPass: usize = 0x600; // CEntityIOOutput
                pub const m_OnFail: usize = 0x628; // CEntityIOOutput
            }
            // parent: 
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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
            // parent: C_PointEntity
            // field count: 14
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x5F8; // int32
                pub const m_flBombRadius: usize = 0x5FC; // float32
                pub const m_iPetPopulation: usize = 0x600; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x604; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x605; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x608; // float32
                pub const m_iHostageCount: usize = 0x60C; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x610; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x611; // bool
                pub const m_flEnvRainStrength: usize = 0x614; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x618; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x61C; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x620; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x624; // float32
            }
            // parent: C_CSGO_TeamPreviewCamera
            // field count: 0
            pub mod C_CSGO_EndOfMatchCamera {
            }
            // parent: C_BaseFlex
            // field count: 12
            //
            // metadata: [REMOVED]
            pub mod C_BaseGrenade {
                pub const m_bHasWarnedAI: usize = 0x1368; // bool
                pub const m_bIsSmokeGrenade: usize = 0x1369; // bool
                pub const m_bIsLive: usize = 0x136A; // bool
                pub const m_DmgRadius: usize = 0x136C; // float32
                pub const m_flDetonateTime: usize = 0x1370; // GameTime_t
                pub const m_flWarnAITime: usize = 0x1374; // float32
                pub const m_flDamage: usize = 0x1378; // float32
                pub const m_iszBounceSound: usize = 0x1380; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0x1388; // CUtlString
                pub const m_hThrower: usize = 0x1394; // CHandle<C_CSPlayerPawn>
                pub const m_flNextAttack: usize = 0x13AC; // GameTime_t
                pub const m_hOriginalThrower: usize = 0x13B0; // CHandle<C_CSPlayerPawn>
            }
            // parent: C_ModelPointEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            pub mod C_PlayerSprayDecal {
                pub const m_nUniqueID: usize = 0xEB0; // int32
                pub const m_unAccountID: usize = 0xEB4; // uint32
                pub const m_unTraceID: usize = 0xEB8; // uint32
                pub const m_rtGcTime: usize = 0xEBC; // uint32
                pub const m_vecEndPos: usize = 0xEC0; // Vector
                pub const m_vecStart: usize = 0xECC; // Vector
                pub const m_vecLeft: usize = 0xED8; // Vector
                pub const m_vecNormal: usize = 0xEE4; // Vector
                pub const m_nPlayer: usize = 0xEF0; // int32
                pub const m_nEntity: usize = 0xEF4; // int32
                pub const m_nHitbox: usize = 0xEF8; // int32
                pub const m_flCreationTime: usize = 0xEFC; // float32
                pub const m_nTintID: usize = 0xF00; // int32
                pub const m_nVersion: usize = 0xF04; // uint8
                pub const m_ubSignature: usize = 0xF05; // uint8[128]
                pub const m_SprayRenderHelper: usize = 0xF90; // CPlayerSprayDecalRenderHelper
            }
            // parent: 
            // field count: 11
            //
            // metadata: [REMOVED]
            pub mod CEntityIdentity {
                pub const m_nameStringableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pPrev: usize = 0x50; // CEntityIdentity*
                pub const m_pNext: usize = 0x58; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x60; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x68; // CEntityIdentity*
            }
            // parent: None
            // field count: 1
            pub mod CPulseCell_LimitCount__Criteria_t {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            }
            // parent: C_CS2HudModelBase
            // field count: 0
            pub mod C_CS2HudModelArms {
            }
            // parent: None
            // field count: 14
            //
            // metadata: [REMOVED]
            pub mod CBasePlayerVData {
                pub const m_sModelName: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_flHeadDamageMultiplier: usize = 0x108; // CSkillFloat
                pub const m_flChestDamageMultiplier: usize = 0x118; // CSkillFloat
                pub const m_flStomachDamageMultiplier: usize = 0x128; // CSkillFloat
                pub const m_flArmDamageMultiplier: usize = 0x138; // CSkillFloat
                pub const m_flLegDamageMultiplier: usize = 0x148; // CSkillFloat
                pub const m_flHoldBreathTime: usize = 0x158; // float32
                pub const m_flDrowningDamageInterval: usize = 0x15C; // float32
                pub const m_nDrowningDamageInitial: usize = 0x160; // int32
                pub const m_nDrowningDamageMax: usize = 0x164; // int32
                pub const m_nWaterSpeed: usize = 0x168; // int32
                pub const m_flUseRange: usize = 0x16C; // float32
                pub const m_flUseAngleTolerance: usize = 0x170; // float32
                pub const m_flCrouchTime: usize = 0x174; // float32
            }
            // parent: C_LightEntity
            // field count: 0
            pub mod C_LightSpotEntity {
            }
            // parent: None
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x30; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x34; // float32
                pub const m_sDMBonusWeapon: usize = 0x38; // CUtlString
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
            // parent: C_BaseModelEntity
            // field count: 23
            //
            // metadata: [REMOVED]
            pub mod C_Sprite {
                pub const m_hSpriteMaterial: usize = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0xEB8; // CHandle<C_BaseEntity>
                pub const m_nAttachment: usize = 0xEBC; // AttachmentHandle_t
                pub const m_flSpriteFramerate: usize = 0xEC0; // float32
                pub const m_flFrame: usize = 0xEC4; // float32
                pub const m_flDieTime: usize = 0xEC8; // GameTime_t
                pub const m_nBrightness: usize = 0xED8; // uint32
                pub const m_flBrightnessDuration: usize = 0xEDC; // float32
                pub const m_flSpriteScale: usize = 0xEE0; // float32
                pub const m_flScaleDuration: usize = 0xEE4; // float32
                pub const m_bWorldSpaceScale: usize = 0xEE8; // bool
                pub const m_flGlowProxySize: usize = 0xEEC; // float32
                pub const m_flHDRColorScale: usize = 0xEF0; // float32
                pub const m_flLastTime: usize = 0xEF4; // GameTime_t
                pub const m_flMaxFrame: usize = 0xEF8; // float32
                pub const m_flStartScale: usize = 0xEFC; // float32
                pub const m_flDestScale: usize = 0xF00; // float32
                pub const m_flScaleTimeStart: usize = 0xF04; // GameTime_t
                pub const m_nStartBrightness: usize = 0xF08; // int32
                pub const m_nDestBrightness: usize = 0xF0C; // int32
                pub const m_flBrightnessTimeStart: usize = 0xF10; // GameTime_t
                pub const m_nSpriteWidth: usize = 0xF20; // int32
                pub const m_nSpriteHeight: usize = 0xF24; // int32
            }
            // parent: C_BaseEntity
            // field count: 2
            pub mod C_CsmFovOverride {
                pub const m_cameraName: usize = 0x5F8; // CUtlString
                pub const m_flCsmFovOverrideValue: usize = 0x600; // float32
            }
            // parent: C_CSWeaponBaseGun
            // field count: 0
            pub mod C_WeaponGlock {
            }
            // parent: C_BreakableProp
            // field count: 1
            //
            // metadata: [REMOVED]
            pub mod C_PhysicsProp {
                pub const m_bAwake: usize = 0x1300; // bool
            }
            // parent: CBaseFilter
            // field count: 1
            pub mod CFilterTeam {
                pub const m_iFilterTeam: usize = 0x650; // int32
            }
            // parent: None
            // field count: 30
            //
            // metadata: [REMOVED]
            pub mod CBasePlayerWeaponVData {
                pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_sToolsOnlyOwnerModelName: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bBuiltRightHanded: usize = 0x1E8; // bool
                pub const m_bAllowFlipping: usize = 0x1E9; // bool
                pub const m_sMuzzleAttachment: usize = 0x1F0; // CAttachmentNameSymbolWithStorage
                pub const m_szMuzzleFlashParticle: usize = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szMuzzleFlashParticleConfig: usize = 0x2F0; // CUtlString
                pub const m_szBarrelSmokeParticle: usize = 0x2F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_nMuzzleSmokeShotThreshold: usize = 0x3D8; // uint8
                pub const m_flMuzzleSmokeTimeout: usize = 0x3DC; // float32
                pub const m_flMuzzleSmokeDecrementRate: usize = 0x3E0; // float32
                pub const m_bLinkedCooldowns: usize = 0x3E4; // bool
                pub const m_iFlags: usize = 0x3E5; // ItemFlagTypes_t
                pub const m_nPrimaryAmmoType: usize = 0x3E6; // AmmoIndex_t
                pub const m_nSecondaryAmmoType: usize = 0x3E7; // AmmoIndex_t
                pub const m_iMaxClip1: usize = 0x3E8; // int32
                pub const m_iMaxClip2: usize = 0x3EC; // int32
                pub const m_iDefaultClip1: usize = 0x3F0; // int32
                pub const m_iDefaultClip2: usize = 0x3F4; // int32
                pub const m_bReserveAmmoAsClips: usize = 0x3F8; // bool
                pub const m_bTreatAsSingleClip: usize = 0x3F9; // bool
                pub const m_bKeepLoadedAmmo: usize = 0x3FA; // bool
                pub const m_iWeight: usize = 0x3FC; // int32
                pub const m_bAutoSwitchTo: usize = 0x400; // bool
                pub const m_bAutoSwitchFrom: usize = 0x401; // bool
                pub const m_iRumbleEffect: usize = 0x404; // RumbleEffect_t
                pub const m_flDropSpeed: usize = 0x408; // float32
                pub const m_iSlot: usize = 0x40C; // int32
                pub const m_iPosition: usize = 0x410; // int32
                pub const m_aShootSounds: usize = 0x418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // parent: C_CSGO_EndOfMatchLineupEndpoint
            // field count: 0
            pub mod C_CSGO_EndOfMatchLineupEnd {
            }
            // parent: C_CSGO_PreviewPlayer
            // field count: 0
            pub mod C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // parent: C_BaseCSGrenade
            // field count: 0
            pub mod C_SmokeGrenade {
            }
            // parent: C_PointEntity
            // field count: 0
            pub mod CInfoParticleTarget {
            }
            // parent: CPlayerPawnComponent
            // field count: 0
            pub mod CCSPlayer_DamageReactServices {
            }
            // parent: C_BaseClientUIEntity
            // field count: 29
            //
            // metadata: [REMOVED]
            pub mod C_PointClientUIWorldPanel {
                pub const m_bForceRecreateNextUpdate: usize = 0xEE8; // bool
                pub const m_bMoveViewToPlayerNextThink: usize = 0xEE9; // bool
                pub const m_bCheckCSSClasses: usize = 0xEEA; // bool
                pub const m_anchorDeltaTransform: usize = 0xEF0; // CTransform
                pub const m_pOffScreenIndicator: usize = 0x1080; // CPointOffScreenIndicatorUi*
                pub const m_bIgnoreInput: usize = 0x10A8; // bool
                pub const m_bLit: usize = 0x10A9; // bool
                pub const m_bFollowPlayerAcrossTeleport: usize = 0x10AA; // bool
                pub const m_flWidth: usize = 0x10AC; // float32
                pub const m_flHeight: usize = 0x10B0; // float32
                pub const m_flDPI: usize = 0x10B4; // float32
                pub const m_flInteractDistance: usize = 0x10B8; // float32
                pub const m_flDepthOffset: usize = 0x10BC; // float32
                pub const m_unOwnerContext: usize = 0x10C0; // uint32
                pub const m_unHorizontalAlign: usize = 0x10C4; // uint32
                pub const m_unVerticalAlign: usize = 0x10C8; // uint32
                pub const m_unOrientation: usize = 0x10CC; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x10D0; // bool
                pub const m_vecCSSClasses: usize = 0x10D8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_bOpaque: usize = 0x10F0; // bool
                pub const m_bNoDepth: usize = 0x10F1; // bool
                pub const m_bVisibleWhenParentNoDraw: usize = 0x10F2; // bool
                pub const m_bRenderBackface: usize = 0x10F3; // bool
                pub const m_bUseOffScreenIndicator: usize = 0x10F4; // bool
                pub const m_bExcludeFromSaveGames: usize = 0x10F5; // bool
                pub const m_bGrabbable: usize = 0x10F6; // bool
                pub const m_bOnlyRenderToTexture: usize = 0x10F7; // bool
                pub const m_bDisableMipGen: usize = 0x10F8; // bool
                pub const m_nExplicitImageLayout: usize = 0x10FC; // int32
            }
            // parent: C_BaseEntity
            // field count: 3
            //
            // metadata: [REMOVED]
            pub mod C_EntityFlame {
                pub const m_hEntAttached: usize = 0x5F8; // CHandle<C_BaseEntity>
                pub const m_hOldAttached: usize = 0x620; // CHandle<C_BaseEntity>
                pub const m_bCheapEffect: usize = 0x624; // bool
            }
            // parent: C_BaseEntity
            // field count: 16
            //
            // metadata: [REMOVED]
            pub mod CBasePlayerController {
                pub const m_CommandContext: usize = 0x600; // C_CommandContext
                pub const m_nInButtonsWhichAreToggles: usize = 0x6A8; // uint64
                pub const m_nTickBase: usize = 0x6B0; // uint32
                pub const m_hPawn: usize = 0x6B4; // CHandle<C_BasePlayerPawn>
                pub const m_bKnownTeamMismatch: usize = 0x6B8; // bool
                pub const m_hPredictedPawn: usize = 0x6BC; // CHandle<C_BasePlayerPawn>
                pub const m_nSplitScreenSlot: usize = 0x6C0; // CSplitScreenSlot
                pub const m_hSplitOwner: usize = 0x6C4; // CHandle<CBasePlayerController>
                pub const m_hSplitScreenPlayers: usize = 0x6C8; // CUtlVector<CHandle<CBasePlayerController>>
                pub const m_bIsHLTV: usize = 0x6E0; // bool
                pub const m_iConnected: usize = 0x6E4; // PlayerConnectedState
                pub const m_iszPlayerName: usize = 0x6E8; // char[128]
                pub const m_steamID: usize = 0x770; // uint64
                pub const m_bIsLocalPlayerController: usize = 0x778; // bool
                pub const m_bNoClipEnabled: usize = 0x779; // bool
                pub const m_iDesiredFOV: usize = 0x77C; // uint32
            }
            // parent: C_BaseEntity
            // field count: 0
            pub mod C_CSGO_EndOfMatchLineupEndpoint {
            }
        }
    }
}
