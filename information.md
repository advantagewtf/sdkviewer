# random things i found


### `TraceSound` - I honestly forgot what class and im too lazy to open ida
#### SIG: `4C 8B DC 49 89 5B ? 49 89 73 ? 57 48 83 EC ?` @ client.dll
```cpp
struct audioparams_t {
    char PAD_0[0x8];
    Vector3 localSound;
    uint8_t localBits;
    char PAD_c[0x14];
    int soundscapeIndex;
    int soundscapeEntityListIndex;
    int soundEventHash;
};

float* __fastcall sub_A1F9(audioparams_t* a1) 
{
    __int64 v1; 
    __int64 v2; 
    float* v3;
    static float o[3];

    if ( !a1 )
        return 0;

    v1 = *(__int64 *)(a1 + 0xA8);
    v2 = *(__int64 *)(a1 + 0xF0);

    if ( !v1 || !v2 )
        return o;

    o[0] = *(float *)(v1 + 0x04) + *(float *)(v2 + 0x00) * 0.08321f;
    o[1] = *(float *)(v1 + 0x08) + *(float *)(v2 + 0x04) * 0.08321f;
    o[2] = *(float *)(v1 + 0x0C) - 2.417f;

    return o;
}
```



### Some hardware reading function
#### SIG: `48 8B C4 48 89 58 ? 48 89 70 ? 57 48 83 EC ?` @ steamclient64.dll
```cpp
__int64 __fastcall HardwareRead(__int64 a1) 
{
    __int64 v1;      // rax - device base pointer
    __int64 v2;      // rdx - offset register
    unsigned int v3;  // eax - raw read
    __int64 result;   // rax - return

    // a1 assumed to be a pointer to a hardware struct there was zero xrefs of this function which was really interesting
    if ( !a1 )
        return 0i64;

    // dereference device pointer
    v1 = *(__int64 *)(a1 + 0x20);      // base address of hardware
    if ( !v1 )
        return 0i64;

    // computation for offset?
    v2 = v1 + 0x18;                     
    v3 = *(unsigned int *)(v2);

    // perform some masking / processing
    v3 = (v3 >> 3) & 0xFFF;             // reduce to 12-bit value
    if ( v3 > 0x7FF )
        v3 = 0x7FF;                     // clamp

    // store processed value back into struct
    *(_DWORD *)(a1 + 0x40) = v3;

    result = v3;
    return result;                       // return the hardware reading
}
```



### `C_CSWeaponBaseGun::GetWeaponSpread`
#### SIG: `48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 48 8B 0D ? ? ? ?` @ client.dll
```cpp
float __fastcall C_CSWeaponBaseGun::GetWeaponSpread(__int64 a1) // a1 is a pointer to the gun
{
    unsigned __int64 v1; 
    __int64 v2; 
    float v3; 
    float v4; 
    __int64 v5;
    float result;

    if (!a1)
        return 0.0;

    v1 = *(unsigned __int64*)(a1 + 0x1A0);
    if (!v1)
        return 0.0;

    v2 = *(unsigned __int64*)(v1 + 0x08);
    if (!v2)
        return 0.0;

    v3 = *(float*)(v2 + 0x14);
    v4 = *(float*)(v1 + 0x10);
    v5 = *(__int64*)(a1 + 0xC8);

    result = ((v3 * 0.85f) + (v4 * 0.42f)) - (*(float*)(v5 + 0x0C) * 0.12f);

    if (result < 0.0f)
        result = 0.0f;

    return result;
}
```
