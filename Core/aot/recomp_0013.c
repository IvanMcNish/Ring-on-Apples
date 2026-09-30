/* Generated ELF translation shard 13: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_0013AA00
 * Original: 0x0013AA00 - 0x0013AA5F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x583C98)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x583C98), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA4F; /* je: equal / zero */

loc_0013AA16: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AA27u); RECOMP_ABI_CALL(0x0013AAB0u, sub_0013AAB0); /* call 0x0013AAB0 */

loc_0013AA27: ;
    ecx = MEM32(ebp + -4);
    eax = eax + 5;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AA39u); RECOMP_ABI_CALL(0x0013AA60u, sub_0013AA60); /* call 0x0013AA60 */

loc_0013AA39: ;
    _fa = (uint32_t)(MEM32(0xB2A9AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2A9AC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AA4D; /* jne: not equal / not zero */

loc_0013AA42: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AA4Du); RECOMP_ABI_CALL(0x0013A960u, sub_0013A960); /* call 0x0013A960 */

loc_0013AA4D: ;
    goto loc_0013AA5A;

loc_0013AA4F: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AA5Au); RECOMP_ABI_CALL(0x0013A960u, sub_0013A960); /* call 0x0013A960 */

loc_0013AA5A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AA60
 * Original: 0x0013AA60 - 0x0013AAA4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(0xB2A9AC);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013AA9F; /* jge: greater or equal (signed >=) */

loc_0013AA78: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -4);
    MEM32(eax * 8 + 0xB2A9B0) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax * 8 + 0xB2A9B4) = ecx;
    eax = MEM32(0xB2A9AC);
    eax = eax + 1;
    MEM32(0xB2A9AC) = eax;

loc_0013AA9F: ;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AAB0
 * Original: 0x0013AAB0 - 0x0013AB7F (207 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AABEu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013AABE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AAC3u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0013AAC3: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0x164;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AAE8u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013AAE8: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AAFA; /* jne: not equal / not zero */

loc_0013AAF1: ;
    MEM32(ebp + -4) = 0;
    goto loc_0013AB77;

loc_0013AAFA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x5C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013AB0E; /* jl: less (signed <) */

loc_0013AB05: ;
    MEM32(ebp + -4) = 0;
    goto loc_0013AB77;

loc_0013AB0E: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0x5C;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AB2Bu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013AB2B: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AB3D; /* jne: not equal / not zero */

loc_0013AB34: ;
    MEM32(ebp + -4) = 0;
    goto loc_0013AB77;

loc_0013AB3D: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AB4F; /* jne: not equal / not zero */

loc_0013AB46: ;
    MEM32(ebp + -4) = 0;
    goto loc_0013AB77;

loc_0013AB4F: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0xC);
    MEM32(esp) = 0x736E6421;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AB65u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0013AB65: ;
    eax = (uint32_t)((int32_t)MEM32(eax + 0x84) * (int32_t)0x1E);
    ecx = 0x3E8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -4) = eax;

loc_0013AB77: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AB80
 * Original: 0x0013AB80 - 0x0013ABC9 (73 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB80(void)
{
    uint32_t ebp = g_ebp;

loc_0013AB80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xB2A9B0;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ABA6u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0013ABA6: ;
    MEM32(0xB2A9AC) = 1;
    MEM32(0xB2A9B0) = 0xFFFFFFFFu;
    MEM32(0xB2A9B4) = 0x3C;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013ABD0
 * Original: 0x0013ABD0 - 0x0013AC21 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ABD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013ABD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ABDEu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013ABDE: ;
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -4) = eax;
    MEM8(ebp + -5) = 0;
    MEM32(ebp + -12) = 0;

loc_0013ABEF: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013AC19; /* jge: greater or equal (signed >=) */

loc_0013ABF7: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AC0C; /* jne: not equal / not zero */

loc_0013AC06: ;
    MEM8(ebp + -5) = 1;
    goto loc_0013AC19;

loc_0013AC0C: ;
    goto loc_0013AC0E;

loc_0013AC0E: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013ABEF;

loc_0013AC19: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AC30
 * Original: 0x0013AC30 - 0x0013AC89 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AC30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AC3Bu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013AC3B: ;
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -4) = eax;
    MEM8(ebp + -5) = 0;
    MEM32(ebp + -12) = 0;

loc_0013AC4C: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013AC81; /* jge: greater or equal (signed >=) */

loc_0013AC54: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xB2ADDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xB2ADDC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AC74; /* jne: not equal / not zero */

loc_0013AC61: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xB2AE1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xB2AE1C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AC74; /* jne: not equal / not zero */

loc_0013AC6E: ;
    MEM8(ebp + -5) = 1;
    goto loc_0013AC81;

loc_0013AC74: ;
    goto loc_0013AC76;

loc_0013AC76: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013AC4C;

loc_0013AC81: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AC90
 * Original: 0x0013AC90 - 0x0013AC95 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC90(void)
{
    uint32_t ebp = g_ebp;

loc_0013AC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013ACA0
 * Original: 0x0013ACA0 - 0x0013AE3C (412 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ACA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013ACA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACABu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013ACAB: ;
    eax = 0xB2A9D8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x484;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACCBu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0013ACCB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACD0u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013ACD0: ;
    eax = MEM32(eax + 0x40);
    MEM32(0xB2A9D8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACDDu); RECOMP_ABI_CALL(0x0013C160u, sub_0013C160); /* call 0x0013C160 */

loc_0013ACDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013ACF0; /* je: equal / zero */

loc_0013ACE1: ;
    eax = (uint32_t)((int32_t)MEM32(0xB2A9D8) * (int32_t)0x708);
    MEM32(0xB2A9D8) = eax;

loc_0013ACF0: ;
    eax = 0; /* xor self */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = 0;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = 2;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AD1Du); RECOMP_ABI_CALL(0x0012DDD0u, sub_0012DDD0); /* call 0x0012DDD0 */

loc_0013AD1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AD38; /* jne: not equal / not zero */

loc_0013AD22: ;
    eax = 0x4677FF;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AD38u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0013AD38: ;
    eax = 0; /* xor self */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = 0;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = 2;
    MEM32(esp + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AD65u); RECOMP_ABI_CALL(0x0012DDD0u, sub_0012DDD0); /* call 0x0012DDD0 */

loc_0013AD65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AD80; /* jne: not equal / not zero */

loc_0013AD6A: ;
    eax = 0x472E66;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AD80u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0013AD80: ;
    MEM32(ebp + -4) = 0;

loc_0013AD87: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013ADA6; /* jge: greater or equal (signed >=) */

loc_0013AD8D: ;
    eax = MEM32(ebp + -4);
    MEM32(eax * 4 + 0xB2AE1C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_0013AD87;

loc_0013ADA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ADABu); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013ADAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013ADF5; /* jne: not equal / not zero */

loc_0013ADAF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ADB4u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013ADB4: ;
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;
    MEM32(ebp + -4) = 0;

loc_0013ADC8: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013ADF3; /* jge: greater or equal (signed >=) */

loc_0013ADD0: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0x1C2;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    MEM32(eax * 4 + 0xB2ADDC) = ecx;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_0013ADC8;

loc_0013ADF3: ;
    goto loc_0013AE35;

loc_0013ADF5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ADFAu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013ADFA: ;
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = 0;

loc_0013AE07: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013AE33; /* jge: greater or equal (signed >=) */

loc_0013AE0F: ;
    eax = MEM32(ebp + -4);
    MEM32(eax * 4 + 0xB2ADDC) = 0;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AE28u); RECOMP_ABI_CALL(0x0013C1C0u, sub_0013C1C0); /* call 0x0013C1C0 */

loc_0013AE28: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_0013AE07;

loc_0013AE33: ;
    goto loc_0013AE35;

loc_0013AE35: ;
    SET_LO8(eax, 1);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AE40
 * Original: 0x0013AE40 - 0x0013AE45 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE40(void)
{
    uint32_t ebp = g_ebp;

loc_0013AE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AE50
 * Original: 0x0013AE50 - 0x0013AE73 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE50(void)
{
    uint32_t ebp = g_ebp;

loc_0013AE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AE6Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013AE6E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AE80
 * Original: 0x0013AE80 - 0x0013AE85 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE80(void)
{
    uint32_t ebp = g_ebp;

loc_0013AE80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AE90
 * Original: 0x0013AE90 - 0x0013AE95 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE90(void)
{
    uint32_t ebp = g_ebp;

loc_0013AE90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AEA0
 * Original: 0x0013AEA0 - 0x0013AEA8 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEA0(void)
{
    uint32_t ebp = g_ebp;

loc_0013AEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AEB0
 * Original: 0x0013AEB0 - 0x0013AEB8 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEB0(void)
{
    uint32_t ebp = g_ebp;

loc_0013AEB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AEC0
 * Original: 0x0013AEC0 - 0x0013AEC8 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEC0(void)
{
    uint32_t ebp = g_ebp;

loc_0013AEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AED0
 * Original: 0x0013AED0 - 0x0013AED5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AED0(void)
{
    uint32_t ebp = g_ebp;

loc_0013AED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AEE0
 * Original: 0x0013AEE0 - 0x0013AEE5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEE0(void)
{
    uint32_t ebp = g_ebp;

loc_0013AEE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013AEF0
 * Original: 0x0013AEF0 - 0x0013B12C (572 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0013AEF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x38)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF0Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013AF0E: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF2Cu); RECOMP_ABI_CALL(0x0012B2C0u, sub_0012B2C0); /* call 0x0012B2C0 */

loc_0013AF2C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF37u); RECOMP_ABI_CALL(0x0013C4C0u, sub_0013C4C0); /* call 0x0013C4C0 */

loc_0013AF37: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF42u); RECOMP_ABI_CALL(0x0013C5C0u, sub_0013C5C0); /* call 0x0013C5C0 */

loc_0013AF42: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0013AFC3; /* jle: less or equal (signed <=) */

loc_0013AF5B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF60u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013AF60: ;
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF71; /* je: equal / zero */

loc_0013AF66: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF71u); RECOMP_ABI_CALL(0x0012B300u, sub_0012B300); /* call 0x0012B300 */

loc_0013AF71: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF76u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013AF76: ;
    eax = MEM32(eax + 0x50);
    MEM32(ebp + -36) = eax;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0013AF8D; /* je: equal / zero */

loc_0013AF81: ;
    goto loc_0013AF83;

loc_0013AF83: ;
    eax = MEM32(ebp + -36);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0013AF9F; /* je: equal / zero */

loc_0013AF8B: ;
    goto loc_0013AFB1;

loc_0013AF8D: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    goto loc_0013AFC1;

loc_0013AF9F: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D818)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    goto loc_0013AFC1;

loc_0013AFB1: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43DCA4)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */

loc_0013AFC1: ;
    goto loc_0013AFC3;

loc_0013AFC3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AFC8u); RECOMP_ABI_CALL(0x0012D670u, sub_0012D670); /* call 0x0012D670 */

loc_0013AFC8: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B00A; /* je: equal / zero */

loc_0013AFD0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AFD5u); RECOMP_ABI_CALL(0x0013C160u, sub_0013C160); /* call 0x0013C160 */

loc_0013AFD5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B00A; /* je: equal / zero */

loc_0013AFDD: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0013B00A; /* jle: less or equal (signed <=) */

loc_0013AFE3: ;
    MEM32(ebp + -12) = 0;

loc_0013AFEA: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0013B008; /* jge: greater or equal (signed >=) */

loc_0013AFF2: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AFFDu); RECOMP_ABI_CALL(0x0013C620u, sub_0013C620); /* call 0x0013C620 */

loc_0013AFFD: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013AFEA;

loc_0013B008: ;
    goto loc_0013B00A;

loc_0013B00A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B00Fu); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013B00F: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B037; /* je: equal / zero */

loc_0013B017: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0013B037; /* jle: less or equal (signed <=) */

loc_0013B01D: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x21;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B037u); RECOMP_ABI_CALL(0x0012B2C0u, sub_0012B2C0); /* call 0x0012B2C0 */

loc_0013B037: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B127; /* je: equal / zero */

loc_0013B044: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B05Au); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013B05A: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B125; /* je: equal / zero */

loc_0013B070: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x2A2);
    eax = MEM32(eax + ecx * 4 + 0x2A8);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B123; /* je: equal / zero */

loc_0013B091: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B09Cu); RECOMP_ABI_CALL(0x001BD160u, sub_001BD160); /* call 0x001BD160 */

loc_0013B09C: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B123; /* je: equal / zero */

loc_0013B0A4: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0xB2A9D8;
    eax = eax + 0x204;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax);
    ecx = 0x1E;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(ebp + -26) = LO16(eax);
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B0DFu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013B0DF: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0013B115; /* jle: less or equal (signed <=) */

loc_0013B0EA: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax);
    ecx = 0x96;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013B115; /* jne: not equal / not zero */

loc_0013B0FC: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB2A9D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB2A9D8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0013B115; /* jge: greater or equal (signed >=) */

loc_0013B109: ;
    MEM32(esp) = 0x2A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B115u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013B115: ;
    SET_LO16(ecx, MEM16(ebp + -26));
    eax = MEM32(ebp + -32);
    MEM16(eax + 0x260) = LO16(ecx);

loc_0013B123: ;
    goto loc_0013B125;

loc_0013B125: ;
    goto loc_0013B127;

loc_0013B127: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B130
 * Original: 0x0013B130 - 0x0013B26E (318 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B130(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B148u); RECOMP_ABI_CALL(0x001BD160u, sub_001BD160); /* call 0x001BD160 */

loc_0013B148: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B180; /* jne: not equal / not zero */

loc_0013B14C: ;
    ecx = 0x4898AC;
    eax = 0x4810B9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x253;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B174u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013B174: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B180u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013B180: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B192u); RECOMP_ABI_CALL(0x001B43C0u, sub_001B43C0); /* call 0x001B43C0 */

loc_0013B192: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(esi, MEM16(eax + 0x68));
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x68);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    edx = ebp + -16;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0x461A9F;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B1E0u); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0013B1E0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B1E5u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013B1E5: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax - MEM32(ecx + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0013B268; /* jbe: below or equal (unsigned <=) */

loc_0013B1F5: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B200u); RECOMP_ABI_CALL(0x001BD160u, sub_001BD160); /* call 0x001BD160 */

loc_0013B200: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B268; /* je: equal / zero */

loc_0013B208: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    eax = eax & 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -17) = LO8(eax);
    eax = ZX8(MEM8(ebp + -17));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B266; /* je: equal / zero */

loc_0013B22A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B266; /* jne: not equal / not zero */

loc_0013B236: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x1DC);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B25B; /* je: equal / zero */

loc_0013B247: ;
    MEM32(esp) = 0xFFFFFFFFu;
    MEM32(esp + 4) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B25Bu); RECOMP_ABI_CALL(0x0012B750u, sub_0012B750); /* call 0x0012B750 */

loc_0013B25B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B266u); RECOMP_ABI_CALL(0x0013C7A0u, sub_0013C7A0); /* call 0x0013C7A0 */

loc_0013B266: ;
    goto loc_0013B268;

loc_0013B268: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B270
 * Original: 0x0013B270 - 0x0013B375 (261 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B270(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 1;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B293u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013B293: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B2A1u); RECOMP_ABI_CALL(0x001BD160u, sub_001BD160); /* call 0x001BD160 */

loc_0013B2A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B2D9; /* jne: not equal / not zero */

loc_0013B2A5: ;
    ecx = 0x4898AC;
    eax = 0x4810B9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3AE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B2CDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013B2CD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B2D9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013B2D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B2DEu); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013B2DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B30E; /* je: equal / zero */

loc_0013B2E2: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x1E;
    MEM32(esp + 8) = 0x1F;
    MEM32(esp + 0xC) = 0x20;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B30Cu); RECOMP_ABI_CALL(0x0012AC30u, sub_0012AC30); /* call 0x0012AC30 */

loc_0013B30C: ;
    goto loc_0013B36D;

loc_0013B30E: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B323u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013B323: ;
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B36B; /* je: equal / zero */

loc_0013B32F: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B342u); RECOMP_ABI_CALL(0x00373A60u, sub_00373A60); /* call 0x00373A60 */

loc_0013B342: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B369; /* je: equal / zero */

loc_0013B357: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x1DC);
    ecx = ecx | 0x40;
    MEM32(eax + 0x1DC) = ecx;

loc_0013B369: ;
    goto loc_0013B36B;

loc_0013B36B: ;
    goto loc_0013B36D;

loc_0013B36D: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B380
 * Original: 0x0013B380 - 0x0013B3D1 (81 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B380(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B394u); RECOMP_ABI_CALL(0x001BD160u, sub_001BD160); /* call 0x001BD160 */

loc_0013B394: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B3CC; /* jne: not equal / not zero */

loc_0013B398: ;
    ecx = 0x4898AC;
    eax = 0x4810B9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3C8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B3C0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013B3C0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B3CCu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013B3CC: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B3E0
 * Original: 0x0013B3E0 - 0x0013B556 (374 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0013B3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x34)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B3ECu); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013B3EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B411; /* jne: not equal / not zero */

loc_0013B3F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B3F6u); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0013B3F6: ;
    edx = ZX8(LO8(eax));
    eax = 0x13;
    ecx = 0x21;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B411u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013B411: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B416u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013B416: ;
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;

loc_0013B423: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0013B479; /* jge: greater or equal (signed >=) */

loc_0013B42B: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xB2ADDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xB2ADDC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0013B46C; /* jle: less or equal (signed <=) */

loc_0013B438: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ecx * 4 + 0xB2ADDC);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ecx * 4 + 0xB2ADDC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B46A; /* jne: not equal / not zero */

loc_0013B451: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B45Fu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013B45F: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B46Au); RECOMP_ABI_CALL(0x0013C1C0u, sub_0013C1C0); /* call 0x0013C1C0 */

loc_0013B46A: ;
    goto loc_0013B46C;

loc_0013B46C: ;
    goto loc_0013B46E;

loc_0013B46E: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013B423;

loc_0013B479: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B47Eu); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013B47E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B550; /* je: equal / zero */

loc_0013B486: ;
    MEM32(ebp + -12) = 0;

loc_0013B48D: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0013B54E; /* jge: greater or equal (signed >=) */

loc_0013B499: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B4BD; /* jne: not equal / not zero */

loc_0013B4AC: ;
    eax = MEM32(ebp + -12);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B4B8u); RECOMP_ABI_CALL(0x0012DF50u, sub_0012DF50); /* call 0x0012DF50 */

loc_0013B4B8: ;
    goto loc_0013B53E;

loc_0013B4BD: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B4D2u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013B4D2: ;
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B53C; /* je: equal / zero */

loc_0013B4DE: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B4F1u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013B4F1: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -12);
    SET_LO16(esi, LO16(eax));
    edx = MEM32(ebp + -24);
    edx = edx + 4;
    edx = edx + 0x4C;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0x4983C6;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B53Cu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0013B53C: ;
    goto loc_0013B53E;

loc_0013B53E: ;
    goto loc_0013B540;

loc_0013B540: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013B48D;

loc_0013B54E: ;
    goto loc_0013B550;

loc_0013B550: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B560
 * Original: 0x0013B560 - 0x0013B5B2 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B560(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B581u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013B581: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B59C; /* jne: not equal / not zero */

loc_0013B58A: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax * 4 + 0xB2A9DC);
    MEM32(ebp + -8) = eax;
    goto loc_0013B5AA;

loc_0013B59C: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = MEM32(eax * 4 + 0xB2ABDC);
    MEM32(ebp + -8) = eax;

loc_0013B5AA: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B5C0
 * Original: 0x0013B5C0 - 0x0013B623 (99 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(ebp + 8));
    eax = MEM32(eax * 4 + 0xB2ABDC);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B5DFu); RECOMP_ABI_CALL(0x0013C820u, sub_0013C820); /* call 0x0013C820 */

loc_0013B5DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B601; /* je: equal / zero */

loc_0013B5E3: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    ecx = 0x4A29B8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B5FFu); RECOMP_ABI_CALL(0x0035D040u, sub_0035D040); /* call 0x0035D040 */

loc_0013B5FF: ;
    goto loc_0013B61B;

loc_0013B601: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x100;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B61Bu); RECOMP_ABI_CALL(0x0012AFF0u, sub_0012AFF0); /* call 0x0012AFF0 */

loc_0013B61B: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B630
 * Original: 0x0013B630 - 0x0013B6B2 (130 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B630(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B63Eu); RECOMP_ABI_CALL(0x0013C820u, sub_0013C820); /* call 0x0013C820 */

loc_0013B63E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B64A; /* je: equal / zero */

loc_0013B642: ;
    MEM16(ebp + -2) = 0x9A;
    goto loc_0013B650;

loc_0013B64A: ;
    MEM16(ebp + -2) = 0x9E;

loc_0013B650: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B666u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013B666: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B68D; /* je: equal / zero */

loc_0013B675: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B688u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013B688: ;
    MEM32(ebp + -16) = eax;
    goto loc_0013B698;

loc_0013B68D: ;
    eax = 0x4A1B86;
    MEM32(ebp + -16) = eax;
    goto loc_0013B698;

loc_0013B698: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B6AAu); RECOMP_ABI_CALL(0x0035B940u, sub_0035B940); /* call 0x0035B940 */

loc_0013B6AA: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B6C0
 * Original: 0x0013B6C0 - 0x0013B722 (98 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0xB2A9DC);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B6DEu); RECOMP_ABI_CALL(0x0013C820u, sub_0013C820); /* call 0x0013C820 */

loc_0013B6DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B700; /* je: equal / zero */

loc_0013B6E2: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    ecx = 0x4A29B8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B6FEu); RECOMP_ABI_CALL(0x0035D040u, sub_0035D040); /* call 0x0035D040 */

loc_0013B6FE: ;
    goto loc_0013B71A;

loc_0013B700: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x100;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B71Au); RECOMP_ABI_CALL(0x0012AFF0u, sub_0012AFF0); /* call 0x0012AFF0 */

loc_0013B71A: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B730
 * Original: 0x0013B730 - 0x0013B73E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B730(void)
{
    uint32_t ebp = g_ebp;

loc_0013B730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B740
 * Original: 0x0013B740 - 0x0013B9CB (651 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B740(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0013B740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x34)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO8(eax, MEM8(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B758u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013B758: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B9C5; /* je: equal / zero */

loc_0013B760: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B765u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013B765: ;
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B7AC; /* jne: not equal / not zero */

loc_0013B778: ;
    ecx = 0x45BEB8;
    eax = 0x4810B9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2F3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B7A0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013B7A0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B7ACu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013B7AC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B98A; /* je: equal / zero */

loc_0013B7B6: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B98A; /* jne: not equal / not zero */

loc_0013B7C0: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B7D5u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013B7D5: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B7E3u); RECOMP_ABI_CALL(0x0013ABD0u, sub_0013ABD0); /* call 0x0013ABD0 */

loc_0013B7E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B823; /* je: equal / zero */

loc_0013B7E7: ;
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, MEM16(eax + 0xC2));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xC2) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B801u); RECOMP_ABI_CALL(0x0013C820u, sub_0013C820); /* call 0x0013C820 */

loc_0013B801: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B821; /* je: equal / zero */

loc_0013B809: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B80Eu); RECOMP_ABI_CALL(0x0012D670u, sub_0012D670); /* call 0x0012D670 */

loc_0013B80E: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B821; /* je: equal / zero */

loc_0013B816: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B821u); RECOMP_ABI_CALL(0x0013C690u, sub_0013C690); /* call 0x0013C690 */

loc_0013B821: ;
    goto loc_0013B886;

loc_0013B823: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B82Eu); RECOMP_ABI_CALL(0x0013ABD0u, sub_0013ABD0); /* call 0x0013ABD0 */

loc_0013B82E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B86E; /* je: equal / zero */

loc_0013B832: ;
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, MEM16(eax + 0xC4));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xC4) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B84Cu); RECOMP_ABI_CALL(0x0013C820u, sub_0013C820); /* call 0x0013C820 */

loc_0013B84C: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B86C; /* je: equal / zero */

loc_0013B854: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B859u); RECOMP_ABI_CALL(0x0012D670u, sub_0012D670); /* call 0x0012D670 */

loc_0013B859: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B86C; /* je: equal / zero */

loc_0013B861: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B86Cu); RECOMP_ABI_CALL(0x0013C690u, sub_0013C690); /* call 0x0013C690 */

loc_0013B86C: ;
    goto loc_0013B884;

loc_0013B86E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B873u); RECOMP_ABI_CALL(0x0013AC30u, sub_0013AC30); /* call 0x0013AC30 */

loc_0013B873: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B882; /* je: equal / zero */

loc_0013B877: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B882u); RECOMP_ABI_CALL(0x0013C690u, sub_0013C690); /* call 0x0013C690 */

loc_0013B882: ;
    goto loc_0013B884;

loc_0013B884: ;
    goto loc_0013B886;

loc_0013B886: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B988; /* je: equal / zero */

loc_0013B893: ;
    MEM32(ebp + -16) = 0;

loc_0013B89A: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0013B8EC; /* jge: greater or equal (signed >=) */

loc_0013B8A2: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xB2ADDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xB2ADDC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B8C8; /* jne: not equal / not zero */

loc_0013B8AF: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B8C8; /* jne: not equal / not zero */

loc_0013B8B5: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xB2AE1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xB2AE1C), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B8C8; /* jne: not equal / not zero */

loc_0013B8C2: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;

loc_0013B8C8: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B8DF; /* jne: not equal / not zero */

loc_0013B8D7: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_0013B8EC;

loc_0013B8DF: ;
    goto loc_0013B8E1;

loc_0013B8E1: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_0013B89A;

loc_0013B8EC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B8F1u); RECOMP_ABI_CALL(0x0013AC30u, sub_0013AC30); /* call 0x0013AC30 */

loc_0013B8F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B92F; /* je: equal / zero */

loc_0013B8F5: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B92F; /* jne: not equal / not zero */

loc_0013B8FB: ;
    ecx = 0x4648D2;
    eax = 0x4810B9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x326;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B923u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013B923: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B92Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013B92F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B986; /* je: equal / zero */

loc_0013B935: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B940u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013B940: ;
    edx = MEM32(ebp + -24);
    esi = ZX8(LO8(eax));
    ecx = 0x21;
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) ecx = eax; /* cmovne */
    eax = MEM32(ebp + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x22;
    MEM32(esp + 0xC) = 0x23;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B979u); RECOMP_ABI_CALL(0x0012AC30u, sub_0012AC30); /* call 0x0012AC30 */

loc_0013B979: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(eax * 4 + 0xB2AE1C) = ecx;

loc_0013B986: ;
    goto loc_0013B988;

loc_0013B988: ;
    goto loc_0013B98A;

loc_0013B98A: ;
    MEM32(ebp + -16) = 0;

loc_0013B991: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0013B9C3; /* jge: greater or equal (signed >=) */

loc_0013B999: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0013B9B6; /* jne: not equal / not zero */

loc_0013B9A8: ;
    eax = MEM32(ebp + -16);
    MEM32(eax * 4 + 0xB2AE1C) = 0xFFFFFFFFu;

loc_0013B9B6: ;
    goto loc_0013B9B8;

loc_0013B9B8: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_0013B991;

loc_0013B9C3: ;
    goto loc_0013B9C5;

loc_0013B9C5: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013B9D0
 * Original: 0x0013B9D0 - 0x0013BE5B (1163 bytes, 303 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B9D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013B9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B9FCu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013B9FC: ;
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -13) = 1;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE2u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE2u;
    MEM32(ebp + -52) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(9));
    eax = eax - 9;
    if ((!_cf && eax != 0)) goto loc_0013BE4D; /* ja: above (unsigned >) */

loc_0013BA15: ;
    eax = MEM32(ebp + -52);
    eax = MEM32(eax * 4 + 0x4A3238);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0013BA21u) goto loc_0013BA21;
    if (_jt == 0x0013BA7Fu) goto loc_0013BA7F;
    if (_jt == 0x0013BADDu) goto loc_0013BADD;
    if (_jt == 0x0013BB5Du) goto loc_0013BB5D;
    if (_jt == 0x0013BBBBu) goto loc_0013BBBB;
    if (_jt == 0x0013BC19u) goto loc_0013BC19;
    if (_jt == 0x0013BC99u) goto loc_0013BC99;
    if (_jt == 0x0013BE4Du) goto loc_0013BE4D;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013BA21: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BA37u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BA37: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BA58; /* je: equal / zero */

loc_0013BA40: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x9F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BA53u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BA53: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BA61;

loc_0013BA58: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BA61: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BA7Au); RECOMP_ABI_CALL(0x0035B3B0u, sub_0035B3B0); /* call 0x0035B3B0 */

loc_0013BA7A: ;
    goto loc_0013BE51;

loc_0013BA7F: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BA95u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BA95: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BAB6; /* je: equal / zero */

loc_0013BA9E: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BAB1u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BAB1: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BABF;

loc_0013BAB6: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BABF: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BAD8u); RECOMP_ABI_CALL(0x0035B3B0u, sub_0035B3B0); /* call 0x0035B3B0 */

loc_0013BAD8: ;
    goto loc_0013BE51;

loc_0013BADD: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BAF2u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013BAF2: ;
    MEM32(ebp + -28) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BB0Bu); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BB0B: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BB2C; /* je: equal / zero */

loc_0013BB14: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BB27u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BB27: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BB35;

loc_0013BB2C: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BB35: ;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BB58u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013BB58: ;
    goto loc_0013BE51;

loc_0013BB5D: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BB73u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BB73: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BB94; /* je: equal / zero */

loc_0013BB7C: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BB8Fu); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BB8F: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BB9D;

loc_0013BB94: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BB9D: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BBB6u); RECOMP_ABI_CALL(0x0035B3B0u, sub_0035B3B0); /* call 0x0035B3B0 */

loc_0013BBB6: ;
    goto loc_0013BE51;

loc_0013BBBB: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BBD1u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BBD1: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BBF2; /* je: equal / zero */

loc_0013BBDA: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BBEDu); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BBED: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BBFB;

loc_0013BBF2: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BBFB: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BC14u); RECOMP_ABI_CALL(0x0035B3B0u, sub_0035B3B0); /* call 0x0035B3B0 */

loc_0013BC14: ;
    goto loc_0013BE51;

loc_0013BC19: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BC2Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013BC2E: ;
    MEM32(ebp + -32) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BC47u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BC47: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC68; /* je: equal / zero */

loc_0013BC50: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BC63u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BC63: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BC71;

loc_0013BC68: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BC71: ;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BC94u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013BC94: ;
    goto loc_0013BE51;

loc_0013BC99: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BCAEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013BCAE: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax * 4 + 0xB2A9DC);
    ecx = 0x1E;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x27 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013BD65; /* jne: not equal / not zero */

loc_0013BCD3: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BCE6u); RECOMP_ABI_CALL(0x00132B30u, sub_00132B30); /* call 0x00132B30 */

loc_0013BCE6: ;
    MEM32(ebp + -48) = eax;
    eax = ebp + -48;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BCF6u); RECOMP_ABI_CALL(0x0012DA60u, sub_0012DA60); /* call 0x0012DA60 */

loc_0013BCF6: ;
    MEM32(ebp + -44) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BD0Fu); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BD0F: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BD30; /* je: equal / zero */

loc_0013BD18: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x9B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BD2Bu); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BD2B: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BD39;

loc_0013BD30: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BD39: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + -24);
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + -40);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BD60u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013BD60: ;
    goto loc_0013BE4B;

loc_0013BD65: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013BDD7; /* jne: not equal / not zero */

loc_0013BD6B: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BD81u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BD81: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BDA2; /* je: equal / zero */

loc_0013BD8A: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BD9Du); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BD9D: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BDAB;

loc_0013BDA2: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BDAB: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + -24);
    ecx = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    eax = MEM32(ebp + -40);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BDD5u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013BDD5: ;
    goto loc_0013BE49;

loc_0013BDD7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x25 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013BE47; /* jne: not equal / not zero */

loc_0013BDDD: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BDF3u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013BDF3: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BE14; /* je: equal / zero */

loc_0013BDFC: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BE0Fu); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013BE0F: ;
    MEM32(ebp + -24) = eax;
    goto loc_0013BE1D;

loc_0013BE14: ;
    eax = 0x4A1B86;
    MEM32(ebp + -24) = eax;

loc_0013BE1D: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + -24);
    ecx = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    eax = MEM32(ebp + -40);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BE47u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013BE47: ;
    goto loc_0013BE49;

loc_0013BE49: ;
    goto loc_0013BE4B;

loc_0013BE4B: ;
    goto loc_0013BE51;

loc_0013BE4D: ;
    MEM8(ebp + -13) = 0;

loc_0013BE51: ;
    SET_LO8(eax, MEM8(ebp + -13));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013BE60
 * Original: 0x0013BE60 - 0x0013BE68 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE60(void)
{
    uint32_t ebp = g_ebp;

loc_0013BE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013BE70
 * Original: 0x0013BE70 - 0x0013BE97 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */

loc_0013BE70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    eax = MEM32(ebp + 8);
    eax = eax - 1;
    if ((eax != 0)) goto loc_0013BE8F; /* jne: not equal / not zero */

loc_0013BE85: ;
    goto loc_0013BE87;

loc_0013BE87: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BE8Cu); RECOMP_ABI_CALL(0x0013C820u, sub_0013C820); /* call 0x0013C820 */

loc_0013BE8C: ;
    MEM8(ebp + -1) = LO8(eax);

loc_0013BE8F: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013BEA0
 * Original: 0x0013BEA0 - 0x0013BF0D (109 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BEA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BF05; /* je: equal / zero */

loc_0013BEB6: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BEC1u); RECOMP_ABI_CALL(0x0013ABD0u, sub_0013ABD0); /* call 0x0013ABD0 */

loc_0013BEC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BEE5; /* je: equal / zero */

loc_0013BEC5: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BED0u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013BED0: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x54) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    goto loc_0013BF03;

loc_0013BEE5: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BEF0u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013BEF0: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x58) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);

loc_0013BF03: ;
    goto loc_0013BF05;

loc_0013BF05: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013BF10
 * Original: 0x0013BF10 - 0x0013C048 (312 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BF10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x468;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x450 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013BF34; /* jge: greater or equal (signed >=) */

loc_0013BF28: ;
    MEM32(ebp + -4) = 0;
    goto loc_0013C03D;

loc_0013BF34: ;
    eax = ebp + -1108;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x450;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BF54u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0013BF54: ;
    MEM16(ebp + -1110) = 0;

loc_0013BF5D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013BFA0; /* jge: greater or equal (signed >=) */

loc_0013BF69: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1110);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BF7Fu); RECOMP_ABI_CALL(0x000157A0u, sub_000157A0); /* call 0x000157A0 */

loc_0013BF7F: ;
    SET_LO8(ecx, LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1110);
    MEM8(ebp + eax + -20) = LO8(ecx);
    SET_LO16(eax, MEM16(ebp + -1110));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -1110) = LO16(eax);
    goto loc_0013BF5D;

