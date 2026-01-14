# auto c++ updater made in python by moonlightrblx / ellii / drexxy

import json
import requests
import re

online = True
def get_all_offsets():
    if online:
        offsets_url = 'https://raw.githubusercontent.com/moonlightrblx/sdkviewer/refs/heads/main/dumped/json/offsets.json'
        client_dll_url = 'https://raw.githubusercontent.com/moonlightrblx/sdkviewer/refs/heads/main/dumped/json/client_dll.json'
        buttons_url = 'https://raw.githubusercontent.com/moonlightrblx/sdkviewer/refs/heads/main/dumped/json/buttons.json'
        
        offsets = requests.get(offsets_url).json()
        client_dll = requests.get(client_dll_url).json()
        buttons = requests.get(buttons_url).json()
    else:
        with open('offsets/offsets.json', 'r', encoding='utf-8') as f:
            offsets = json.load(f)
        with open('offsets/client_dll.json', 'r', encoding='utf-8') as f:
            client_dll = json.load(f)
        with open('offsets/buttons.json', 'r', encoding='utf-8') as f:
            buttons = json.load(f)


    return offsets, client_dll, buttons


def extract_offset_names(cpp_input):
    return re.findall(r'constexpr\s+std::ptrdiff_t\s+(\w+)\s*=', cpp_input)


def generate_cpp_offsets(cpp_input):
    offsets, client_dll, buttons = get_all_offsets()
    offset_names = set(extract_offset_names(cpp_input))

    cpp_code = [
        "/* Created by _.shxdow._ */", # new discord is drexxysan123_31381 <3
        "#pragma once",
        "#include <cstddef>",
        "namespace offsets {"
    ]
    
    class_definitions = {}

    # offsets.json
    for dll_name, dll_offsets in offsets.items():
        for offset_name, offset_value in dll_offsets.items():
            if offset_name in offset_names:
                hex_offset = hex(offset_value)
                class_name = dll_name.replace('.', '_')
                class_definitions.setdefault(class_name, []).append(
                    f'        constexpr std::ptrdiff_t {offset_name} = {hex_offset};'
                )

    # client_dll.json
    for class_name, class_content in client_dll['client.dll']['classes'].items():
        fields = class_content.get('fields', {})
        clean_class_name = class_name.replace('.', '_')
        for field_name, offset in fields.items():
            if field_name in offset_names:
                hex_offset = hex(offset)
                class_definitions.setdefault(clean_class_name, []).append(
                    f'        constexpr std::ptrdiff_t {field_name} = {hex_offset};'
                )

    # buttons.json
    for button_name, button_value in buttons['client.dll'].items():
        if button_name in offset_names:
            hex_value = hex(button_value)
            class_definitions.setdefault('Buttons', []).append(
                f'        constexpr std::ptrdiff_t {button_name} = {hex_value};'
            )

    # format with blank lines between each constant
    for class_name, class_content in class_definitions.items():
        cpp_code.append(f'    namespace {class_name} {{')
        for line in class_content:
            cpp_code.append(line + "\n")
        cpp_code.append(f'    }} // class {class_name}\n')

    cpp_code.append("} // namespace offsets\n")

    return "\n".join(cpp_code)


