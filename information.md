# random things i found


### `TraceSound` - I honestly forgot what class and im too lazy to open ida
#### SIG: `4C 8B DC 49 89 5B ? 49 89 73 ? 57 48 83 EC ?` @ client.dll
```cpp
float* __fastcall sub_A1F9(__int64 a1) // assuming a1 is a pointer to the sound /
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
    v2 = v1 + 0x18;                     // some internal register
    v3 = *(unsigned int *)(v2);         // read "hardware register"

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