loc_0013BFA0: ;
    ecx = ebp + -1108;
    eax = 0xB2A9D8;
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BFC3u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013BFC3: ;
    ecx = ebp + -1108;
    ecx = ecx + 0x200;
    eax = 0xB2A9D8;
    eax = eax + 0x204;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BFEEu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013BFEE: ;
    ecx = ebp + -1108;
    ecx = ecx + 0x400;
    eax = 0xB2A9D8;
    eax = eax + 0x404;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C019u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013C019: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -1108;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x450;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C036u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013C036: ;
    MEM32(ebp + -4) = 0x450;

loc_0013C03D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x468;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C050
 * Original: 0x0013C050 - 0x0013C158 (264 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C050(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x468;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x450 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C06D; /* je: equal / zero */

loc_0013C068: ;
    goto loc_0013C150;

loc_0013C06D: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -1104;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x450;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C08Au); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013C08A: ;
    MEM16(ebp + -1106) = 0;

loc_0013C093: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1106);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C0D7; /* jge: greater or equal (signed >=) */

loc_0013C09F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1106);
    eax = ZX8(MEM8(ebp + eax + -16));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C0B3u); RECOMP_ABI_CALL(0x000157D0u, sub_000157D0); /* call 0x000157D0 */

loc_0013C0B3: ;
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1106);
    MEM32(eax * 4 + 0xB2AE1C) = ecx;
    SET_LO16(eax, MEM16(ebp + -1106));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -1106) = LO16(eax);
    goto loc_0013C093;

loc_0013C0D7: ;
    eax = ebp + -1104;
    ecx = 0xB2A9D8;
    ecx = ecx + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C0FAu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013C0FA: ;
    eax = ebp + -1104;
    eax = eax + 0x200;
    ecx = 0xB2A9D8;
    ecx = ecx + 0x204;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C125u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013C125: ;
    eax = ebp + -1104;
    eax = eax + 0x400;
    ecx = 0xB2A9D8;
    ecx = ecx + 0x404;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C150u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013C150: ;
    esp = esp + 0x468;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C160
 * Original: 0x0013C160 - 0x0013C187 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C160(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */

loc_0013C160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C16Bu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013C16B: ;
    eax = MEM32(eax + 0x5C);
    eax = eax - 2;
    if ((eax != 0)) goto loc_0013C17B; /* jne: not equal / not zero */

loc_0013C173: ;
    goto loc_0013C175;

loc_0013C175: ;
    MEM8(ebp + -1) = 0;
    goto loc_0013C17F;

loc_0013C17B: ;
    MEM8(ebp + -1) = 1;

loc_0013C17F: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C190
 * Original: 0x0013C190 - 0x0013C1BF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C190(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C19Bu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013C19B: ;
    eax = MEM32(eax + 0x5C);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0013C1B3; /* jbe: below or equal (unsigned <=) */

loc_0013C1A7: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0013C1B3; /* ja: above (unsigned >) */

loc_0013C1AD: ;
    MEM8(ebp + -1) = 1;
    goto loc_0013C1B7;

loc_0013C1B3: ;
    MEM8(ebp + -1) = 0;

loc_0013C1B7: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C1C0
 * Original: 0x0013C1C0 - 0x0013C2B3 (243 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C1C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C1C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xB8;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C1D1u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013C1D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C2AB; /* jne: not equal / not zero */

loc_0013C1D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C1DEu); RECOMP_ABI_CALL(0x0012DFE0u, sub_0012DFE0); /* call 0x0012DFE0 */

loc_0013C1DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C202; /* jne: not equal / not zero */

loc_0013C1E7: ;
    eax = 0x4871D7;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C1FDu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0013C1FD: ;
    goto loc_0013C2A9;

loc_0013C202: ;
    eax = MEM32(ebp + -4);
    ecx = ebp + -140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C21Fu); RECOMP_ABI_CALL(0x00224210u, sub_00224210); /* call 0x00224210 */

loc_0013C21F: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -156;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C234u); RECOMP_ABI_CALL(0x0013C2C0u, sub_0013C2C0); /* call 0x0013C2C0 */

loc_0013C234: ;
    esp = esp - 4;
    eax = MEM32(ebp + -156);
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -152);
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -148);
    MEM32(ebp + -108) = eax;
    eax = ebp + -140;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C260u); RECOMP_ABI_CALL(0x0022AC70u, sub_0022AC70); /* call 0x0022AC70 */

loc_0013C260: ;
    MEM32(ebp + -144) = eax;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -158) = LO16(eax);
    eax = MEM32(ebp + -144);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C286u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013C286: ;
    SET_LO16(ecx, MEM16(ebp + -158));
    MEM16(eax + 0x68) = LO16(ecx);
    eax = MEM32(ebp + -144);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C2A9u); RECOMP_ABI_CALL(0x002247B0u, sub_002247B0); /* call 0x002247B0 */

loc_0013C2A9: ;
    goto loc_0013C2AB;

loc_0013C2AB: ;
    esp = esp + 0xB8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C2C0
 * Original: 0x0013C2C0 - 0x0013C4BB (507 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C2C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C2D7u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013C2D7: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C2E6u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013C2E6: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x4C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C31C; /* jne: not equal / not zero */

loc_0013C2EC: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = 0;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = 2;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C319u); RECOMP_ABI_CALL(0x0012DDD0u, sub_0012DDD0); /* call 0x0012DDD0 */

loc_0013C319: ;
    MEM32(ebp + -8) = eax;

loc_0013C31C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C476; /* jne: not equal / not zero */

loc_0013C326: ;
    MEM32(ebp + -12) = 0;
    MEM16(ebp + -14) = 0;

loc_0013C333: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x378)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x378) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C38B; /* jge: greater or equal (signed >=) */

loc_0013C342: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x378;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C363u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013C363: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C37B; /* jne: not equal / not zero */

loc_0013C372: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;

loc_0013C37B: ;
    goto loc_0013C37D;

loc_0013C37D: ;
    SET_LO16(eax, MEM16(ebp + -14));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -14) = LO16(eax);
    goto loc_0013C333;

loc_0013C38B: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C3E0; /* jne: not equal / not zero */

loc_0013C391: ;
    eax = 0x47E16A;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C3A7u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0013C3A7: ;
    ecx = 0x4871FA;
    eax = 0x4810B9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C3CFu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013C3CF: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C3DBu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013C3DB: ;
    goto loc_0013C474;

loc_0013C3E0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C3E5u); RECOMP_ABI_CALL(0x001D4C40u, sub_001D4C40); /* call 0x001D4C40 */

loc_0013C3E5: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C401u); RECOMP_ABI_CALL(0x001D4E50u, sub_001D4E50); /* call 0x001D4E50 */

loc_0013C401: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -24) = eax;
    MEM16(ebp + -14) = 0;

loc_0013C40B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x378)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x378) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C472; /* jge: greater or equal (signed >=) */

loc_0013C41A: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x378;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C43Bu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013C43B: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C462; /* jne: not equal / not zero */

loc_0013C44A: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C459; /* jne: not equal / not zero */

loc_0013C450: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(ebp + -8) = eax;
    goto loc_0013C472;

loc_0013C459: ;
    eax = MEM32(ebp + -24);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;

loc_0013C462: ;
    goto loc_0013C464;

loc_0013C464: ;
    SET_LO16(eax, MEM16(ebp + -14));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -14) = LO16(eax);
    goto loc_0013C40B;

loc_0013C472: ;
    goto loc_0013C474;

loc_0013C474: ;
    goto loc_0013C476;

loc_0013C476: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C4B1; /* je: equal / zero */

loc_0013C47C: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x378;
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C49Cu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013C49C: ;
    ecx = eax;
    eax = MEM32(ebp + -36);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0013C4B1: ;
    eax = MEM32(ebp + -32);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0013C4C0
 * Original: 0x0013C4C0 - 0x0013C5BC (252 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C4C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C4DEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013C4DE: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C4E6u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0013C4E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C5B7; /* jne: not equal / not zero */

loc_0013C4EE: ;
    MEM32(ebp + -8) = 0;

loc_0013C4F5: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C525; /* jge: greater or equal (signed >=) */

loc_0013C4FB: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C518; /* jne: not equal / not zero */

loc_0013C50A: ;
    eax = MEM32(ebp + -8);
    MEM32(eax * 4 + 0xB2AE1C) = 0xFFFFFFFFu;

loc_0013C518: ;
    goto loc_0013C51A;

loc_0013C51A: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0013C4F5;

loc_0013C525: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C5B5; /* je: equal / zero */

loc_0013C532: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C548u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013C548: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C5B3; /* je: equal / zero */

loc_0013C55A: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x2A2);
    eax = MEM32(eax + ecx * 4 + 0x2A8);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C5B1; /* je: equal / zero */

loc_0013C577: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C582u); RECOMP_ABI_CALL(0x001BD160u, sub_001BD160); /* call 0x001BD160 */

loc_0013C582: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C5B1; /* je: equal / zero */

loc_0013C58A: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C59Du); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013C59D: ;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x68);
    MEM32(eax * 4 + 0xB2AE1C) = ecx;

loc_0013C5B1: ;
    goto loc_0013C5B3;

loc_0013C5B3: ;
    goto loc_0013C5B5;

loc_0013C5B5: ;
    goto loc_0013C5B7;

loc_0013C5B7: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C5C0
 * Original: 0x0013C5C0 - 0x0013C617 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C5C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C5D5u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013C5D5: ;
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;

loc_0013C5E2: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C60F; /* jge: greater or equal (signed >=) */

loc_0013C5EA: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax * 4 + 0xB2AE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C602; /* jne: not equal / not zero */

loc_0013C5F9: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;

loc_0013C602: ;
    goto loc_0013C604;

loc_0013C604: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013C5E2;

loc_0013C60F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C620
 * Original: 0x0013C620 - 0x0013C68B (107 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C620(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C63Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013C63E: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C646u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013C646: ;
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C666; /* jne: not equal / not zero */

loc_0013C64C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x27;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C666u); RECOMP_ABI_CALL(0x0012B2C0u, sub_0012B2C0); /* call 0x0012B2C0 */

loc_0013C666: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 0xC0));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xC0) = LO16(ecx);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C686u); RECOMP_ABI_CALL(0x0013C690u, sub_0013C690); /* call 0x0013C690 */

loc_0013C686: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C690
 * Original: 0x0013C690 - 0x0013C79C (268 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C690(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C6AEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013C6AE: ;
    MEM32(ebp + -4) = eax;
    eax = ZX16(MEM16(ebp + 8));
    ecx = MEM32(eax * 4 + 0xB2ABDC);
    ecx = ecx + 1;
    MEM32(eax * 4 + 0xB2ABDC) = ecx;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax * 4 + 0xB2A9DC);
    ecx = ecx + 1;
    MEM32(eax * 4 + 0xB2A9DC) = ecx;
    eax = MEM32(0xB2A9D8);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x20);
    eax = eax - MEM32(ecx * 4 + 0xB2A9DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x384) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x384 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C72D; /* jne: not equal / not zero */

loc_0013C6F6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C6FBu); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0013C6FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C71F; /* je: equal / zero */

loc_0013C6FF: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x20);
    eax = 7;
    ecx = 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C71Du); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013C71D: ;
    goto loc_0013C72B;

loc_0013C71F: ;
    MEM32(esp) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C72Bu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013C72B: ;
    goto loc_0013C72D;

loc_0013C72D: ;
    eax = MEM32(0xB2A9D8);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x20);
    eax = eax - MEM32(ecx * 4 + 0xB2A9DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x708) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x708 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C77D; /* jne: not equal / not zero */

loc_0013C746: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C74Bu); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0013C74B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C76F; /* je: equal / zero */

loc_0013C74F: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x20);
    eax = 6;
    ecx = 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C76Du); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013C76D: ;
    goto loc_0013C77B;

loc_0013C76F: ;
    MEM32(esp) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C77Bu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013C77B: ;
    goto loc_0013C77D;

loc_0013C77D: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax * 4 + 0xB2A9DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB2A9D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB2A9D8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013C797; /* jl: less (signed <) */

loc_0013C792: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C797u); RECOMP_ABI_CALL(0x0012CF20u, sub_0012CF20); /* call 0x0012CF20 */

loc_0013C797: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C7A0
 * Original: 0x0013C7A0 - 0x0013C818 (120 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C7A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C7A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C7BCu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013C7BC: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x68);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C7D5u); RECOMP_ABI_CALL(0x0013C2C0u, sub_0013C2C0); /* call 0x0013C2C0 */

loc_0013C7D5: ;
    esp = esp - 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C7DDu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013C7DD: ;
    _fa = (uint32_t)(MEM32(eax + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x60), 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013C7EF; /* jg: greater (signed >) */

loc_0013C7E3: ;
    MEM32(esp) = 0x1E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C7EFu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013C7EF: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C801u); RECOMP_ABI_CALL(0x0012AF60u, sub_0012AF60); /* call 0x0012AF60 */

loc_0013C801: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x1DC);
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(eax + 0x1DC) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C820
 * Original: 0x0013C820 - 0x0013C847 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */

loc_0013C820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C82Bu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013C82B: ;
    eax = MEM32(eax + 0x5C);
    eax = eax - 2;
    if ((eax != 0)) goto loc_0013C83B; /* jne: not equal / not zero */

loc_0013C833: ;
    goto loc_0013C835;

loc_0013C835: ;
    MEM8(ebp + -1) = 1;
    goto loc_0013C83F;

loc_0013C83B: ;
    MEM8(ebp + -1) = 0;

loc_0013C83F: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C850
 * Original: 0x0013C850 - 0x0013C855 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C850(void)
{
    uint32_t ebp = g_ebp;

loc_0013C850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C860
 * Original: 0x0013C860 - 0x0013C97F (287 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C860(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0013C860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C86Bu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013C86B: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;
    MEM16(ebp + -10) = 0;

loc_0013C87B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x378)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x378) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C97A; /* jge: greater or equal (signed >=) */

loc_0013C88E: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x378;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C8AFu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013C8AF: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C967; /* jne: not equal / not zero */

loc_0013C8C2: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013C967; /* jl: less (signed <) */

loc_0013C8D2: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C967; /* jge: greater or equal (signed >=) */

loc_0013C8E2: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C951; /* je: equal / zero */

loc_0013C8FC: ;
    MEM32(ebp + -20) = 0;

loc_0013C903: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013C942; /* jge: greater or equal (signed >=) */

loc_0013C909: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -20);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C935; /* jne: not equal / not zero */

loc_0013C91F: ;
    eax = MEM32(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    goto loc_0013C942;

loc_0013C935: ;
    goto loc_0013C937;

loc_0013C937: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_0013C903;

loc_0013C942: ;
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -16);
    MEM16(eax + 0x12) = LO16(ecx);
    goto loc_0013C965;

loc_0013C951: ;
    eax = MEM32(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_0013C965: ;
    goto loc_0013C967;

loc_0013C967: ;
    goto loc_0013C969;

loc_0013C969: ;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_0013C87B;

loc_0013C97A: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C980
 * Original: 0x0013C980 - 0x0013C985 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C980(void)
{
    uint32_t ebp = g_ebp;

loc_0013C980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C990
 * Original: 0x0013C990 - 0x0013C9BD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C990(void)
{
    uint32_t ebp = g_ebp;

loc_0013C990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C9AEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013C9AE: ;
    MEM32(eax + 0x88) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C9C0
 * Original: 0x0013C9C0 - 0x0013C9C5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9C0(void)
{
    uint32_t ebp = g_ebp;

loc_0013C9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C9D0
 * Original: 0x0013C9D0 - 0x0013C9D5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9D0(void)
{
    uint32_t ebp = g_ebp;

loc_0013C9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C9E0
 * Original: 0x0013C9E0 - 0x0013C9E8 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9E0(void)
{
    uint32_t ebp = g_ebp;

loc_0013C9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013C9F0
 * Original: 0x0013C9F0 - 0x0013C9F8 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9F0(void)
{
    uint32_t ebp = g_ebp;

loc_0013C9F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013CA00
 * Original: 0x0013CA00 - 0x0013CA08 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA00(void)
{
    uint32_t ebp = g_ebp;

loc_0013CA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013CA10
 * Original: 0x0013CA10 - 0x0013CA15 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA10(void)
{
    uint32_t ebp = g_ebp;

loc_0013CA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013CA20
 * Original: 0x0013CA20 - 0x0013CA25 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA20(void)
{
    uint32_t ebp = g_ebp;

loc_0013CA20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013CA30
 * Original: 0x0013CA30 - 0x0013CA3B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA30(void)
{
    uint32_t ebp = g_ebp;

loc_0013CA30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013CA40
 * Original: 0x0013CA40 - 0x0013CA4E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA40(void)
{
    uint32_t ebp = g_ebp;

loc_0013CA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013CA50
 * Original: 0x0013CA50 - 0x0013CA61 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA50(void)
{
    uint32_t ebp = g_ebp;

loc_0013CA50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013CA70
 * Original: 0x0013CA70 - 0x0013D11C (1708 bytes, 438 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0013CA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x6C));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x6C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -13) = 1;
    MEM32(ebp + -20) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -56) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x16));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x16)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0013CABA; /* je: equal / zero */

loc_0013CA9E: ;
    goto loc_0013CAA0;

loc_0013CAA0: ;
    eax = MEM32(ebp + -56);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE2u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE2u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_0013CABA; /* jb: below (unsigned <) */

loc_0013CAAB: ;
    goto loc_0013CAAD;

loc_0013CAAD: ;
    eax = MEM32(ebp + -56);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFDEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFDEu;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_0013CAD4; /* ja: above (unsigned >) */

loc_0013CAB8: ;
    goto loc_0013CABA;

loc_0013CABA: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CACFu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013CACF: ;
    MEM32(ebp + -20) = eax;
    goto loc_0013CAD6;

loc_0013CAD4: ;
    goto loc_0013CAD6;

loc_0013CAD6: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFEAu)) >> 32) & 1);
    eax = eax + 0xFFFFFFEAu;
    MEM32(ebp + -60) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xE));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xE)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_0013D10D; /* ja: above (unsigned >) */

loc_0013CAE8: ;
    eax = MEM32(ebp + -60);
    eax = MEM32(eax * 4 + 0x4A3260);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0013CAF4u) goto loc_0013CAF4;
    if (_jt == 0x0013CB52u) goto loc_0013CB52;
    if (_jt == 0x0013CBBAu) goto loc_0013CBBA;
    if (_jt == 0x0013CC22u) goto loc_0013CC22;
    if (_jt == 0x0013CCD1u) goto loc_0013CCD1;
    if (_jt == 0x0013CD4Au) goto loc_0013CD4A;
    if (_jt == 0x0013CDC0u) goto loc_0013CDC0;
    if (_jt == 0x0013CE5Eu) goto loc_0013CE5E;
    if (_jt == 0x0013D10Du) goto loc_0013D10D;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013CAF4: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CB0Au); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CB0A: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CB2B; /* je: equal / zero */

loc_0013CB13: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CB26u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CB26: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CB34;

loc_0013CB2B: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CB34: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CB4Du); RECOMP_ABI_CALL(0x0035B3B0u, sub_0035B3B0); /* call 0x0035B3B0 */

loc_0013CB4D: ;
    goto loc_0013D111;

loc_0013CB52: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CB68u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CB68: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CB89; /* je: equal / zero */

loc_0013CB71: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CB84u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CB84: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CB92;

loc_0013CB89: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CB92: ;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CBB5u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CBB5: ;
    goto loc_0013D111;

loc_0013CBBA: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CBD0u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CBD0: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CBF1; /* je: equal / zero */

loc_0013CBD9: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CBECu); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CBEC: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CBFA;

loc_0013CBF1: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CBFA: ;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CC1Du); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CC1D: ;
    goto loc_0013D111;

loc_0013CC22: ;
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CC37u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013CC37: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC0);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CC69u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CC69: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC8A; /* je: equal / zero */

loc_0013CC72: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xAA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CC85u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CC85: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CC93;

loc_0013CC8A: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CC93: ;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CCCCu); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CCCC: ;
    goto loc_0013D111;

loc_0013CCD1: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CCE7u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CCE7: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CD08; /* je: equal / zero */

loc_0013CCF0: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xAB;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CD03u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CD03: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CD11;

loc_0013CD08: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CD11: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + -28);
    ecx = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CD45u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CD45: ;
    goto loc_0013D111;

loc_0013CD4A: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CD60u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CD60: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CD81; /* je: equal / zero */

loc_0013CD69: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xAC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CD7Cu); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CD7C: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CD8A;

loc_0013CD81: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CD8A: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + -28);
    ecx = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CDBBu); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CDBB: ;
    goto loc_0013D111;

loc_0013CDC0: ;
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CDD5u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013CDD5: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC4);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CE07u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CE07: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE28; /* je: equal / zero */

loc_0013CE10: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xAD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CE23u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CE23: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CE31;

loc_0013CE28: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CE31: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CE59u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CE59: ;
    goto loc_0013D111;

loc_0013CE5E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CE63u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013CE63: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 2 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CFAC; /* jne: not equal / not zero */

loc_0013CE6D: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CF11; /* jne: not equal / not zero */

loc_0013CE80: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CE96u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CE96: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CEB7; /* je: equal / zero */

loc_0013CE9F: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xAE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CEB2u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CEB2: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CEC0;

loc_0013CEB7: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CEC0: ;
    esi = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CEE2u); RECOMP_ABI_CALL(0x00132B30u, sub_00132B30); /* call 0x00132B30 */

loc_0013CEE2: ;
    MEM32(ebp + -40) = eax;
    eax = ebp + -40;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CEF2u); RECOMP_ABI_CALL(0x0012DA60u, sub_0012DA60); /* call 0x0012DA60 */

loc_0013CEF2: ;
    edx = MEM32(ebp + -68);
    ecx = MEM32(ebp + -64);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CF0Cu); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CF0C: ;
    goto loc_0013CFA7;

loc_0013CF11: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CF27u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CF27: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CF48; /* je: equal / zero */

loc_0013CF30: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xAF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CF43u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013CF43: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013CF51;

loc_0013CF48: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013CF51: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -28);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CF70u); RECOMP_ABI_CALL(0x00132B30u, sub_00132B30); /* call 0x00132B30 */

loc_0013CF70: ;
    MEM32(ebp + -44) = eax;
    eax = ebp + -44;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CF80u); RECOMP_ABI_CALL(0x0012DA60u, sub_0012DA60); /* call 0x0012DA60 */

loc_0013CF80: ;
    edx = MEM32(ebp + -72);
    ecx = eax;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CFA7u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013CFA7: ;
    goto loc_0013D10B;

loc_0013CFAC: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CFC1u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013CFC1: ;
    ecx = eax;
    eax = MEM32(ebp + -76);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0013D060; /* jle: less or equal (signed <=) */

loc_0013CFCF: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CFE5u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013CFE5: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D006; /* je: equal / zero */

loc_0013CFEE: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D001u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013D001: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013D00F;

loc_0013D006: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013D00F: ;
    esi = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D031u); RECOMP_ABI_CALL(0x00132B30u, sub_00132B30); /* call 0x00132B30 */

loc_0013D031: ;
    MEM32(ebp + -48) = eax;
    eax = ebp + -48;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D041u); RECOMP_ABI_CALL(0x0012DA60u, sub_0012DA60); /* call 0x0012DA60 */

loc_0013D041: ;
    edx = MEM32(ebp + -84);
    ecx = MEM32(ebp + -80);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D05Bu); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013D05B: ;
    goto loc_0013D109;

loc_0013D060: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D076u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013D076: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D097; /* je: equal / zero */

loc_0013D07F: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xB1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D092u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013D092: ;
    MEM32(ebp + -28) = eax;
    goto loc_0013D0A0;

loc_0013D097: ;
    eax = 0x4A1B86;
    MEM32(ebp + -28) = eax;

loc_0013D0A0: ;
    ebx = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x18);
    esi = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D0BCu); RECOMP_ABI_CALL(0x00132B30u, sub_00132B30); /* call 0x00132B30 */

loc_0013D0BC: ;
    MEM32(ebp + -52) = eax;
    eax = ebp + -52;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D0CCu); RECOMP_ABI_CALL(0x0012DA60u, sub_0012DA60); /* call 0x0012DA60 */

loc_0013D0CC: ;
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -88) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D0E4u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D0E4: ;
    edx = MEM32(ebp + -92);
    ecx = MEM32(ebp + -88);
    eax = MEM32(eax + 0x40);
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D109u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013D109: ;
    goto loc_0013D10B;

loc_0013D10B: ;
    goto loc_0013D111;

loc_0013D10D: ;
    MEM8(ebp + -13) = 0;

loc_0013D111: ;
    SET_LO8(eax, MEM8(ebp + -13));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x6C)) >> 32) & 1);
    esp = esp + 0x6C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D120
 * Original: 0x0013D120 - 0x0013D128 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D120(void)
{
    uint32_t ebp = g_ebp;

loc_0013D120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D130
 * Original: 0x0013D130 - 0x0013D1C3 (147 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D130(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0013D130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D151u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013D151: ;
    MEM32(ebp + -4) = eax;
    MEM8(ebp + -5) = 0;
    eax = MEM32(0xB2AE5C);
    ecx = MEM32(ebp + 0xC);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D1A6; /* jne: not equal / not zero */

loc_0013D170: ;
    ecx = 0x494D4B;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x43E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D198u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013D198: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D1A4u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013D1A4: ;
    goto loc_0013D1BB;

loc_0013D1A6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D1B8u); RECOMP_ABI_CALL(0x0013D1D0u, sub_0013D1D0); /* call 0x0013D1D0 */

loc_0013D1B8: ;
    MEM8(ebp + -5) = LO8(eax);

loc_0013D1BB: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D1D0
 * Original: 0x0013D1D0 - 0x0013D360 (400 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D1D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0013D1D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D1F1u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013D1F1: ;
    MEM32(ebp + -4) = eax;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xB2AE5C);
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx * 4 + 0xB2B060);
    ecx = ecx ^ 0xFFFFFFFFu;
    eax = eax & ecx;
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -13) = 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013D225; /* jl: less (signed <) */

loc_0013D21C: ;
    MEM8(ebp + -13) = 0;
    goto loc_0013D358;

loc_0013D225: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D237u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D237: ;
    ecx = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013D24A; /* jl: less (signed <) */

loc_0013D241: ;
    MEM8(ebp + -13) = 0;
    goto loc_0013D356;

loc_0013D24A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D24Fu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D24F: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D26D; /* jne: not equal / not zero */

loc_0013D255: ;
    eax = MEM32(0xB2B260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -13) = LO8(eax);
    goto loc_0013D354;

loc_0013D26D: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0xB2B060);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB2AE5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB2AE5C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D29C; /* jne: not equal / not zero */

loc_0013D27F: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0xB2AE60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0xB2AE60) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -13) = LO8(eax);
    goto loc_0013D352;

loc_0013D29C: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0xC);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D2BB; /* jne: not equal / not zero */

loc_0013D2B2: ;
    MEM8(ebp + -13) = 0;
    goto loc_0013D350;

loc_0013D2BB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D2C0u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D2C0: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D34A; /* jne: not equal / not zero */

loc_0013D2CA: ;
    MEM32(ebp + -20) = 0;

loc_0013D2D1: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013D30E; /* jge: greater or equal (signed >=) */

loc_0013D2D7: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D2E5; /* jne: not equal / not zero */

loc_0013D2DF: ;
    MEM8(ebp + -13) = 1;
    goto loc_0013D30E;

loc_0013D2E5: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -20);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D301; /* je: equal / zero */

loc_0013D2FB: ;
    MEM8(ebp + -13) = 0;
    goto loc_0013D30E;

loc_0013D301: ;
    goto loc_0013D303;

loc_0013D303: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_0013D2D1;

loc_0013D30E: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013D348; /* jl: less (signed <) */

loc_0013D314: ;
    ecx = 0x4428A7;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x28A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D33Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013D33C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D348u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013D348: ;
    goto loc_0013D34E;

loc_0013D34A: ;
    MEM8(ebp + -13) = 1;

loc_0013D34E: ;
    goto loc_0013D350;

loc_0013D350: ;
    goto loc_0013D352;

loc_0013D352: ;
    goto loc_0013D354;

loc_0013D354: ;
    goto loc_0013D356;

loc_0013D356: ;
    goto loc_0013D358;

loc_0013D358: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D360
 * Original: 0x0013D360 - 0x0013D3D1 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D360(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D381u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013D381: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D39C; /* jne: not equal / not zero */

loc_0013D38A: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax * 4 + 0xB2B264);
    MEM32(ebp + -8) = eax;
    goto loc_0013D3C9;

loc_0013D39C: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(ebp + -12) = eax;
    eax = ZX16(MEM16(ebp + 8));
    eax = MEM32(eax * 4 + 0xB2B060);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D3BCu); RECOMP_ABI_CALL(0x0013D3E0u, sub_0013D3E0); /* call 0x0013D3E0 */

loc_0013D3BC: ;
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)0x21);
    eax = eax + MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;

loc_0013D3C9: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D3E0
 * Original: 0x0013D3E0 - 0x0013D444 (100 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _sbb_result = 0;
    int _sbb_sf = 0, _sbb_of = 0;
    (void)_sbb_result; (void)_sbb_sf; (void)_sbb_of;
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0013D3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -12) = 0;

loc_0013D3F8: ;
    esi = MEM32(ebp + -12);
    ecx = esi;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edx = 0x1F;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    {
      _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      eax = _sbb_result;
    } /* sbb */
    if ((_sbb_sf != _sbb_of)) goto loc_0013D43B; /* jl: less (signed <) */

loc_0013D40D: ;
    goto loc_0013D40F;

loc_0013D40F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D42E; /* je: equal / zero */

loc_0013D425: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;

loc_0013D42E: ;
    goto loc_0013D430;

loc_0013D430: ;
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013D3F8;

loc_0013D43B: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D450
 * Original: 0x0013D450 - 0x0013D49F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D450(void)
{
    uint32_t ebp = g_ebp;

loc_0013D450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D471u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013D471: ;
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    ecx = 0x4A29B8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D497u); RECOMP_ABI_CALL(0x0035D040u, sub_0035D040); /* call 0x0035D040 */

loc_0013D497: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D4A0
 * Original: 0x0013D4A0 - 0x0013D51F (127 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D4AEu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D4AE: ;
    edx = MEM32(eax + 0x4C);
    eax = 0x19;
    ecx = 0xB2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM16(ebp + -2) = LO16(eax);
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D4DBu); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013D4DB: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D4FC; /* je: equal / zero */

loc_0013D4E4: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D4F7u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013D4F7: ;
    MEM32(ebp + -12) = eax;
    goto loc_0013D505;

loc_0013D4FC: ;
    eax = 0x4A1B86;
    MEM32(ebp + -12) = eax;

loc_0013D505: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D517u); RECOMP_ABI_CALL(0x0035B940u, sub_0035B940); /* call 0x0035B940 */

loc_0013D517: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D520
 * Original: 0x0013D520 - 0x0013D557 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D520(void)
{
    uint32_t ebp = g_ebp;

loc_0013D520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0xB2B264);
    ecx = 0x4A29B8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D54Fu); RECOMP_ABI_CALL(0x0035D040u, sub_0035D040); /* call 0x0035D040 */

loc_0013D54F: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D560
 * Original: 0x0013D560 - 0x0013D644 (228 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D560(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D56Eu); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0013D56E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D62E; /* je: equal / zero */

loc_0013D576: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D58Bu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013D58B: ;
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D59Cu); RECOMP_ABI_CALL(0x0013D650u, sub_0013D650); /* call 0x0013D650 */

loc_0013D59C: ;
    MEM8(ebp + -10) = LO8(eax);
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D5ABu); RECOMP_ABI_CALL(0x0013D650u, sub_0013D650); /* call 0x0013D650 */

loc_0013D5AB: ;
    MEM8(ebp + -9) = LO8(eax);
    eax = ZX8(MEM8(ebp + -10));
    ecx = ZX8(MEM8(ebp + -9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D5D5; /* je: equal / zero */

loc_0013D5BA: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x20);
    eax = ZX8(MEM8(ebp + eax + -10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    goto loc_0013D63C;

loc_0013D5D5: ;
    _fa = (uint32_t)(MEM8(ebp + -10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -10), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D61E; /* jne: not equal / not zero */

loc_0013D5DB: ;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -9), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D615; /* je: equal / zero */

loc_0013D5E1: ;
    ecx = 0x4810E3;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4AC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D609u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013D609: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D615u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013D615: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0013D63C;

loc_0013D61E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D629u); RECOMP_ABI_CALL(0x0012FD80u, sub_0012FD80); /* call 0x0012FD80 */

loc_0013D629: ;
    MEM32(ebp + -4) = eax;
    goto loc_0013D63C;

loc_0013D62E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D639u); RECOMP_ABI_CALL(0x0012FD80u, sub_0012FD80); /* call 0x0012FD80 */

loc_0013D639: ;
    MEM32(ebp + -4) = eax;

loc_0013D63C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D650
 * Original: 0x0013D650 - 0x0013D6E8 (152 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D650(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D662u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D662: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D6E0; /* jne: not equal / not zero */

loc_0013D668: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D67Cu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013D67C: ;
    eax = ebp + -20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D687u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013D687: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D6DE; /* je: equal / zero */

loc_0013D68F: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D6DC; /* jne: not equal / not zero */

loc_0013D69A: ;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D6ACu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D6AC: ;
    ecx = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013D6DC; /* jge: greater or equal (signed >=) */

loc_0013D6B6: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D6C1u); RECOMP_ABI_CALL(0x0012E1F0u, sub_0012E1F0); /* call 0x0012E1F0 */

loc_0013D6C1: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D6D8; /* jne: not equal / not zero */

loc_0013D6C9: ;
    eax = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + 0xD1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D6DC; /* je: equal / zero */

loc_0013D6D8: ;
    MEM8(ebp + -1) = 0;

loc_0013D6DC: ;
    goto loc_0013D67C;

loc_0013D6DE: ;
    goto loc_0013D6E0;

loc_0013D6E0: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D6F0
 * Original: 0x0013D6F0 - 0x0013D826 (310 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D6F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D6F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D70Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013D70E: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x16;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D72Bu); RECOMP_ABI_CALL(0x0012B2C0u, sub_0012B2C0); /* call 0x0012B2C0 */

loc_0013D72B: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D821; /* je: equal / zero */

loc_0013D738: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D73Du); RECOMP_ABI_CALL(0x0012D670u, sub_0012D670); /* call 0x0012D670 */

loc_0013D73D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D821; /* je: equal / zero */

loc_0013D749: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D75Fu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013D75F: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D7C7; /* je: equal / zero */

loc_0013D76E: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D787u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013D787: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = eax + 4;
    eax = eax + 0x4C;
    xmm1 = XMM_SCALAR(MEMF(0x43D688)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = 3;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D7C2u); RECOMP_ABI_CALL(0x0012DDD0u, sub_0012DDD0); /* call 0x0012DDD0 */

loc_0013D7C2: ;
    MEM32(ebp + -12) = eax;
    goto loc_0013D807;

loc_0013D7C7: ;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x4C;
    xmm1 = XMM_SCALAR(MEMF(0x43D7C8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D7C4)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = 3;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D804u); RECOMP_ABI_CALL(0x0012DDD0u, sub_0012DDD0); /* call 0x0012DDD0 */

loc_0013D804: ;
    MEM32(ebp + -12) = eax;

loc_0013D807: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D81F; /* je: equal / zero */

loc_0013D80D: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D81Fu); RECOMP_ABI_CALL(0x0013D830u, sub_0013D830); /* call 0x0013D830 */