# Example usage
cpp_input = """

/* csdump created by _.shxdow._*/
#pragma once
#include <cstddef>
namespace offsets {

    namespace client_dll {
        constexpr std::ptrdiff_t dwCSGOInput = 0x1e3a140;

        constexpr std::ptrdiff_t dwEntityList = 0x1d11cf8;

        constexpr std::ptrdiff_t dwGlobalVars = 0x1be21c0;

        constexpr std::ptrdiff_t dwLocalPlayerController = 0x1e1bbd8;

        constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1becf38;

        constexpr std::ptrdiff_t dwViewAngles = 0x1e3a7f0;

        constexpr std::ptrdiff_t dwViewMatrix = 0x1e303d0;

        constexpr std::ptrdiff_t dwViewRender = 0x1e30f48;

    } // class client_dll

    namespace engine2_dll {
        constexpr std::ptrdiff_t dwBuildNumber = 0x5f13e4;

        constexpr std::ptrdiff_t dwNetworkGameClient = 0x8eb518;

        constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x390;

        constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x23c;

        constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2c1467;

        constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xe8;

        constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x230;

        constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x23c;

        constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x220;

        constexpr std::ptrdiff_t dwWindowHeight = 0x8ef824;

        constexpr std::ptrdiff_t dwWindowWidth = 0x8ef820;

    } // class engine2_dll

    namespace CCSPlayerController {
        constexpr std::ptrdiff_t m_hPlayerPawn = 0x8fc;

        constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x850;

    } // class CCSPlayerController

    namespace CCSPlayer_MovementServices {
        constexpr std::ptrdiff_t m_flDuckSpeed = 0x28c;

        constexpr std::ptrdiff_t m_flLastDuckTime = 0x2a4;

        constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x298;

    } // class CCSPlayer_MovementServices

    namespace CCSPlayer_WeaponServices {
        constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xcc;

    } // class CCSPlayer_WeaponServices

    namespace CCSWeaponBaseVData {
        constexpr std::ptrdiff_t m_WeaponCategory = 0x444;

        constexpr std::ptrdiff_t m_WeaponType = 0x440;

        constexpr std::ptrdiff_t m_vSmokeColor = 0x85c;

    } // class CCSWeaponBaseVData

    namespace CEffectData {
        constexpr std::ptrdiff_t m_fFlags = 0x63;

    } // class CEffectData

    namespace CLightComponent {
        constexpr std::ptrdiff_t m_bEnabled = 0x134;

        constexpr std::ptrdiff_t m_flBrightnessScale = 0x7c;

    } // class CLightComponent

    namespace CPlayer_WeaponServices {
        constexpr std::ptrdiff_t m_hActiveWeapon = 0x58;

    } // class CPlayer_WeaponServices

    namespace CSkeletonInstance {
        constexpr std::ptrdiff_t m_modelState = 0x190;

    } // class CSkeletonInstance

    namespace C_BarnLight {
        constexpr std::ptrdiff_t m_bEnabled = 0xeb0;

        constexpr std::ptrdiff_t m_flBrightnessScale = 0xec4;

    } // class C_BarnLight

    namespace C_BaseClientUIEntity {
        constexpr std::ptrdiff_t m_bEnabled = 0xeb8;

    } // class C_BaseClientUIEntity

    namespace C_BaseEntity {
        constexpr std::ptrdiff_t m_fFlags = 0x3f8;

        constexpr std::ptrdiff_t m_iHealth = 0x34c;

        constexpr std::ptrdiff_t m_iTeamNum = 0x3eb;

        constexpr std::ptrdiff_t m_pGameSceneNode = 0x330;

    } // class C_BaseEntity

    namespace C_BaseModelEntity {
        constexpr std::ptrdiff_t m_vecViewOffset = 0xd80;

    } // class C_BaseModelEntity

    namespace C_BasePlayerPawn {
        constexpr std::ptrdiff_t m_pMovementServices = 0x1430;

        constexpr std::ptrdiff_t m_pWeaponServices = 0x13f0;

        constexpr std::ptrdiff_t m_vOldOrigin = 0x15a0;

    } // class C_BasePlayerPawn

    namespace C_BasePlayerWeapon {
        constexpr std::ptrdiff_t m_iClip1 = 0x18f0;

    } // class C_BasePlayerWeapon

    namespace C_C4 {
        constexpr std::ptrdiff_t m_entitySpottedState = 0x1f98;

    } // class C_C4

    namespace C_CSPlayerPawn {
        constexpr std::ptrdiff_t m_aimPunchAngle = 0x16e4;

        constexpr std::ptrdiff_t m_bIsScoped = 0x2718;

        constexpr std::ptrdiff_t m_entitySpottedState = 0x2700;

        constexpr std::ptrdiff_t m_iIDEntIndex = 0x3ecc;
        constexpr std::ptrdiff_t m_angEyeAngles = 0x3DF0; // QAngle
        constexpr std::ptrdiff_t m_iShotsFired = 0x272c;

    } // class C_CSPlayerPawn

    namespace C_CSPlayerPawnBase {
        constexpr std::ptrdiff_t m_flFlashBangTime = 0x15fc;

        constexpr std::ptrdiff_t m_flFlashDuration = 0x1610;

        constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x160c;

        constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1604;

        constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1600;

    } // class C_CSPlayerPawnBase

    namespace C_ColorCorrection {
        constexpr std::ptrdiff_t m_bEnabled = 0x81c;

    } // class C_ColorCorrection

    namespace C_ColorCorrectionVolume {
        constexpr std::ptrdiff_t m_bEnabled = 0x1000;

    } // class C_ColorCorrectionVolume

    namespace C_DynamicProp {
        constexpr std::ptrdiff_t m_bStartDisabled = 0x13dd;

    } // class C_DynamicProp

    namespace C_EnvCubemapFog {
        constexpr std::ptrdiff_t m_bStartDisabled = 0x61d;

        constexpr std::ptrdiff_t m_hSkyMaterial = 0x628;

    } // class C_EnvCubemapFog

    namespace C_EnvSky {
        constexpr std::ptrdiff_t m_bEnabled = 0xee4;

        constexpr std::ptrdiff_t m_bStartDisabled = 0xec0;

        constexpr std::ptrdiff_t m_flBrightnessScale = 0xecc;

        constexpr std::ptrdiff_t m_flFogMaxEnd = 0xee0;

        constexpr std::ptrdiff_t m_flFogMaxStart = 0xedc;

        constexpr std::ptrdiff_t m_flFogMinEnd = 0xed8;

        constexpr std::ptrdiff_t m_flFogMinStart = 0xed4;

        constexpr std::ptrdiff_t m_hSkyMaterial = 0xeb0;

        constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xeb8;

        constexpr std::ptrdiff_t m_nFogType = 0xed0;

        constexpr std::ptrdiff_t m_vTintColor = 0xec1;

        constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xec5;

    } // class C_EnvSky

    namespace C_EnvVolumetricFogController {
        constexpr std::ptrdiff_t m_bStartDisabled = 0x66c;

    } // class C_EnvVolumetricFogController

    namespace C_EnvVolumetricFogVolume {
        constexpr std::ptrdiff_t m_bStartDisabled = 0x614;

    } // class C_EnvVolumetricFogVolume

    namespace C_EnvWindVolume {
        constexpr std::ptrdiff_t m_bStartDisabled = 0x614;

    } // class C_EnvWindVolume

    namespace C_FuncMonitor {
        constexpr std::ptrdiff_t m_bEnabled = 0xecc;

    } // class C_FuncMonitor

    namespace C_GradientFog {
        constexpr std::ptrdiff_t m_bStartDisabled = 0x630;

    } // class C_GradientFog

    namespace C_Hostage {
        constexpr std::ptrdiff_t m_entitySpottedState = 0x13f0;

    } // class C_Hostage

    namespace C_InfoVisibilityBox {
        constexpr std::ptrdiff_t m_bEnabled = 0x60c;

    } // class C_InfoVisibilityBox

    namespace C_PlantedC4 {
        constexpr std::ptrdiff_t m_entitySpottedState = 0x1170;

    } // class C_PlantedC4

    namespace C_PlayerVisibility {
        constexpr std::ptrdiff_t m_bStartDisabled = 0x608;

    } // class C_PlayerVisibility

    namespace C_PointWorldText {
        constexpr std::ptrdiff_t m_bEnabled = 0x1150;

    } // class C_PointWorldText

    namespace C_SmokeGrenadeProjectile {
        constexpr std::ptrdiff_t m_vSmokeColor = 0x1474;

    } // class C_SmokeGrenadeProjectile

    namespace Buttons {
        constexpr std::ptrdiff_t back = 0x1be6670;

        constexpr std::ptrdiff_t forward = 0x1be65e0;

        constexpr std::ptrdiff_t jump = 0x1be68b0;

        constexpr std::ptrdiff_t left = 0x1be6700;

        constexpr std::ptrdiff_t right = 0x1be6790;

    } // class Buttons

} // namespace offsets
""" 

cpp_output = generate_cpp_offsets(cpp_input)

with open('offsets.hpp', 'w', encoding='utf-8') as f:
    f.write(cpp_output)