loc_0013D81F: ;
    goto loc_0013D821;

loc_0013D821: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013D830
 * Original: 0x0013D830 - 0x0013DA11 (481 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D830(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0013D830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D841u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013D841: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x378;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D864u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013D864: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D883u); RECOMP_ABI_CALL(0x0013D1D0u, sub_0013D1D0); /* call 0x0013D1D0 */

loc_0013D883: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA0C; /* je: equal / zero */

loc_0013D88B: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -16);
    eax = 0xB2AE5C;
    eax = eax + 0x204;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    MEM32(esp) = 0x1A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D8B4u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013D8B4: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xB2AE60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xB2AE60), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D914; /* jne: not equal / not zero */

loc_0013D8C1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D8C6u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D8C6: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x4C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D903; /* jne: not equal / not zero */

loc_0013D8CF: ;
    ecx = 0x445485;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2D4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D8F7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013D8F7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D903u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013D903: ;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    eax = MEM32(ebp + -16);
    MEM32(eax * 4 + 0xB2AE60) = ecx;

loc_0013D914: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D919u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013D919: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D941; /* jne: not equal / not zero */

loc_0013D91F: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D92Au); RECOMP_ABI_CALL(0x0013E2E0u, sub_0013E2E0); /* call 0x0013E2E0 */

loc_0013D92A: ;
    eax = MEM32(0xB2B260);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D937u); RECOMP_ABI_CALL(0x0013E0F0u, sub_0013E0F0); /* call 0x0013E0F0 */

loc_0013D937: ;
    MEM32(0xB2B260) = eax;
    goto loc_0013DA0A;

loc_0013D941: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB2AE5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB2AE5C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D95E; /* jne: not equal / not zero */

loc_0013D94E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D959u); RECOMP_ABI_CALL(0x0013E2E0u, sub_0013E2E0); /* call 0x0013E2E0 */

loc_0013D959: ;
    goto loc_0013DA08;

loc_0013D95E: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -12);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D9AA; /* je: equal / zero */

loc_0013D976: ;
    ecx = 0x494D81;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2EA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D99Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013D99E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D9AAu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013D9AA: ;
    ecx = MEM32(ebp + -12);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = eax;
    eax = MEM32(ebp + -20);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    ecx = MEM32(0xB2AE5C);
    ecx = ecx ^ 0xFFFFFFFFu;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA06; /* je: equal / zero */

loc_0013D9D2: ;
    ecx = 0x494DA9;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2EE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D9FAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013D9FA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA06u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013DA06: ;
    goto loc_0013DA08;

loc_0013DA08: ;
    goto loc_0013DA0A;

loc_0013DA0A: ;
    goto loc_0013DA0C;

loc_0013DA0C: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013DA20
 * Original: 0x0013DA20 - 0x0013DB16 (246 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DA20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013DA20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA2Bu); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013DA2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013DAD5; /* jne: not equal / not zero */

loc_0013DA34: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA39u); RECOMP_ABI_CALL(0x0013DB20u, sub_0013DB20); /* call 0x0013DB20 */

loc_0013DA39: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA3Eu); RECOMP_ABI_CALL(0x0013DBD0u, sub_0013DBD0); /* call 0x0013DBD0 */

loc_0013DA3E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA43u); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0013DA43: ;
    edx = ZX8(LO8(eax));
    eax = 0x14;
    ecx = 0x22;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA5Eu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013DA5E: ;
    _fa = (uint32_t)(MEM8(0xB2B468)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2B468), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DAD3; /* je: equal / zero */

loc_0013DA67: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA6Cu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013DA6C: ;
    eax = MEM32(eax + 0x48);
    MEM32(ebp + -4) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    if ((!_cf && eax != 0)) goto loc_0013DAD1; /* ja: above (unsigned >) */

loc_0013DA77: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax * 4 + 0x4A329C);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0013DA83u) goto loc_0013DA83;
    if (_jt == 0x0013DAA9u) goto loc_0013DAA9;
    if (_jt == 0x0013DAB7u) goto loc_0013DAB7;
    if (_jt == 0x0013DAC5u) goto loc_0013DAC5;
    if (_jt == 0x0013DAD1u) goto loc_0013DAD1;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013DA83: ;
    MEM32(esp) = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA8Fu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013DA8F: ;
    MEM32(esp) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA9Bu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013DA9B: ;
    MEM32(esp) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAA7u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013DAA7: ;
    goto loc_0013DAD1;

loc_0013DAA9: ;
    MEM32(esp) = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAB5u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013DAB5: ;
    goto loc_0013DAD1;

loc_0013DAB7: ;
    MEM32(esp) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAC3u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013DAC3: ;
    goto loc_0013DAD1;

loc_0013DAC5: ;
    MEM32(esp) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAD1u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013DAD1: ;
    goto loc_0013DAD3;

loc_0013DAD3: ;
    goto loc_0013DAD5;

loc_0013DAD5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DADAu); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0013DADA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB0C; /* je: equal / zero */

loc_0013DADE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAECu); RECOMP_ABI_CALL(0x0013D650u, sub_0013D650); /* call 0x0013D650 */

loc_0013DAEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013DAF5; /* jne: not equal / not zero */

loc_0013DAF0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAF5u); RECOMP_ABI_CALL(0x0012CF20u, sub_0012CF20); /* call 0x0012CF20 */

loc_0013DAF5: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DB01u); RECOMP_ABI_CALL(0x0013D650u, sub_0013D650); /* call 0x0013D650 */

loc_0013DB01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013DB0A; /* jne: not equal / not zero */

loc_0013DB05: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DB0Au); RECOMP_ABI_CALL(0x0012CF20u, sub_0012CF20); /* call 0x0012CF20 */

loc_0013DB0A: ;
    goto loc_0013DB0C;

loc_0013DB0C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DB11u); RECOMP_ABI_CALL(0x0013DDF0u, sub_0013DDF0); /* call 0x0013DDF0 */

loc_0013DB11: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013DB20
 * Original: 0x0013DB20 - 0x0013DBCC (172 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DB20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xA8;
    MEM32(ebp + -148) = 0;
    eax = ebp + -16;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DB50u); RECOMP_ABI_CALL(0x002222C0u, sub_002222C0); /* call 0x002222C0 */

loc_0013DB50: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DB5Bu); RECOMP_ABI_CALL(0x00222310u, sub_00222310); /* call 0x00222310 */

loc_0013DB5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB86; /* je: equal / zero */

loc_0013DB60: ;
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013DB84; /* jge: greater or equal (signed >=) */

loc_0013DB69: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -148);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -148) = edx;
    MEM32(ebp + eax * 4 + -144) = ecx;

loc_0013DB84: ;
    goto loc_0013DB50;

loc_0013DB86: ;
    MEM32(ebp + -152) = 0;

loc_0013DB90: ;
    eax = MEM32(ebp + -152);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -148) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013DBC4; /* jge: greater or equal (signed >=) */

loc_0013DB9E: ;
    eax = MEM32(ebp + -152);
    eax = MEM32(ebp + eax * 4 + -144);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DBB3u); RECOMP_ABI_CALL(0x00225770u, sub_00225770); /* call 0x00225770 */

loc_0013DBB3: ;
    eax = MEM32(ebp + -152);
    eax = eax + 1;
    MEM32(ebp + -152) = eax;
    goto loc_0013DB90;

loc_0013DBC4: ;
    esp = esp + 0xA8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013DBD0
 * Original: 0x0013DBD0 - 0x0013DDE7 (535 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DBD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DBD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xE8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DBDEu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013DBDE: ;
    MEM32(ebp + -4) = eax;
    ecx = ebp + -36;
    eax = 0x4A3304;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DBFEu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0013DBFE: ;
    MEM32(ebp + -40) = 0;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DC19u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013DC19: ;
    eax = ebp + -56;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DC24u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013DC24: ;
    MEM32(ebp + -60) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DCEF; /* je: equal / zero */

loc_0013DC30: ;
    eax = MEM32(ebp + -60);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC57; /* je: equal / zero */

loc_0013DC39: ;
    eax = MEM32(ebp + -60);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DC4Fu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013DC4F: ;
    MEM32(ebp + -220) = eax;
    goto loc_0013DC61;

loc_0013DC57: ;
    eax = 0; /* xor self */
    MEM32(ebp + -220) = eax;
    goto loc_0013DC61;

loc_0013DC61: ;
    eax = MEM32(ebp + -220);
    MEM32(ebp + -204) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DC75; /* jne: not equal / not zero */

loc_0013DC73: ;
    goto loc_0013DCEF;

loc_0013DC75: ;
    _fa = (uint32_t)(MEM32(ebp + -204)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -204), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DCA8; /* je: equal / zero */

loc_0013DC7E: ;
    edx = MEM32(ebp + -204);
    edx = edx + 4;
    edx = edx + 8;
    ecx = ebp + -36;
    eax = MEM32(ebp + -40);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DCA0u); RECOMP_ABI_CALL(0x0013E590u, sub_0013E590); /* call 0x0013E590 */

loc_0013DCA0: ;
    MEM32(ebp + -208) = eax;
    goto loc_0013DCCA;

loc_0013DCA8: ;
    ecx = ebp + -36;
    eax = MEM32(ebp + -40);
    edx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DCC4u); RECOMP_ABI_CALL(0x0013E590u, sub_0013E590); /* call 0x0013E590 */

loc_0013DCC4: ;
    MEM32(ebp + -208) = eax;

loc_0013DCCA: ;
    _fa = (uint32_t)(MEM32(ebp + -208)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -208), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DCD5; /* jne: not equal / not zero */

loc_0013DCD3: ;
    goto loc_0013DCEF;

loc_0013DCD5: ;
    ecx = MEM32(ebp + -208);
    eax = MEM32(ebp + -40);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -40) = edx;
    MEM32(ebp + eax * 4 + -36) = ecx;
    goto loc_0013DC19;

loc_0013DCEF: ;
    MEM32(ebp + -200) = 0;

loc_0013DCF9: ;
    eax = MEM32(ebp + -200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013DDDF; /* jge: greater or equal (signed >=) */

loc_0013DD08: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x378;
    eax = MEM32(ebp + -200);
    eax = MEM32(ebp + eax * 4 + -36);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DD2Fu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013DD2F: ;
    MEM32(ebp + -212) = eax;
    eax = MEM32(ebp + -200);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DD43u); RECOMP_ABI_CALL(0x0013E6E0u, sub_0013E6E0); /* call 0x0013E6E0 */

loc_0013DD43: ;
    MEM32(ebp + -216) = eax;
    _fa = (uint32_t)(MEM32(ebp + -216)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -216), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DDC9; /* je: equal / zero */

loc_0013DD52: ;
    eax = MEM32(ebp + -216);
    ecx = ebp + -196;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DD72u); RECOMP_ABI_CALL(0x00224210u, sub_00224210); /* call 0x00224210 */

loc_0013DD72: ;
    eax = MEM32(ebp + -212);
    ecx = MEM32(eax);
    MEM32(ebp + -172) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -168) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -164) = eax;
    eax = ebp + -196;
    eax = eax + 0x34;
    ecx = MEM32(ebp + -212);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DDB4u); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_0013DDB4: ;
    eax = ebp + -196;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DDC2u); RECOMP_ABI_CALL(0x0022AC70u, sub_0022AC70); /* call 0x0022AC70 */

loc_0013DDC2: ;
    MEM8(0xB2B468) = 1;

loc_0013DDC9: ;
    goto loc_0013DDCB;

loc_0013DDCB: ;
    eax = MEM32(ebp + -200);
    eax = eax + 1;
    MEM32(ebp + -200) = eax;
    goto loc_0013DCF9;

loc_0013DDDF: ;
    esp = esp + 0xE8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013DDF0
 * Original: 0x0013DDF0 - 0x0013DEF2 (258 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DDF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DDF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    MEM32(ebp + -24) = 0;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DE11u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013DE11: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DE1Cu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013DE1C: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE52; /* je: equal / zero */

loc_0013DE24: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xC2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013DE3D; /* jle: less or equal (signed <=) */

loc_0013DE35: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -36) = eax;
    goto loc_0013DE4A;

loc_0013DE3D: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(ebp + -36) = eax;

loc_0013DE4A: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -24) = eax;
    goto loc_0013DE11;

loc_0013DE52: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DE66u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013DE66: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DE71u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013DE71: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DEED; /* je: equal / zero */

loc_0013DE79: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xC2);
    eax = eax - ecx;
    MEM32(ebp + -32) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DE9Du); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013DE9D: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DEB1; /* jne: not equal / not zero */

loc_0013DEA3: ;
    eax = MEM32(ebp + -32);
    ecx = 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -32) = eax;

loc_0013DEB1: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013DEC6; /* jl: less (signed <) */

loc_0013DEB7: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D84C)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    goto loc_0013DEDB;

loc_0013DEC6: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013DED9; /* jl: less (signed <) */

loc_0013DECC: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D848)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */

loc_0013DED9: ;
    goto loc_0013DEDB;

loc_0013DEDB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + -20);
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    goto loc_0013DE66;

loc_0013DEED: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013DF00
 * Original: 0x0013DF00 - 0x0013E0E2 (482 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DF00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0013DF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    MEM32(ebp + -4) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DF12u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013DF12: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DF1Au); RECOMP_ABI_CALL(0x0013C860u, sub_0013C860); /* call 0x0013C860 */

loc_0013DF1A: ;
    MEM8(0xB2B468) = 0;
    eax = 0xB2AE5C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DF41u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0013DF41: ;
    MEM32(0xCE9E70) = 0x1E;
    MEM32(ebp + -12) = 0;

loc_0013DF52: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x378)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x378) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E05B; /* jge: greater or equal (signed >=) */

loc_0013DF64: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x378;
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DF84u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013DF84: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E04B; /* jne: not equal / not zero */

loc_0013DF97: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013DFC6; /* jl: less (signed <) */

loc_0013DFA3: ;
    eax = 0x4757EB;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DFC1u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0013DFC1: ;
    goto loc_0013E049;

loc_0013DFC6: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013DFE0; /* jle: less or equal (signed <=) */

loc_0013DFD4: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    MEM32(ebp + -20) = eax;
    goto loc_0013DFE6;

loc_0013DFE0: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -20) = eax;

loc_0013DFE6: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | MEM32(0xB2AE5C);
    MEM32(0xB2AE5C) = eax;
    eax = MEM32(ebp + -16);
    SET_LO16(edx, MEM16(eax + 0x12));
    ecx = MEM32(ebp + -16);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0x48C742;
    edx = SX16(LO16(edx));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E049u); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0013E049: ;
    goto loc_0013E04B;

loc_0013E04B: ;
    goto loc_0013E04D;

loc_0013E04D: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013DF52;

loc_0013E05B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E060u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E060: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E079; /* jne: not equal / not zero */

loc_0013E066: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E072u); RECOMP_ABI_CALL(0x0013E0F0u, sub_0013E0F0); /* call 0x0013E0F0 */

loc_0013E072: ;
    MEM32(0xB2B260) = eax;
    goto loc_0013E0DB;

loc_0013E079: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E07Eu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E07E: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E0AE; /* jne: not equal / not zero */

loc_0013E084: ;
    MEM32(ebp + -12) = 0;

loc_0013E08B: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E0AC; /* jge: greater or equal (signed >=) */

loc_0013E094: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -12);
    MEM32(eax * 4 + 0xB2AE60) = ecx;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013E08B;

loc_0013E0AC: ;
    goto loc_0013E0D9;

loc_0013E0AE: ;
    MEM32(ebp + -12) = 0;

loc_0013E0B5: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E0D7; /* jge: greater or equal (signed >=) */

loc_0013E0BE: ;
    eax = MEM32(ebp + -12);
    MEM32(eax * 4 + 0xB2AE60) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0013E0B5;

loc_0013E0D7: ;
    goto loc_0013E0D9;

loc_0013E0D9: ;
    goto loc_0013E0DB;

loc_0013E0DB: ;
    SET_LO8(eax, 1);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E0F0
 * Original: 0x0013E0F0 - 0x0013E235 (325 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E0F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E0F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E105u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013E105: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xB2AE5C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E115u); RECOMP_ABI_CALL(0x0013D3E0u, sub_0013D3E0); /* call 0x0013D3E0 */

loc_0013E115: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E127; /* je: equal / zero */

loc_0013E11E: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -12) = eax;

loc_0013E127: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013E161; /* jg: greater (signed >) */

loc_0013E12D: ;
    ecx = 0x459115;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2A8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E155u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013E155: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E161u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013E161: ;
    eax = MEM32(ebp + -12);
    ecx = 0; /* xor self */
    MEM32(esp) = 0;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E177u); RECOMP_ABI_CALL(0x0013E930u, sub_0013E930); /* call 0x0013E930 */

loc_0013E177: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = 0;

loc_0013E182: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x378)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x378) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E1F3; /* jge: greater or equal (signed >=) */

loc_0013E190: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x378;
    eax = MEM32(ebp + -20);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E1B0u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013E1B0: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E1E6; /* jne: not equal / not zero */

loc_0013E1BF: ;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E1E6; /* je: equal / zero */

loc_0013E1CB: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E1DD; /* jne: not equal / not zero */

loc_0013E1D1: ;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    MEM32(ebp + -4) = eax;
    goto loc_0013E1F3;

loc_0013E1DD: ;
    eax = MEM32(ebp + -16);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -16) = eax;

loc_0013E1E6: ;
    goto loc_0013E1E8;

loc_0013E1E8: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_0013E182;

loc_0013E1F3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E22D; /* jne: not equal / not zero */

loc_0013E1F9: ;
    ecx = 0x46FE8B;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2BD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E221u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013E221: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E22Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013E22D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E240
 * Original: 0x0013E240 - 0x0013E28A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E240(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x610) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x610 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E25E; /* jge: greater or equal (signed >=) */

loc_0013E255: ;
    MEM32(ebp + -4) = 0;
    goto loc_0013E282;

loc_0013E25E: ;
    ecx = MEM32(ebp + 8);
    eax = 0xB2AE5C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E27Bu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013E27B: ;
    MEM32(ebp + -4) = 0x610;

loc_0013E282: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E290
 * Original: 0x0013E290 - 0x0013E2D9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E290(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(0xB2B468));
    MEM8(ebp + -1) = LO8(eax);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x610) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x610 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E2AF; /* je: equal / zero */

loc_0013E2AD: ;
    goto loc_0013E2D4;

loc_0013E2AF: ;
    eax = MEM32(ebp + 8);
    ecx = 0xB2AE5C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E2CCu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013E2CC: ;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(0xB2B468) = LO8(eax);

loc_0013E2D4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E2E0
 * Original: 0x0013E2E0 - 0x0013E58D (685 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E2E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E2FEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013E2FE: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E306u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013E306: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x88);
    eax = eax - ecx;
    MEM32(ebp + -8) = eax;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(eax * 4 + 0xB2B060) = 0;
    MEM32(esp) = 0x2A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E32Fu); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013E32F: ;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0xC0) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E344u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E344: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E376; /* jne: not equal / not zero */

loc_0013E34A: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x21;
    MEM32(esp + 8) = 0x22;
    MEM32(esp + 0xC) = 0x20;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E374u); RECOMP_ABI_CALL(0x0012AC30u, sub_0012AC30); /* call 0x0012AC30 */

loc_0013E374: ;
    goto loc_0013E3A0;

loc_0013E376: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x1E;
    MEM32(esp + 8) = 0x1F;
    MEM32(esp + 0xC) = 0x20;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E3A0u); RECOMP_ABI_CALL(0x0012AC30u, sub_0012AC30); /* call 0x0012AC30 */

loc_0013E3A0: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E3C1; /* jne: not equal / not zero */

loc_0013E3AF: ;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0xC4) = LO16(ecx);
    goto loc_0013E40B;

loc_0013E3C1: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E409; /* jge: greater or equal (signed >=) */

loc_0013E3D2: ;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0xC4) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E3E7u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E3E7: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E407; /* je: equal / zero */

loc_0013E3ED: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x24;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E407u); RECOMP_ABI_CALL(0x0012AD60u, sub_0012AD60); /* call 0x0012AD60 */

loc_0013E407: ;
    goto loc_0013E409;

loc_0013E409: ;
    goto loc_0013E40B;

loc_0013E40B: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 0xC2));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xC2) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E425u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013E425: ;
    ecx = eax;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x88) = ecx;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(ebp + -32) = eax;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E451u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013E451: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E456u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E456: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E463; /* jne: not equal / not zero */

loc_0013E45C: ;
    MEM32(ebp + -32) = 0;

loc_0013E463: ;
    goto loc_0013E465;

loc_0013E465: ;
    eax = ebp + -24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E470u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013E470: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E542; /* je: equal / zero */

loc_0013E47C: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E53D; /* jne: not equal / not zero */

loc_0013E48E: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC2);
    MEM32(ebp + -36) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E4A0u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E4A0: ;
    eax = MEM32(eax + 0x50);
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013E4C0; /* je: equal / zero */

loc_0013E4AA: ;
    goto loc_0013E4AC;

loc_0013E4AC: ;
    eax = MEM32(ebp + -40);
    eax = eax - 1;
    if ((eax == 0)) goto loc_0013E4DE; /* je: equal / zero */

loc_0013E4B4: ;
    goto loc_0013E4B6;

loc_0013E4B6: ;
    eax = MEM32(ebp + -40);
    eax = eax - 2;
    if ((eax == 0)) goto loc_0013E4FC; /* je: equal / zero */

loc_0013E4BE: ;
    goto loc_0013E507;

loc_0013E4C0: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E4D0; /* jle: less or equal (signed <=) */

loc_0013E4C8: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -44) = eax;
    goto loc_0013E4D6;

loc_0013E4D0: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -44) = eax;

loc_0013E4D6: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -32) = eax;
    goto loc_0013E53B;

loc_0013E4DE: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E4EE; /* jle: less or equal (signed <=) */

loc_0013E4E6: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -48) = eax;
    goto loc_0013E4F4;

loc_0013E4EE: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -48) = eax;

loc_0013E4F4: ;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -32) = eax;
    goto loc_0013E53B;

loc_0013E4FC: ;
    eax = MEM32(ebp + -36);
    eax = eax + MEM32(ebp + -32);
    MEM32(ebp + -32) = eax;
    goto loc_0013E53B;

loc_0013E507: ;
    ecx = 0x474EB4;
    eax = 0x456201;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x248;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E52Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013E52F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E53Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013E53B: ;
    goto loc_0013E53D;

loc_0013E53D: ;
    goto loc_0013E465;

loc_0013E542: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0xB2B264)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0xB2B264) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E564; /* jle: less or equal (signed <=) */

loc_0013E554: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    MEM32(eax * 4 + 0xB2B264) = ecx;

loc_0013E564: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax * 4 + 0xB2B264);
    MEM32(ebp + -52) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E579u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E579: ;
    ecx = eax;
    eax = MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E588; /* jl: less (signed <) */

loc_0013E583: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E588u); RECOMP_ABI_CALL(0x0012CF20u, sub_0012CF20); /* call 0x0012CF20 */

loc_0013E588: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E590
 * Original: 0x0013E590 - 0x0013E6DC (332 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013E590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43DAFC)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E5B8u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013E5B8: ;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E5C0u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0013E5C0: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = eax + 0x164;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E5E5u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013E5E5: ;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -28) = 0;

loc_0013E5EF: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x378)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x378) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E6CE; /* jge: greater or equal (signed >=) */

loc_0013E601: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x378;
    eax = MEM32(ebp + -28);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E621u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013E621: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E6BE; /* jne: not equal / not zero */

loc_0013E634: ;
    MEM8(ebp + -33) = 0;
    MEM32(ebp + -40) = 0;

loc_0013E63F: ;
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013E668; /* jge: greater or equal (signed >=) */

loc_0013E647: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + edx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E65B; /* jne: not equal / not zero */

loc_0013E655: ;
    MEM8(ebp + -33) = 1;
    goto loc_0013E668;

loc_0013E65B: ;
    goto loc_0013E65D;

loc_0013E65D: ;
    eax = MEM32(ebp + -40);
    eax = eax + 1;
    MEM32(ebp + -40) = eax;
    goto loc_0013E63F;

loc_0013E668: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E6BC; /* jne: not equal / not zero */

loc_0013E66E: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E67C; /* jne: not equal / not zero */

loc_0013E674: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -4) = eax;
    goto loc_0013E6D4;

loc_0013E67C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -32);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E68Eu); RECOMP_ABI_CALL(0x0013E850u, sub_0013E850); /* call 0x0013E850 */

loc_0013E68E: ;
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013E6BA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013E6AA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -12) = eax;

loc_0013E6BA: ;
    goto loc_0013E6BC;

loc_0013E6BC: ;
    goto loc_0013E6BE;

loc_0013E6BE: ;
    goto loc_0013E6C0;

loc_0013E6C0: ;
    eax = MEM32(ebp + -28);
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    goto loc_0013E5EF;

loc_0013E6CE: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;

loc_0013E6D4: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0013E6E0
 * Original: 0x0013E6E0 - 0x0013E84B (363 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E6E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0013E6E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x38)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E6EEu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0013E6EE: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E6F6u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0013E6F6: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x164)) >> 32) & 1);
    ecx = ecx + 0x164;
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0xA0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E719u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013E719: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x10;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E739u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013E739: ;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x10;
    MEM32(eax + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E759u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013E759: ;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x10;
    MEM32(eax + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E779u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013E779: ;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -28) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E788u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E788: ;
    eax = MEM32(eax + 0x48);
    MEM32(ebp + -32) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_0013E843; /* ja: above (unsigned >) */

loc_0013E797: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax * 4 + 0x4A32B0);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0013E7A3u) goto loc_0013E7A3;
    if (_jt == 0x0013E7DAu) goto loc_0013E7DA;
    if (_jt == 0x0013E7DCu) goto loc_0013E7DC;
    if (_jt == 0x0013E7FFu) goto loc_0013E7FF;
    if (_jt == 0x0013E822u) goto loc_0013E822;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013E7A3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013E7B4; /* jne: not equal / not zero */

loc_0013E7A9: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_0013E7D8;

loc_0013E7B4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013E7C5; /* jne: not equal / not zero */

loc_0013E7BA: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_0013E7D6;

loc_0013E7C5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 6 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0013E7D4; /* jge: greater or equal (signed >=) */

loc_0013E7CB: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -28) = eax;

loc_0013E7D4: ;
    goto loc_0013E7D6;

loc_0013E7D6: ;
    goto loc_0013E7D8;

loc_0013E7D8: ;
    goto loc_0013E843;

loc_0013E7DA: ;
    goto loc_0013E843;

loc_0013E7DC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0013E7ED; /* jge: greater or equal (signed >=) */

loc_0013E7E2: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -36) = eax;
    goto loc_0013E7F7;

loc_0013E7ED: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -36) = eax;
    goto loc_0013E7F7;

loc_0013E7F7: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -28) = eax;
    goto loc_0013E843;

loc_0013E7FF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 8 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0013E810; /* jge: greater or equal (signed >=) */

loc_0013E805: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -40) = eax;
    goto loc_0013E81A;

loc_0013E810: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -40) = eax;
    goto loc_0013E81A;

loc_0013E81A: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -28) = eax;
    goto loc_0013E843;

loc_0013E822: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0013E833; /* jge: greater or equal (signed >=) */

loc_0013E828: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -44) = eax;
    goto loc_0013E83D;

loc_0013E833: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -44) = eax;
    goto loc_0013E83D;

loc_0013E83D: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -28) = eax;

loc_0013E843: ;
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E850
 * Original: 0x0013E850 - 0x0013E88E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E850(void)
{
    uint32_t ebp = g_ebp;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013E850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = esp;
    esi = ebp + -16;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E875u); RECOMP_ABI_CALL(0x0013E8D0u, sub_0013E8D0); /* call 0x0013E8D0 */

loc_0013E875: ;
    ecx = eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E880u); RECOMP_ABI_CALL(0x0013E890u, sub_0013E890); /* call 0x0013E890 */

loc_0013E880: ;
    MEMF(ebp + -20) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0013E890
 * Original: 0x0013E890 - 0x0013E8C9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E890(void)
{
    uint32_t ebp = g_ebp;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013E890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0013E8D0
 * Original: 0x0013E8D0 - 0x0013E926 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8D0(void)
{
    uint32_t ebp = g_ebp;

loc_0013E8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E930
 * Original: 0x0013E930 - 0x0013E963 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E930(void)
{
    uint32_t ebp = g_ebp;

loc_0013E930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E943u); RECOMP_ABI_CALL(0x001D4C40u, sub_001D4C40); /* call 0x001D4C40 */

loc_0013E943: ;
    ecx = eax;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(esp) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E95Eu); RECOMP_ABI_CALL(0x001D4E50u, sub_001D4E50); /* call 0x001D4E50 */

loc_0013E95E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013E970
 * Original: 0x0013E970 - 0x0013EB4D (477 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E970(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0013E970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E991u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013E991: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E9A9u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013E9A9: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E9B1u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013E9B1: ;
    _fa = (uint32_t)(MEM8(eax + 0x4D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x4D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EA82; /* jne: not equal / not zero */

loc_0013E9BB: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0013EA42; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013E9E9: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D984)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013EA26; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013EA17: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    goto loc_0013EA35;

loc_0013EA26: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    goto loc_0013EA35;

loc_0013EA35: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */

loc_0013EA42: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D62C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013EA66; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013EA57: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    goto loc_0013EA75;

loc_0013EA66: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D62C)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    goto loc_0013EA75;

loc_0013EA75: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */

loc_0013EA82: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EA87u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013EA87: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x4C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EB48; /* jne: not equal / not zero */

loc_0013EA91: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DC98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x6C); /* addss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0013EB0A; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_0013EAB7: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DC98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x6C); /* addss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013EAF0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013EAE1: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    goto loc_0013EAFD;

loc_0013EAF0: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */

loc_0013EAFD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */

loc_0013EB0A: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D7C8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013EB2E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013EB1F: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D7C8)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    goto loc_0013EB3B;

loc_0013EB2E: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */

loc_0013EB3B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */

loc_0013EB48: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EB50
 * Original: 0x0013EB50 - 0x0013EB55 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB50(void)
{
    uint32_t ebp = g_ebp;

loc_0013EB50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EB60
 * Original: 0x0013EB60 - 0x0013EBB2 (82 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB60(void)
{
    uint32_t ebp = g_ebp;

loc_0013EB60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xB2B46C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EB86u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0013EB86: ;
    eax = 0xB2B46C;
    eax = eax + 0x200;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EBABu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0013EBAB: ;
    SET_LO8(eax, 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EBC0
 * Original: 0x0013EBC0 - 0x0013EBC5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EBC0(void)
{
    uint32_t ebp = g_ebp;

loc_0013EBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EBD0
 * Original: 0x0013EBD0 - 0x0013EC03 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EBD0(void)
{
    uint32_t ebp = g_ebp;

loc_0013EBD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EBEEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013EBEE: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x88) = 0xFFFFFFFFu;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EC10
 * Original: 0x0013EC10 - 0x0013EC15 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC10(void)
{
    uint32_t ebp = g_ebp;

loc_0013EC10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EC20
 * Original: 0x0013EC20 - 0x0013EC4B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EC20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EC2Bu); RECOMP_ABI_CALL(0x00130910u, sub_00130910); /* call 0x00130910 */

loc_0013EC2B: ;
    edx = ZX8(LO8(eax));
    eax = 0x15;
    ecx = 0x23;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EC46u); RECOMP_ABI_CALL(0x0013AA00u, sub_0013AA00); /* call 0x0013AA00 */

loc_0013EC46: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EC50
 * Original: 0x0013EC50 - 0x0013EC58 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC50(void)
{
    uint32_t ebp = g_ebp;

loc_0013EC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EC60
 * Original: 0x0013EC60 - 0x0013EC68 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC60(void)
{
    uint32_t ebp = g_ebp;

loc_0013EC60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EC70
 * Original: 0x0013EC70 - 0x0013EC78 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC70(void)
{
    uint32_t ebp = g_ebp;

loc_0013EC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EC80
 * Original: 0x0013EC80 - 0x0013EC85 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC80(void)
{
    uint32_t ebp = g_ebp;

loc_0013EC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EC90
 * Original: 0x0013EC90 - 0x0013EC95 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC90(void)
{
    uint32_t ebp = g_ebp;

loc_0013EC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013ECA0
 * Original: 0x0013ECA0 - 0x0013EF2F (655 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ECA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0013ECA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ECBFu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013ECBF: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ECC7u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013ECC7: ;
    eax = ZX8(MEM8(eax + 0x4D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013ED3E; /* je: equal / zero */

loc_0013ECD0: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013ED3E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013ECE5: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBE4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013ED22; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013ED13: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    goto loc_0013ED31;

loc_0013ED22: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    goto loc_0013ED31;

loc_0013ED31: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */

loc_0013ED3E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ED43u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013ED43: ;
    eax = ZX8(MEM8(eax + 0x4C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EDB0; /* je: equal / zero */

loc_0013ED4C: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013EDB0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_0013ED5D: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DE50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x6C); /* addss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013ED96; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013ED87: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    goto loc_0013EDA3;

loc_0013ED96: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */

loc_0013EDA3: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */

loc_0013EDB0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EDB5u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013EDB5: ;
    _fa = (uint32_t)(MEM8(eax + 0x4E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x4E), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EEFF; /* je: equal / zero */

loc_0013EDBF: ;
    eax = MEM32(ebp + 8);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EDD3; /* jl: less (signed <) */

loc_0013EDC8: ;
    eax = MEM32(ebp + 8);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EE07; /* jl: less (signed <) */

loc_0013EDD3: ;
    ecx = 0x494DE0;
    eax = 0x45EEFB;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x201;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EDFBu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013EDFB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EE07u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013EE07: ;
    eax = MEM32(ebp + 8);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EE13u); RECOMP_ABI_CALL(0x0012DF50u, sub_0012DF50); /* call 0x0012DF50 */

loc_0013EE13: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x88), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EEAD; /* je: equal / zero */

loc_0013EE23: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x88);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EE3Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013EE3E: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EEAB; /* je: equal / zero */

loc_0013EE4A: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EE60u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013EE60: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    SET_LO16(esi, LO16(eax));
    edx = MEM32(ebp + -16);
    edx = edx + 4;
    edx = edx + 0x4C;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0x4983C6;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EEABu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0013EEAB: ;
    goto loc_0013EEAD;

loc_0013EEAD: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EECD; /* je: equal / zero */

loc_0013EEB6: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x88), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EECD; /* jne: not equal / not zero */

loc_0013EEC2: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EECDu); RECOMP_ABI_CALL(0x0013F6A0u, sub_0013F6A0); /* call 0x0013F6A0 */

loc_0013EECD: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x88), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EEFD; /* je: equal / zero */

loc_0013EED9: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x88);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EEEAu); RECOMP_ABI_CALL(0x001307A0u, sub_001307A0); /* call 0x001307A0 */

loc_0013EEEA: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EEFD; /* je: equal / zero */

loc_0013EEF2: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EEFDu); RECOMP_ABI_CALL(0x0013F6A0u, sub_0013F6A0); /* call 0x0013F6A0 */

loc_0013EEFD: ;
    goto loc_0013EEFF;

loc_0013EEFF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EF12u); RECOMP_ABI_CALL(0x0013EF40u, sub_0013EF40); /* call 0x0013EF40 */

loc_0013EF12: ;
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EF1Au); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013EF1A: ;
    ecx = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EF29; /* jl: less (signed <) */

loc_0013EF24: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EF29u); RECOMP_ABI_CALL(0x0012CF20u, sub_0012CF20); /* call 0x0012CF20 */

loc_0013EF29: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EF30
 * Original: 0x0013EF30 - 0x0013EF35 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EF30(void)
{
    uint32_t ebp = g_ebp;

loc_0013EF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EF40
 * Original: 0x0013EF40 - 0x0013EF92 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EF40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EF61u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013EF61: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EF7C; /* jne: not equal / not zero */

loc_0013EF6A: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax * 4 + 0xB2B46C);
    MEM32(ebp + -4) = eax;
    goto loc_0013EF8A;

loc_0013EF7C: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = MEM32(eax * 4 + 0xB2B66C);
    MEM32(ebp + -4) = eax;

loc_0013EF8A: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EFA0
 * Original: 0x0013EFA0 - 0x0013EFD8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EFA0(void)
{
    uint32_t ebp = g_ebp;

loc_0013EFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(ebp + 8));
    eax = MEM32(eax * 4 + 0xB2B66C);
    ecx = 0x4A29B8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EFD0u); RECOMP_ABI_CALL(0x0035D040u, sub_0035D040); /* call 0x0035D040 */

loc_0013EFD0: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013EFE0
 * Original: 0x0013EFE0 - 0x0013F04A (106 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EFE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EFE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F005u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013F005: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F025; /* je: equal / zero */

loc_0013F00D: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x9A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F020u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013F020: ;
    MEM32(ebp + -12) = eax;
    goto loc_0013F030;

loc_0013F025: ;
    eax = 0x4A1B86;
    MEM32(ebp + -12) = eax;
    goto loc_0013F030;

loc_0013F030: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F042u); RECOMP_ABI_CALL(0x0035B940u, sub_0035B940); /* call 0x0035B940 */

loc_0013F042: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F050
 * Original: 0x0013F050 - 0x0013F087 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F050(void)
{
    uint32_t ebp = g_ebp;

loc_0013F050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0xB2B46C);
    ecx = 0x4A29B8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F07Fu); RECOMP_ABI_CALL(0x0035D040u, sub_0035D040); /* call 0x0035D040 */

loc_0013F07F: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F090
 * Original: 0x0013F090 - 0x0013F09D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F090(void)
{
    uint32_t ebp = g_ebp;

loc_0013F090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F0A0
 * Original: 0x0013F0A0 - 0x0013F0AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0A0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F0B0
 * Original: 0x0013F0B0 - 0x0013F17B (203 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F0B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F0D7u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F0D7: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 0xD1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xD1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F174; /* jne: not equal / not zero */

loc_0013F0EA: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F174; /* je: equal / zero */

loc_0013F0F4: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F109u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F109: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F15F; /* jne: not equal / not zero */

loc_0013F112: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F124u); RECOMP_ABI_CALL(0x0013E970u, sub_0013E970); /* call 0x0013E970 */

loc_0013F124: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F129u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013F129: ;
    _fa = (uint32_t)(MEM8(eax + 0x4E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x4E), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F14A; /* je: equal / zero */

loc_0013F12F: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F13F; /* je: equal / zero */

loc_0013F13D: ;
    goto loc_0013F176;

loc_0013F13F: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F14Au); RECOMP_ABI_CALL(0x0013F6A0u, sub_0013F6A0); /* call 0x0013F6A0 */

loc_0013F14A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F15Du); RECOMP_ABI_CALL(0x0013F8A0u, sub_0013F8A0); /* call 0x0013F8A0 */

loc_0013F15D: ;
    goto loc_0013F172;

loc_0013F15F: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F172u); RECOMP_ABI_CALL(0x0013F8A0u, sub_0013F8A0); /* call 0x0013F8A0 */

loc_0013F172: ;
    goto loc_0013F174;

loc_0013F174: ;
    goto loc_0013F176;

loc_0013F176: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F180
 * Original: 0x0013F180 - 0x0013F5C5 (1093 bytes, 244 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F180(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x18C;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -277) = 1;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F1B7u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F1B7: ;
    MEM32(ebp + -20) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F2F1; /* jne: not equal / not zero */

loc_0013F1C8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F1CDu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013F1CD: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F294; /* je: equal / zero */

loc_0013F1D7: ;
    eax = ebp + -276;
    MEM32(ebp + -300) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F1F9u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013F1F9: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F21C; /* je: equal / zero */

loc_0013F201: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xB3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F214u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013F214: ;
    MEM32(ebp + -304) = eax;
    goto loc_0013F22A;

loc_0013F21C: ;
    eax = 0x4A1B86;
    MEM32(ebp + -304) = eax;
    goto loc_0013F22A;

loc_0013F22A: ;
    esi = MEM32(ebp + -300);
    eax = MEM32(ebp + -304);
    MEM32(ebp + -312) = eax;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F251u); RECOMP_ABI_CALL(0x0013EF40u, sub_0013EF40); /* call 0x0013EF40 */

loc_0013F251: ;
    MEM32(ebp + -308) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F26Au); RECOMP_ABI_CALL(0x0013EF40u, sub_0013EF40); /* call 0x0013EF40 */

loc_0013F26A: ;
    edx = MEM32(ebp + -312);
    ecx = MEM32(ebp + -308);
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0x80;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F292u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013F292: ;
    goto loc_0013F2D9;

loc_0013F294: ;
    eax = ebp + -276;
    MEM32(ebp + -316) = eax;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F2B5u); RECOMP_ABI_CALL(0x0013EF40u, sub_0013EF40); /* call 0x0013EF40 */

loc_0013F2B5: ;
    edx = MEM32(ebp + -316);
    ecx = 0x4A29B8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x80;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F2D9u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013F2D9: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F2EEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F2EE: ;
    MEM32(ebp + -20) = eax;

loc_0013F2F1: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -320) = eax;
    eax = eax - 0x16;
    if ((eax == 0)) goto loc_0013F3A0; /* je: equal / zero */

loc_0013F303: ;
    goto loc_0013F305;

loc_0013F305: ;
    eax = MEM32(ebp + -320);
    eax = eax - 0x1E;
    if ((eax != 0)) goto loc_0013F5AD; /* jne: not equal / not zero */

loc_0013F314: ;
    goto loc_0013F316;

loc_0013F316: ;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -328) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -324) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F33Eu); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013F33E: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F361; /* je: equal / zero */

loc_0013F346: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F359u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013F359: ;
    MEM32(ebp + -332) = eax;
    goto loc_0013F36F;

loc_0013F361: ;
    eax = 0x4A1B86;
    MEM32(ebp + -332) = eax;
    goto loc_0013F36F;

loc_0013F36F: ;
    edx = MEM32(ebp + -324);
    esi = MEM32(ebp + -328);
    ecx = MEM32(ebp + -332);
    eax = MEM32(ebp + -20);
    eax = eax + 4;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F39Bu); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013F39B: ;
    goto loc_0013F5B4;

loc_0013F3A0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F3A5u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013F3A5: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F4BC; /* je: equal / zero */

loc_0013F3AF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F3C2u); RECOMP_ABI_CALL(0x00132B30u, sub_00132B30); /* call 0x00132B30 */

loc_0013F3C2: ;
    MEM32(ebp + -288) = eax;
    eax = ebp + -288;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F3D8u); RECOMP_ABI_CALL(0x0012DA60u, sub_0012DA60); /* call 0x0012DA60 */

loc_0013F3D8: ;
    MEM32(ebp + -284) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -340) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -336) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F406u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013F406: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F429; /* je: equal / zero */

loc_0013F40E: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xB5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F421u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013F421: ;
    MEM32(ebp + -344) = eax;
    goto loc_0013F437;

loc_0013F429: ;
    eax = 0x4A1B86;
    MEM32(ebp + -344) = eax;
    goto loc_0013F437;

loc_0013F437: ;
    ebx = MEM32(ebp + -340);
    edi = MEM32(ebp + -344);
    esi = MEM32(ebp + -284);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F45Eu); RECOMP_ABI_CALL(0x0013EF40u, sub_0013EF40); /* call 0x0013EF40 */

loc_0013F45E: ;
    MEM32(ebp + -352) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F477u); RECOMP_ABI_CALL(0x0013EF40u, sub_0013EF40); /* call 0x0013EF40 */

loc_0013F477: ;
    MEM32(ebp + -348) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F482u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013F482: ;
    edx = MEM32(ebp + -352);
    ecx = MEM32(ebp + -348);
    eax = MEM32(eax + 0x40);
    MEM32(esp) = ebx;
    ebx = MEM32(ebp + -336);
    MEM32(esp + 4) = ebx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F4B7u); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013F4B7: ;
    goto loc_0013F5AB;

loc_0013F4BC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F4CFu); RECOMP_ABI_CALL(0x00132B30u, sub_00132B30); /* call 0x00132B30 */

loc_0013F4CF: ;
    MEM32(ebp + -296) = eax;
    eax = ebp + -296;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F4E5u); RECOMP_ABI_CALL(0x0012DA60u, sub_0012DA60); /* call 0x0012DA60 */

loc_0013F4E5: ;
    MEM32(ebp + -292) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -360) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -356) = eax;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F513u); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0013F513: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F536; /* je: equal / zero */

loc_0013F51B: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xB6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F52Eu); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0013F52E: ;
    MEM32(ebp + -364) = eax;
    goto loc_0013F544;

loc_0013F536: ;
    eax = 0x4A1B86;
    MEM32(ebp + -364) = eax;
    goto loc_0013F544;

loc_0013F544: ;
    edi = MEM32(ebp + -356);
    ebx = MEM32(ebp + -360);
    esi = MEM32(ebp + -364);
    eax = MEM32(ebp + -292);
    MEM32(ebp + -372) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F575u); RECOMP_ABI_CALL(0x0013EF40u, sub_0013EF40); /* call 0x0013EF40 */

loc_0013F575: ;
    MEM32(ebp + -368) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F580u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0013F580: ;
    edx = MEM32(ebp + -372);
    ecx = MEM32(ebp + -368);
    eax = MEM32(eax + 0x40);
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F5ABu); RECOMP_ABI_CALL(0x0035CF30u, sub_0035CF30); /* call 0x0035CF30 */

loc_0013F5AB: ;
    goto loc_0013F5B4;

loc_0013F5AD: ;
    MEM8(ebp + -277) = 0;

loc_0013F5B4: ;
    SET_LO8(eax, MEM8(ebp + -277));
    esp = esp + 0x18C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F5D0
 * Original: 0x0013F5D0 - 0x0013F5D8 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F5D0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F5D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F5E0
 * Original: 0x0013F5E0 - 0x0013F601 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F5E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */

loc_0013F5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    eax = MEM32(ebp + 8);
    eax = eax - 1;
    if ((eax != 0)) goto loc_0013F5F9; /* jne: not equal / not zero */

loc_0013F5F3: ;
    goto loc_0013F5F5;

loc_0013F5F5: ;
    MEM8(ebp + -1) = 1;

loc_0013F5F9: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F610
 * Original: 0x0013F610 - 0x0013F65A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F610(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013F62E; /* jge: greater or equal (signed >=) */

loc_0013F625: ;
    MEM32(ebp + -4) = 0;
    goto loc_0013F652;

loc_0013F62E: ;
    ecx = MEM32(ebp + 8);
    eax = 0xB2B46C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F64Bu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013F64B: ;
    MEM32(ebp + -4) = 0x400;

loc_0013F652: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F660
 * Original: 0x0013F660 - 0x0013F697 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x400 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F692; /* jne: not equal / not zero */

loc_0013F675: ;
    eax = MEM32(ebp + 8);
    ecx = 0xB2B46C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F692u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0013F692: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F6A0
 * Original: 0x0013F6A0 - 0x0013F81D (381 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F6A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F6A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F6BEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F6BE: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x88);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    MEM32(ebp + -16) = 0;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -32;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F6EFu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013F6EF: ;
    eax = ebp + -32;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F6FAu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013F6FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F727; /* je: equal / zero */

loc_0013F6FF: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F718u); RECOMP_ABI_CALL(0x0013F820u, sub_0013F820); /* call 0x0013F820 */

loc_0013F718: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F725; /* je: equal / zero */

loc_0013F71C: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;

loc_0013F725: ;
    goto loc_0013F6EF;

loc_0013F727: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013F7EC; /* jle: less or equal (signed <=) */

loc_0013F731: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F736u); RECOMP_ABI_CALL(0x001D4C40u, sub_001D4C40); /* call 0x001D4C40 */

loc_0013F736: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F752u); RECOMP_ABI_CALL(0x001D4E50u, sub_001D4E50); /* call 0x001D4E50 */

loc_0013F752: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -36) = eax;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -32;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F76Au); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013F76A: ;
    eax = ebp + -32;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F775u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013F775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F7B0; /* je: equal / zero */

loc_0013F77A: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F793u); RECOMP_ABI_CALL(0x0013F820u, sub_0013F820); /* call 0x0013F820 */

loc_0013F793: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F7AE; /* je: equal / zero */

loc_0013F797: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F7A5; /* jne: not equal / not zero */

loc_0013F79D: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -12) = eax;
    goto loc_0013F7B0;

loc_0013F7A5: ;
    eax = MEM32(ebp + -36);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -36) = eax;

loc_0013F7AE: ;
    goto loc_0013F76A;

loc_0013F7B0: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F7EA; /* jne: not equal / not zero */

loc_0013F7B6: ;
    ecx = 0x44010B;
    eax = 0x45EEFB;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F7DEu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013F7DE: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F7EAu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013F7EA: ;
    goto loc_0013F7EC;

loc_0013F7EC: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x88) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F818; /* je: equal / zero */

loc_0013F7FE: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x1E;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F818u); RECOMP_ABI_CALL(0x0012AD60u, sub_0012AD60); /* call 0x0012AD60 */

loc_0013F818: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F820
 * Original: 0x0013F820 - 0x0013F896 (118 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F848u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F848: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F860u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F860: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F88E; /* je: equal / zero */

loc_0013F86B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F88E; /* je: equal / zero */

loc_0013F873: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F88E; /* je: equal / zero */

loc_0013F881: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F88E; /* je: equal / zero */

loc_0013F88A: ;
    MEM8(ebp + -1) = 1;

loc_0013F88E: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F8A0
 * Original: 0x0013F8A0 - 0x0013F8F7 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F8A0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F8A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013F8C1u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013F8C1: ;
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax * 4 + 0xB2B46C);
    ecx = ecx + edx;
    MEM32(eax * 4 + 0xB2B46C) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(ebp + 8));
    ecx = ecx + MEM32(eax * 4 + 0xB2B66C);
    MEM32(eax * 4 + 0xB2B66C) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F900
 * Original: 0x0013F900 - 0x0013F905 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F900(void)
{
    uint32_t ebp = g_ebp;

loc_0013F900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F910
 * Original: 0x0013F910 - 0x0013F917 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F910(void)
{
    uint32_t ebp = g_ebp;

loc_0013F910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F920
 * Original: 0x0013F920 - 0x0013F925 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F920(void)
{
    uint32_t ebp = g_ebp;

loc_0013F920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F930
 * Original: 0x0013F930 - 0x0013F935 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F930(void)
{
    uint32_t ebp = g_ebp;

loc_0013F930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F940
 * Original: 0x0013F940 - 0x0013F945 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F940(void)
{
    uint32_t ebp = g_ebp;

loc_0013F940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F950
 * Original: 0x0013F950 - 0x0013F955 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F950(void)
{
    uint32_t ebp = g_ebp;

loc_0013F950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F960
 * Original: 0x0013F960 - 0x0013F965 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F960(void)
{
    uint32_t ebp = g_ebp;

loc_0013F960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F970
 * Original: 0x0013F970 - 0x0013F975 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F970(void)
{
    uint32_t ebp = g_ebp;

loc_0013F970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F980
 * Original: 0x0013F980 - 0x0013F985 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F980(void)
{
    uint32_t ebp = g_ebp;

loc_0013F980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F990
 * Original: 0x0013F990 - 0x0013F995 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F990(void)
{
    uint32_t ebp = g_ebp;

loc_0013F990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F9A0
 * Original: 0x0013F9A0 - 0x0013F9A5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9A0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F9B0
 * Original: 0x0013F9B0 - 0x0013F9B5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9B0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F9B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F9C0
 * Original: 0x0013F9C0 - 0x0013F9C7 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9C0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F9D0
 * Original: 0x0013F9D0 - 0x0013F9D5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9D0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F9E0
 * Original: 0x0013F9E0 - 0x0013F9E5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9E0(void)
{
    uint32_t ebp = g_ebp;

loc_0013F9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013F9F0
 * Original: 0x0013F9F0 - 0x0013FA6A (122 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F9F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FA59; /* je: equal / zero */

loc_0013FA03: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FA15; /* jl: less (signed <) */

loc_0013FA0C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FA49; /* jl: less (signed <) */

loc_0013FA15: ;
    ecx = 0x47E1AA;
    eax = 0x46FEB4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x389;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FA3Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013FA3D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FA49u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013FA49: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax * 4 + 0x583EE4);
    MEM32(ebp + -4) = eax;
    goto loc_0013FA62;

loc_0013FA59: ;
    eax = 0x45563D;
    MEM32(ebp + -4) = eax;

loc_0013FA62: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013FA70
 * Original: 0x0013FA70 - 0x0013FAA5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FA70(void)
{
    uint32_t ebp = g_ebp;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013FA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FA86u); RECOMP_ABI_CALL(0x00126D40u, sub_00126D40); /* call 0x00126D40 */

loc_0013FA86: ;
    ecx = MEM32(ebp + -8);
    edx = SX16(LO16(eax));
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FA98u); RECOMP_ABI_CALL(0x0013FAB0u, sub_0013FAB0); /* call 0x0013FAB0 */

loc_0013FA98: ;
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0013FAB0
 * Original: 0x0013FAB0 - 0x0013FBBA (266 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FAB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013FAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FAD0u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0013FAD0: ;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FAE5; /* jl: less (signed <) */

loc_0013FADC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FB19; /* jl: less (signed <) */

loc_0013FAE5: ;
    ecx = 0x4428C0;
    eax = 0x46FEB4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x39A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FB0Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013FB0D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FB19u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013FB19: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FBA8; /* je: equal / zero */

loc_0013FB23: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x11C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x11C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FBA8; /* je: equal / zero */

loc_0013FB2F: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x11C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x284;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FB51u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0013FB51: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FBA6; /* je: equal / zero */

loc_0013FB5A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013FB6B; /* jge: greater or equal (signed >=) */

loc_0013FB63: ;
    MEM16(ebp + -14) = 0;
    goto loc_0013FB8C;

loc_0013FB6B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013FB7E; /* jle: less or equal (signed <=) */

loc_0013FB74: ;
    eax = 3;
    MEM32(ebp + -24) = eax;
    goto loc_0013FB85;

loc_0013FB7E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(ebp + -24) = eax;

loc_0013FB85: ;
    eax = MEM32(ebp + -24);
    MEM16(ebp + -14) = LO16(eax);

loc_0013FB8C: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0013FBA6: ;
    goto loc_0013FBA8;

loc_0013FBA8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -20)); /* fld float */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0013FBC0
 * Original: 0x0013FBC0 - 0x0013FCE3 (291 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FBC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013FBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FBD3u); RECOMP_ABI_CALL(0x00126D40u, sub_00126D40); /* call 0x00126D40 */

loc_0013FBD3: ;
    MEM16(ebp + -6) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FBDCu); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0013FBDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FBEB; /* je: equal / zero */

loc_0013FBE0: ;
    MEM16(ebp + -6) = 1;
    goto loc_0013FCAF;

loc_0013FBEB: ;
    MEM32(esp) = 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FBFFu); RECOMP_ABI_CALL(0x00127B50u, sub_00127B50); /* call 0x00127B50 */

loc_0013FBFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FCAD; /* jne: not equal / not zero */

loc_0013FC07: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FC19; /* jl: less (signed <) */

loc_0013FC10: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FC4D; /* jl: less (signed <) */

loc_0013FC19: ;
    ecx = 0x4428C0;
    eax = 0x46FEB4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3BD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FC41u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0013FC41: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FC4Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0013FC4D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    SET_LO16(eax, MEM16(eax * 2 + 0x4A3324));
    MEM16(ebp + -8) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FC89; /* jne: not equal / not zero */

loc_0013FC66: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FC7Au); RECOMP_ABI_CALL(0x0013FAB0u, sub_0013FAB0); /* call 0x0013FAB0 */

loc_0013FC7A: ;
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0013FCD1;

loc_0013FC89: ;
    SET_LO16(eax, MEM16(ebp + -8));
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FC9Eu); RECOMP_ABI_CALL(0x0013FAB0u, sub_0013FAB0); /* call 0x0013FAB0 */

loc_0013FC9E: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0013FCD1;

loc_0013FCAD: ;
    goto loc_0013FCAF;

loc_0013FCAF: ;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FCC4u); RECOMP_ABI_CALL(0x0013FAB0u, sub_0013FAB0); /* call 0x0013FAB0 */

loc_0013FCC4: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0013FCD1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -24)); /* fld float */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0013FCF0
 * Original: 0x0013FCF0 - 0x0013FCFC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FCF0(void)
{
    uint32_t ebp = g_ebp;

loc_0013FCF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    MEM8(0xB2B86C) = 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013FD00
 * Original: 0x0013FD00 - 0x0013FD95 (149 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FD00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FD00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FD1Eu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0013FD1E: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FD29u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013FD29: ;
    MEM32(ebp + -20) = eax;

loc_0013FD2C: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FD89; /* je: equal / zero */

loc_0013FD32: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FD37u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013FD37: ;
    ecx = 0x1E;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0xB8) = ecx;
    eax = MEM32(ebp + -20);
    MEM16(eax + 0x8E) = 1;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FD79; /* jne: not equal / not zero */

loc_0013FD64: ;
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, MEM16(eax + 0x90));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0x90) = LO16(ecx);

loc_0013FD79: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FD84u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0013FD84: ;
    MEM32(ebp + -20) = eax;
    goto loc_0013FD2C;

loc_0013FD89: ;
    MEM8(0xB2B86C) = 0;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013FDA0
 * Original: 0x0013FDA0 - 0x0013FDB7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FDA0(void)
{
    uint32_t ebp = g_ebp;

loc_0013FDA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0013FDC0
 * Original: 0x0013FDC0 - 0x0014020F (1103 bytes, 293 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FDC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0013FDC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    SET_LO16(eax, MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(0xB2B86C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2B86C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014020A; /* je: equal / zero */

loc_0013FDE0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FDEBu); RECOMP_ABI_CALL(0x00148FF0u, sub_00148FF0); /* call 0x00148FF0 */

loc_0013FDEB: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FDFD; /* jne: not equal / not zero */

loc_0013FDF4: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_0013FE04;

loc_0013FDFD: ;
    MEM32(ebp + -8) = 0;

loc_0013FE04: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140208; /* je: equal / zero */

loc_0013FE0E: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FE23u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013FE23: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -16) = eax;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FE44u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0013FE44: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FE64; /* jne: not equal / not zero */

loc_0013FE4F: ;
    eax = MEM32(ebp + -12);
    SET_LO16(ecx, MEM16(eax + 0xAC));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xAC) = LO16(ecx);

loc_0013FE64: ;
    eax = MEM32(ebp + -12);
    SET_LO16(ecx, MEM16(eax + 0xAA));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xAA) = LO16(ecx);
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x92) = 0;
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x96) = 0xFFFF;
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x94) = 0;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    MEM8(ebp + -73) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0013FEC6; /* je: equal / zero */

loc_0013FEA8: ;
    eax = MEM32(ebp + -16);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FEBCu); RECOMP_ABI_CALL(0x00127B50u, sub_00127B50); /* call 0x00127B50 */

loc_0013FEBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -73) = LO8(eax);

loc_0013FEC6: ;
    SET_LO8(eax, MEM8(ebp + -73));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -17) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FED6u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013FED6: ;
    eax = eax - 0x78;
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FEE1u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0013FEE1: ;
    eax = eax - 0xB4;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FEFCu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0013FEFC: ;
    MEM32(ebp + -32) = eax;
    MEM16(ebp + -44) = 0xFFFF;
    xmm0 = XMM_SCALAR(MEMF(0x43DB00)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    MEM16(ebp + -42) = 0xFFFF;
    MEM16(ebp + -50) = 0;
    eax = MEM32(ebp + -32);
    eax = eax + 0x1A4;
    eax = eax + 0x23C;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -36) = eax;

loc_0013FF34: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013FFD6; /* jge: greater or equal (signed >=) */

loc_0013FF41: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FF54; /* jne: not equal / not zero */

loc_0013FF4C: ;
    SET_LO16(eax, MEM16(ebp + -50));
    MEM16(ebp + -42) = LO16(eax);

loc_0013FF54: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -42);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF8D; /* je: equal / zero */

loc_0013FF60: ;
    eax = ZX8(MEM8(ebp + -17));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FFBA; /* je: equal / zero */

loc_0013FF69: ;
    eax = MEM32(ebp + -16);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013FF85u); RECOMP_ABI_CALL(0x00127B50u, sub_00127B50); /* call 0x00127B50 */

loc_0013FF85: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FFBA; /* je: equal / zero */

loc_0013FF8D: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0013FFBA; /* jbe: below or equal (unsigned <=) */

loc_0013FF97: ;
    eax = MEM32(ebp + -40);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -48); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0013FFBA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -48)) */

loc_0013FFA5: ;
    SET_LO16(eax, MEM16(ebp + -50));
    MEM16(ebp + -44) = LO16(eax);
    eax = MEM32(ebp + -40);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */

loc_0013FFBA: ;
    goto loc_0013FFBC;

loc_0013FFBC: ;
    SET_LO16(eax, MEM16(ebp + -50));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -50) = LO16(eax);
    eax = MEM32(ebp + -40);
    eax = eax + 0x10;
    MEM32(ebp + -40) = eax;
    goto loc_0013FF34;

loc_0013FFD6: ;
    MEM8(ebp + -61) = 0;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FFEB; /* jne: not equal / not zero */

loc_0013FFE3: ;
    SET_LO16(eax, MEM16(ebp + -42));
    MEM16(ebp + -44) = LO16(eax);

loc_0013FFEB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014003A; /* je: equal / zero */

loc_0013FFF4: ;
    eax = MEM32(ebp + -32);
    eax = eax + 0x1A4;
    eax = eax + 0x23C;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -44);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -32);
    eax = eax + 0x1A4;
    eax = eax + 0x23C;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -44);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43DE34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    goto loc_00140048;

loc_0014003A: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -56) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */

loc_00140048: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014011A; /* je: equal / zero */

loc_00140052: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -56);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140067u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00140067: ;
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -16);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -68);
    eax = MEM32(eax + 0x20);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140086u); RECOMP_ABI_CALL(0x00127B50u, sub_00127B50); /* call 0x00127B50 */

loc_00140086: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001400FF; /* je: equal / zero */

loc_0014008A: ;
    eax = MEM32(ebp + -68);
    ecx = MEM32(ebp + -8);
    SET_LO16(edx, MEM16(eax + ecx * 2 + 0x98));
    SET_LO16(edx, LO16(edx) + 1);
    MEM16(eax + ecx * 2 + 0x98) = LO16(edx);
    eax = MEM32(ebp + -68);
    SET_LO16(ecx, MEM16(eax + 0x92));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0x92) = LO16(ecx);
    eax = MEM32(ebp + -68);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001400DF; /* jl: less (signed <) */

loc_001400C8: ;
    eax = MEM32(ebp + -68);
    SET_LO16(ecx, MEM16(eax + 0x94));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0x94) = LO16(ecx);
    goto loc_001400EB;

loc_001400DF: ;
    eax = MEM32(ebp + -68);
    MEM16(eax + 0x94) = 1;

loc_001400EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001400F0u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_001400F0: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -68);
    MEM16(eax + 0x96) = LO16(ecx);
    goto loc_00140118;

loc_001400FF: ;
    eax = MEM32(ebp + -68);
    SET_LO16(ecx, MEM16(eax + 0xA8));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xA8) = LO16(ecx);
    MEM8(ebp + -61) = 1;

loc_00140118: ;
    goto loc_0014011A;

loc_0014011A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001401E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014012B: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -40) = eax;
    MEM16(ebp + -50) = 0;

loc_00140137: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001401E5; /* jge: greater or equal (signed >=) */

loc_00140144: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -42);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014015E; /* je: equal / zero */

loc_00140150: ;
    eax = MEM32(ebp + -40);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -60); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001401C9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -60)) */

loc_0014015E: ;
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001401C9; /* je: equal / zero */

loc_00140167: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -56) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001401C9; /* je: equal / zero */

loc_00140172: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014018Au); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014018A: ;
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -16);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -72);
    eax = MEM32(eax + 0x20);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001401A9u); RECOMP_ABI_CALL(0x00127B50u, sub_00127B50); /* call 0x00127B50 */

loc_001401A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001401C7; /* je: equal / zero */

loc_001401AD: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -8);
    SET_LO16(edx, MEM16(eax + ecx * 2 + 0xA0));
    SET_LO16(edx, LO16(edx) + 1);
    MEM16(eax + ecx * 2 + 0xA0) = LO16(edx);

loc_001401C7: ;
    goto loc_001401C9;

loc_001401C9: ;
    goto loc_001401CB;

loc_001401CB: ;
    SET_LO16(eax, MEM16(ebp + -50));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -50) = LO16(eax);
    eax = MEM32(ebp + -40);
    eax = eax + 0x10;
    MEM32(ebp + -40) = eax;
    goto loc_00140137;

loc_001401E5: ;
    goto loc_001401E7;

loc_001401E7: ;
    edx = MEM32(ebp + -56);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -4);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    eax = ZX8(MEM8(ebp + -61));
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140208u); RECOMP_ABI_CALL(0x0012CF60u, sub_0012CF60); /* call 0x0012CF60 */

loc_00140208: ;
    goto loc_0014020A;

loc_0014020A: ;
    esp = esp + 0x68;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140520
 * Original: 0x00140520 - 0x00140552 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00140545; /* je: equal / zero */

loc_00140534: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_00140545: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140560
 * Original: 0x00140560 - 0x001405AF (79 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140560(void)
{
    uint32_t ebp = g_ebp;

loc_00140560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x4480D8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140586u); RECOMP_ABI_CALL(0x00328600u, sub_00328600); /* call 0x00328600 */

loc_00140586: ;
    MEM32(0xB2B870) = eax;
    eax = MEM32(0xB2B870);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001405AAu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001405AA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001405B0
 * Original: 0x001405B0 - 0x00140629 (121 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001405B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_001405B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001405C9; /* je: equal / zero */

loc_001405BF: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001405FD; /* je: equal / zero */

loc_001405C9: ;
    ecx = 0x4480EA;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x83;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001405F1u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001405F1: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001405FDu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001405FD: ;
    eax = MEM32(0xB2B870);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014061Cu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0014061C: ;
    eax = MEM32(0xB2B870);
    MEM8(eax) = 1;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140630
 * Original: 0x00140630 - 0x0014064F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140630(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014064D; /* je: equal / zero */

loc_0014063C: ;
    eax = MEM32(0xB2B870);
    MEM8(eax) = 0;
    eax = MEM32(0xB2B870);
    MEM8(eax + 1) = 0;

loc_0014064D: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140650
 * Original: 0x00140650 - 0x00140655 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140650(void)
{
    uint32_t ebp = g_ebp;

loc_00140650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140660
 * Original: 0x00140660 - 0x001406B1 (81 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001406A3; /* jne: not equal / not zero */

loc_0014066F: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140697u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140697: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001406A3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001406A3: ;
    eax = MEM32(0xB2B870);
    MEM8(eax + 1) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001406C0
 * Original: 0x001406C0 - 0x0014073D (125 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001406C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001406C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001406DF; /* je: equal / zero */

loc_001406D2: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140715; /* jne: not equal / not zero */

loc_001406DF: ;
    ecx = 0x4454D8;
    eax = 0x478865;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140709u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140709: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140715u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140715: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(0xB2B870);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(0xB2B870);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0xB2B870);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140740
 * Original: 0x00140740 - 0x0014079D (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140740(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014075C; /* je: equal / zero */

loc_0014074F: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140790; /* jne: not equal / not zero */

loc_0014075C: ;
    ecx = 0x4454D8;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1CF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140784u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140784: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140790u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140790: ;
    eax = MEM32(0xB2B870);
    eax = MEM32(eax + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001407A0
 * Original: 0x001407A0 - 0x001407FE (94 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001407A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001407A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001407BC; /* je: equal / zero */

loc_001407AF: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001407F0; /* jne: not equal / not zero */

loc_001407BC: ;
    ecx = 0x4454D8;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1D7;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001407E4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001407E4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001407F0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001407F0: ;
    eax = MEM32(0xB2B870);
    SET_LO16(eax, MEM16(eax + 0x10));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140800
 * Original: 0x00140800 - 0x0014085D (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140800(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014081C; /* je: equal / zero */

loc_0014080F: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140850; /* jne: not equal / not zero */

loc_0014081C: ;
    ecx = 0x4454D8;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1DF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140844u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140844: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140850u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140850: ;
    eax = MEM32(0xB2B870);
    eax = MEM32(eax + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140860
 * Original: 0x00140860 - 0x001408BE (94 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140860(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014087C; /* je: equal / zero */

loc_0014086F: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001408B0; /* jne: not equal / not zero */

loc_0014087C: ;
    ecx = 0x4454D8;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E7;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001408A4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001408A4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001408B0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001408B0: ;
    eax = MEM32(0xB2B870);
    SET_LO16(eax, MEM16(eax + 0x10));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001408C0
 * Original: 0x001408C0 - 0x00140917 (87 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001408C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001408C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001408DC; /* je: equal / zero */

loc_001408CF: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140910; /* jne: not equal / not zero */

loc_001408DC: ;
    ecx = 0x4454D8;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1EF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140904u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140904: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140910u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140910: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140920
 * Original: 0x00140920 - 0x001409A1 (129 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140920(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140963; /* jne: not equal / not zero */

loc_0014092F: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1F9;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140957u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140957: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140963u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140963: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140995; /* je: equal / zero */

loc_0014096D: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014097E; /* je: equal / zero */

loc_00140978: ;
    MEM8(ebp + -1) = 1;
    goto loc_00140999;

loc_0014097E: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014098F; /* je: equal / zero */

loc_00140989: ;
    MEM8(ebp + -1) = 1;
    goto loc_00140999;

loc_0014098F: ;
    MEM8(ebp + -1) = 0;
    goto loc_00140999;

loc_00140995: ;
    MEM8(ebp + -1) = 0;

loc_00140999: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001409B0
 * Original: 0x001409B0 - 0x00140A00 (80 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001409B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001409B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001409F3; /* jne: not equal / not zero */

loc_001409BF: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x215;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001409E7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001409E7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001409F3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001409F3: ;
    eax = MEM32(0xB2B870);
    SET_LO8(eax, MEM8(eax + 2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140A00
 * Original: 0x00140A00 - 0x00140A78 (120 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140A46; /* jne: not equal / not zero */

loc_00140A12: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x21D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140A3Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140A3A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140A46u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140A46: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A68; /* je: equal / zero */

loc_00140A50: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(0xB2B870);
    MEM8(eax + 1) = LO8(ecx);

loc_00140A68: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    eax = MEM32(0xB2B870);
    MEM8(eax + 2) = LO8(ecx);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140A80
 * Original: 0x00140A80 - 0x00140B40 (192 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140A80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00140A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x14)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00140AA8; /* je: equal / zero */

loc_00140A8F: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00140AA8; /* je: equal / zero */

loc_00140A9A: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00140AB7; /* je: equal / zero */

loc_00140AA8: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_00140B2E;

loc_00140AB7: ;
    eax = MEM32(0xB2B870);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    eax = MEM32(0xB2B870);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00140AEF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -8)) */

loc_00140AE5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    goto loc_00140B24;

loc_00140AEF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00140B10; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00140B01: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    goto loc_00140B1A;

loc_00140B10: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */

loc_00140B1A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */

loc_00140B24: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_00140B2E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -12)); /* fld float */
    esp = esp + 0x14;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00140B40
 * Original: 0x00140B40 - 0x00140B9A (90 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140B40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00140B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140B83; /* jne: not equal / not zero */

loc_00140B4F: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x22B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140B77u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140B77: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140B83u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140B83: ;
    eax = MEM32(0xB2B870);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00140BA0
 * Original: 0x00140BA0 - 0x00140BFC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140BA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140BE8; /* jne: not equal / not zero */

loc_00140BB4: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x232;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140BDCu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140BDC: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140BE8u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140BE8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(0xB2B870);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140C00
 * Original: 0x00140C00 - 0x00140C13 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C00(void)
{
    uint32_t ebp = g_ebp;

loc_00140C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    MEM8(0xB2B879) = 1;
    MEM8(0xB2B878) = 0;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140C20
 * Original: 0x00140C20 - 0x00140D44 (292 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00140C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00140C3C; /* je: equal / zero */

loc_00140C2F: ;
    eax = MEM32(0xB2B870);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00140C70; /* jne: not equal / not zero */

loc_00140C3C: ;
    ecx = 0x4454D8;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140C64u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140C64: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140C70u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140C70: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00140CAF; /* je: equal / zero */

loc_00140C7B: ;
    ecx = 0x4648FF;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140CA3u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140CA3: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140CAFu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140CAF: ;
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00140CEC; /* jne: not equal / not zero */

loc_00140CB8: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x232;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140CE0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140CE0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140CECu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140CEC: ;
    eax = MEM32(0xB2B870);
    MEM32(eax + 0x18) = 0x3F800000;
    eax = MEM32(0xB2B870);
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(0xB2B870);
    MEM8(eax + 1) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140D12u); RECOMP_ABI_CALL(0x00140C00u, sub_00140C00); /* call 0x00140C00 */

loc_00140D12: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140D17u); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_00140D17: ;
    MEM16(ebp + -2) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(ebp + -8) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((!_cf && eax != 0)) goto loc_00140D3F; /* ja: above (unsigned >) */

loc_00140D27: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0x4A33DC);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x00140D33u) goto loc_00140D33;
    if (_jt == 0x00140D3Au) goto loc_00140D3A;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00140D33: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140D38u); RECOMP_ABI_CALL(0x00146260u, sub_00146260); /* call 0x00146260 */

loc_00140D38: ;
    goto loc_00140D3F;

loc_00140D3A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140D3Fu); RECOMP_ABI_CALL(0x00146340u, sub_00146340); /* call 0x00146340 */

loc_00140D3F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00140D50
 * Original: 0x00140D50 - 0x001412CD (1405 bytes, 369 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140D50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00140D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x78));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x78)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fa = (uint32_t)(MEM32(0xB2B870)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2B870), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00140D98; /* jne: not equal / not zero */

loc_00140D64: ;
    ecx = 0x450F49;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xCD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140D8Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140D8C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140D98u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140D98: ;
    eax = MEM32(0xB2B870);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001412BD; /* je: equal / zero */

loc_00140DA7: ;
    eax = MEM32(0xB2B870);
    xmm0 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(0xB2B870);
    MEM16(eax + 0x10) = 0;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014129F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00140DDA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140DDFu); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_00140DDF: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -80) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_00140EFB; /* ja: above (unsigned >) */

loc_00140DF2: ;
    eax = MEM32(ebp + -80);
    eax = MEM32(eax * 4 + 0x4A33EC);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x00140DFEu) goto loc_00140DFE;
    if (_jt == 0x00140E0Eu) goto loc_00140E0E;
    if (_jt == 0x00140E1Au) goto loc_00140E1A;
    if (_jt == 0x00140EF2u) goto loc_00140EF2;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00140DFE: ;
    MEM32(ebp + -4) = 0x1E;
    MEM8(ebp + -13) = 0;
    goto loc_00140F06;

loc_00140E0E: ;
    MEM32(ebp + -4) = 0x1E;
    goto loc_00140F02;

loc_00140E1A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140E1Fu); RECOMP_ABI_CALL(0x00208720u, sub_00208720); /* call 0x00208720 */

loc_00140E1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00140E2F; /* je: equal / zero */

loc_00140E23: ;
    MEM32(ebp + -4) = 0x1E;
    goto loc_00140F02;

loc_00140E2F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140E34u); RECOMP_ABI_CALL(0x00208A60u, sub_00208A60); /* call 0x00208A60 */

loc_00140E34: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140E42u); RECOMP_ABI_CALL(0x0020FF90u, sub_0020FF90); /* call 0x0020FF90 */

loc_00140E42: ;
    MEM32(ebp + -32) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140E4Au); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_00140E4A: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -32)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00140E8E; /* jbe: below or equal (unsigned <=) */

loc_00140E5A: ;
    ecx = 0x472E9C;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xF3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140E82u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00140E82: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140E8Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00140E8E: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00140EE9; /* jbe: below or equal (unsigned <=) */

loc_00140E94: ;
    eax = MEM32(ebp + -32);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -36)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -36))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x1E (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00140ECB; /* jge: greater or equal (signed >=) */

loc_00140EA8: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00140EC9; /* jg: greater (signed >) */

loc_00140EB4: ;
    eax = MEM32(ebp + -28);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140EC7u); RECOMP_ABI_CALL(0x00210A10u, sub_00210A10); /* call 0x00210A10 */

loc_00140EC7: ;
    goto loc_00140F02;

loc_00140EC9: ;
    goto loc_00140ED2;

loc_00140ECB: ;
    MEM32(ebp + -4) = 0x1E;

loc_00140ED2: ;
    eax = MEM32(ebp + -28);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140EE7u); RECOMP_ABI_CALL(0x00210A10u, sub_00210A10); /* call 0x00210A10 */

loc_00140EE7: ;
    goto loc_00140EF0;

loc_00140EE9: ;
    MEM32(ebp + -4) = 1;

loc_00140EF0: ;
    goto loc_00140F02;

loc_00140EF2: ;
    MEM32(ebp + -4) = 7;
    goto loc_00140F02;

loc_00140EFB: ;
    MEM32(ebp + -4) = 7;

loc_00140F02: ;
    MEM8(ebp + -13) = 1;

loc_00140F06: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(0xB2B870);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -12); /* mulss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00140F33u); RECOMP_ABI_CALL(0x003F61F0u, sub_003F61F0); /* call 0x003F61F0 */

loc_00140F33: ;
    MEMD(ebp + -72) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -24); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00140F5E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + -24)) */

loc_00140F52: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    goto loc_00140F6D;

loc_00140F5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    goto loc_00140F6D;

loc_00140F6D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00140F9E; /* jle: less or equal (signed <=) */

loc_00140F81: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00140F9C; /* je: equal / zero */

loc_00140F8D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -12); /* divss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */

loc_00140F9C: ;
    goto loc_00140F9E;

loc_00140F9E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + -12); /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(0xB2B870);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xB2B870);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00140FD6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_00140FC9: ;
    eax = MEM32(0xB2B870);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_00140FD6: ;
    eax = MEM32(0xB2B870);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00140FFB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00140FE8: ;
    eax = MEM32(0xB2B870);
    xmm0 = XMM_SCALAR(MEMF(0x43DE8C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0014102F; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_00140FFB: ;
    ecx = 0x47B54B;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x132;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141023u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00141023: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014102Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014102F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141034u); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_00141034: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00141110; /* jne: not equal / not zero */

loc_0014103E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141043u); RECOMP_ABI_CALL(0x00208720u, sub_00208720); /* call 0x00208720 */

loc_00141043: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00141110; /* jne: not equal / not zero */

loc_0014104B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141050u); RECOMP_ABI_CALL(0x001473D0u, sub_001473D0); /* call 0x001473D0 */

loc_00141050: ;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0014107E; /* jle: less or equal (signed <=) */

loc_0014105B: ;
    eax = MEM32(ebp + -40);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014106D; /* jge: greater or equal (signed >=) */

loc_00141066: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -88) = eax;
    goto loc_00141076;

loc_0014106D: ;
    eax = MEM32(ebp + -40);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -88) = eax;

loc_00141076: ;
    eax = MEM32(ebp + -88);
    MEM32(ebp + -8) = eax;
    goto loc_001410C4;

loc_0014107E: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001410AC; /* jge: greater or equal (signed >=) */

loc_00141089: ;
    eax = MEM32(ebp + -40);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014109B; /* jge: greater or equal (signed >=) */

loc_00141094: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -92) = eax;
    goto loc_001410A4;

loc_0014109B: ;
    eax = MEM32(ebp + -40);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -92) = eax;

loc_001410A4: ;
    eax = MEM32(ebp + -92);
    MEM32(ebp + -8) = eax;
    goto loc_001410C2;

loc_001410AC: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001410C0; /* jge: greater or equal (signed >=) */

loc_001410B7: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;

loc_001410C0: ;
    goto loc_001410C2;

loc_001410C2: ;
    goto loc_001410C4;

loc_001410C4: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00141100; /* jle: less or equal (signed <=) */

loc_001410CC: ;
    ecx = 0x44811F;
    eax = 0x478865;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x153;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001410F4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001410F4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141100u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00141100: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0014110E; /* jle: less or equal (signed <=) */

loc_00141108: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -8) = eax;

loc_0014110E: ;
    goto loc_00141110;

loc_00141110: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0014129D; /* jle: less or equal (signed <=) */

loc_0014111A: ;
    goto loc_0014111C;

loc_0014111C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -93) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0014113E; /* jle: less or equal (signed <=) */

loc_00141127: ;
    eax = MEM32(0xB2B870);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(0xB2B870);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(ebp + -93) = LO8(eax);

loc_0014113E: ;
    SET_LO8(eax, MEM8(ebp + -93));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00141147; /* jne: not equal / not zero */

loc_00141145: ;
    goto loc_00141160;

loc_00141147: ;
    eax = MEM32(0xB2B870);
    ecx = MEM32(eax + 0xC);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    goto loc_0014111C;

loc_00141160: ;
    eax = MEM32(0xB2B870);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141175u); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_00141175: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -100) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00141189; /* je: equal / zero */

loc_0014117D: ;
    goto loc_0014117F;

loc_0014117F: ;
    eax = MEM32(ebp + -100);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_00141197; /* je: equal / zero */

loc_00141187: ;
    goto loc_001411AD;

loc_00141189: ;
    eax = MEM32(ebp + -8);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141195u); RECOMP_ABI_CALL(0x00147450u, sub_00147450); /* call 0x00147450 */

loc_00141195: ;
    goto loc_001411AD;

loc_00141197: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014119Cu); RECOMP_ABI_CALL(0x00208A60u, sub_00208A60); /* call 0x00208A60 */

loc_0014119C: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001411ADu); RECOMP_ABI_CALL(0x0020EDB0u, sub_0020EDB0); /* call 0x0020EDB0 */

loc_001411AD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001411B2u); RECOMP_ABI_CALL(0x001473F0u, sub_001473F0); /* call 0x001473F0 */

loc_001411B2: ;
    MEM32(ebp + -48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001411BAu); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_001411BA: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001411D3; /* jne: not equal / not zero */

loc_001411C0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001411C5u); RECOMP_ABI_CALL(0x00208720u, sub_00208720); /* call 0x00208720 */

loc_001411C5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001411D3; /* je: equal / zero */

loc_001411CD: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -48) = eax;

loc_001411D3: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(0xB2B870);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00141253; /* jle: less or equal (signed <=) */

loc_001411E1: ;
    eax = MEM32(ebp + -48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -44) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001411F1; /* jle: less or equal (signed <=) */

loc_001411E9: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -104) = eax;
    goto loc_001411F7;

loc_001411F1: ;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -104) = eax;

loc_001411F7: ;
    eax = MEM32(ebp + -104);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -56);
    ecx = MEM32(0xB2B870);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x14)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx + 0x14))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -60) = 0;

loc_00141213: ;
    eax = MEM32(ebp + -60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -52) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00141251; /* jge: greater or equal (signed >=) */

loc_0014121B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141220u); RECOMP_ABI_CALL(0x001269B0u, sub_001269B0); /* call 0x001269B0 */

loc_00141220: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141225u); RECOMP_ABI_CALL(0x0001EB50u, sub_0001EB50); /* call 0x0001EB50 */

loc_00141225: ;
    eax = MEM32(0xB2B870);
    ecx = MEM32(eax + 0x14);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0xB2B870);
    ecx = MEM32(eax + 0xC);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(eax + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141246u); RECOMP_ABI_CALL(0x00016070u, sub_00016070); /* call 0x00016070 */

loc_00141246: ;
    eax = MEM32(ebp + -60);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -60) = eax;
    goto loc_00141213;

loc_00141251: ;
    goto loc_0014125A;

loc_00141253: ;
    MEM32(ebp + -52) = 0;

loc_0014125A: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(0xB2B870);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0xC)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx + 0xC))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -52);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014128Eu); RECOMP_ABI_CALL(0x001412D0u, sub_001412D0); /* call 0x001412D0 */

loc_0014128E: ;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(0xB2B870);
    MEM16(eax + 0x10) = LO16(ecx);

loc_0014129D: ;
    goto loc_0014129F;

loc_0014129F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001412A4u); RECOMP_ABI_CALL(0x00140B40u, sub_00140B40); /* call 0x00140B40 */

loc_001412A4: ;
    MEMF(ebp + -76) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001412BBu); RECOMP_ABI_CALL(0x00127890u, sub_00127890); /* call 0x00127890 */

loc_001412BB: ;
    goto loc_001412C8;

loc_001412BD: ;
    eax = MEM32(0xB2B870);
    MEM16(eax + 0x10) = 0;

loc_001412C8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x78)) >> 32) & 1);
    esp = esp + 0x78;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_001412D0
 * Original: 0x001412D0 - 0x00141601 (817 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001412D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_001412D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO8(eax, MEM8(ebp + 0x14));
    SET_LO16(eax, MEM16(ebp + 0x10));
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM8(0xB2B878)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2B878), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014137D; /* jne: not equal / not zero */

loc_001412F2: ;
    MEM16(0xB2B880) = 0;
    MEM16(0xB2B882) = 0;
    MEM16(0xB2B884) = 0x7FFF;
    MEM16(0xB2B886) = 0x8000;
    MEM16(0xB2B888) = 0;
    MEM16(0xB2B88A) = 0x7FFF;
    MEM16(0xB2B88C) = 0x8000;
    MEM16(0xB2B88E) = 0;
    MEM16(0xB2B890) = 0x7FFF;
    MEM16(0xB2B892) = 0x8000;
    MEM16(0xB2B894) = 0;
    MEM16(0xB2B896) = 0x7FFF;
    MEM16(0xB2B898) = 0x8000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014136Cu); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_0014136C: ;
    MEM32(0xB2B87C) = eax;
    MEM8(0xB2B878) = 1;
    goto loc_001415FC;

loc_0014137D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141382u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_00141382: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0xB2B87C)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(0xB2B87C))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM16(ebp + -2) = LO16(eax);
    SET_LO16(eax, MEM16(0xB2B880));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(0xB2B880) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = (uint32_t)(int32_t)SMEM16(0xB2B882);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(0xB2B882) = LO16(eax);
    eax = MEM32(ebp + -8);
    MEM32(0xB2B87C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B886);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001413D6; /* jle: less or equal (signed <=) */

loc_001413CC: ;
    SET_LO16(eax, MEM16(ebp + -2));
    MEM16(0xB2B886) = LO16(eax);

loc_001413D6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B884);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001413EF; /* jge: greater or equal (signed >=) */

loc_001413E5: ;
    SET_LO16(eax, MEM16(ebp + -2));
    MEM16(0xB2B884) = LO16(eax);

loc_001413EF: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(0xB2B888);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(0xB2B888) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0014141B; /* jle: less or equal (signed <=) */

loc_00141411: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(0xB2B88C) = LO16(eax);

loc_0014141B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B88A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00141434; /* jge: greater or equal (signed >=) */

loc_0014142A: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(0xB2B88A) = LO16(eax);

loc_00141434: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(0xB2B88E);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(0xB2B88E) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B892);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00141460; /* jle: less or equal (signed <=) */

loc_00141456: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(0xB2B892) = LO16(eax);

loc_00141460: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B890);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00141479; /* jge: greater or equal (signed >=) */

loc_0014146F: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(0xB2B890) = LO16(eax);

loc_00141479: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(0xB2B894);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(0xB2B894) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001414A5; /* jle: less or equal (signed <=) */

loc_0014149B: ;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(0xB2B898) = LO16(eax);

loc_001414A5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B896);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001414BE; /* jge: greater or equal (signed >=) */

loc_001414B4: ;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(0xB2B896) = LO16(eax);

loc_001414BE: ;
    eax = (uint32_t)(int32_t)SMEM16(0xB2B882);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001415FA; /* jl: less (signed <) */

loc_001414D0: ;
    eax = (uint32_t)(int32_t)SMEM16(0xB2B880);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001415FA; /* jle: less or equal (signed <=) */

loc_001414E0: ;
    _fa = (uint32_t)(MEM16(0xB2B88A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0xB2B88A), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001415E8; /* je: equal / zero */

loc_001414EE: ;
    eax = (uint32_t)(int32_t)SMEM16(0xB2B88A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM16(ebp + -10) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(0xB2B870);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00141549; /* je: equal / zero */

loc_00141516: ;
    SET_LO16(ecx, MEM16(ebp + -10));
    eax = MEM32(0xB2B870);
    MEM16(eax + 4) = LO16(ecx);
    eax = MEM32(0xB2B870);
    MEM16(eax + 6) = 0;
    SET_LO16(ecx, MEM16(ebp + -10));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((uint32_t)(LO16(ecx)) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(LO16(ecx)) - (uint32_t)(1)) & 0xFFFFu;
    _zf = (_zr == 0);
    SET_LO16(ecx, _zr); }
    SET_LO16(ecx, LO16(eax));
    { uint64_t _t = (uint64_t)(LO16(ecx)) + (uint64_t)(0x7FFF) + (uint64_t)_cf; _cf = (int)((_t >> 16) & 1); SET_LO16(ecx, (uint32_t)_t); }  /* adc */
    eax = MEM32(0xB2B870);
    MEM16(eax + 8) = LO16(ecx);

loc_00141549: ;
    eax = MEM32(0xB2B870);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00141565; /* je: equal / zero */

loc_00141559: ;
    goto loc_0014155B;

loc_0014155B: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0014158C; /* je: equal / zero */

loc_00141563: ;
    goto loc_001415B3;

loc_00141565: ;
    eax = (uint32_t)(int32_t)SMEM16(0xB2B88A);
    ecx = MEM32(0xB2B870);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0014158A; /* jle: less or equal (signed <=) */

loc_0014157A: ;
    SET_LO16(ecx, MEM16(0xB2B88A));
    eax = MEM32(0xB2B870);
    MEM16(eax + 8) = LO16(ecx);

loc_0014158A: ;
    goto loc_001415B3;

loc_0014158C: ;
    eax = (uint32_t)(int32_t)SMEM16(0xB2B88A);
    ecx = MEM32(0xB2B870);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001415B1; /* jge: greater or equal (signed >=) */

loc_001415A1: ;
    SET_LO16(ecx, MEM16(0xB2B88A));
    eax = MEM32(0xB2B870);
    MEM16(eax + 8) = LO16(ecx);

loc_001415B1: ;
    goto loc_001415B3;

loc_001415B3: ;
    eax = MEM32(0xB2B870);
    SET_LO16(ecx, MEM16(eax + 6));
    _cf = (int)((((uint64_t)(LO16(ecx)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 6) = LO16(ecx);
    eax = MEM32(0xB2B870);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001415E6; /* jne: not equal / not zero */

loc_001415D2: ;
    eax = MEM32(0xB2B870);
    MEM16(eax + 4) = 0xFFFF;
    MEM8(0xB2B878) = 0;
    goto loc_001415FC;

loc_001415E6: ;
    goto loc_001415F3;

loc_001415E8: ;
    eax = MEM32(0xB2B870);
    MEM16(eax + 4) = 0xFFFF;

loc_001415F3: ;
    MEM8(0xB2B878) = 0;

loc_001415FA: ;
    goto loc_001415FC;

loc_001415FC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141920
 * Original: 0x00141920 - 0x00141979 (89 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141920(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014193Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014193C: ;
    eax = MEM32(eax + 0x1C8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014196A; /* je: equal / zero */

loc_0014194B: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141960u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00141960: ;
    SET_LO16(eax, MEM16(eax + 2));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00141970;

loc_0014196A: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_00141970: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141980
 * Original: 0x00141980 - 0x001419B0 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141980(void)
{
    uint32_t ebp = g_ebp;

loc_00141980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x48C74C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x110;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001419A6u); RECOMP_ABI_CALL(0x00328600u, sub_00328600); /* call 0x00328600 */

loc_001419A6: ;
    MEM32(0xB2B8C4) = eax;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001419B0
 * Original: 0x001419B0 - 0x00141A16 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001419B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_001419B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001419CC; /* jl: less (signed <) */

loc_001419C3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00141A00; /* jl: less (signed <) */

loc_001419CC: ;
    ecx = 0x442680;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001419F4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001419F4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141A00u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00141A00: ;
    eax = MEM32(0xB2B8C4);
    eax = eax + 0x10;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141A20
 * Original: 0x00141A20 - 0x00141A25 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141A20(void)
{
    uint32_t ebp = g_ebp;

loc_00141A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141A30
 * Original: 0x00141A30 - 0x00141A35 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141A30(void)
{
    uint32_t ebp = g_ebp;

loc_00141A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141A40
 * Original: 0x00141A40 - 0x00141A77 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141A40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xB2B8C4);
    ecx = MEM32(eax + 0xC);
    ecx = ecx & 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00141A6A; /* jne: not equal / not zero */

loc_00141A5B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141A60u); RECOMP_ABI_CALL(0x001409B0u, sub_001409B0); /* call 0x001409B0 */

loc_00141A60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -1) = LO8(eax);

loc_00141A6A: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141A80
 * Original: 0x00141A80 - 0x00141AAF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141A80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141A9C; /* jne: not equal / not zero */

loc_00141A8C: ;
    eax = MEM32(0xB2B8C4);
    ecx = MEM32(eax + 0xC);
    ecx = ecx | 1;
    MEM32(eax + 0xC) = ecx;
    goto loc_00141AAA;

loc_00141A9C: ;
    eax = MEM32(0xB2B8C4);
    ecx = MEM32(eax + 0xC);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 0xC) = ecx;

loc_00141AAA: ;
    SET_LO8(eax, MEM8(ebp + 8));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141AB0
 * Original: 0x00141AB0 - 0x00141AFD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141AB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141ACDu); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00141ACD: ;
    MEM32(ebp + -4) = eax;
    edx = ZX16(MEM16(ebp + 0xC));
    eax = MEM32(ebp + -4);
    ecx = ZX16(MEM16(eax + 8));
    ecx = ecx | edx;
    MEM16(eax + 8) = LO16(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141AF8; /* je: equal / zero */

loc_00141AE7: ;
    edx = ZX16(MEM16(ebp + 0xC));
    eax = MEM32(ebp + -4);
    ecx = ZX16(MEM16(eax + 0xA));
    ecx = ecx | edx;
    MEM16(eax + 0xA) = LO16(ecx);

loc_00141AF8: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141B00
 * Original: 0x00141B00 - 0x00141B4E (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141B00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141B16u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00141B16: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x28);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141B2Fu); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_00141B2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141B3F; /* je: equal / zero */

loc_00141B34: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x28);
    MEM32(ebp + -4) = eax;
    goto loc_00141B46;

loc_00141B3F: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_00141B46: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141B50
 * Original: 0x00141B50 - 0x00141C30 (224 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141B50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00141B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141B66u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00141B66: ;
    MEM32(ebp + -4) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x43D8F0)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141C1E; /* je: equal / zero */

loc_00141B82: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141B97u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00141B97: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x756E6974;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141BAFu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00141BAF: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141BCDu); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_00141BCD: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141C0C; /* je: equal / zero */

loc_00141BD6: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1A0)); /* movss */
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141BFDu); RECOMP_ABI_CALL(0x001BE5D0u, sub_001BE5D0); /* call 0x001BE5D0 */

loc_00141BFD: ;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    goto loc_00141C1C;

loc_00141C0C: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1A0)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */

loc_00141C1C: ;
    goto loc_00141C1E;

loc_00141C1E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -28)); /* fld float */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00141C30
 * Original: 0x00141C30 - 0x00141DDD (429 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141C30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141C77; /* jne: not equal / not zero */

loc_00141C43: ;
    ecx = 0x47E1E5;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x402;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141C6Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00141C6B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141C77u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00141C77: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = 0;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141C8Du); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00141C8D: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM16(eax + 4) = 0xFFFF;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141DD8; /* je: equal / zero */

loc_00141CAF: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141CC4u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00141CC4: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141CDEu); RECOMP_ABI_CALL(0x0037C0E0u, sub_0037C0E0); /* call 0x0037C0E0 */

loc_00141CDE: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141DA4; /* je: equal / zero */

loc_00141CEE: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141D07u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_00141D07: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141DA2; /* je: equal / zero */

loc_00141D14: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141D29u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00141D29: ;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x17C;
    ecx = ecx + 0x168;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A0);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141D59u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00141D59: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0xCC);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x84;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 0x2A0));
    eax = MEM32(ebp + 0xC);
    MEM16(eax + 4) = LO16(ecx);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141D9Fu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00141D9F: ;
    MEM32(ebp + -8) = eax;

loc_00141DA2: ;
    goto loc_00141DA4;

loc_00141DA4: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141DD6; /* jne: not equal / not zero */

loc_00141DB0: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = 0x756E6974;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141DC5u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00141DC5: ;
    ecx = eax;
    ecx = ecx + 0x17C;
    ecx = ecx + 0x2C;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;

loc_00141DD6: ;
    goto loc_00141DD8;

loc_00141DD8: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00141DE0
 * Original: 0x00141DE0 - 0x00142020 (576 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141DE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00141DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x48)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM8(ebp + -1) = 1;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00141E03; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_00141DFF: ;
    MEM8(ebp + -1) = 0;

loc_00141E03: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0.d[0] = (double)(int32_t)eax; /* cvtsi2sd */
    xmm1.d[0] = xmm1.d[0] * xmm0.d[0]; /* mulsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00141E3C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00141E2F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    goto loc_00141ECA;

loc_00141E3C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = eax;
    { uint32_t _zr = ((uint32_t)(ecx) - 1u) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    xmm1.d[0] = (double)(int32_t)ecx; /* cvtsi2sd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.d[0] = (double)xmm1.f[0]; /* cvtss2sd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00141E98; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00141E79: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    goto loc_00141EC0;

loc_00141E98: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm1.d[0] = (double)(int32_t)eax; /* cvtsi2sd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */

loc_00141EC0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */

loc_00141ECA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00141EEE; /* jge: greater or equal (signed >=) */

loc_00141EE7: ;
    eax = 0; /* xor self */
    MEM32(ebp + -36) = eax;
    goto loc_00141F22;

loc_00141EEE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = SX16(eax); /* cwde */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00141F0F; /* jle: less or equal (signed <=) */

loc_00141F03: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -40) = eax;
    goto loc_00141F1C;

loc_00141F0F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -40) = eax;

loc_00141F1C: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -36) = eax;

loc_00141F22: ;
    eax = MEM32(ebp + -36);
    MEM16(ebp + -4) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    eax = eax + 1;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00141F47; /* jle: less or equal (signed <=) */

loc_00141F3B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -44) = eax;
    goto loc_00141F51;

loc_00141F47: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -44) = eax;

loc_00141F51: ;
    eax = MEM32(ebp + -44);
    MEM16(ebp + -6) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00141F7F; /* je: equal / zero */

loc_00141F5E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00141F7F; /* jl: less (signed <) */

loc_00141F67: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00141F7F; /* jg: greater (signed >) */

loc_00141F73: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00141FB3; /* jl: less (signed <) */

loc_00141F7F: ;
    ecx = 0x46783B;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141FA7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00141FA7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141FB3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00141FB3: ;
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + ecx * 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + ecx * 4); /* addss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014200E; /* je: equal / zero */

loc_00141FF7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_0014200E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -16)); /* fld float */
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00142020
 * Original: 0x00142020 - 0x001420C9 (169 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142020(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142051; /* je: equal / zero */

loc_00142037: ;
    eax = ZX8(MEM8(0x583F78));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142051; /* je: equal / zero */

loc_00142043: ;
    eax = 0x583F70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142051u); RECOMP_ABI_CALL(0x001006A0u, sub_001006A0); /* call 0x001006A0 */

loc_00142051: ;
    MEM32(esp) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014205Du); RECOMP_ABI_CALL(0x00249480u, sub_00249480); /* call 0x00249480 */

loc_0014205D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142062u); RECOMP_ABI_CALL(0x00146AF0u, sub_00146AF0); /* call 0x00146AF0 */

loc_00142062: ;
    MEM16(ebp + -2) = 0;

loc_00142068: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00142097; /* jge: greater or equal (signed >=) */

loc_00142071: ;
    SET_LO16(eax, MEM16(ebp + -2));
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142089u); RECOMP_ABI_CALL(0x001420D0u, sub_001420D0); /* call 0x001420D0 */

loc_00142089: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00142068;

loc_00142097: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014209Cu); RECOMP_ABI_CALL(0x002495B0u, sub_002495B0); /* call 0x002495B0 */

loc_0014209C: ;
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001420C2; /* je: equal / zero */

loc_001420A8: ;
    eax = ZX8(MEM8(0x583F78));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001420C2; /* je: equal / zero */

loc_001420B4: ;
    eax = 0x583F70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001420C2u); RECOMP_ABI_CALL(0x00100990u, sub_00100990); /* call 0x00100990 */

loc_001420C2: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001420D0
 * Original: 0x001420D0 - 0x00142AC6 (2550 bytes, 639 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001420D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_001420D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x84)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001420EFu); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_001420EF: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001420F7u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_001420F7: ;
    eax = eax + 0x110;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142116u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00142116: ;
    MEM32(ebp + -12) = eax;
    eax = ebp + -44;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFA;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142134u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00142134: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = ebp + -44;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142155u); RECOMP_ABI_CALL(0x001440C0u, sub_001440C0); /* call 0x001440C0 */

loc_00142155: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142161u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_00142161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142274; /* je: equal / zero */

loc_0014216A: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014217Cu); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_0014217C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001421EE; /* jne: not equal / not zero */

loc_00142180: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x46D5B5;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001421BEu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_001421BE: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2CE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001421E2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001421E2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001421EEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001421EE: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142200u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00142200: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142272; /* jne: not equal / not zero */

loc_00142204: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x44011F;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142242u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00142242: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2CF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142266u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00142266: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142272u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00142272: ;
    goto loc_00142274;

loc_00142274: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142280u); RECOMP_ABI_CALL(0x000ED030u, sub_000ED030); /* call 0x000ED030 */

loc_00142280: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001422A1; /* je: equal / zero */

loc_00142284: ;
    eax = ebp + -44;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001422A1u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001422A1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001422A6u); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_001422A6: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142339; /* jne: not equal / not zero */

loc_001422B0: ;
    eax = MEM32(ebp + -16);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001422C6; /* jne: not equal / not zero */

loc_001422BB: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142317; /* je: equal / zero */

loc_001422C6: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001422E3; /* je: equal / zero */

loc_001422D1: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001422DEu); RECOMP_ABI_CALL(0x003796A0u, sub_003796A0); /* call 0x003796A0 */

loc_001422DE: ;
    MEM32(ebp + -100) = eax;
    goto loc_001422F3;

loc_001422E3: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001422F0u); RECOMP_ABI_CALL(0x003797C0u, sub_003797C0); /* call 0x003797C0 */

loc_001422F0: ;
    MEM32(ebp + -100) = eax;

loc_001422F3: ;
    eax = MEM32(ebp + -100);
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142315; /* je: equal / zero */

loc_001422FF: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + -52);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142315u); RECOMP_ABI_CALL(0x00149100u, sub_00149100); /* call 0x00149100 */

loc_00142315: ;
    goto loc_00142317;

loc_00142317: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142337; /* je: equal / zero */

loc_00142322: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142337; /* je: equal / zero */

loc_0014232A: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142337u); RECOMP_ABI_CALL(0x00383D50u, sub_00383D50); /* call 0x00383D50 */

loc_00142337: ;
    goto loc_00142339;

loc_00142339: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014271D; /* je: equal / zero */

loc_00142345: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014235Au); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014235A: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -56);
    eax = MEM32(eax);
    MEM32(esp) = 0x756E6974;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142372u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00142372: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -56);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014238Du); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_0014238D: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001423B9; /* je: equal / zero */

loc_0014239C: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001423B4u); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_001423B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001423CA; /* jne: not equal / not zero */

loc_001423B9: ;
    eax = MEM32(ebp + -56);
    SET_LO16(ecx, MEM16(eax + 0x2A4));
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x20) = LO16(ecx);

loc_001423CA: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001423FE; /* jne: not equal / not zero */

loc_001423D5: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001423EDu); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_001423ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001423FE; /* je: equal / zero */

loc_001423F2: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142442; /* jne: not equal / not zero */

loc_001423FE: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax);
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 0x20));
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(esp) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014242Fu); RECOMP_ABI_CALL(0x00384000u, sub_00384000); /* call 0x00384000 */

loc_0014242F: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x20) = LO16(ecx);
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x24) = 0xFFFF;

loc_00142442: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014244Fu); RECOMP_ABI_CALL(0x00373D50u, sub_00373D50); /* call 0x00373D50 */

loc_0014244F: ;
    MEM16(ebp + -58) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014247F; /* je: equal / zero */

loc_0014245C: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014247F; /* je: equal / zero */

loc_0014246B: ;
    SET_LO16(ecx, MEM16(ebp + -58));
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x20) = LO16(ecx);
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x24) = 0xFFFF;

loc_0014247F: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001424A9; /* je: equal / zero */

loc_0014248B: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001424A3u); RECOMP_ABI_CALL(0x00373AF0u, sub_00373AF0); /* call 0x00373AF0 */

loc_001424A3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001424BD; /* jne: not equal / not zero */

loc_001424A9: ;
    eax = MEM32(ebp + -56);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x2CD);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x22) = LO16(ecx);

loc_001424BD: ;
    eax = MEM32(ebp + -16);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001424F2; /* jne: not equal / not zero */

loc_001424C8: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001424E0u); RECOMP_ABI_CALL(0x00373AF0u, sub_00373AF0); /* call 0x00373AF0 */

loc_001424E0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001424F2; /* je: equal / zero */

loc_001424E6: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014251C; /* jne: not equal / not zero */

loc_001424F2: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142512u); RECOMP_ABI_CALL(0x00373C20u, sub_00373C20); /* call 0x00373C20 */

loc_00142512: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x22) = LO16(ecx);

loc_0014251C: ;
    eax = MEM32(ebp + -16);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142563; /* je: equal / zero */

loc_00142527: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014252Cu); RECOMP_ABI_CALL(0x00141A40u, sub_00141A40); /* call 0x00141A40 */

loc_0014252C: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142563; /* je: equal / zero */

loc_00142534: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142563; /* je: equal / zero */

loc_0014253A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014253Fu); RECOMP_ABI_CALL(0x00103DB0u, sub_00103DB0); /* call 0x00103DB0 */

loc_0014253F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142563; /* jne: not equal / not zero */

loc_00142543: ;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142559u); RECOMP_ABI_CALL(0x001BE270u, sub_001BE270); /* call 0x001BE270 */

loc_00142559: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x24) = LO16(ecx);

loc_00142563: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014256Fu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_0014256F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001425BB; /* jne: not equal / not zero */

loc_00142573: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    MEMF(0x584568) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001425ABu); RECOMP_ABI_CALL(0x001436E0u, sub_001436E0); /* call 0x001436E0 */

loc_001425AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(0x584568) = xmm0.f[0]; /* movss */

loc_001425BB: ;
    eax = MEM32(ebp + -56);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142714; /* jne: not equal / not zero */

loc_001425CB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001425D7u); RECOMP_ABI_CALL(0x0018BD90u, sub_0018BD90); /* call 0x0018BD90 */

loc_001425D7: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001426F4; /* je: equal / zero */

loc_001425E3: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001426F4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014260C: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -28); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001426F4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -28)) */

loc_0014261E: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x30); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001426F4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x30)) */

loc_00142633: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax * 4 + 0xB2B8C8); /* addss */
    MEMF(eax * 4 + 0xB2B8C8) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = (int32_t)MEMF(eax * 4 + 0xB2B8C8); /* cvttss2si */
    MEM32(ebp + -64) = eax;
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -64); /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0xB2B8C8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax * 4 + 0xB2B8C8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x27);
    eax = eax + MEM32(ebp + -64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0014269B; /* jge: greater or equal (signed >=) */

loc_00142694: ;
    eax = 0; /* xor self */
    MEM32(ebp + -104) = eax;
    goto loc_001426C7;

loc_0014269B: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x27);
    eax = eax + MEM32(ebp + -64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_001426B4; /* jle: less or equal (signed <=) */

loc_001426AA: ;
    eax = 0x7F;
    MEM32(ebp + -108) = eax;
    goto loc_001426C1;

loc_001426B4: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x27);
    eax = eax + MEM32(ebp + -64);
    MEM32(ebp + -108) = eax;

loc_001426C1: ;
    eax = MEM32(ebp + -108);
    MEM32(ebp + -104) = eax;

loc_001426C7: ;
    eax = MEM32(ebp + -104);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x27) = LO8(ecx);
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x27);
    ecx = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x6E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x26) = LO8(ecx);
    goto loc_00142712;

loc_001426F4: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax * 4 + 0xB2B8C8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x27) = 0;
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x26) = 0;

loc_00142712: ;
    goto loc_0014271B;

loc_00142714: ;
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x26) = 0;

loc_0014271B: ;
    goto loc_0014271D;

loc_0014271D: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -40);
    MEM32(eax + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142754u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00142754: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001427C6; /* jne: not equal / not zero */

loc_00142758: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x475857;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142796u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00142796: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x351;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427BAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001427BA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427C6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001427C6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427D2u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_001427D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00142ABD; /* je: equal / zero */

loc_001427DB: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427EDu); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_001427ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014285F; /* jne: not equal / not zero */

loc_001427F1: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x46D5B5;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014282Fu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_0014282F: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x35D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142853u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00142853: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014285Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014285F: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142871u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00142871: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001428E3; /* jne: not equal / not zero */

loc_00142875: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x44011F;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001428B3u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_001428B3: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x35E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001428D7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001428D7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001428E3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001428E3: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001428F5u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_001428F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142967; /* jne: not equal / not zero */

loc_001428F9: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x475857;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142937u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00142937: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x35F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014295Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014295B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142967u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00142967: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -92) = ecx;
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 0x20));
    MEM16(ebp + -72) = LO16(eax);
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 0x22));
    MEM16(ebp + -70) = LO16(eax);
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 0x24));
    MEM16(ebp + -68) = LO16(eax);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x14);
    MEM32(ebp + -84) = ecx;
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001429CBu); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_001429CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142A37; /* jne: not equal / not zero */

loc_001429CF: ;
    eax = MEM32(ebp + -88);
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x453990;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142A07u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00142A07: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x369;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142A2Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00142A2B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142A37u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00142A37: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142A46u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00142A46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00142AB2; /* jne: not equal / not zero */

loc_00142A4A: ;
    eax = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x4924AF;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142A82u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00142A82: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x36A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142AA6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00142AA6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142AB2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00142AB2: ;
    eax = ebp + -96;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142ABDu); RECOMP_ABI_CALL(0x00146A00u, sub_00146A00); /* call 0x00146A00 */

loc_00142ABD: ;
    esp = esp + 0x84;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142AD0
 * Original: 0x00142AD0 - 0x00142AFB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142AD0(void)
{
    uint32_t ebp = g_ebp;

loc_00142AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142AE6u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00142AE6: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142AF6u); RECOMP_ABI_CALL(0x00379AC0u, sub_00379AC0); /* call 0x00379AC0 */

loc_00142AF6: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142B00
 * Original: 0x00142B00 - 0x00142B68 (104 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142B00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00142B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00142B1C; /* jl: less (signed <) */

loc_00142B13: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00142B50; /* jl: less (signed <) */

loc_00142B1C: ;
    ecx = 0x442680;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142B44u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00142B44: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142B50u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00142B50: ;
    eax = MEM32(0xB2B8C4);
    eax = eax + 0x10;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142B70
 * Original: 0x00142B70 - 0x00142BA6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142B70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebp + -2) = 0xFFFF;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B9D; /* je: equal / zero */

loc_00142B89: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142B95u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00142B95: ;
    SET_LO16(eax, MEM16(eax + 0x24));
    MEM16(ebp + -2) = LO16(eax);

loc_00142B9D: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142BB0
 * Original: 0x00142BB0 - 0x00142C1F (111 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142BB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00142BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00142BCC; /* jl: less (signed <) */

loc_00142BC3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00142C00; /* jl: less (signed <) */

loc_00142BCC: ;
    ecx = 0x442680;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142BF4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00142BF4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142C00u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00142C00: ;
    eax = MEM32(0xB2B8C4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0x3C)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00142C20
 * Original: 0x00142C20 - 0x00142CA5 (133 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142C39u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00142C39: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142C6B; /* jne: not equal / not zero */

loc_00142C4D: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142C63u); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_00142C63: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142C9D; /* jne: not equal / not zero */

loc_00142C6B: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142C84u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00142C84: ;
    ecx = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142C9Au); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_00142C9A: ;
    MEM32(ebp + -8) = eax;

loc_00142C9D: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142CB0
 * Original: 0x00142CB0 - 0x00142CEA (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142CB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM16(ebp + -2) = 0;

loc_00142CBC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00142CE5; /* jge: greater or equal (signed >=) */

loc_00142CC5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142CD1u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00142CD1: ;
    MEM16(eax + 0x24) = 0xFFFF;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00142CBC;

loc_00142CE5: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142CF0
 * Original: 0x00142CF0 - 0x00142D61 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142CF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142D0Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00142D0C: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x1C8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142D5C; /* je: equal / zero */

loc_00142D21: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142D36u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00142D36: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142D5A; /* je: equal / zero */

loc_00142D45: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142D54u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00142D54: ;
    MEM16(eax + 0x24) = 0xFFFF;

loc_00142D5A: ;
    goto loc_00142D5C;

loc_00142D5C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142D70
 * Original: 0x00142D70 - 0x00142E43 (211 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142D70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00142D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142D86u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00142D86: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142D9Bu); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00142D9B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142E04; /* je: equal / zero */

loc_00142DA3: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00142E04; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_00142DB4: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00142E04; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00142DC9: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142DDBu); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00142DDB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142E04; /* je: equal / zero */

loc_00142DE3: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00142E04; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_00142DF4: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_00142E38; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00142E04: ;
    ecx = 0x48991F;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3C0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142E2Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00142E2C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142E38u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00142E38: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xC;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142E50
 * Original: 0x00142E50 - 0x00142E6F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142E50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(ebp + 8);
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F800000 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142E70
 * Original: 0x00142E70 - 0x00142EBC (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142E70(void)
{
    uint32_t ebp = g_ebp;

loc_00142E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142E89u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_00142E89: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142E9Eu); RECOMP_ABI_CALL(0x00142D70u, sub_00142D70); /* call 0x00142D70 */

loc_00142E9E: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142EB4u); RECOMP_ABI_CALL(0x0014C570u, sub_0014C570); /* call 0x0014C570 */

loc_00142EB4: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142EC0
 * Original: 0x00142EC0 - 0x00142F3F (127 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142EC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142EE0u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00142EE0: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x1C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142F3A; /* je: equal / zero */

loc_00142EEF: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x1C8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142F0Au); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00142F0A: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142F38; /* je: equal / zero */

loc_00142F19: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(ebp + -10) = LO16(eax);
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142F30u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00142F30: ;
    SET_LO16(ecx, MEM16(ebp + -10));
    MEM16(eax + 0x20) = LO16(ecx);

loc_00142F38: ;
    goto loc_00142F3A;

loc_00142F3A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00142FF0
 * Original: 0x00142FF0 - 0x0014302B (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142FF0(void)
{
    uint32_t ebp = g_ebp;

loc_00142FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143030
 * Original: 0x00143030 - 0x00143057 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143030(void)
{
    uint32_t ebp = g_ebp;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00143030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0.d[0] = sqrt(xmm0.d[0]); /* sqrtsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00143060
 * Original: 0x00143060 - 0x001431C1 (353 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143060(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00143060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014307Au); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_0014307A: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0xC;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143092u); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_00143092: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001430A4u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_001430A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143116; /* jne: not equal / not zero */

loc_001430A8: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x48410C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001430E6u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_001430E6: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xBB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014310Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014310A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143116u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00143116: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143128u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00143128: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014319A; /* jne: not equal / not zero */

loc_0014312C: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x45BF33;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014316Au); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_0014316A: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xBC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014318Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014318E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014319Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014319A: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001431BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_001431A6: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_001431BB: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001431D0
 * Original: 0x001431D0 - 0x0014330B (315 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001431D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001431D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001431E9u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_001431E9: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143209u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00143209: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x20) = 0xFFFF;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x22) = 0xFFFF;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x24) = 0xFFFF;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x26) = 0;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x28) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    MEM16(eax + 8) = 0;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0xA) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143306; /* je: equal / zero */

loc_00143279: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014328Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014328C: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0xC;
    eax = MEM32(ebp + -8);
    eax = eax + 0x1A4;
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001432ACu); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_001432AC: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001432CD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_001432B8: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_001432CD: ;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 0x2A4));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x20) = LO16(ecx);
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x2CD);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x22) = LO16(ecx);
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x2D1);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x24) = LO16(ecx);

loc_00143306: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143310
 * Original: 0x00143310 - 0x00143334 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143310(void)
{
    uint32_t ebp = g_ebp;

loc_00143310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(0xB2B8C4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(eax) = 0;
    eax = MEM32(ebp + -4);
    MEM32(eax + 4) = 0;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143340
 * Original: 0x00143340 - 0x0014337C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(0xB2B8C4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    ecx = ecx | 4;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 4;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143380
 * Original: 0x00143380 - 0x001433BC (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143380(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(0xB2B8C4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    ecx = ecx | 8;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 8;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001433C0
 * Original: 0x001433C0 - 0x001433FC (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001433C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001433C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(0xB2B8C4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    ecx = ecx | 1;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 1;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143400
 * Original: 0x00143400 - 0x0014341A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143400(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143420
 * Original: 0x00143420 - 0x0014343A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143420(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143440
 * Original: 0x00143440 - 0x0014345A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143460
 * Original: 0x00143460 - 0x0014347A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143460(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143480
 * Original: 0x00143480 - 0x0014349C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001434A0
 * Original: 0x001434A0 - 0x001434BC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001434A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001434A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001434C0
 * Original: 0x001434C0 - 0x001434DC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001434C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001434C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001434E0
 * Original: 0x001434E0 - 0x001434FC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001434E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001434E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143500
 * Original: 0x00143500 - 0x00143521 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143500(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax & 0x7800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143530
 * Original: 0x00143530 - 0x00143551 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143530(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB2B8C4);
    eax = MEM32(eax);
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143560
 * Original: 0x00143560 - 0x00143653 (243 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143560(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00143560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xB2B8C4);
    MEM32(eax + 4) = 0;
    eax = MEM32(0xB2B8C4);
    MEM32(eax) = 0;
    eax = MEM32(0xB2B8C4);
    MEM32(eax + 8) = 0;
    eax = MEM32(0xB2B8C4);
    MEM32(eax + 0xC) = 0;
    MEM16(ebp + -2) = 0;

loc_0014359B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014364E; /* jge: greater or equal (signed >=) */

loc_001435A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001435ADu); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_001435AD: ;
    eax = eax + 0x110;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001435CCu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_001435CC: ;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001435E3u); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_001435E3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0xB2B8B0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0014360F; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_001435F8: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0014360F; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_001435FA: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEMF(eax * 4 + 0xB2B8B0) = xmm0.f[0]; /* movss */

loc_0014360F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0xB2B8A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0014363B; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00143624: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0014363B; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00143626: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEMF(eax * 4 + 0xB2B8A0) = xmm0.f[0]; /* movss */

loc_0014363B: ;
    goto loc_0014363D;

loc_0014363D: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_0014359B;

loc_0014364E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00143660
 * Original: 0x00143660 - 0x001436D4 (116 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001436A7; /* jne: not equal / not zero */

loc_00143673: ;
    ecx = 0x47583B;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x467;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014369Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014369B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001436A7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001436A7: ;
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001436CFu); RECOMP_ABI_CALL(0x001436E0u, sub_001436E0); /* call 0x001436E0 */

loc_001436CF: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001436E0
 * Original: 0x001436E0 - 0x001440BE (2526 bytes, 523 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001436E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001436E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x144;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143704u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00143704: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014370Cu); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0014370C: ;
    eax = eax + 0x110;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014372Bu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014372B: ;
    MEM32(ebp + -12) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014375Au); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_0014375A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001437C3; /* je: equal / zero */

loc_00143762: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_001437C3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_00143773: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_001437C3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143788: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014379Au); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_0014379A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001437C3; /* je: equal / zero */

loc_001437A2: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_001437C3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_001437B3: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_001437F7; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001437C3: ;
    ecx = 0x48991F;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x494;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001437EBu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001437EB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001437F7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001437F7: ;
    eax = ebp + -36;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014380Au); RECOMP_ABI_CALL(0x00141C30u, sub_00141C30); /* call 0x00141C30 */

loc_0014380A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143A97; /* je: equal / zero */

loc_00143829: ;
    eax = MEM32(ebp + -36);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014383Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014383C: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -48);
    eax = MEM32(eax);
    MEM32(esp) = 0x756E6974;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143854u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00143854: ;
    MEM32(ebp + -52) = eax;
    ecx = MEM32(ebp + -52);
    ecx = ecx + 0x17C;
    ecx = ecx + 0x168;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -32);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014387Eu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014387E: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -56);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_001438B0; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00143894: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_001438B0; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00143896: ;
    eax = MEM32(ebp + -56);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_001438B0; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_001438A9: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_001438B0; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_001438AB: ;
    goto loc_00143A95;

loc_001438B0: ;
    edx = MEM32(ebp + -36);
    ecx = MEM32(ebp + -56);
    ecx = ecx + 0x24;
    eax = ebp + -164;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001438D7u); RECOMP_ABI_CALL(0x00225CA0u, sub_00225CA0); /* call 0x00225CA0 */

loc_001438D7: ;
    eax = ebp + -164;
    eax = eax + 0x38;
    eax = eax + 4;
    ecx = ebp + -172;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001438F5u); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_001438F5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -172)); /* movss */
    eax = MEM32(ebp + -56);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xF0); /* addss */
    MEMF(ebp + -176) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -172)); /* movss */
    eax = MEM32(ebp + -56);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xF4); /* addss */
    MEMF(ebp + -180) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -176)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -180)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014394Bu); RECOMP_ABI_CALL(0x00145B90u, sub_00145B90); /* call 0x00145B90 */

loc_0014394B: ;
    MEMF(ebp + -240) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -240)); /* movss */
    MEMF(ebp + -184) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -180)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143981u); RECOMP_ABI_CALL(0x00145B90u, sub_00145B90); /* call 0x00145B90 */

loc_00143981: ;
    MEMF(ebp + -236) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -236)); /* movss */
    MEMF(ebp + -188) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -176)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001439B7u); RECOMP_ABI_CALL(0x00145B90u, sub_00145B90); /* call 0x00145B90 */

loc_001439B7: ;
    MEMF(ebp + -232) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -232)); /* movss */
    MEMF(ebp + -192) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -184); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001439F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -184)) */

loc_001439D9: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -184); /* addss */
    MEMF(ebp + -184) = xmm0.f[0]; /* movss */

loc_001439F1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -188)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00143A16; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143A01: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -188)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -184)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00143A93; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143A16: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -192)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00143A3B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143A26: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -192)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -184)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00143A93; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143A3B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -192)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR(MEMF(ebp + -188)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm2 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm2); /* pand */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143A81; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143A6F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -176)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00143A91;

loc_00143A81: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -180)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_00143A91: ;
    goto loc_00143A93;

loc_00143A93: ;
    goto loc_00143A95;

loc_00143A95: ;
    goto loc_00143A97;

loc_00143A97: ;
    goto loc_00143A99;

loc_00143A99: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143ABC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_00143AA5: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00143A99;

loc_00143ABC: ;
    goto loc_00143ABE;

loc_00143ABE: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143AEE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143AD3: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00143ABE;

loc_00143AEE: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143FCB; /* je: equal / zero */

loc_00143AF8: ;
    eax = MEM32(ebp + -36);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143B0Bu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00143B0B: ;
    MEM32(ebp + -196) = eax;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    MEMF(ebp + -200) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00143B4A; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00143B31: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00143B4A; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00143B33: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00143B4A; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00143B43: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00143B4A; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00143B45: ;
    goto loc_00143D24;

loc_00143B4A: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143C48; /* je: equal / zero */

loc_00143B71: ;
    eax = MEM32(ebp + -196);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D9DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143C48; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143B8D: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ebp + -208) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -204) = xmm0.f[0]; /* movss */
    ecx = ebp + -220;
    eax = ebp + -208;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143BC0u); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_00143BC0: ;
    eax = MEM32(ebp + -196);
    eax = eax + 4;
    eax = eax + 0x2C;
    ecx = ebp + -220;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143BDEu); RECOMP_ABI_CALL(0x001DB4E0u, sub_001DB4E0); /* call 0x001DB4E0 */

loc_00143BDE: ;
    MEMF(ebp + -244) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -244)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -224) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -224)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -224)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -224)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -200)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -200) = xmm0.f[0]; /* movss */

loc_00143C48: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -40); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143C68; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -40)) */

loc_00143C56: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    MEMF(ebp + -256) = xmm0.f[0]; /* movss */
    goto loc_00143CA9;

loc_00143C68: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143C8C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143C7A: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    MEMF(ebp + -260) = xmm0.f[0]; /* movss */
    goto loc_00143C99;

loc_00143C8C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    MEMF(ebp + -260) = xmm0.f[0]; /* movss */

loc_00143C99: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -260)); /* movss */
    MEMF(ebp + -256) = xmm0.f[0]; /* movss */

loc_00143CA9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -256)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -44); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143CD6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -44)) */

loc_00143CC4: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA40)); /* movss */
    MEMF(ebp + -264) = xmm0.f[0]; /* movss */
    goto loc_00143D17;

loc_00143CD6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00143CFA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00143CE8: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DB9C)); /* movss */
    MEMF(ebp + -268) = xmm0.f[0]; /* movss */
    goto loc_00143D07;

loc_00143CFA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -268) = xmm0.f[0]; /* movss */

loc_00143D07: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    MEMF(ebp + -264) = xmm0.f[0]; /* movss */

loc_00143D17: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -264)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */

loc_00143D24: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -200)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00143D46; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00143D34: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00143D46; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00143D36: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 0x26));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143FC9; /* je: equal / zero */

loc_00143D46: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -200); /* subss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E710)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -228) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143D8Fu); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00143D8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143E01; /* jne: not equal / not zero */

loc_00143D93: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x46D5B5;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143DD1u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00143DD1: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4F2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143DF5u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00143DF5: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143E01u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00143E01: ;
    xmm0 = XMM_SCALAR(MEMF(0x584568)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -228); /* mulss */
    MEMF(ebp + -228) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -200)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00143E30; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00143E29: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00143E30; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00143E2B: ;
    goto loc_00143EBC;

loc_00143E30: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0xC;
    eax = eax + 4;
    MEM32(ebp + -276) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -200)); /* movss */
    MEMF(ebp + -272) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DBA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -228); /* mulss */
    MEMF(ebp + -280) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -196);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143E7Bu); RECOMP_ABI_CALL(0x00145CB0u, sub_00145CB0); /* call 0x00145CB0 */

loc_00143E7B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -280)); /* movss */
    eax = MEM32(ebp + -276);
    xmm1 = XMM_SCALAR(MEMF(ebp + -272)); /* movss */
    MEMF(ebp + -252) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(ebp + -252)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143EB7u); RECOMP_ABI_CALL(0x00145C10u, sub_00145C10); /* call 0x00145C10 */

loc_00143EB7: ;
    goto loc_00143F43;

loc_00143EBC: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0xC;
    eax = eax + 4;
    MEM32(ebp + -288) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -200)); /* movss */
    MEMF(ebp + -284) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -228)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x54); /* mulss */
    MEMF(ebp + -292) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -196);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143F07u); RECOMP_ABI_CALL(0x00145CB0u, sub_00145CB0); /* call 0x00145CB0 */

loc_00143F07: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -292)); /* movss */
    eax = MEM32(ebp + -288);
    xmm1 = XMM_SCALAR(MEMF(ebp + -284)); /* movss */
    MEMF(ebp + -248) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(ebp + -248)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143F43u); RECOMP_ABI_CALL(0x00145C10u, sub_00145C10); /* call 0x00145C10 */

loc_00143F43: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143F55u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00143F55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143FC7; /* jne: not equal / not zero */

loc_00143F59: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x46D5B5;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143F97u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00143F97: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4FD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143FBBu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00143FBB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143FC7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00143FC7: ;
    goto loc_00143FC9;

loc_00143FC9: ;
    goto loc_00143FCB;

loc_00143FCB: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x38;
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D580)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x584568); /* mulss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143FFAu); RECOMP_ABI_CALL(0x00145C10u, sub_00145C10); /* call 0x00145C10 */

loc_00143FFA: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x3C;
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D580)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x584568); /* mulss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144029u); RECOMP_ABI_CALL(0x00145C10u, sub_00145C10); /* call 0x00145C10 */

loc_00144029: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144062; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144050: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(ebp + -296) = xmm0.f[0]; /* movss */
    goto loc_001440A5;

loc_00144062: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + -8);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x3C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144085; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x3C)) */

loc_00144073: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    MEMF(ebp + -300) = xmm0.f[0]; /* movss */
    goto loc_00144095;

loc_00144085: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(ebp + -300) = xmm0.f[0]; /* movss */

loc_00144095: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -300)); /* movss */
    MEMF(ebp + -296) = xmm0.f[0]; /* movss */

loc_001440A5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -296)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    esp = esp + 0x144;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_001440C0
 * Original: 0x001440C0 - 0x001457BC (5884 bytes, 1363 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001440C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_001440C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x150)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001440E3u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_001440E3: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001440F1u); RECOMP_ABI_CALL(0x001457C0u, sub_001457C0); /* call 0x001457C0 */

loc_001440F1: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145723; /* je: equal / zero */

loc_001440FB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144107u); RECOMP_ABI_CALL(0x001419B0u, sub_001419B0); /* call 0x001419B0 */

loc_00144107: ;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014411Fu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014411F: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    SET_LO16(eax, MEM16(eax + 2));
    MEM16(ebp + -22) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    ecx = (uint32_t)(int32_t)SMEM16(0xB2B89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -23) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001451FE; /* je: equal / zero */

loc_00144152: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014415Eu); RECOMP_ABI_CALL(0x0016B140u, sub_0016B140); /* call 0x0016B140 */

loc_0014415E: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001451FE; /* je: equal / zero */

loc_0014416A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014416Fu); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0014416F: ;
    eax = eax + 0x110;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014418Eu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014418E: ;
    MEM32(ebp + -28) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014419Du); RECOMP_ABI_CALL(0x0016B1B0u, sub_0016B1B0); /* call 0x0016B1B0 */

loc_0014419D: ;
    MEM32(ebp + -32) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001441ACu); RECOMP_ABI_CALL(0x00169860u, sub_00169860); /* call 0x00169860 */

loc_001441AC: ;
    MEM32(ebp + -36) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144354; /* je: equal / zero */

loc_001441CC: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001441E2u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_001441E2: ;
    MEM32(ebp + -48) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43DD40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax * 4 + 0xB2B8A0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43DAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43DD40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax * 4 + 0xB2B8B0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43DAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -48);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144352; /* je: equal / zero */

loc_00144259: ;
    eax = MEM32(ebp + -48);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144352; /* je: equal / zero */

loc_0014426C: ;
    eax = MEM32(ebp + -48);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144285u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00144285: ;
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -52);
    eax = MEM32(eax);
    MEM32(esp) = 0x756E6974;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014429Du); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014429D: ;
    MEM32(ebp + -56) = eax;
    ecx = MEM32(ebp + -56);
    ecx = ecx + 0x17C;
    ecx = ecx + 0x168;
    eax = MEM32(ebp + -48);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A0);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001442CDu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_001442CD: ;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -60);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014430D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001442E0: ;
    eax = MEM32(ebp + -60);
    xmm0 = XMM_SCALAR(MEMF(0x43DD40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x7C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43DAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */

loc_0014430D: ;
    eax = MEM32(ebp + -60);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144350; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144320: ;
    eax = MEM32(ebp + -60);
    xmm0 = XMM_SCALAR(MEMF(0x43DD40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x80); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43DAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */

loc_00144350: ;
    goto loc_00144352;

loc_00144352: ;
    goto loc_00144354;

loc_00144354: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DC98)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014446E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001443D6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DC98)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014446E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001443EC: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -68); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144419; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -68)) */

loc_001443F7: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    goto loc_00144439;

loc_00144419: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */

loc_00144439: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -64); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -68); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014445Bu); RECOMP_ABI_CALL(0x00143030u, sub_00143030); /* call 0x00143030 */

loc_0014445B: ;
    MEMF(ebp + -200) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -200)); /* movss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */

loc_0014446E: ;
    eax = MEM32(ebp + -36);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -72); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014449A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144488: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    MEMF(ebp + -240) = xmm0.f[0]; /* movss */
    goto loc_001444EB;

loc_0014449A: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -72); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001444C6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001444B4: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -244) = xmm0.f[0]; /* movss */
    goto loc_001444DB;

loc_001444C6: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -72); /* mulss */
    MEMF(ebp + -244) = xmm0.f[0]; /* movss */

loc_001444DB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -244)); /* movss */
    MEMF(ebp + -240) = xmm0.f[0]; /* movss */

loc_001444EB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -240)); /* movss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -36);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -72); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144524; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144512: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    MEMF(ebp + -248) = xmm0.f[0]; /* movss */
    goto loc_00144575;

loc_00144524: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -72); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144550; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014453E: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -252) = xmm0.f[0]; /* movss */
    goto loc_00144565;

loc_00144550: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -72); /* mulss */
    MEMF(ebp + -252) = xmm0.f[0]; /* movss */

loc_00144565: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -252)); /* movss */
    MEMF(ebp + -248) = xmm0.f[0]; /* movss */

loc_00144575: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -248)); /* movss */
    MEMF(ebp + -80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144587u); RECOMP_ABI_CALL(0x00141A40u, sub_00141A40); /* call 0x00141A40 */

loc_00144587: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144DF4; /* je: equal / zero */

loc_0014458F: ;
    eax = MEM32(ebp + -36);
    eax = ZX8(MEM8(eax + 0xB));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001445BD; /* je: equal / zero */

loc_0014459B: ;
    eax = ZX8(MEM8(0xB2B8C1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001445BD; /* je: equal / zero */

loc_001445A7: ;
    _fa = (uint32_t)(MEM8(0xB2B8C2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2B8C2), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -84) = eax;
    goto loc_001445C7;

loc_001445BD: ;
    eax = ZX8(MEM8(0xB2B8C2));
    MEM32(ebp + -84) = eax;

loc_001445C7: ;
    eax = MEM32(ebp + -84);
    eax = eax + 1;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -92) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xB), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001445E8; /* je: equal / zero */

loc_001445DF: ;
    _fa = (uint32_t)(MEM8(0xB2B8C1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2B8C1), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001445F4; /* jne: not equal / not zero */

loc_001445E8: ;
    eax = ZX8(MEM8(0xB2B8C2));
    MEM32(ebp + -84) = eax;
    goto loc_00144608;

loc_001445F4: ;
    _fa = (uint32_t)(MEM8(0xB2B8C2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2B8C2), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -84) = eax;

loc_00144608: ;
    eax = MEM32(ebp + -84);
    eax = eax + 1;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_00144654; /* jg: greater (signed >) */

loc_00144620: ;
    ecx = 0x448140;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144648u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00144648: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144654u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00144654: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x74);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x78);
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014467Du); RECOMP_ABI_CALL(0x00141DE0u, sub_00141DE0); /* call 0x00141DE0 */

loc_0014467D: ;
    MEMF(ebp + -208) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -208)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -88); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -40); /* mulss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x74);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x78);
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001446C3u); RECOMP_ABI_CALL(0x00141DE0u, sub_00141DE0); /* call 0x00141DE0 */

loc_001446C3: ;
    MEMF(ebp + -204) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -204)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -92); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -44); /* mulss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014474B; /* je: equal / zero */

loc_001446E9: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014474B; /* je: equal / zero */

loc_001446F5: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014470Eu); RECOMP_ABI_CALL(0x00372950u, sub_00372950); /* call 0x00372950 */

loc_0014470E: ;
    MEMF(ebp + -212) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -212)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -100); /* mulss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -96); /* mulss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */

loc_0014474B: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001447DD; /* je: equal / zero */

loc_00144758: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014475Du); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0014475D: ;
    eax = eax + 0x170;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xF4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014477Cu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014477C: ;
    MEM32(ebp + -108) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144795u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00144795: ;
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -112);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x3D4)); /* movss */
    eax = MEM32(ebp + -108);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x84); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -100); /* mulss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -96); /* mulss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */

loc_001447DD: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00144821; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001447ED: ;
    ecx = 0x45EF3E;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144815u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00144815: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144821u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00144821: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    eax = MEM32(ebp + -28);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1.d[0] = (double)xmm1.f[0]; /* cvtss2sd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00144917; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014484B: ;
    eax = MEM32(ebp + -16);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = MEM32(ebp + -28);
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0x40); /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144870; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144863: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -256) = xmm0.f[0]; /* movss */
    goto loc_001448C7;

loc_00144870: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = MEM32(ebp + -28);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x40); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014489F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014488D: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -260) = xmm0.f[0]; /* movss */
    goto loc_001448B7;

loc_0014489F: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = MEM32(ebp + -28);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x40); /* divss */
    MEMF(ebp + -260) = xmm0.f[0]; /* movss */

loc_001448B7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -260)); /* movss */
    MEMF(ebp + -256) = xmm0.f[0]; /* movss */

loc_001448C7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -256)); /* movss */
    MEMF(ebp + -120) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -120); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -100); /* mulss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    goto loc_00144922;

loc_00144917: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */

loc_00144922: ;
    SET_LO16(edi, MEM16(ebp + 8));
    esi = MEM32(ebp + -16);
    esi = esi + 0x2C;
    edx = MEM32(ebp + -16);
    edx = edx + 0x30;
    ecx = ebp + -128;
    eax = ebp + -136;
    edi = SX16(LO16(edi));
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144956u); RECOMP_ABI_CALL(0x001250A0u, sub_001250A0); /* call 0x001250A0 */

loc_00144956: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x28) = ecx;
    eax = ZX8(MEM8(0x583F69));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144CE0; /* je: equal / zero */

loc_0014496E: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144CE0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144982: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E918)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00144A13; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001449A4: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E918)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00144A13; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001449C6: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E918)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00144A13; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001449EA: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E918)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144CE0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144A13: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144A18u); RECOMP_ABI_CALL(0x00140B40u, sub_00140B40); /* call 0x00140B40 */

loc_00144A18: ;
    MEMF(ebp + -216) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -216)); /* movss */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(ebp + -264) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144A56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00144A49: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -268) = xmm0.f[0]; /* movss */
    goto loc_00144A9B;

loc_00144A56: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144A7C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144A6A: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -272) = xmm0.f[0]; /* movss */
    goto loc_00144A8B;

loc_00144A7C: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -272) = xmm0.f[0]; /* movss */

loc_00144A8B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -272)); /* movss */
    MEMF(ebp + -268) = xmm0.f[0]; /* movss */

loc_00144A9B: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -264)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -144) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(ebp + -276) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144AEC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00144ADF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -280) = xmm0.f[0]; /* movss */
    goto loc_00144B33;

loc_00144AEC: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144B13; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144B01: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -284) = xmm0.f[0]; /* movss */
    goto loc_00144B23;

loc_00144B13: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -284) = xmm0.f[0]; /* movss */

loc_00144B23: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -284)); /* movss */
    MEMF(ebp + -280) = xmm0.f[0]; /* movss */

loc_00144B33: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -276)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -280)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144B54u); RECOMP_ABI_CALL(0x00126D10u, sub_00126D10); /* call 0x00126D10 */

loc_00144B54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144B70; /* je: equal / zero */

loc_00144B58: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -140); /* mulss */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */

loc_00144B70: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -140)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -136); /* mulss */
    MEMF(ebp + -136) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -140)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -132); /* mulss */
    MEMF(ebp + -132) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DE54)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -136); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144BC3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -136)) */

loc_00144BB1: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DE54)); /* movss */
    MEMF(ebp + -288) = xmm0.f[0]; /* movss */
    goto loc_00144C0A;

loc_00144BC3: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144BEA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144BD8: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D5DC)); /* movss */
    MEMF(ebp + -292) = xmm0.f[0]; /* movss */
    goto loc_00144BFA;

loc_00144BEA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    MEMF(ebp + -292) = xmm0.f[0]; /* movss */

loc_00144BFA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -292)); /* movss */
    MEMF(ebp + -288) = xmm0.f[0]; /* movss */

loc_00144C0A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -288)); /* movss */
    MEMF(ebp + -136) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DD6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -132); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144C3D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -132)) */

loc_00144C2B: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DD6C)); /* movss */
    MEMF(ebp + -296) = xmm0.f[0]; /* movss */
    goto loc_00144C84;

loc_00144C3D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD50)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144C64; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144C52: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DD50)); /* movss */
    MEMF(ebp + -300) = xmm0.f[0]; /* movss */
    goto loc_00144C74;

loc_00144C64: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    MEMF(ebp + -300) = xmm0.f[0]; /* movss */

loc_00144C74: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -300)); /* movss */
    MEMF(ebp + -296) = xmm0.f[0]; /* movss */

loc_00144C84: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -296)); /* movss */
    MEMF(ebp + -132) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -148); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -144); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -148); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -96)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -144); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */

loc_00144CE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    MEMF(ebp + -152) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -152)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -100); /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -152)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -96); /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    ecx = ebp + -156;
    eax = ebp + -160;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144D3Fu); RECOMP_ABI_CALL(0x003C4320u, sub_003C4320); /* call 0x003C4320 */

loc_00144D3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144DF2; /* je: equal / zero */

loc_00144D48: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144DC8; /* je: equal / zero */

loc_00144D51: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144DC8; /* je: equal / zero */

loc_00144D5D: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144D76u); RECOMP_ABI_CALL(0x00372950u, sub_00372950); /* call 0x00372950 */

loc_00144D76: ;
    MEMF(ebp + -220) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -220)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -164)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -156); /* mulss */
    MEMF(ebp + -156) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -164)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -160); /* mulss */
    MEMF(ebp + -160) = xmm0.f[0]; /* movss */

loc_00144DC8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -156)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -160)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_00144DF2: ;
    goto loc_00144E0A;

loc_00144DF4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_00144E0A: ;
    eax = ebp + -176;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144E2Au); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00144E2A: ;
    eax = MEM32(ebp + -16);
    eax = ZX16(MEM16(eax + 8));
    ecx = MEM32(ebp + -16);
    ecx = ZX16(MEM16(ecx + 0xA));
    eax = eax & ecx;
    MEM16(ebp + -178) = LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -178)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -178), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144EE0; /* je: equal / zero */

loc_00144E4F: ;
    MEM32(ebp + -184) = 0;

loc_00144E59: ;
    _fa = (uint32_t)(MEM32(ebp + -184)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -184), 0xC (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00144EDE; /* jge: greater or equal (signed >=) */

loc_00144E62: ;
    eax = ZX16(MEM16(ebp + -178));
    ecx = MEM32(ebp + -184);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144EC8; /* je: equal / zero */

loc_00144E7F: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -184);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00144EC8; /* jne: not equal / not zero */

loc_00144E8E: ;
    ecx = MEM32(ebp + -184);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    edx = edx ^ 0xFFFFFFFFu;
    eax = MEM32(ebp + -16);
    ecx = ZX16(MEM16(eax + 8));
    ecx = ecx & edx;
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(ebp + -184);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    edx = edx ^ 0xFFFFFFFFu;
    eax = MEM32(ebp + -16);
    ecx = ZX16(MEM16(eax + 0xA));
    ecx = ecx & edx;
    MEM16(eax + 0xA) = LO16(ecx);

loc_00144EC8: ;
    goto loc_00144ECA;

loc_00144ECA: ;
    eax = MEM32(ebp + -184);
    eax = eax + 1;
    MEM32(ebp + -184) = eax;
    goto loc_00144E59;

loc_00144EDE: ;
    goto loc_00144EE0;

loc_00144EE0: ;
    MEM32(ebp + -184) = 0;

loc_00144EEA: ;
    _fa = (uint32_t)(MEM32(ebp + -184)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -184), 0xC (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00144F3C; /* jge: greater or equal (signed >=) */

loc_00144EF3: ;
    eax = MEM32(ebp + -16);
    eax = ZX16(MEM16(eax + 8));
    ecx = MEM32(ebp + -184);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00144F29; /* jne: not equal / not zero */

loc_00144F10: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -184);
    SET_LO8(ecx, MEM8(eax + ecx));
    eax = MEM32(ebp + -184);
    MEM8(ebp + eax + -176) = LO8(ecx);

loc_00144F29: ;
    goto loc_00144F2B;

loc_00144F2B: ;
    eax = MEM32(ebp + -184);
    eax = eax + 1;
    MEM32(ebp + -184) = eax;
    goto loc_00144EEA;

loc_00144F3C: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144FDC; /* je: equal / zero */

loc_00144F49: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144F5Fu); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_00144F5F: ;
    MEM32(ebp + -188) = eax;
    _fa = (uint32_t)(MEM32(ebp + -188)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -188), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144FDA; /* je: equal / zero */

loc_00144F6E: ;
    eax = ZX8(MEM8(0xB2B8C0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00144FB4; /* jne: not equal / not zero */

loc_00144F7A: ;
    eax = MEM32(ebp + -188);
    eax = MEM32(eax + 0x424);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00144FB4; /* jne: not equal / not zero */

loc_00144F8E: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144F99u); RECOMP_ABI_CALL(0x001457F0u, sub_001457F0); /* call 0x001457F0 */

loc_00144F99: ;
    MEMF(ebp + -224) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -224)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DDA0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00144FDA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144FB4: ;
    eax = ZX8(MEM8(ebp + -166));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00144FCE; /* je: equal / zero */

loc_00144FC0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 1;
    MEM32(eax + 0x18) = ecx;
    goto loc_00144FDA;

loc_00144FCE: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 0x18) = ecx;

loc_00144FDA: ;
    goto loc_00144FDC;

loc_00144FDC: ;
    eax = MEM32(ebp + -36);
    eax = ZX8(MEM8(eax + 7));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = ZX8(MEM8(ebp + -169));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145018; /* je: equal / zero */

loc_00145007: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x800;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145027;

loc_00145018: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFF7FFu;
    MEM32(eax + 0x18) = ecx;

loc_00145027: ;
    eax = ZX8(MEM8(ebp + -170));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145044; /* je: equal / zero */

loc_00145033: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x2000;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145053;

loc_00145044: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFDFFFu;
    MEM32(eax + 0x18) = ecx;

loc_00145053: ;
    eax = ZX8(MEM8(ebp + -170));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145070; /* je: equal / zero */

loc_0014505F: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x1000;
    MEM32(eax + 0x18) = ecx;
    goto loc_0014507F;

loc_00145070: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFEFFFu;
    MEM32(eax + 0x18) = ecx;

loc_0014507F: ;
    eax = ZX8(MEM8(ebp + -165));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00145099; /* jne: not equal / not zero */

loc_0014508B: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 4;
    MEM32(eax + 0x1C) = ecx;
    goto loc_001450A5;

loc_00145099: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 0x1C) = ecx;

loc_001450A5: ;
    eax = ZX8(MEM8(ebp + -174));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001450BF; /* je: equal / zero */

loc_001450B1: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x40;
    MEM32(eax + 0x18) = ecx;
    goto loc_001450CB;

loc_001450BF: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(eax + 0x18) = ecx;

loc_001450CB: ;
    eax = ZX8(MEM8(ebp + -174));
    ecx = MEM32(ebp + -28);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_001450EE; /* jl: less (signed <) */

loc_001450DD: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x4000;
    MEM32(eax + 0x18) = ecx;
    goto loc_001450FD;

loc_001450EE: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFBFFFu;
    MEM32(eax + 0x18) = ecx;

loc_001450FD: ;
    eax = ZX8(MEM8(ebp + -171));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145117; /* je: equal / zero */

loc_00145109: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x10;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145123;

loc_00145117: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFEFu;
    MEM32(eax + 0x18) = ecx;

loc_00145123: ;
    eax = ZX8(MEM8(ebp + -176));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014513D; /* je: equal / zero */

loc_0014512F: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 2;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145149;

loc_0014513D: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x18) = ecx;

loc_00145149: ;
    eax = ZX8(MEM8(ebp + -172));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145166; /* je: equal / zero */

loc_00145155: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x80;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145175;

loc_00145166: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFF7Fu;
    MEM32(eax + 0x18) = ecx;

loc_00145175: ;
    eax = ZX8(MEM8(ebp + -173));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014518F; /* jne: not equal / not zero */

loc_00145181: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 1;
    MEM32(eax + 0x1C) = ecx;
    goto loc_0014519B;

loc_0014518F: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 0x1C) = ecx;

loc_0014519B: ;
    eax = ZX8(MEM8(ebp + -175));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001451B5; /* jne: not equal / not zero */

loc_001451A7: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 2;
    MEM32(eax + 0x1C) = ecx;
    goto loc_001451C1;

loc_001451B5: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x1C) = ecx;

loc_001451C1: ;
    eax = MEM32(ebp + -16);
    eax = ZX16(MEM16(eax + 8));
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001451DE; /* jne: not equal / not zero */

loc_001451D2: ;
    eax = MEM32(ebp + -32);
    SET_LO8(ecx, MEM8(eax + 0x11));
    eax = MEM32(ebp + 0x10);
    MEM8(eax + 0x15) = LO8(ecx);

loc_001451DE: ;
    eax = MEM32(ebp + -16);
    eax = ZX16(MEM16(eax + 8));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001451F9; /* jne: not equal / not zero */

loc_001451ED: ;
    eax = MEM32(ebp + -32);
    SET_LO8(ecx, MEM8(eax + 0x10));
    eax = MEM32(ebp + 0x10);
    MEM8(eax + 0x14) = LO8(ecx);

loc_001451F9: ;
    goto loc_001455A8;

loc_001451FE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145203u); RECOMP_ABI_CALL(0x0016B120u, sub_0016B120); /* call 0x0016B120 */

loc_00145203: ;
    MEM32(ebp + -192) = eax;
    _fa = (uint32_t)(MEM32(ebp + -192)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -192), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001455A6; /* je: equal / zero */

loc_00145216: ;
    eax = ZX8(MEM8(ebp + -23));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001455A6; /* je: equal / zero */

loc_00145223: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145228u); RECOMP_ABI_CALL(0x0016B120u, sub_0016B120); /* call 0x0016B120 */

loc_00145228: ;
    MEM32(ebp + -192) = eax;
    MEM32(esp) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014523Au); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014523A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -308) = eax;
    MEM32(esp) = 0x2E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014525Au); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014525A: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -308);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(esp) = 0x2D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014528Du); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014528D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -304) = eax;
    MEM32(esp) = 0x2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001452ADu); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_001452AD: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -304);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001452DAu); RECOMP_ABI_CALL(0x00141A40u, sub_00141A40); /* call 0x00141A40 */

loc_001452DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145337; /* je: equal / zero */

loc_001452DE: ;
    eax = MEM32(ebp + -192);
    xmm0.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_SCALAR(MEMF(0x43D780)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -192);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 4); /* cvtsi2ss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_SCALAR(MEMF(0x43D780)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0014534D;

loc_00145337: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0014534D: ;
    MEM32(esp) = 0x69;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145359u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_00145359: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145372; /* je: equal / zero */

loc_00145361: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x100;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145381;

loc_00145372: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFEFFu;
    MEM32(eax + 0x18) = ecx;

loc_00145381: ;
    MEM32(esp) = 0x6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014538Du); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014538D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001453A6; /* je: equal / zero */

loc_00145395: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x200;
    MEM32(eax + 0x18) = ecx;
    goto loc_001453B5;

loc_001453A6: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFDFFu;
    MEM32(eax + 0x18) = ecx;

loc_001453B5: ;
    MEM32(esp) = 0x6A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001453C1u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_001453C1: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001453D7; /* je: equal / zero */

loc_001453C9: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 1;
    MEM32(eax + 0x18) = ecx;
    goto loc_001453E3;

loc_001453D7: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 0x18) = ecx;

loc_001453E3: ;
    MEM32(esp) = 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001453EFu); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_001453EF: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145405; /* je: equal / zero */

loc_001453F7: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 2;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145411;

loc_00145405: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x18) = ecx;

loc_00145411: ;
    MEM32(esp) = 0x1F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014541Du); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014541D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145433; /* je: equal / zero */

loc_00145425: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x40;
    MEM32(eax + 0x18) = ecx;
    goto loc_0014543F;

loc_00145433: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(eax + 0x18) = ecx;

loc_0014543F: ;
    MEM32(esp) = 0x3B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014544Bu); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014544B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145461; /* je: equal / zero */

loc_00145453: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x10;
    MEM32(eax + 0x18) = ecx;
    goto loc_0014546D;

loc_00145461: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFEFu;
    MEM32(eax + 0x18) = ecx;

loc_0014546D: ;
    MEM32(esp) = 0x22;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145479u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_00145479: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00145492; /* je: equal / zero */

loc_00145481: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x400;
    MEM32(eax + 0x18) = ecx;
    goto loc_001454A1;

loc_00145492: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFBFFu;
    MEM32(eax + 0x18) = ecx;

loc_001454A1: ;
    eax = MEM32(ebp + -192);
    eax = ZX8(MEM8(eax + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001454C1; /* je: equal / zero */

loc_001454B0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x800;
    MEM32(eax + 0x18) = ecx;
    goto loc_001454D0;

loc_001454C1: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFF7FFu;
    MEM32(eax + 0x18) = ecx;

loc_001454D0: ;
    eax = MEM32(ebp + -192);
    eax = ZX8(MEM8(eax + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001454F0; /* je: equal / zero */

loc_001454DF: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 0x2000;
    MEM32(eax + 0x18) = ecx;
    goto loc_001454FF;

loc_001454F0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFDFFFu;
    MEM32(eax + 0x18) = ecx;

loc_001454FF: ;
    MEM32(esp) = 0x3A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014550Bu); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014550B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00145521; /* jne: not equal / not zero */

loc_00145513: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 4;
    MEM32(eax + 0x1C) = ecx;
    goto loc_0014552D;

loc_00145521: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 0x1C) = ecx;

loc_0014552D: ;
    MEM32(esp) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145539u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_00145539: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014554F; /* jne: not equal / not zero */

loc_00145541: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 1;
    MEM32(eax + 0x1C) = ecx;
    goto loc_0014555B;

loc_0014554F: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 0x1C) = ecx;

loc_0014555B: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x18);
    eax = eax & 0x800;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -316) = xmm1.f[0]; /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEMF(ebp + -312) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00145596; /* jne: not equal / not zero */

loc_00145586: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -316)); /* movss */
    MEMF(ebp + -312) = xmm0.f[0]; /* movss */

loc_00145596: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -312)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_001455A6: ;
    goto loc_001455A8;

loc_001455A8: ;
    MEM32(esp) = 0x2B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001455B4u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_001455B4: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001455CA; /* jne: not equal / not zero */

loc_001455BC: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 8;
    MEM32(eax + 0x1C) = ecx;
    goto loc_001455D6;

loc_001455CA: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax + 0x1C) = ecx;

loc_001455D6: ;
    MEM32(esp) = 0x2A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001455E2u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_001455E2: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001455F8; /* jne: not equal / not zero */

loc_001455EA: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 0x10;
    MEM32(eax + 0x1C) = ecx;
    goto loc_00145604;

loc_001455F8: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFEFu;
    MEM32(eax + 0x1C) = ecx;

loc_00145604: ;
    MEM32(esp) = 0x29;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145610u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_00145610: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00145626; /* jne: not equal / not zero */

loc_00145618: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 0x20;
    MEM32(eax + 0x1C) = ecx;
    goto loc_00145632;

loc_00145626: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(eax + 0x1C) = ecx;

loc_00145632: ;
    MEM32(esp) = 0x11;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014563Eu); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014563E: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00145654; /* jne: not equal / not zero */

loc_00145646: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 4;
    MEM32(eax + 0x18) = ecx;
    goto loc_00145660;

loc_00145654: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 0x18) = ecx;

loc_00145660: ;
    MEM32(esp) = 0x12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014566Cu); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_0014566C: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00145682; /* jne: not equal / not zero */

loc_00145674: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx | 8;
    MEM32(eax + 0x18) = ecx;
    goto loc_0014568E;

loc_00145682: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax + 0x18) = ecx;

loc_0014568E: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145699u); RECOMP_ABI_CALL(0x001457F0u, sub_001457F0); /* call 0x001457F0 */

loc_00145699: ;
    MEMF(ebp + -228) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -228)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00145721; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001456B4: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001456BFu); RECOMP_ABI_CALL(0x001457F0u, sub_001457F0); /* call 0x001457F0 */

loc_001456BF: ;
    MEMF(ebp + -236) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -236)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001456D7u); RECOMP_ABI_CALL(0x00143030u, sub_00143030); /* call 0x00143030 */

loc_001456D7: ;
    MEMF(ebp + -232) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -232)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -196) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -196)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -196)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_00145721: ;
    goto loc_00145723;

loc_00145723: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014572Eu); RECOMP_ABI_CALL(0x00145820u, sub_00145820); /* call 0x00145820 */

loc_0014572E: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145740u); RECOMP_ABI_CALL(0x00142E50u, sub_00142E50); /* call 0x00142E50 */

loc_00145740: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001457B2; /* jne: not equal / not zero */

loc_00145744: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x48C763;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145782u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00145782: ;
    ecx = eax;
    eax = 0x44550C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2B6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001457A6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001457A6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001457B2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001457B2: ;
    esp = esp + 0x150;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_001457C0
 * Original: 0x001457C0 - 0x001457EB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001457C0(void)
{
    uint32_t ebp = g_ebp;

loc_001457C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001457E6u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001457E6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001457F0
 * Original: 0x001457F0 - 0x0014581C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001457F0(void)
{
    uint32_t ebp = g_ebp;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001457F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00145820
 * Original: 0x00145820 - 0x00145B8D (877 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00145820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 0x14));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145847; /* je: equal / zero */

loc_00145835: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014583Au); RECOMP_ABI_CALL(0x00103D20u, sub_00103D20); /* call 0x00103D20 */

loc_0014583A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145847; /* je: equal / zero */

loc_00145842: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145847u); RECOMP_ABI_CALL(0x001C44B0u, sub_001C44B0); /* call 0x001C44B0 */

loc_00145847: ;
    eax = MEM32(0xB2B8C4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145867; /* je: equal / zero */

loc_0014585D: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 1;
    MEM32(eax) = ecx;

loc_00145867: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014587F; /* je: equal / zero */

loc_00145875: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 2;
    MEM32(eax) = ecx;

loc_0014587F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145892; /* je: equal / zero */

loc_00145888: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 4;
    MEM32(eax) = ecx;

loc_00145892: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001458A5; /* je: equal / zero */

loc_0014589B: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 8;
    MEM32(eax) = ecx;

loc_001458A5: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001458BF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001458B5: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x10;
    MEM32(eax) = ecx;

loc_001458BF: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax & 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001458D9; /* je: equal / zero */

loc_001458CF: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;

loc_001458D9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001458F1; /* je: equal / zero */

loc_001458E7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x40;
    MEM32(eax) = ecx;

loc_001458F1: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00145910; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00145901: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x80;
    MEM32(eax) = ecx;
    goto loc_0014592B;

loc_00145910: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00145929; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0014591C: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x100;
    MEM32(eax) = ecx;

loc_00145929: ;
    goto loc_0014592B;

loc_0014592B: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014594A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014593B: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x200;
    MEM32(eax) = ecx;
    goto loc_00145965;

loc_0014594A: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00145963; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_00145956: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x400;
    MEM32(eax) = ecx;

loc_00145963: ;
    goto loc_00145965;

loc_00145965: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00145983; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00145974: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x800;
    MEM32(eax) = ecx;
    goto loc_0014599D;

loc_00145983: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014599B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0014598E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x1000;
    MEM32(eax) = ecx;

loc_0014599B: ;
    goto loc_0014599D;

loc_0014599D: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001459BC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001459AD: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x2000;
    MEM32(eax) = ecx;
    goto loc_001459D7;

loc_001459BC: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001459D5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_001459C8: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx | 0x4000;
    MEM32(eax) = ecx;

loc_001459D5: ;
    goto loc_001459D7;

loc_001459D7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145A1D; /* jne: not equal / not zero */

loc_001459E5: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001459F5; /* jne: not equal / not zero */

loc_001459F3: ;
    goto loc_00145A29;

loc_001459F5: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145A11; /* je: equal / zero */

loc_00145A03: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 1;
    MEM32(eax + 8) = ecx;
    goto loc_00145A1D;

loc_00145A11: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 8) = ecx;

loc_00145A1D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(eax + 0x18) = ecx;

loc_00145A29: ;
    _fa = (uint32_t)(MEM8(0x583F6A)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x583F6A), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145AE2; /* jne: not equal / not zero */

loc_00145A36: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145A7C; /* jne: not equal / not zero */

loc_00145A44: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145A54; /* jne: not equal / not zero */

loc_00145A52: ;
    goto loc_00145A88;

loc_00145A54: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145A70; /* je: equal / zero */

loc_00145A62: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 4;
    MEM32(eax + 8) = ecx;
    goto loc_00145A7C;

loc_00145A70: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 8) = ecx;

loc_00145A7C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(eax + 0x18) = ecx;

loc_00145A88: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145AD1; /* jne: not equal / not zero */

loc_00145A96: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145AA9; /* jne: not equal / not zero */

loc_00145AA4: ;
    goto loc_00145B88;

loc_00145AA9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145AC5; /* je: equal / zero */

loc_00145AB7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 8;
    MEM32(eax + 8) = ecx;
    goto loc_00145AD1;

loc_00145AC5: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax + 8) = ecx;

loc_00145AD1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 0x1C) = ecx;
    goto loc_00145B86;

loc_00145AE2: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145B28; /* jne: not equal / not zero */

loc_00145AF0: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145B00; /* jne: not equal / not zero */

loc_00145AFE: ;
    goto loc_00145B34;

loc_00145B00: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145B1C; /* je: equal / zero */

loc_00145B0E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 4;
    MEM32(eax + 8) = ecx;
    goto loc_00145B28;

loc_00145B1C: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 8) = ecx;

loc_00145B28: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x18) = ecx;

loc_00145B34: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145B7A; /* jne: not equal / not zero */

loc_00145B42: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145B52; /* jne: not equal / not zero */

loc_00145B50: ;
    goto loc_00145B88;

loc_00145B52: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145B6E; /* je: equal / zero */

loc_00145B60: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx | 4;
    MEM32(eax + 8) = ecx;
    goto loc_00145B7A;

loc_00145B6E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 8);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 8) = ecx;

loc_00145B7A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x1C) = ecx;

loc_00145B86: ;
    goto loc_00145B88;

loc_00145B88: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00145B90
 * Original: 0x00145B90 - 0x00145C09 (121 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145B90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00145BD7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00145BC1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_00145BD7: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DB4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00145BF7; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + -4)) */

loc_00145BE5: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -4); /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_00145BF7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00145C10
 * Original: 0x00145C10 - 0x00145CA9 (153 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145C10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00145C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00145C69; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00145C50: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    goto loc_00145C94;

loc_00145C69: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00145C80; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_00145C74: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    goto loc_00145C8A;

loc_00145C80: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_00145C8A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */

loc_00145C94: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00145CB0
 * Original: 0x00145CB0 - 0x00145CDB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145CB0(void)
{
    uint32_t ebp = g_ebp;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145CC5u); RECOMP_ABI_CALL(0x00145CE0u, sub_00145CE0); /* call 0x00145CE0 */

loc_00145CC5: ;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145CCEu); RECOMP_ABI_CALL(0x00143030u, sub_00143030); /* call 0x00143030 */

loc_00145CCE: ;
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00145CE0
 * Original: 0x00145CE0 - 0x00145D19 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145CE0(void)
{
    uint32_t ebp = g_ebp;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00146030
 * Original: 0x00146030 - 0x001460FE (206 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146030(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00146030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00146073; /* je: equal / zero */

loc_0014603F: ;
    ecx = 0x442905;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146067u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146067: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146073u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146073: ;
    eax = 0xB2D5B8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x2010C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146093u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00146093: ;
    eax = 0x442928;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80;
    MEM32(esp + 8) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001460B1u); RECOMP_ABI_CALL(0x001E1390u, sub_001E1390); /* call 0x001E1390 */

loc_001460B1: ;
    MEM32(0xB2D5C0) = eax;
    _fa = (uint32_t)(MEM32(0xB2D5C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2D5C0), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001460F4; /* je: equal / zero */

loc_001460BF: ;
    eax = 0xB2D5B8;
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001460E2u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001460E2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001460E7u); RECOMP_ABI_CALL(0x00146100u, sub_00146100); /* call 0x00146100 */

loc_001460E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001460F2; /* je: equal / zero */

loc_001460EB: ;
    MEM8(0xB2D5B8) = 1;

loc_001460F2: ;
    goto loc_001460F4;

loc_001460F4: ;
    SET_LO8(eax, MEM8(0xB2D5B8));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146100
 * Original: 0x00146100 - 0x001461D7 (215 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM8(0xB4D6C4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB4D6C4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146143; /* je: equal / zero */

loc_0014610F: ;
    ecx = 0x464957;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x146;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146137u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146137: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146143u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146143: ;
    eax = 0xB4D6C4;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80494;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146163u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00146163: ;
    eax = 0x48723C;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80;
    MEM32(esp + 8) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146181u); RECOMP_ABI_CALL(0x001E1390u, sub_001E1390); /* call 0x001E1390 */

loc_00146181: ;
    MEM32(0xB4D754) = eax;
    _fa = (uint32_t)(MEM32(0xB4D754)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB4D754), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001461CD; /* je: equal / zero */

loc_0014618F: ;
    eax = 0xB4D6C4;
    eax = eax + 0x94;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0x80400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001461B2u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001461B2: ;
    MEM32(0xB4D6CC) = 0xFFFFFFFFu;
    MEM32(0xB4D6C8) = 0;
    MEM8(0xB4D6C4) = 1;

loc_001461CD: ;
    SET_LO8(eax, MEM8(0xB4D6C4));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001461E0
 * Original: 0x001461E0 - 0x00146257 (119 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001461E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001461E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    _fa = (uint32_t)(MEM32(0xB2D5C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB2D5C0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146206; /* je: equal / zero */

loc_001461EF: ;
    eax = MEM32(0xB2D5C0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001461FCu); RECOMP_ABI_CALL(0x001E1410u, sub_001E1410); /* call 0x001E1410 */

loc_001461FC: ;
    MEM32(0xB2D5C0) = 0;

loc_00146206: ;
    MEM8(0xB2D5B8) = 0;
    MEM32(0xB2D5BC) = 0;
    _fa = (uint32_t)(MEM32(0xB4D754)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB4D754), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146237; /* je: equal / zero */

loc_00146220: ;
    eax = MEM32(0xB4D754);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014622Du); RECOMP_ABI_CALL(0x001E1410u, sub_001E1410); /* call 0x001E1410 */

loc_0014622D: ;
    MEM32(0xB4D754) = 0;

loc_00146237: ;
    MEM32(0xB4D6C8) = 0;
    MEM8(0xB4D6C4) = 0;
    MEM32(0xB4D6CC) = 0xFFFFFFFFu;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146260
 * Original: 0x00146260 - 0x0014633F (223 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146260(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001462A3; /* jne: not equal / not zero */

loc_0014626F: ;
    ecx = 0x45BF56;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xCF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146297u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146297: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001462A3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001462A3: ;
    eax = MEM32(0xB2D5C0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001462B0u); RECOMP_ABI_CALL(0x001E1740u, sub_001E1740); /* call 0x001E1740 */

loc_001462B0: ;
    eax = MEM32(0xB2D5C0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001462BDu); RECOMP_ABI_CALL(0x001E1770u, sub_001E1770); /* call 0x001E1770 */

loc_001462BD: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001462D1u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_001462D1: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001462DCu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_001462DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146335; /* je: equal / zero */

loc_001462E1: ;
    ecx = MEM32(0xB2D5C0);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001462F6u); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_001462F6: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146333; /* jne: not equal / not zero */

loc_001462FF: ;
    ecx = 0x450F5B;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xDD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146327u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146327: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146333u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146333: ;
    goto loc_001462D1;

loc_00146335: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014633Au); RECOMP_ABI_CALL(0x00146340u, sub_00146340); /* call 0x00146340 */

loc_0014633A: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146340
 * Original: 0x00146340 - 0x0014641A (218 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    _fa = (uint32_t)(MEM8(0xB4D6C4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB4D6C4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146383; /* jne: not equal / not zero */

loc_0014634F: ;
    ecx = 0x48F315;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x168;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146377u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146377: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146383u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146383: ;
    eax = MEM32(0xB4D754);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146390u); RECOMP_ABI_CALL(0x001E1740u, sub_001E1740); /* call 0x001E1740 */

loc_00146390: ;
    eax = MEM32(0xB4D754);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014639Du); RECOMP_ABI_CALL(0x001E1770u, sub_001E1770); /* call 0x001E1770 */

loc_0014639D: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001463B1u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_001463B1: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001463BCu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_001463BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146415; /* je: equal / zero */

loc_001463C1: ;
    ecx = MEM32(0xB4D754);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001463D6u); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_001463D6: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146413; /* jne: not equal / not zero */

loc_001463DF: ;
    ecx = 0x450F5B;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x176;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146407u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146407: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146413u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146413: ;
    goto loc_001463B1;

loc_00146415: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146420
 * Original: 0x00146420 - 0x00146480 (96 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146420(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xB2D5C0);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014643Eu); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_0014643E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014647B; /* jne: not equal / not zero */

loc_00146447: ;
    ecx = 0x450F5B;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xEB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014646Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014646F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014647Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014647B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146480
 * Original: 0x00146480 - 0x0014666B (491 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00146480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(0xB2D5BC);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001464CB; /* jne: not equal / not zero */

loc_00146497: ;
    ecx = 0x45BF56;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001464BFu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001464BF: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001464CBu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001464CB: ;
    eax = MEM32(0xB2D5BC);
    eax = eax + 1;
    MEM32(0xB2D5BC) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001464E3u); RECOMP_ABI_CALL(0x00146670u, sub_00146670); /* call 0x00146670 */

loc_001464E3: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146520; /* jne: not equal / not zero */

loc_001464EC: ;
    ecx = 0x47586F;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x100;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146514u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146514: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146520u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146520: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    MEM16(eax + 4) = 0;
    eax = MEM32(0xB2D5C0);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -12) = eax;
    MEM16(ebp + -14) = 0;

loc_00146542: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(0xB2D5C0);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x2E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146651; /* jge: greater or equal (signed >=) */

loc_00146558: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001465CD; /* jne: not equal / not zero */

loc_00146561: ;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 4;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146593u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00146593: ;
    eax = MEM32(ebp + -20);
    MEM16(eax + 0x18) = 0xFFFF;
    eax = MEM32(ebp + -20);
    MEM16(eax + 0x1A) = 0xFFFF;
    eax = MEM32(ebp + -20);
    MEM16(eax + 0x1C) = 0xFFFF;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(eax * 4 + 0xB2B8D8) = 0;
    eax = MEM32(ebp + -8);
    ecx = ZX16(MEM16(eax + 4));
    ecx = ecx + 1;
    MEM16(eax + 4) = LO16(ecx);
    goto loc_00146637;

loc_001465CD: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + -12);
    eax = eax + 8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001465F9u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_001465F9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(eax * 4 + 0xB2B8D8);
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 4;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(eax * 4 + 0xB2B8D8) = 0;
    eax = MEM32(ebp + -8);
    ecx = ZX16(MEM16(eax + 4));
    ecx = ecx + 1;
    MEM16(eax + 4) = LO16(ecx);

loc_00146637: ;
    SET_LO16(eax, MEM16(ebp + -14));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -14) = LO16(eax);
    eax = MEM32(ebp + -12);
    eax = eax + 0x28;
    MEM32(ebp + -12) = eax;
    goto loc_00146542;

loc_00146651: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146666u); RECOMP_ABI_CALL(0x00146700u, sub_00146700); /* call 0x00146700 */

loc_00146666: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146670
 * Original: 0x00146670 - 0x001466FC (140 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146670(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001466B6; /* jne: not equal / not zero */

loc_00146682: ;
    ecx = 0x45BF56;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x29E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001466AAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001466AA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001466B6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001466B6: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB2D5BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB2D5BC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001466ED; /* jge: greater or equal (signed >=) */

loc_001466C1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xB2D5BC);
    ecx = ecx - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001466ED; /* jl: less (signed <) */

loc_001466D1: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 0x1F;
    eax = 0xB2D5B8;
    eax = eax + 0xC;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1008);
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    goto loc_001466F4;

loc_001466ED: ;
    MEM32(ebp + -4) = 0;

loc_001466F4: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146700
 * Original: 0x00146700 - 0x00146800 (256 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146700(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00146700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146717u); RECOMP_ABI_CALL(0x00147370u, sub_00147370); /* call 0x00147370 */

loc_00146717: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00146770; /* je: equal / zero */

loc_00146720: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146745u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_00146745: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB4D6CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB4D6CC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0014676E; /* jle: less or equal (signed <=) */

loc_00146750: ;
    eax = MEM32(0xB4D6CC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00146766; /* jge: greater or equal (signed >=) */

loc_0014675D: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 4) = 0xFFFF;

loc_00146766: ;
    eax = MEM32(ebp + 0xC);
    MEM32(0xB4D6CC) = eax;

loc_0014676E: ;
    goto loc_001467E9;

loc_00146770: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146775u); RECOMP_ABI_CALL(0x00208B00u, sub_00208B00); /* call 0x00208B00 */

loc_00146775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00146784; /* je: equal / zero */

loc_0014677A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014677Fu); RECOMP_ABI_CALL(0x00208A60u, sub_00208A60); /* call 0x00208A60 */

loc_0014677F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001467E7; /* jne: not equal / not zero */

loc_00146784: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146789u); RECOMP_ABI_CALL(0x001951E0u, sub_001951E0); /* call 0x001951E0 */

loc_00146789: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001467E5; /* jne: not equal / not zero */

loc_0014678D: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146798u); RECOMP_ABI_CALL(0x001C4390u, sub_001C4390); /* call 0x001C4390 */

loc_00146798: ;
    ecx = MEM32(ebp + -8);
    edx = 0x472F13;
    MEM32(esp) = 2;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001467B9u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_001467B9: ;
    eax = 0x448198;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001467CFu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_001467CF: ;
    eax = 0x49252B;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001467E5u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_001467E5: ;
    goto loc_001467E7;

loc_001467E7: ;
    goto loc_001467E9;

loc_001467E9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001467EEu); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_001467EE: ;
    eax = SX16(eax); /* cwde */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    if ((!_cf && eax != 0)) goto loc_001467FB; /* ja: above (unsigned >) */

loc_001467F4: ;
    goto loc_001467F6;

loc_001467F6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001467FBu); RECOMP_ABI_CALL(0x001951E0u, sub_001951E0); /* call 0x001951E0 */

loc_001467FB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146800
 * Original: 0x00146800 - 0x00146943 (323 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146800(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146814u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_00146814: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146836; /* je: equal / zero */

loc_00146824: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146836; /* je: equal / zero */

loc_0014682A: ;
    eax = ZX8(MEM8(0xB2D5B8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014686A; /* jne: not equal / not zero */

loc_00146836: ;
    ecx = 0x46491A;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014685Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014685E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014686Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014686A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001468ED; /* je: equal / zero */

loc_00146870: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001468AD; /* jl: less (signed <) */

loc_00146879: ;
    ecx = 0x475876;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001468A1u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001468A1: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001468ADu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001468AD: ;
    ecx = MEM32(0xB2D5C0);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001468C2u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_001468C2: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB2D5BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB2D5BC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001468E0; /* jge: greater or equal (signed >=) */

loc_001468D3: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    goto loc_001468EB;

loc_001468E0: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0xFFFFFFFFu;
    goto loc_0014693E;

loc_001468EB: ;
    goto loc_001468ED;

loc_001468ED: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014693C; /* je: equal / zero */

loc_001468F5: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146902u); RECOMP_ABI_CALL(0x00146670u, sub_00146670); /* call 0x00146670 */

loc_00146902: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146928; /* je: equal / zero */

loc_0014690B: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146928u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_00146928: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014693A; /* je: equal / zero */

loc_0014692E: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx + 1;
    MEM32(eax + 4) = ecx;

loc_0014693A: ;
    goto loc_0014693C;

loc_0014693C: ;
    goto loc_0014693E;

loc_0014693E: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146950
 * Original: 0x00146950 - 0x00146996 (70 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146950(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    _fa = (uint32_t)(MEM32(0xB4D754)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB4D754), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146976; /* je: equal / zero */

loc_0014695F: ;
    eax = MEM32(0xB4D754);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014696Cu); RECOMP_ABI_CALL(0x001E1410u, sub_001E1410); /* call 0x001E1410 */

loc_0014696C: ;
    MEM32(0xB4D754) = 0;

loc_00146976: ;
    MEM32(0xB4D6CC) = 0xFFFFFFFFu;
    MEM32(0xB4D6C8) = 0;
    MEM8(0xB4D6C4) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001469A0
 * Original: 0x001469A0 - 0x00146A00 (96 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001469A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001469A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xB4D754);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001469BEu); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_001469BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001469FB; /* jne: not equal / not zero */

loc_001469C7: ;
    ecx = 0x450F5B;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x182;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001469EFu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001469EF: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001469FBu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001469FB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146A00
 * Original: 0x00146A00 - 0x00146AED (237 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00146A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xB4D750);
    ecx = 0xB4D6C4;
    ecx = ecx + 0xC;
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146A33u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00146A33: ;
    _fa = (uint32_t)(MEM32(0xB4D750)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xB4D750), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146ADB; /* jge: greater or equal (signed >=) */

loc_00146A40: ;
    ecx = MEM32(0xB4D750);
    eax = 0xB4D6C4;
    eax = eax + 0xC;
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(0xB4D750);
    eax = 0xB2BAD8;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(0xB4D750);
    eax = 0xB2BAE8;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00146AA9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_00146A9B: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    goto loc_00146AB6;

loc_00146AA9: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */

loc_00146AB6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + -12);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_00146ADB: ;
    eax = MEM32(0xB4D750);
    eax = eax + 1;
    MEM32(0xB4D750) = eax;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146AF0
 * Original: 0x00146AF0 - 0x00146B95 (165 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146AF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0x58456C);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146B03u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_00146B03: ;
    ecx = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146B19; /* jne: not equal / not zero */

loc_00146B0C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146B11u); RECOMP_ABI_CALL(0x001409B0u, sub_001409B0); /* call 0x001409B0 */

loc_00146B11: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146B63; /* je: equal / zero */

loc_00146B19: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146B1Eu); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_00146B1E: ;
    MEM32(0x58456C) = eax;
    eax = 0xB2BAD8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146B43u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00146B43: ;
    eax = 0xB2BAE8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146B63u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00146B63: ;
    MEM32(0xB4D750) = 0;
    eax = 0xB4D6C4;
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146B90u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00146B90: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00146BA0
 * Original: 0x00146BA0 - 0x001470A6 (1286 bytes, 344 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146BA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00146BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(0xB4D6C4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB4D6C4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146BE6; /* jne: not equal / not zero */

loc_00146BB2: ;
    ecx = 0x48F315;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1AF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146BDAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146BDA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146BE6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146BE6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146BEBu); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_00146BEB: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146C11; /* jne: not equal / not zero */

loc_00146BF1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146BF6u); RECOMP_ABI_CALL(0x00208720u, sub_00208720); /* call 0x00208720 */

loc_00146BF6: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146C11; /* je: equal / zero */

loc_00146BFE: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146C09u); RECOMP_ABI_CALL(0x001470B0u, sub_001470B0); /* call 0x001470B0 */

loc_00146C09: ;
    MEM8(ebp + -1) = LO8(eax);
    goto loc_0014709E;

loc_00146C11: ;
    eax = MEM32(0xB4D6C8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146C1Eu); RECOMP_ABI_CALL(0x00147370u, sub_00147370); /* call 0x00147370 */

loc_00146C1E: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146C4E; /* je: equal / zero */

loc_00146C27: ;
    eax = MEM32(0xB4D6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB4D6CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB4D6CC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00146C4E; /* jg: greater (signed >) */

loc_00146C34: ;
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146C4E; /* jle: less or equal (signed <=) */

loc_00146C40: ;
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146C57; /* jle: less or equal (signed <=) */

loc_00146C4E: ;
    MEM8(ebp + -1) = 0;
    goto loc_0014709E;

loc_00146C57: ;
    eax = MEM32(0xB4D754);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -12) = eax;
    MEM16(ebp + -14) = 0;

loc_00146C68: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(0xB4D754);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x2E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146E35; /* jge: greater or equal (signed >=) */

loc_00146C7E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146E19; /* jge: greater or equal (signed >=) */

loc_00146C91: ;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 4;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 0x10);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + -12);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, MEM16(eax + 0x18));
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x20) = LO16(ecx);
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, MEM16(eax + 0x1A));
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x22) = LO16(ecx);
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, MEM16(eax + 0x1C));
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x24) = LO16(ecx);
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146D6B; /* je: equal / zero */

loc_00146D1F: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146D37; /* jl: less (signed <) */

loc_00146D2B: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146D6B; /* jl: less (signed <) */

loc_00146D37: ;
    ecx = 0x467881;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C9;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146D5Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146D5F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146D6Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146D6B: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146DC7; /* je: equal / zero */

loc_00146D7B: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146D93; /* jl: less (signed <) */

loc_00146D87: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146DC7; /* jl: less (signed <) */

loc_00146D93: ;
    ecx = 0x44DD80;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1CA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146DBBu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146DBB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146DC7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146DC7: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146E17; /* je: equal / zero */

loc_00146DD7: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146E17; /* jge: greater or equal (signed >=) */

loc_00146DE3: ;
    ecx = 0x45EF65;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1CB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146E0Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146E0B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146E17u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146E17: ;
    goto loc_00146E19;

loc_00146E19: ;
    goto loc_00146E1B;

loc_00146E1B: ;
    SET_LO16(eax, MEM16(ebp + -14));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -14) = LO16(eax);
    eax = MEM32(ebp + -12);
    eax = eax + 0x28;
    MEM32(ebp + -12) = eax;
    goto loc_00146C68;

loc_00146E35: ;
    eax = MEM32(0xB4D754);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -12) = eax;
    MEM16(ebp + -14) = 0;

loc_00146E46: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(0xB4D754);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x2E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014708D; /* jge: greater or equal (signed >=) */

loc_00146E5C: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 8);
    eax = eax ^ 0xFFFFFFFFu;
    ecx = ecx & eax;
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0x4D0;
    eax = MEM32(ebp + -12);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -12);
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x10);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -12);
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    SET_LO16(ecx, MEM16(eax + 0x20));
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0x18) = LO16(ecx);
    eax = MEM32(ebp + -12);
    SET_LO16(ecx, MEM16(eax + 0x22));
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0x1A) = LO16(ecx);
    eax = MEM32(ebp + -12);
    SET_LO16(ecx, MEM16(eax + 0x24));
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0x1C) = LO16(ecx);
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146F98; /* je: equal / zero */

loc_00146F3A: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146F64; /* jl: less (signed <) */

loc_00146F4F: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146F98; /* jl: less (signed <) */

loc_00146F64: ;
    ecx = 0x48994D;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F8Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00146F8C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F98u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00146F98: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014700F; /* je: equal / zero */

loc_00146FB1: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146FDB; /* jl: less (signed <) */

loc_00146FC6: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014700F; /* jl: less (signed <) */

loc_00146FDB: ;
    ecx = 0x47E1F1;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E7;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147003u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00147003: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014700Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014700F: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147071; /* je: equal / zero */

loc_00147028: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147071; /* jge: greater or equal (signed >=) */

loc_0014703D: ;
    ecx = 0x4924C9;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147065u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00147065: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147071u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00147071: ;
    goto loc_00147073;

loc_00147073: ;
    SET_LO16(eax, MEM16(ebp + -14));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -14) = LO16(eax);
    eax = MEM32(ebp + -12);
    eax = eax + 0x28;
    MEM32(ebp + -12) = eax;
    goto loc_00146E46;

loc_0014708D: ;
    eax = MEM32(0xB4D6C8);
    eax = eax + 1;
    MEM32(0xB4D6C8) = eax;
    MEM8(ebp + -1) = 1;

loc_0014709E: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001470B0
 * Original: 0x001470B0 - 0x00147362 (690 bytes, 188 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001470B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_001470B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xB4D754);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -4) = eax;
    MEM16(ebp + -6) = 0;

loc_001470CA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    ecx = MEM32(0xB4D754);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x2E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014734E; /* jge: greater or equal (signed >=) */

loc_001470E0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001470ECu); RECOMP_ABI_CALL(0x001480D0u, sub_001480D0); /* call 0x001480D0 */

loc_001470EC: ;
    MEM16(ebp + -42) = LO16(eax);
    eax = ebp + -40;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014710Du); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0014710D: ;
    MEM16(ebp + -16) = 0xFFFF;
    MEM16(ebp + -14) = 0xFFFF;
    MEM16(ebp + -12) = 0xFFFF;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -42);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014720C; /* je: equal / zero */

loc_0014712C: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -42);
    eax = 0xB4D6C4;
    eax = eax + 0xC;
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147155u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00147155: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -42);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014720A; /* jge: greater or equal (signed >=) */

loc_00147162: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -42);
    eax = 0xB2D4F8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x30);
    eax = eax + ecx;
    MEM8(eax) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147179u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_00147179: ;
    ecx = eax;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -42);
    eax = 0xB2D4F8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x30);
    eax = eax + edx;
    MEM32(eax + 4) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -42);
    ecx = 0xB2D4F8;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x30);
    ecx = ecx + eax;
    ecx = ecx + 8;
    eax = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001471B6u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_001471B6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -42);
    ecx = 0xB2D4F8;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x30);
    ecx = ecx + eax;
    ecx = ecx + 0x28;
    ecx = ecx + 2;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -42);
    eax = 0xB2D4F8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x30);
    eax = eax + edx;
    eax = eax + 0x28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001471F1u); RECOMP_ABI_CALL(0x000FA7F0u, sub_000FA7F0); /* call 0x000FA7F0 */

loc_001471F1: ;
    eax = MEM32(ebp + -40);
    SET_LO16(ecx, LO16(eax));
    edx = (uint32_t)(int32_t)SMEM16(ebp + -42);
    eax = 0xB2D4F8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x30);
    eax = eax + edx;
    MEM16(eax + 0x28) = LO16(ecx);

loc_0014720A: ;
    goto loc_00147287;

loc_0014720C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147285; /* jge: greater or equal (signed >=) */

loc_00147217: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = 0xB2BAF8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = eax + ecx;
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147285; /* je: equal / zero */

loc_0014722E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = 0xB2BAF8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = eax + ecx;
    eax = eax + 8;
    ecx = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147257u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00147257: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = 0xB2BAF8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = eax + ecx;
    eax = MEM32(eax + 0x28);
    eax = eax | MEM32(ebp + -40);
    MEM32(ebp + -40) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = 0xB2BAF8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = eax + ecx;
    MEM32(eax + 0x28) = 0;

loc_00147285: ;
    goto loc_00147287;

loc_00147287: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    eax = eax ^ 0xFFFFFFFFu;
    ecx = ecx & eax;
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -40);
    ecx = ecx & 0x4D0;
    eax = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x10) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    SET_LO16(ecx, MEM16(ebp + -16));
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0x18) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -14));
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0x1A) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -12));
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0x1C) = LO16(ecx);
    SET_LO16(eax, MEM16(ebp + -6));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -6) = LO16(eax);
    eax = MEM32(ebp + -4);
    eax = eax + 0x28;
    MEM32(ebp + -4) = eax;
    goto loc_001470CA;

loc_0014734E: ;
    eax = MEM32(0xB4D6C8);
    eax = eax + 1;
    MEM32(0xB4D6C8) = eax;
    SET_LO8(eax, 1);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147370
 * Original: 0x00147370 - 0x001473C2 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147370(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB4D6C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB4D6C8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001473B3; /* jl: less (signed <) */

loc_00147382: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xB4D6C8);
    ecx = ecx + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001473B3; /* jge: greater or equal (signed >=) */

loc_00147395: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 0x7F;
    eax = 0xB4D6C4;
    eax = eax + 0x94;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1008);
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    goto loc_001473BA;

loc_001473B3: ;
    MEM32(ebp + -4) = 0;

loc_001473BA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001473D0
 * Original: 0x001473D0 - 0x001473E3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001473D0(void)
{
    uint32_t ebp = g_ebp;

loc_001473D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xB4D6CC);
    eax = eax - MEM32(0xB4D6C8);
    eax = eax + 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001473F0
 * Original: 0x001473F0 - 0x0014744C (92 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001473F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001473F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xB4D6C8);
    MEM32(ebp + -4) = eax;

loc_001473FE: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xB4D6CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xB4D6CC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00147444; /* jg: greater (signed >) */

loc_00147409: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147414u); RECOMP_ABI_CALL(0x00147370u, sub_00147370); /* call 0x00147370 */

loc_00147414: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147437; /* je: equal / zero */

loc_0014741D: ;
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00147437; /* jle: less or equal (signed <=) */

loc_00147429: ;
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00147439; /* jle: less or equal (signed <=) */

loc_00147437: ;
    goto loc_00147444;

loc_00147439: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_001473FE;

loc_00147444: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147450
 * Original: 0x00147450 - 0x0014750C (188 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147450(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10A8;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -4236) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014746Cu); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_0014746C: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001474A6; /* je: equal / zero */

loc_00147472: ;
    ecx = 0x4758A2;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014749Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014749A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001474A6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001474A6: ;
    eax = ebp + -128;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001474B1u); RECOMP_ABI_CALL(0x00147510u, sub_00147510); /* call 0x00147510 */

loc_001474B1: ;
    ecx = MEM32(ebp + -4236);
    eax = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001474C6u); RECOMP_ABI_CALL(0x00147590u, sub_00147590); /* call 0x00147590 */

loc_001474C6: ;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, LO16(eax));
    SET_LO16(ecx, LO16(ecx) + 0xFFFFFFFFu);
    MEM16(ebp + 8) = LO16(ecx);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00147504; /* jle: less or equal (signed <=) */

loc_001474DB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001474E0u); RECOMP_ABI_CALL(0x00146480u, sub_00146480); /* call 0x00146480 */

loc_001474E0: ;
    edx = MEM32(ebp + -4236);
    ecx = ebp + -4228;
    eax = ebp + -4232;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147502u); RECOMP_ABI_CALL(0x00146800u, sub_00146800); /* call 0x00146800 */

loc_00147502: ;
    goto loc_001474C6;

loc_00147504: ;
    esp = esp + 0x10A8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147510
 * Original: 0x00147510 - 0x00147584 (116 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147510(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014752B; /* je: equal / zero */

loc_0014751F: ;
    eax = ZX8(MEM8(0xB4D6C4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014755F; /* jne: not equal / not zero */

loc_0014752B: ;
    ecx = 0x448161;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x244;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147553u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00147553: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014755Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014755F: ;
    ecx = MEM32(ebp + 8);
    eax = 0xB4D6C4;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014757Fu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0014757F: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147590
 * Original: 0x00147590 - 0x001477BD (557 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00147590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x34)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001475A8u); RECOMP_ABI_CALL(0x00148CD0u, sub_00148CD0); /* call 0x00148CD0 */

loc_001475A8: ;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001475EF; /* jne: not equal / not zero */

loc_001475BB: ;
    ecx = 0x45BF56;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x22A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001475E3u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001475E3: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001475EFu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001475EF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001475F4u); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_001475F4: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014761B; /* jne: not equal / not zero */

loc_001475FA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001475FFu); RECOMP_ABI_CALL(0x00208720u, sub_00208720); /* call 0x00208720 */

loc_001475FF: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014761B; /* je: equal / zero */

loc_00147607: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147612u); RECOMP_ABI_CALL(0x001477C0u, sub_001477C0); /* call 0x001477C0 */

loc_00147612: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014761B; /* jne: not equal / not zero */

loc_00147616: ;
    goto loc_001477B7;

loc_0014761B: ;
    MEM32(ebp + -16) = 0;

loc_00147622: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_001477B5; /* jge: greater or equal (signed >=) */

loc_0014762C: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001477A5; /* je: equal / zero */

loc_0014763C: ;
    ecx = MEM32(0xB2D5C0);
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -16);
    edx = MEM32(eax + edx * 4);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147657u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00147657: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -12);
    esi = edx;
    esi++;
    MEM32(ebp + -12) = esi;
    _shift_result = RECOMP_SHIFT(edx, 5, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    xmm0 = XMM_MEM(ecx + edx); /* movups */
    xmm1 = XMM_MEM(ecx + edx + 0x10); /* movups */
    XMM_STORE(eax + 0x18, xmm1); /* movups */
    XMM_STORE(eax + 8, xmm0); /* movups */
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -16);
    eax = ZX16(MEM16(eax + edx * 4));
    ecx = ecx | MEM32(eax * 4 + 0xB2B8D8);
    MEM32(eax * 4 + 0xB2B8D8) = ecx;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001476ADu); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_001476AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014771F; /* jne: not equal / not zero */

loc_001476B1: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x472EE8;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001476EFu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_001476EF: ;
    ecx = eax;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x238;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147713u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00147713: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014771Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014771F: ;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147731u); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_00147731: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001477A3; /* jne: not equal / not zero */

loc_00147735: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x46A601;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147773u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00147773: ;
    ecx = eax;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x239;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147797u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00147797: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001477A3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001477A3: ;
    goto loc_001477A5;

loc_001477A5: ;
    goto loc_001477A7;

loc_001477A7: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_00147622;

loc_001477B5: ;
    goto loc_001477B7;

loc_001477B7: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001477C0
 * Original: 0x001477C0 - 0x0014785A (154 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001477C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001477C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001477D4u); RECOMP_ABI_CALL(0x00148CD0u, sub_00148CD0); /* call 0x00148CD0 */

loc_001477D4: ;
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -10) = 0;

loc_001477DD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014784E; /* jge: greater or equal (signed >=) */

loc_001477E6: ;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -10);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147814; /* je: equal / zero */

loc_001477F3: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -10);
    eax = MEM32(eax + edx * 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014780Fu); RECOMP_ABI_CALL(0x001E0FD0u, sub_001E0FD0); /* call 0x001E0FD0 */

loc_0014780F: ;
    MEM32(ebp + -20) = eax;
    goto loc_0014781B;

loc_00147814: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_0014781B;

loc_0014781B: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014783E; /* je: equal / zero */

loc_00147827: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    goto loc_00147852;

loc_0014783E: ;
    goto loc_00147840;

loc_00147840: ;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_001477DD;

loc_0014784E: ;
    MEM8(ebp + -1) = 1;

loc_00147852: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147860
 * Original: 0x00147860 - 0x0014787F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147860(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(ebp + 8);
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F800000 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147880
 * Original: 0x00147880 - 0x00147AC5 (581 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147880(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00147880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = 0xB2B8D8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001478A6u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001478A6: ;
    eax = 0xB2BAF8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x1600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001478C6u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001478C6: ;
    eax = 0xB2D0F8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001478E6u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001478E6: ;
    eax = 0xB2D4F8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147906u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00147906: ;
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014793C; /* je: equal / zero */

loc_0014790F: ;
    MEM32(0xB2D5BC) = 0;
    eax = 0xB2D5B8;
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014793Cu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0014793C: ;
    _fa = (uint32_t)(MEM8(0xB4D6C4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB4D6C4), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00147A7A; /* je: equal / zero */

loc_00147949: ;
    eax = 0xB4D6C4;
    eax = eax + 0x94;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0x80400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014796Cu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0014796C: ;
    eax = 0xB4D6C4;
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014798Fu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0014798F: ;
    MEM32(0xB4D6CC) = 0xFFFFFFFFu;
    MEM32(0xB4D6C8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001479A8u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_001479A8: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x80)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001479C1; /* jle: less or equal (signed <=) */

loc_001479BA: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_001479CC;

loc_001479C1: ;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x80)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -20) = eax;

loc_001479CC: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;

loc_001479D9: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00147A5F; /* jge: greater or equal (signed >=) */

loc_001479E1: ;
    ecx = MEM32(ebp + -8);
    eax = 0xB4D6C4;
    eax = eax + 0x94;
    edx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)0x1008);
    eax = eax + edx;
    MEM32(eax) = ecx;
    eax = 0xB4D6C4;
    eax = eax + 0x94;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)0x1008);
    eax = eax + ecx;
    MEM16(eax + 4) = 1;
    eax = 0xB4D6C4;
    eax = eax + 0x94;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)0x1008);
    eax = eax + ecx;
    eax = eax + 4;
    eax = eax + 4;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x1000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147A48u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00147A48: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_001479D9;

loc_00147A5F: ;
    eax = MEM32(ebp + -4);
    MEM32(0xB4D6C8) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(0xB4D6CC) = eax;
    eax = MEM32(ebp + -4);
    MEM32(0xB2D5BC) = eax;

loc_00147A7A: ;
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00147AB0; /* je: equal / zero */

loc_00147A83: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147A88u); RECOMP_ABI_CALL(0x00146260u, sub_00146260); /* call 0x00146260 */

loc_00147A88: ;
    eax = MEM32(0xB2D5C0);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147A9Fu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00147A9F: ;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(0xB2D5BC);
    eax = MEM32(ebp + -16);
    MEM32(eax + 4) = ecx;
    goto loc_00147AC0;

loc_00147AB0: ;
    _fa = (uint32_t)(MEM8(0xB4D6C4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB4D6C4), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00147ABE; /* je: equal / zero */

loc_00147AB9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147ABEu); RECOMP_ABI_CALL(0x00146340u, sub_00146340); /* call 0x00146340 */

loc_00147ABE: ;
    goto loc_00147AC0;

loc_00147AC0: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147AD0
 * Original: 0x00147AD0 - 0x00147B33 (99 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147AD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xB2D5C0);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147AEEu); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_00147AEE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147B2B; /* jne: not equal / not zero */

loc_00147AF7: ;
    ecx = 0x450F5B;
    eax = 0x46D5D2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x292;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147B1Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00147B1F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147B2Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00147B2B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147B40
 * Original: 0x00147B40 - 0x00147C41 (257 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147B40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00147B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x2C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO16(eax, MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(ebp + 8));
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM8(0xB2D5B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xB2D5B8), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00147B90; /* je: equal / zero */

loc_00147B69: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_00147B90; /* jl: less (signed <) */

loc_00147B6F: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00147B90; /* jge: greater or equal (signed >=) */

loc_00147B78: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_00147B90; /* jle: less or equal (signed <=) */

loc_00147B81: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147B8Cu); RECOMP_ABI_CALL(0x00147C50u, sub_00147C50); /* call 0x00147C50 */

loc_00147B8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00147B95; /* jne: not equal / not zero */

loc_00147B90: ;
    goto loc_00147C39;

loc_00147B95: ;
    ecx = MEM32(0xB2D5C0);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147BAAu); RECOMP_ABI_CALL(0x001E0FD0u, sub_001E0FD0); /* call 0x001E0FD0 */

loc_00147BAA: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00147BB8; /* jne: not equal / not zero */

loc_00147BB3: ;
    goto loc_00147C39;

loc_00147BB8: ;
    eax = MEM32(ebp + -20);
    ebx = 0xB2D0F8;
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ebx = ebx + eax;
    eax = MEM32(ebp + -20);
    edi = 0xB2D0F8;
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edi = edi + eax;
    edi = edi + 4;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(ebp + -22) = LO16(eax);
    ecx = MEM32(ebp + -20);
    eax = 0xB2B8D8;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    SET_LO16(ecx, MEM16(ebp + -22));
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147C16u); RECOMP_ABI_CALL(0x00147DA0u, sub_00147DA0); /* call 0x00147DA0 */

loc_00147C16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00147C1C; /* jne: not equal / not zero */

loc_00147C1A: ;
    goto loc_00147C39;

loc_00147C1C: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147C39u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00147C39: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147C50
 * Original: 0x00147C50 - 0x00147D98 (328 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147C50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147C6Bu); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_00147C6B: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00147D8B; /* je: equal / zero */

loc_00147C7C: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147C8Eu); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_00147C8E: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00147D8B; /* je: equal / zero */

loc_00147C9F: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147CB1u); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_00147CB1: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00147D8B; /* je: equal / zero */

loc_00147CC2: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147CD4u); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_00147CD4: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00147D8B; /* je: equal / zero */

loc_00147CE5: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147CF7u); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_00147CF7: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00147D8B; /* je: equal / zero */

loc_00147D08: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147D36; /* je: equal / zero */

loc_00147D14: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_00147D8B; /* jl: less (signed <) */

loc_00147D25: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00147D8B; /* jge: greater or equal (signed >=) */

loc_00147D36: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147D64; /* je: equal / zero */

loc_00147D42: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_00147D8B; /* jl: less (signed <) */

loc_00147D53: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00147D8B; /* jge: greater or equal (signed >=) */

loc_00147D64: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00147D85; /* je: equal / zero */

loc_00147D75: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM8(ebp + -2) = LO8(eax);

loc_00147D85: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_00147D8B: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147DA0
 * Original: 0x00147DA0 - 0x00147E64 (196 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147DA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00147DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x1C);
    SET_LO16(eax, MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00147DD7; /* je: equal / zero */

loc_00147DC4: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_00147DD7; /* jg: greater (signed >) */

loc_00147DCE: ;
    MEM8(ebp + -1) = 0;
    goto loc_00147E5C;

loc_00147DD7: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00147DEF; /* je: equal / zero */

loc_00147DDF: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00147E18; /* jge: greater or equal (signed >=) */

loc_00147DEF: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00147E07; /* je: equal / zero */

loc_00147DFA: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;
    goto loc_00147E11;

loc_00147E07: ;
    eax = 1;
    MEM32(ebp + -8) = eax;
    goto loc_00147E11;

loc_00147E11: ;
    eax = MEM32(ebp + -8);
    MEM16(ebp + 0x18) = LO16(eax);

loc_00147E18: ;
    MEM16(ebp + -4) = 0;

loc_00147E1E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00147E4A; /* jge: greater or equal (signed >=) */

loc_00147E2A: ;
    eax = MEM32(ebp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = ZX16(MEM16(eax + ecx * 2));
    eax = MEM32(ebp + 0x1C);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_00147E1E;

loc_00147E4A: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 1;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    MEM8(ebp + -1) = 1;

loc_00147E5C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147E70
 * Original: 0x00147E70 - 0x00147EAB (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147E70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00147E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0xB2D5B8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00147E99; /* je: equal / zero */

loc_00147E80: ;
    eax = ZX8(MEM8(0xB4D6C4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00147E99; /* je: equal / zero */

loc_00147E8C: ;
    eax = MEM32(0xB4D6C8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_00147EA3;

loc_00147E99: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    goto loc_00147EA3;

loc_00147EA3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147EB0
 * Original: 0x00147EB0 - 0x00147F1F (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147EB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(0xB2D5B8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147ED8; /* je: equal / zero */

loc_00147EC8: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147ED3u); RECOMP_ABI_CALL(0x00146670u, sub_00146670); /* call 0x00146670 */

loc_00147ED3: ;
    MEM32(ebp + -12) = eax;
    goto loc_00147EDF;

loc_00147ED8: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_00147EDF;

loc_00147EDF: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147EF5; /* je: equal / zero */

loc_00147EEB: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147EFE; /* je: equal / zero */

loc_00147EF5: ;
    MEM32(ebp + -4) = 0;
    goto loc_00147F17;

loc_00147EFE: ;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = LO16(ecx);
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 4;
    MEM32(ebp + -4) = eax;

loc_00147F17: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00147F20
 * Original: 0x00147F20 - 0x00148004 (228 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147F20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00147F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x1C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO16(eax, MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_00147F66; /* jl: less (signed <) */

loc_00147F43: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00147F66; /* jge: greater or equal (signed >=) */

loc_00147F4E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_00147F66; /* jle: less or equal (signed <=) */

loc_00147F57: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147F62u); RECOMP_ABI_CALL(0x00147C50u, sub_00147C50); /* call 0x00147C50 */

loc_00147F62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00147F6B; /* jne: not equal / not zero */

loc_00147F66: ;
    goto loc_00147FFC;

loc_00147F6B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ebx = 0xB2BAF8;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ebx = ebx + eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    edi = 0xB2BAF8;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edi = edi + eax;
    edi = edi + 4;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(ebp + -14) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0xB2BAF8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = eax + ecx;
    SET_LO16(ecx, MEM16(ebp + -14));
    eax = eax + 0x28;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147FCFu); RECOMP_ABI_CALL(0x00147DA0u, sub_00147DA0); /* call 0x00147DA0 */

loc_00147FCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00147FFC; /* je: equal / zero */

loc_00147FD3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = 0xB2BAF8;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = ecx + eax;
    ecx = ecx + 8;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147FFCu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00147FFC: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148010
 * Original: 0x00148010 - 0x001480C4 (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00148010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_00148049; /* jl: less (signed <) */

loc_0014802C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00148049; /* jge: greater or equal (signed >=) */

loc_00148035: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0xB2D4F8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x30);
    eax = eax + ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014804F; /* jne: not equal / not zero */

loc_00148049: ;
    MEM8(ebp + -1) = 0;
    goto loc_001480BC;

loc_0014804F: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0xB2D4F8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x30);
    eax = eax + ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0xB2D4F8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x30);
    eax = eax + edx;
    eax = eax + 8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014808Fu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0014808F: ;
    ecx = MEM32(ebp + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0xB2D4F8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x30);
    eax = eax + edx;
    eax = eax + 0x28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001480B8u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_001480B8: ;
    MEM8(ebp + -1) = 1;

loc_001480BC: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001480D0
 * Original: 0x001480D0 - 0x0014813C (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001480D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001480D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebp + -4) = 0;

loc_001480E0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014812D; /* jge: greater or equal (signed >=) */

loc_001480E9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001480F5u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_001480F5: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014811D; /* je: equal / zero */

loc_001480FE: ;
    eax = ZX16(MEM16(ebp + -8));
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = eax ^ edx;
    eax = eax | ecx;
    if ((eax != 0)) goto loc_0014811D; /* jne: not equal / not zero */

loc_00148111: ;
    goto loc_00148113;

loc_00148113: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00148133;

loc_0014811D: ;
    goto loc_0014811F;

loc_0014811F: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_001480E0;

loc_0014812D: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_00148133: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148140
 * Original: 0x00148140 - 0x00148170 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148140(void)
{
    uint32_t ebp = g_ebp;

loc_00148140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x4983D7;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x82C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148166u); RECOMP_ABI_CALL(0x00328600u, sub_00328600); /* call 0x00328600 */

loc_00148166: ;
    MEM32(0xBCDB58) = eax;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148170
 * Original: 0x00148170 - 0x00148175 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148170(void)
{
    uint32_t ebp = g_ebp;

loc_00148170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148180
 * Original: 0x00148180 - 0x001481AA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148180(void)
{
    uint32_t ebp = g_ebp;

loc_00148180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xBCDB58);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x82C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001481A5u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001481A5: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001481B0
 * Original: 0x001481B0 - 0x001481E3 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001481B0(void)
{
    uint32_t ebp = g_ebp;

loc_001481B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(0xBCDB58);
    MEMF(eax + 0x820) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(0xBCDB58);
    MEMF(eax + 0x824) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001481F0
 * Original: 0x001481F0 - 0x0014820C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001481F0(void)
{
    uint32_t ebp = g_ebp;

loc_001481F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(0xBCDB58);
    MEMF(eax + 0x828) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148210
 * Original: 0x00148210 - 0x00148473 (611 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148210(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00148210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(0xBCDB58);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x208);
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1E0)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014828B; /* jne: not equal / not zero */

loc_00148257: ;
    ecx = 0x48C77A;
    eax = 0x47E2A4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014827Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014827F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014828Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014828B: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1E4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001482B9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001482A0: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x3C;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1E4)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_001482B9: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1E8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001482E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001482CE: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x78;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1E8)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_001482E7: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1EC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00148317; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001482FC: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xB4;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1EC)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_00148317: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1F0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00148347; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014832C: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xF0;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1F0)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_00148347: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00148377; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014835C: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x12C;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1F4)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_00148377: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1F8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001483A7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014838C: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x168;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1F8)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_001483A7: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1FC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001483C7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001483BC: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x1A4;
    MEM32(ebp + -8) = eax;

loc_001483C7: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001483E1u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_001483E1: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x28); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x28); /* addss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = eax - ecx;
    ecx = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + ecx * 4 + 0x1E0) = xmm0.f[0]; /* movss */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148480
 * Original: 0x00148480 - 0x001484BA (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148480(void)
{
    uint32_t ebp = g_ebp;

loc_00148480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(0xBCDB58);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x208);
    eax = eax + ecx;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x208;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001484B5u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001484B5: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001484C0
 * Original: 0x001484C0 - 0x00148532 (114 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001484C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001484C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xBCDB58);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x82C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001484E5u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001484E5: ;
    MEM32(ebp + -4) = 0;

loc_001484EC: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014852D; /* jge: greater or equal (signed >=) */

loc_001484F2: ;
    eax = MEM32(ebp + -4);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001484FEu); RECOMP_ABI_CALL(0x0016B140u, sub_0016B140); /* call 0x0016B140 */

loc_001484FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148520; /* je: equal / zero */

loc_00148502: ;
    eax = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148520u); RECOMP_ABI_CALL(0x0016B260u, sub_0016B260); /* call 0x0016B260 */

loc_00148520: ;
    goto loc_00148522;

loc_00148522: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_001484EC;

loc_0014852D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

