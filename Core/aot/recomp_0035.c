/* Generated ELF translation shard 35: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_0038E8C0
 * Original: 0x0038E8C0 - 0x0038EED3 (1555 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038E8C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0038E8C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x134;
    eax = MEM32(ebp + 8);
    MEM8(ebp + -5) = 0;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038E8E4u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0038E8E4: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038E8FCu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038E8FC: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038EEC7; /* je: equal / zero */

loc_0038E90C: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x44);
    MEM32(esp) = 0x616E7472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038E922u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038E922: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038EEC5; /* je: equal / zero */

loc_0038E932: ;
    eax = MEM32(ebp + -20);
    eax = eax + 0x24;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038E952u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0038E952: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038EEC3; /* je: equal / zero */

loc_0038E95F: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038E978u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038E978: ;
    MEM32(ebp + -28) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -12);
    edx = edx + 4;
    edx = edx + 8;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x2C;
    esi = ebp + -80;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038E9B5u); RECOMP_ABI_CALL(0x001D2020u, sub_001D2020); /* call 0x001D2020 */

loc_0038E9B5: ;
    MEM16(ebp + -86) = 0;

loc_0038E9BB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -86);
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038ED84; /* jge: greater or equal (signed >=) */

loc_0038E9CB: ;
    ecx = MEM32(ebp + -24);
    ecx = ecx + 0x68;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -86);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038E9E9u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0038E9E9: ;
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -92);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038ED71; /* jl: less (signed <) */

loc_0038E9FB: ;
    eax = MEM32(ebp + -92);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    ecx = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038ED71; /* jge: greater or equal (signed >=) */

loc_0038EA0D: ;
    eax = MEM32(ebp + -92);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038ED71; /* je: equal / zero */

loc_0038EA1D: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x74;
    eax = MEM32(ebp + -92);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EA3Eu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0038EA3E: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x74;
    eax = MEM32(ebp + -92);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EA5Eu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0038EA5E: ;
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -86);
    eax = ZX8(MEM8(eax + ecx + 0x44C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038EA89; /* jne: not equal / not zero */

loc_0038EA77: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -228) = xmm0.f[0]; /* movss */
    goto loc_0038EAB0;

loc_0038EA89: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -86);
    eax = ZX8(MEM8(eax + ecx + 0x44C));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -228) = xmm0.f[0]; /* movss */

loc_0038EAB0: ;
    ecx = MEM32(ebp + -96);
    ecx = ecx + 0x38;
    edx = ebp + -80;
    eax = ebp + -188;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EACFu); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_0038EACF: ;
    ecx = MEM32(ebp + -96);
    ecx = ecx + 0x50;
    edx = ebp + -80;
    eax = ebp + -200;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EAEEu); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_0038EAEE: ;
    eax = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + -92);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -232) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + -28);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -232); /* subss */
    MEMF(ebp + -236) = xmm0.f[0]; /* movss */
    eax = ebp + -188;
    MEM32(ebp + -244) = eax;
    eax = ebp + -200;
    MEM32(ebp + -248) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -236)); /* movss */
    MEMF(ebp + -252) = xmm0.f[0]; /* movss */
    eax = ebp + -212;
    MEM32(ebp + -256) = eax;
    eax = MEM32(ebp + -248);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -252); /* mulss */
    eax = MEM32(ebp + -244);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    eax = MEM32(ebp + -256);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -248);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -252); /* mulss */
    eax = MEM32(ebp + -244);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(ebp + -256);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -248);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -252); /* mulss */
    eax = MEM32(ebp + -244);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(ebp + -256);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -232)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -232); /* addss */
    ecx = ebp + -200;
    eax = ebp + -224;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EC00u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_0038EC00: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -212;
    edx = ebp + -224;
    eax = ebp + -176;
    MEM32(esp) = 0xC0A0;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EC31u); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_0038EC31: ;
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -156); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -156); /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038EC6A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038EC5D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -260) = xmm0.f[0]; /* movss */
    goto loc_0038ECE9;

loc_0038EC6A: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -156); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -156); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038ECAD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038EC9B: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -264) = xmm0.f[0]; /* movss */
    goto loc_0038ECD9;

loc_0038ECAD: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -156); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -156); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -264) = xmm0.f[0]; /* movss */

loc_0038ECD9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -264)); /* movss */
    MEMF(ebp + -260) = xmm0.f[0]; /* movss */

loc_0038ECE9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -260)); /* movss */
    MEMF(ebp + -240) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -240)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -228); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -84); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038ED24; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -84)) */

loc_0038ED0F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -240)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -228); /* subss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */

loc_0038ED24: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -240)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -228); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038ED61u); RECOMP_ABI_CALL(0x001DAB80u, sub_001DAB80); /* call 0x001DAB80 */

loc_0038ED61: ;
    SET_LO8(edx, LO8(eax));
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -86);
    MEM8(eax + ecx + 0x44C) = LO8(edx);

loc_0038ED71: ;
    goto loc_0038ED73;

loc_0038ED73: ;
    SET_LO16(eax, MEM16(ebp + -86));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -86) = LO16(eax);
    goto loc_0038E9BB;

loc_0038ED84: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x3BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3BC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038EEC1; /* je: equal / zero */

loc_0038ED94: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DCF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038EEC1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038EDAA: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -280) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x3BC);
    MEM32(ebp + -276) = eax;
    eax = MEM32(0x59CA3C);
    MEM32(ebp + -272) = eax;
    eax = MEM32(0x59CA5C);
    MEM32(ebp + -268) = eax;
    xmm1 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DCF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x43D65C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038EE0A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038EDFD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -284) = xmm0.f[0]; /* movss */
    goto loc_0038EE7B;

loc_0038EE0A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DCF0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43D65C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038EE46; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038EE34: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -288) = xmm0.f[0]; /* movss */
    goto loc_0038EE6B;

loc_0038EE46: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DCF0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43D65C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -288) = xmm0.f[0]; /* movss */

loc_0038EE6B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -288)); /* movss */
    MEMF(ebp + -284) = xmm0.f[0]; /* movss */

loc_0038EE7B: ;
    eax = MEM32(ebp + -268);
    ecx = MEM32(ebp + -272);
    edx = MEM32(ebp + -276);
    esi = MEM32(ebp + -280);
    xmm0 = XMM_SCALAR(MEMF(ebp + -284)); /* movss */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EEBDu); RECOMP_ABI_CALL(0x00337CC0u, sub_00337CC0); /* call 0x00337CC0 */

loc_0038EEBD: ;
    MEM8(ebp + -5) = 1;

loc_0038EEC1: ;
    goto loc_0038EEC3;

loc_0038EEC3: ;
    goto loc_0038EEC5;

loc_0038EEC5: ;
    goto loc_0038EEC7;

loc_0038EEC7: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0x134;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0038EEE0
 * Original: 0x0038EEE0 - 0x0038F21D (829 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038EEE0(void)
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

loc_0038EEE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0xB4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EF06u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0038EF06: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EF1Eu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038EF1E: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EF3Au); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038EF3A: ;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EF42u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0038EF42: ;
    eax = eax + 0x188;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EF61u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0038EF61: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038EF7D; /* jne: not equal / not zero */

loc_0038EF6D: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3CC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038F214; /* je: equal / zero */

loc_0038EF7D: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    eax = ebp + -32;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038EFC6u); RECOMP_ABI_CALL(0x00389D70u, sub_00389D70); /* call 0x00389D70 */

loc_0038EFC6: ;
    MEMF(ebp + -136) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038F212; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038EFEF: ;
    MEM16(ebp + -38) = 0;

loc_0038EFF5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -38);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038F210; /* jge: greater or equal (signed >=) */

loc_0038F005: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -38);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F023u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0038F023: ;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x130);
    eax = eax + ecx;
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038F1FD; /* je: equal / zero */

loc_0038F040: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038F149; /* je: equal / zero */

loc_0038F06F: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x48);
    ecx = ebp + -132;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F087u); RECOMP_ABI_CALL(0x002158E0u, sub_002158E0); /* call 0x002158E0 */

loc_0038F087: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -44); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038F09D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -44)) */

loc_0038F090: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */
    goto loc_0038F0DE;

loc_0038F09D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038F0C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038F0AF: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -144) = xmm0.f[0]; /* movss */
    goto loc_0038F0CE;

loc_0038F0C1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -144) = xmm0.f[0]; /* movss */

loc_0038F0CE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -144)); /* movss */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */

loc_0038F0DE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -140)); /* movss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x50);
    MEM32(ebp + -104) = ecx;
    ecx = MEM32(eax + 0x54);
    MEM32(ebp + -100) = ecx;
    eax = MEM32(eax + 0x58);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -132;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F149u); RECOMP_ABI_CALL(0x00216400u, sub_00216400); /* call 0x00216400 */

loc_0038F149: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3CC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038F1FB; /* je: equal / zero */

loc_0038F159: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -44); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038F16F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -44)) */

loc_0038F162: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    goto loc_0038F1B0;

loc_0038F16F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038F193; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038F181: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -152) = xmm0.f[0]; /* movss */
    goto loc_0038F1A0;

loc_0038F193: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -152) = xmm0.f[0]; /* movss */

loc_0038F1A0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -152)); /* movss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */

loc_0038F1B0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -148)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    edx = MEM32(eax + 0x3CC);
    ecx = MEM32(0x59CA3C);
    eax = MEM32(0x59CA5C);
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F1FBu); RECOMP_ABI_CALL(0x00337CC0u, sub_00337CC0); /* call 0x00337CC0 */

loc_0038F1FB: ;
    goto loc_0038F210;

loc_0038F1FD: ;
    goto loc_0038F1FF;

loc_0038F1FF: ;
    SET_LO16(eax, MEM16(ebp + -38));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -38) = LO16(eax);
    goto loc_0038EFF5;

loc_0038F210: ;
    goto loc_0038F212;

loc_0038F212: ;
    goto loc_0038F214;

loc_0038F214: ;
    esp = esp + 0xB4;
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
 * sub_0038F220
 * Original: 0x0038F220 - 0x0038F32F (271 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F220(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038F220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F242u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0038F242: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F25Au); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038F25A: ;
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F270u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038F270: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax + 0x428));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038F296; /* jge: greater or equal (signed >=) */

loc_0038F284: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 0x428));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x428) = LO8(ecx);

loc_0038F296: ;
    MEM16(ebp + -10) = 0;

loc_0038F29C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038F320; /* jge: greater or equal (signed >=) */

loc_0038F2A8: ;
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x130);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038F2F6; /* je: equal / zero */

loc_0038F2C7: ;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x428) = 0;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax + 0x42B));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038F2F4; /* jge: greater or equal (signed >=) */

loc_0038F2E2: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 0x42B));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x42B) = LO8(ecx);

loc_0038F2F4: ;
    goto loc_0038F32A;

loc_0038F2F6: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038F30D; /* je: equal / zero */

loc_0038F303: ;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x428) = 0;

loc_0038F30D: ;
    goto loc_0038F30F;

loc_0038F30F: ;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_0038F29C;

loc_0038F320: ;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x42B) = 0;

loc_0038F32A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0038F330
 * Original: 0x0038F330 - 0x0038F5BD (653 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F330(void)
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

loc_0038F330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0xA4;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F350u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0038F350: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 8;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x38;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 0x426));
    SET_LO16(ecx, LO16(ecx) + 0xFFFFFFFFu);
    MEM16(eax + 0x426) = LO16(ecx);
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(0x43DB78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(0x43DB78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(0x43DB78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(0x43DB78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(0x43DB78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(0x43DB78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(ebp + -80) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax);
    MEM32(ebp + -124) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -120) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -116) = eax;
    eax = ebp + -124;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F462u); RECOMP_ABI_CALL(0x00388F30u, sub_00388F30); /* call 0x00388F30 */

loc_0038F462: ;
    MEMF(ebp + -128) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -128)); /* movss */
    MEMF(ebp + -112) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0038F483; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0038F47C: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0038F483; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0038F47E: ;
    goto loc_0038F52B;

loc_0038F483: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F492u); RECOMP_ABI_CALL(0x0038F6C0u, sub_0038F6C0); /* call 0x0038F6C0 */

loc_0038F492: ;
    MEMF(ebp + -136) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F4B7u); RECOMP_ABI_CALL(0x0038F680u, sub_0038F680); /* call 0x0038F680 */

loc_0038F4B7: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -140)); /* movss */
    MEMF(ebp + -132) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    ecx = ebp + -72;
    eax = ebp + -124;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F4EBu); RECOMP_ABI_CALL(0x001D0CC0u, sub_001D0CC0); /* call 0x001D0CC0 */

loc_0038F4EB: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    edx = ebp + -72;
    eax = ebp + -96;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F50Au); RECOMP_ABI_CALL(0x001D2420u, sub_001D2420); /* call 0x001D2420 */

loc_0038F50A: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 0x2C;
    edx = ebp + -72;
    eax = ebp + -108;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F529u); RECOMP_ABI_CALL(0x001D2420u, sub_001D2420); /* call 0x001D2420 */

loc_0038F529: ;
    goto loc_0038F555;

loc_0038F52B: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x24);
    MEM32(ebp + -96) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(ebp + -92) = ecx;
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x30);
    MEM32(ebp + -108) = ecx;
    ecx = MEM32(eax + 0x34);
    MEM32(ebp + -104) = ecx;
    eax = MEM32(eax + 0x38);
    MEM32(ebp + -100) = eax;

loc_0038F555: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM16(eax + 0x426)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x426), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038F594; /* jne: not equal / not zero */

loc_0038F562: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -20);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0038F594: ;
    esi = MEM32(ebp + 8);
    edx = ebp + -84;
    ecx = ebp + -96;
    eax = ebp + -108;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F5B4u); RECOMP_ABI_CALL(0x0022AA20u, sub_0022AA20); /* call 0x0022AA20 */

loc_0038F5B4: ;
    esp = esp + 0xA4;
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
 * sub_0038F5C0
 * Original: 0x0038F5C0 - 0x0038F5E7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F5C0(void)
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

loc_0038F5C0: ;
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
 * sub_0038F5F0
 * Original: 0x0038F5F0 - 0x0038F646 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F5F0(void)
{
    uint32_t ebp = g_ebp;

loc_0038F5F0: ;
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
 * sub_0038F650
 * Original: 0x0038F650 - 0x0038F67E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F650(void)
{
    uint32_t ebp = g_ebp;

loc_0038F650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0038F680
 * Original: 0x0038F680 - 0x0038F6B4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F680(void)
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

loc_0038F680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F69Fu); RECOMP_ABI_CALL(0x003D7580u, sub_003D7580); /* call 0x003D7580 */

loc_0038F69F: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
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
 * sub_0038F6C0
 * Original: 0x0038F6C0 - 0x0038F6F4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F6C0(void)
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

loc_0038F6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F6DFu); RECOMP_ABI_CALL(0x003DA050u, sub_003DA050); /* call 0x003DA050 */

loc_0038F6DF: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
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
 * sub_0038F700
 * Original: 0x0038F700 - 0x0038F7BA (186 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F700(void)
{
    uint32_t ebp = g_ebp;

loc_0038F700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + -4);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -4);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + -4);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0038F7C0
 * Original: 0x0038F7C0 - 0x0038F8C2 (258 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F7C0(void)
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

loc_0038F7C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax + 8;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -4);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + -16);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -36)); /* fld float */
    esp = esp + 0x24;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0038F8D0
 * Original: 0x0038F8D0 - 0x0038F92B (91 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F8D0(void)
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

loc_0038F8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -12)); /* fld float */
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0038F930
 * Original: 0x0038F930 - 0x0038F9C9 (153 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F930(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0038F930: ;
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
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038F989; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038F970: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    goto loc_0038F9B4;

loc_0038F989: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038F9A0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_0038F994: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    goto loc_0038F9AA;

loc_0038F9A0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_0038F9AA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */

loc_0038F9B4: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0038F9D0
 * Original: 0x0038F9D0 - 0x0038FDEC (1052 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F9D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038F9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x7D0;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038F9F1u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0038F9F1: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FA09u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038FA09: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038FDE2; /* je: equal / zero */

loc_0038FA1C: ;
    edx = MEM32(ebp + 8);
    eax = ebp + -1744;
    ecx = 0x4501F4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FA43u); RECOMP_ABI_CALL(0x00225CA0u, sub_00225CA0); /* call 0x00225CA0 */

loc_0038FA43: ;
    MEM16(ebp + -1746) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1746);
    MEM32(ebp + -1752) = eax;
    esi = MEM32(ebp + 8);
    ecx = ebp + -1744;
    eax = (uint32_t)((int32_t)MEM32(ebp + -1752) * (int32_t)0x6C);
    ecx = ecx + eax;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -1746);
    eax = 0x10;
    eax = eax - edx;
    edx = 0x488D75;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FA92u); RECOMP_ABI_CALL(0x00225CA0u, sub_00225CA0); /* call 0x00225CA0 */

loc_0038FA92: ;
    eax = SX16(eax); /* cwde */
    eax = eax + MEM32(ebp + -1752);
    MEM32(ebp + -1752) = eax;
    MEM16(ebp + -1754) = 0;

loc_0038FAA8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1754);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -1752)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -1752) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038FDE0; /* jge: greater or equal (signed >=) */

loc_0038FABB: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -1754);
    eax = ebp + -1744;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    eax = eax + ecx;
    MEM32(ebp + -1760) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FAD8u); RECOMP_ABI_CALL(0x001D4CA0u, sub_001D4CA0); /* call 0x001D4CA0 */

loc_0038FAD8: ;
    edx = eax;
    ecx = MEM32(ebp + -1760);
    ecx = ecx + 0x38;
    ecx = ecx + 4;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x43D660)); /* movss */
    eax = ebp + -1852;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FB13u); RECOMP_ABI_CALL(0x001D52D0u, sub_001D52D0); /* call 0x001D52D0 */

loc_0038FB13: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1754);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -1746);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038FB3A; /* jge: greater or equal (signed >=) */

loc_0038FB25: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x444)); /* movss */
    MEMF(ebp + -1960) = xmm0.f[0]; /* movss */
    goto loc_0038FB4D;

loc_0038FB3A: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x448)); /* movss */
    MEMF(ebp + -1960) = xmm0.f[0]; /* movss */

loc_0038FB4D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1960)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D804)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -1952) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1852)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1952); /* mulss */
    MEMF(ebp + -1864) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1848)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1952); /* mulss */
    MEMF(ebp + -1860) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1844)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1952); /* mulss */
    MEMF(ebp + -1856) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + -1760);
    esi = esi + 0x38;
    esi = esi + 4;
    esi = esi + 0x24;
    ecx = MEM32(ebp + 8);
    edx = ebp + -1864;
    eax = ebp + -1840;
    MEM32(esp) = 0x61;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FBF7u); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_0038FBF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038FDC7; /* je: equal / zero */

loc_0038FBFF: ;
    eax = MEM32(ebp + -1816);
    MEM32(ebp + -1900) = eax;
    eax = MEM32(ebp + -1812);
    MEM32(ebp + -1896) = eax;
    eax = MEM32(ebp + -1808);
    MEM32(ebp + -1892) = eax;
    eax = MEM32(ebp + -1816);
    MEM32(ebp + -1888) = eax;
    eax = MEM32(ebp + -1812);
    MEM32(ebp + -1884) = eax;
    eax = MEM32(ebp + -1808);
    MEM32(ebp + -1880) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1852)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -1936) = xmm0.f[0]; /* movss */
    eax = 0x48A588;
    MEM32(ebp + -1948) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1848)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -1932) = xmm0.f[0]; /* movss */
    eax = 0x487150;
    MEM32(ebp + -1944) = eax;
    eax = MEM32(ebp + -1804);
    MEM32(ebp + -1924) = eax;
    eax = MEM32(ebp + -1800);
    MEM32(ebp + -1920) = eax;
    eax = MEM32(ebp + -1796);
    MEM32(ebp + -1916) = eax;
    eax = MEM32(ebp + -1816);
    MEM32(ebp + -1876) = eax;
    eax = MEM32(ebp + -1812);
    MEM32(ebp + -1872) = eax;
    eax = MEM32(ebp + -1808);
    MEM32(ebp + -1868) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1844)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -1928) = xmm0.f[0]; /* movss */
    eax = 0x474A66;
    MEM32(ebp + -1940) = eax;
    ecx = ebp + -1840;
    ecx = ecx + 0x24;
    eax = ebp + -1936;
    eax = eax + 0x18;
    edx = ebp + -1852;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FD32u); RECOMP_ABI_CALL(0x001DC040u, sub_001DC040); /* call 0x001DC040 */

loc_0038FD32: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -1820); /* subss */
    MEMF(ebp + -1956) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    esi = MEM32(eax + 0x3EC);
    edx = ebp + -1948;
    ecx = ebp + -1900;
    eax = ebp + -1936;
    xmm1 = XMM_SCALAR(MEMF(ebp + -1956)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1956)); /* movss */
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 3;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FDC7u); RECOMP_ABI_CALL(0x00114CC0u, sub_00114CC0); /* call 0x00114CC0 */

loc_0038FDC7: ;
    goto loc_0038FDC9;

loc_0038FDC9: ;
    SET_LO16(eax, MEM16(ebp + -1754));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -1754) = LO16(eax);
    goto loc_0038FAA8;

loc_0038FDE0: ;
    goto loc_0038FDE2;

loc_0038FDE2: ;
    esp = esp + 0x7D0;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0038FDF0
 * Original: 0x0038FDF0 - 0x0038FEA7 (183 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038FDF0(void)
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

loc_0038FDF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0038FE9B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038FE4D: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FE6Cu); RECOMP_ABI_CALL(0x003904C0u, sub_003904C0); /* call 0x003904C0 */

loc_0038FE6C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    ecx = MEM32(ebp + -16);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FE95u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_0038FE95: ;
    MEM8(ebp + -1) = 1;
    goto loc_0038FE9F;

loc_0038FE9B: ;
    MEM8(ebp + -1) = 0;

loc_0038FE9F: ;
    SET_LO8(eax, MEM8(ebp + -1));
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
 * sub_0038FEB0
 * Original: 0x0038FEB0 - 0x0038FF3B (139 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038FEB0(void)
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

loc_0038FEB0: ;
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
    PUSH32(esp, 0x0038FEC4u); RECOMP_ABI_CALL(0x00390500u, sub_00390500); /* call 0x00390500 */

loc_0038FEC4: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E918)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0038FF21; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038FEFA: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -4); /* divss */
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FF1Fu); RECOMP_ABI_CALL(0x00390530u, sub_00390530); /* call 0x00390530 */

loc_0038FF1F: ;
    goto loc_0038FF29;

loc_0038FF21: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0038FF29: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -12)); /* fld float */
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
 * sub_0038FF40
 * Original: 0x0038FF40 - 0x0038FF7B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038FF40(void)
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

loc_0038FF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
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
 * sub_0038FF80
 * Original: 0x0038FF80 - 0x003904BC (1340 bytes, 255 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038FF80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0038FF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x800;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FFA1u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0038FFA1: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038FFB9u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0038FFB9: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003904B2; /* je: equal / zero */

loc_0038FFCC: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003904B2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038FFE3: ;
    edx = MEM32(ebp + 8);
    eax = ebp + -1744;
    ecx = 0x4501F4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039000Au); RECOMP_ABI_CALL(0x00225CA0u, sub_00225CA0); /* call 0x00225CA0 */

loc_0039000A: ;
    MEM16(ebp + -1746) = LO16(eax);
    MEM16(ebp + -1748) = 0;
    MEM16(ebp + -1750) = 0;

loc_00390023: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1750);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -1746);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -1748);
    ecx = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003904B0; /* jge: greater or equal (signed >=) */

loc_00390042: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -1750);
    eax = ebp + -1744;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    eax = eax + ecx;
    MEM32(ebp + -1756) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039005Fu); RECOMP_ABI_CALL(0x001D4CA0u, sub_001D4CA0); /* call 0x001D4CA0 */

loc_0039005F: ;
    edx = eax;
    ecx = MEM32(ebp + -1756);
    ecx = ecx + 0x38;
    ecx = ecx + 4;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x43D564)); /* movss */
    eax = ebp + -1848;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039009Au); RECOMP_ABI_CALL(0x001D52D0u, sub_001D52D0); /* call 0x001D52D0 */

loc_0039009A: ;
    eax = MEM32(ebp + -1848);
    MEM32(ebp + -1860) = eax;
    eax = MEM32(ebp + -1844);
    MEM32(ebp + -1856) = eax;
    eax = MEM32(ebp + -1840);
    MEM32(ebp + -1852) = eax;
    esi = MEM32(ebp + -1756);
    esi = esi + 0x38;
    esi = esi + 4;
    esi = esi + 0x24;
    ecx = MEM32(ebp + 8);
    edx = ebp + -1860;
    eax = ebp + -1836;
    MEM32(esp) = 0x61;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003900F8u); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_003900F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00390497; /* je: equal / zero */

loc_00390100: ;
    eax = MEM32(ebp + -1756);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm1 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -1816); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = MEM32(ebp + -12);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2E8); /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0039014F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0039013F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -1992) = xmm0.f[0]; /* movss */
    goto loc_003901F4;

loc_0039014F: ;
    eax = MEM32(ebp + -1756);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -1816); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2E8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003901A5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00390193: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -1996) = xmm0.f[0]; /* movss */
    goto loc_003901E4;

loc_003901A5: ;
    eax = MEM32(ebp + -1756);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -1816); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2E8); /* mulss */
    MEMF(ebp + -1996) = xmm0.f[0]; /* movss */

loc_003901E4: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1996)); /* movss */
    MEMF(ebp + -1992) = xmm0.f[0]; /* movss */

loc_003901F4: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1992)); /* movss */
    MEMF(ebp + -1988) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1988)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00390495; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00390218: ;
    eax = MEM32(ebp + -1756);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -1812); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -1872) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1756);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -1808); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -1868) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1756);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -1804); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -1864) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1812);
    MEM32(ebp + -1920) = eax;
    eax = MEM32(ebp + -1808);
    MEM32(ebp + -1916) = eax;
    eax = MEM32(ebp + -1804);
    MEM32(ebp + -1912) = eax;
    eax = MEM32(ebp + -1812);
    MEM32(ebp + -1908) = eax;
    eax = MEM32(ebp + -1808);
    MEM32(ebp + -1904) = eax;
    eax = MEM32(ebp + -1804);
    MEM32(ebp + -1900) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1848)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -1968) = xmm0.f[0]; /* movss */
    eax = 0x48A588;
    MEM32(ebp + -1984) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1844)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -1964) = xmm0.f[0]; /* movss */
    eax = 0x487150;
    MEM32(ebp + -1980) = eax;
    eax = MEM32(ebp + -1800);
    MEM32(ebp + -1956) = eax;
    eax = MEM32(ebp + -1796);
    MEM32(ebp + -1952) = eax;
    eax = MEM32(ebp + -1792);
    MEM32(ebp + -1948) = eax;
    eax = MEM32(ebp + -1812);
    MEM32(ebp + -1896) = eax;
    eax = MEM32(ebp + -1808);
    MEM32(ebp + -1892) = eax;
    eax = MEM32(ebp + -1804);
    MEM32(ebp + -1888) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1840)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -1960) = xmm0.f[0]; /* movss */
    eax = 0x474A66;
    MEM32(ebp + -1976) = eax;
    ecx = ebp + -1836;
    ecx = ecx + 0x24;
    eax = ebp + -1968;
    eax = eax + 0x18;
    edx = ebp + -1848;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003903C0u); RECOMP_ABI_CALL(0x001DC040u, sub_001DC040); /* call 0x001DC040 */

loc_003903C0: ;
    eax = MEM32(ebp + -1872);
    MEM32(ebp + -1884) = eax;
    eax = MEM32(ebp + -1868);
    MEM32(ebp + -1880) = eax;
    eax = MEM32(ebp + -1864);
    MEM32(ebp + -1876) = eax;
    eax = 0x47FED2;
    MEM32(ebp + -1972) = eax;
    ecx = ebp + -1836;
    ecx = ecx + 0x24;
    eax = ebp + -1968;
    eax = eax + 0x24;
    edx = ebp + -1848;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390418u); RECOMP_ABI_CALL(0x001DC040u, sub_001DC040); /* call 0x001DC040 */

loc_00390418: ;
    eax = MEM32(ebp + -16);
    esi = MEM32(eax + 0x3EC);
    edx = ebp + -1984;
    ecx = ebp + -1920;
    eax = ebp + -1968;
    xmm1 = XMM_SCALAR(MEMF(ebp + -1988)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1988)); /* movss */
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390495u); RECOMP_ABI_CALL(0x00114CC0u, sub_00114CC0); /* call 0x00114CC0 */

loc_00390495: ;
    goto loc_00390497;

loc_00390497: ;
    goto loc_00390499;

loc_00390499: ;
    SET_LO16(eax, MEM16(ebp + -1750));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -1750) = LO16(eax);
    goto loc_00390023;

loc_003904B0: ;
    goto loc_003904B2;

loc_003904B2: ;
    esp = esp + 0x800;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003904C0
 * Original: 0x003904C0 - 0x003904FC (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003904C0(void)
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

loc_003904C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003904DBu); RECOMP_ABI_CALL(0x0038F5C0u, sub_0038F5C0); /* call 0x0038F5C0 */

loc_003904DB: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
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
 * sub_00390500
 * Original: 0x00390500 - 0x0039052B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390500(void)
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

loc_00390500: ;
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
    PUSH32(esp, 0x00390515u); RECOMP_ABI_CALL(0x00390570u, sub_00390570); /* call 0x00390570 */

loc_00390515: ;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039051Eu); RECOMP_ABI_CALL(0x0038F5C0u, sub_0038F5C0); /* call 0x0038F5C0 */

loc_0039051E: ;
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
 * sub_00390530
 * Original: 0x00390530 - 0x0039056B (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390530(void)
{
    uint32_t ebp = g_ebp;

loc_00390530: ;
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
 * sub_00390570
 * Original: 0x00390570 - 0x0039059C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390570(void)
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

loc_00390570: ;
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
 * sub_003905A0
 * Original: 0x003905A0 - 0x00390BD8 (1592 bytes, 332 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003905A0(void)
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

loc_003905A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x160;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003905C7u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_003905C7: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003905DFu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_003905DF: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003905FBu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_003905FB: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00390BA2; /* jne: not equal / not zero */

loc_0039060B: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x1D4);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(eax + 0x1D8);
    MEM32(ebp + -28) = ecx;
    eax = MEM32(eax + 0x1DC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(0x59CA64);
    ecx = MEM32(eax);
    MEM32(ebp + -44) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -40) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -36) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -32); /* mulss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -28); /* mulss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -24); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    eax = ebp + -44;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039069Du); RECOMP_ABI_CALL(0x00388F30u, sub_00388F30); /* call 0x00388F30 */

loc_0039069D: ;
    MEMF(ebp + -312) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -312)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003906DD; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_003906B3: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003906DD; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_003906B5: ;
    eax = ebp + -44;
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003906DDu); RECOMP_ABI_CALL(0x00391450u, sub_00391450); /* call 0x00391450 */

loc_003906DD: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003906FBu); RECOMP_ABI_CALL(0x00389DA0u, sub_00389DA0); /* call 0x00389DA0 */

loc_003906FB: ;
    MEMF(ebp + -316) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -316)); /* movss */
    MEMF(ebp + -264) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x42C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -264); /* subss */
    eax = MEM32(ebp + -20);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -268) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -264)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x2F8); /* divss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = MEM32(ebp + -20);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F40); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -272) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -272)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    eax = MEM32(ebp + -12);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -224) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -272)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x34); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    eax = MEM32(ebp + -12);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -220) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -272)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x38); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    eax = MEM32(ebp + -12);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -216) = xmm0.f[0]; /* movss */
    eax = ebp + -256;
    MEM32(ebp + -280) = eax;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(ebp + -284) = eax;
    MEM16(ebp + -286) = 0;

loc_00390832: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -286);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00390876; /* jge: greater or equal (signed >=) */

loc_0039083E: ;
    eax = MEM32(ebp + -284);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -286);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4)); /* movss */
    eax = MEM32(ebp + -280);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -286);
    MEMF(eax + ecx * 4) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + -286));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -286) = LO16(eax);
    goto loc_00390832;

loc_00390876: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -252); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -256); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -16);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2F8)); /* movss */
    xmm1.d[0] = (double)xmm1.f[0]; /* cvtss2sd */
    xmm2 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm2); /* pand */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -260) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -260)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003908DCu); RECOMP_ABI_CALL(0x0038F6C0u, sub_0038F6C0); /* call 0x0038F6C0 */

loc_003908DC: ;
    MEMF(ebp + -324) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -324)); /* movss */
    MEMF(ebp + -328) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -260)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390904u); RECOMP_ABI_CALL(0x0038F680u, sub_0038F680); /* call 0x0038F680 */

loc_00390904: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -328)); /* movss */
    MEMF(ebp + -320) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -320)); /* movss */
    ecx = ebp + -44;
    eax = ebp + -32;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390938u); RECOMP_ABI_CALL(0x001DB800u, sub_001DB800); /* call 0x001DB800 */

loc_00390938: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x2C;
    edx = ebp + -96;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039095Du); RECOMP_ABI_CALL(0x001D1AC0u, sub_001D1AC0); /* call 0x001D1AC0 */

loc_0039095D: ;
    edx = ebp + -148;
    ecx = ebp + -32;
    eax = ebp + -44;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390979u); RECOMP_ABI_CALL(0x001D1AC0u, sub_001D1AC0); /* call 0x001D1AC0 */

loc_00390979: ;
    eax = ebp + -148;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039098Bu); RECOMP_ABI_CALL(0x001D1860u, sub_001D1860); /* call 0x001D1860 */

loc_0039098B: ;
    edx = ebp + -96;
    ecx = ebp + -148;
    eax = ebp + -200;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003909AAu); RECOMP_ABI_CALL(0x001D2180u, sub_001D2180); /* call 0x001D2180 */

loc_003909AA: ;
    ecx = ebp + -200;
    eax = ebp + -304;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003909C2u); RECOMP_ABI_CALL(0x001D1090u, sub_001D1090); /* call 0x001D1090 */

loc_003909C2: ;
    edx = ebp + -304;
    ecx = ebp + -308;
    eax = ebp + -212;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003909E4u); RECOMP_ABI_CALL(0x001DC4E0u, sub_001DC4E0); /* call 0x001DC4E0 */

loc_003909E4: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D78C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -308); /* mulss */
    ecx = ebp + -212;
    eax = ebp + -248;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390A12u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_00390A12: ;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -20);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + -20);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -276) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -248)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x3C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -276); /* mulss */
    MEMF(ebp + -236) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -244)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x40); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -276); /* mulss */
    MEMF(ebp + -232) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -240)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -276); /* mulss */
    MEMF(ebp + -228) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = ebp + -224;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390B50u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_00390B50: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = ebp + -236;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390B73u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_00390B73: ;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    ecx = ebp + -224;
    eax = ebp + -236;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390BA0u); RECOMP_ABI_CALL(0x00252740u, sub_00252740); /* call 0x00252740 */

loc_00390BA0: ;
    goto loc_00390BCE;

loc_00390BA2: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390BCEu); RECOMP_ABI_CALL(0x00252740u, sub_00252740); /* call 0x00252740 */

loc_00390BCE: ;
    esp = esp + 0x160;
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
 * sub_00390BE0
 * Original: 0x00390BE0 - 0x00391450 (2160 bytes, 452 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390BE0(void)
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

loc_00390BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x150;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390C07u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00390C07: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390C1Fu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00390C1F: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390C3Bu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00390C3B: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039141A; /* jne: not equal / not zero */

loc_00390C4B: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x42C)); /* movss */
    eax = ebp + -100;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390C74u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_00390C74: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x42C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00390CA4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00390C87: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x42C)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x2F8); /* divss */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */
    goto loc_00390CCC;

loc_00390CA4: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x42C)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x2FC); /* divss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */

loc_00390CCC: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x14;
    xmm1 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    eax = MEM32(ebp + -16);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x300); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x304); /* mulss */
    edx = ebp + -100;
    eax = ebp + -112;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390D17u); RECOMP_ABI_CALL(0x00391490u, sub_00391490); /* call 0x00391490 */

loc_00390D17: ;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = ebp + -112;
    eax = ebp + -32;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390D37u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_00390D37: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = ebp + -32;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390D57u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_00390D57: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x2C;
    edx = ebp + -152;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390D7Fu); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_00390D7F: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x1D4);
    MEM32(ebp + -188) = ecx;
    ecx = MEM32(eax + 0x1D8);
    MEM32(ebp + -184) = ecx;
    eax = MEM32(eax + 0x1DC);
    MEM32(ebp + -180) = eax;
    edx = MEM32(0x59CA64);
    ecx = ebp + -188;
    xmm0 = XMM_SCALAR(MEMF(ebp + -180)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -188;
    eax = eax + 0x18;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390DE6u); RECOMP_ABI_CALL(0x0038A2D0u, sub_0038A2D0); /* call 0x0038A2D0 */

loc_00390DE6: ;
    eax = ebp + -188;
    eax = eax + 0x18;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390DF7u); RECOMP_ABI_CALL(0x00388F30u, sub_00388F30); /* call 0x00388F30 */

loc_00390DF7: ;
    MEMF(ebp + -252) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -252)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00390E2E; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00390E0D: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00390E2E; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00390E0F: ;
    eax = MEM32(0x59CA5C);
    ecx = MEM32(eax);
    MEM32(ebp + -164) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -160) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -156) = eax;

loc_00390E2E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390E39u); RECOMP_ABI_CALL(0x00372E20u, sub_00372E20); /* call 0x00372E20 */

loc_00390E39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00390ED6; /* jne: not equal / not zero */

loc_00390E41: ;
    eax = ebp + -188;
    MEM32(ebp + -288) = eax;
    eax = ebp + -188;
    eax = eax + 0x18;
    MEM32(ebp + -284) = eax;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x364)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390E71u); RECOMP_ABI_CALL(0x0038F6C0u, sub_0038F6C0); /* call 0x0038F6C0 */

loc_00390E71: ;
    MEMF(ebp + -260) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -260)); /* movss */
    MEMF(ebp + -280) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x364)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390E9Cu); RECOMP_ABI_CALL(0x0038F680u, sub_0038F680); /* call 0x0038F680 */

loc_00390E9C: ;
    ecx = MEM32(ebp + -288);
    eax = MEM32(ebp + -284);
    xmm1 = XMM_SCALAR(MEMF(ebp + -280)); /* movss */
    MEMF(ebp + -256) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -256)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390ED6u); RECOMP_ABI_CALL(0x001DB8A0u, sub_001DB8A0); /* call 0x001DB8A0 */

loc_00390ED6: ;
    ecx = ebp + -188;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390EF1u); RECOMP_ABI_CALL(0x003915A0u, sub_003915A0); /* call 0x003915A0 */

loc_00390EF1: ;
    MEMF(ebp + -276) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -276)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x2F8); /* divss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x308); /* mulss */
    MEMF(ebp + -244) = xmm0.f[0]; /* movss */
    eax = ebp + -188;
    eax = eax + 0x18;
    MEM32(ebp + -300) = eax;
    eax = ebp + -188;
    MEM32(ebp + -296) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -244)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390F4Au); RECOMP_ABI_CALL(0x0038F6C0u, sub_0038F6C0); /* call 0x0038F6C0 */

loc_00390F4A: ;
    MEMF(ebp + -272) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -272)); /* movss */
    MEMF(ebp + -292) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -244)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390F72u); RECOMP_ABI_CALL(0x0038F680u, sub_0038F680); /* call 0x0038F680 */

loc_00390F72: ;
    ecx = MEM32(ebp + -300);
    eax = MEM32(ebp + -296);
    xmm1 = XMM_SCALAR(MEMF(ebp + -292)); /* movss */
    MEMF(ebp + -268) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390FACu); RECOMP_ABI_CALL(0x001DB800u, sub_001DB800); /* call 0x001DB800 */

loc_00390FAC: ;
    edx = ebp + -188;
    edx = edx + 0x18;
    ecx = ebp + -188;
    eax = ebp + -188;
    eax = eax + 0xC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390FD4u); RECOMP_ABI_CALL(0x00388E70u, sub_00388E70); /* call 0x00388E70 */

loc_00390FD4: ;
    eax = ebp + -152;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00390FE6u); RECOMP_ABI_CALL(0x001D07D0u, sub_001D07D0); /* call 0x001D07D0 */

loc_00390FE6: ;
    edx = ebp + -188;
    ecx = ebp + -152;
    eax = ebp + -224;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391008u); RECOMP_ABI_CALL(0x001D0900u, sub_001D0900); /* call 0x001D0900 */

loc_00391008: ;
    ecx = ebp + -224;
    eax = ebp + -240;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391020u); RECOMP_ABI_CALL(0x001D13A0u, sub_001D13A0); /* call 0x001D13A0 */

loc_00391020: ;
    edx = ebp + -240;
    ecx = ebp + -248;
    eax = ebp + -56;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039103Fu); RECOMP_ABI_CALL(0x001DC4E0u, sub_001DC4E0); /* call 0x001DC4E0 */

loc_0039103F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -248)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x314); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DAD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = ebp + -56;
    eax = ebp + -68;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391083u); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_00391083: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x38;
    edx = ebp + -68;
    eax = ebp + -80;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003910A2u); RECOMP_ABI_CALL(0x00389280u, sub_00389280); /* call 0x00389280 */

loc_003910A2: ;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    eax = MEM32(ebp + -20);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x54); /* addss */
    eax = MEM32(ebp + -20);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x50); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D7D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = ebp + -80;
    eax = ebp + -44;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003910DEu); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_003910DE: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = ebp + -44;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003910FEu); RECOMP_ABI_CALL(0x00388FC0u, sub_00388FC0); /* call 0x00388FC0 */

loc_003910FE: ;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x38;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039110Fu); RECOMP_ABI_CALL(0x00389D70u, sub_00389D70); /* call 0x00389D70 */

loc_0039110F: ;
    MEMF(ebp + -264) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -264)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x314); /* divss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    eax = MEM32(ebp + -12);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x448); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00391299; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x448)) */

loc_00391142: ;
    eax = MEM32(ebp + -12);
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x448); /* subss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x448); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D9DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA88)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0039119A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00391185: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA88)); /* movss */
    MEMF(ebp + -304) = xmm0.f[0]; /* movss */
    goto loc_0039123D;

loc_0039119A: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x448); /* subss */
    eax = MEM32(ebp + -12);
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x448); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D9DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003911EF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003911DD: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    MEMF(ebp + -308) = xmm0.f[0]; /* movss */
    goto loc_0039122D;

loc_003911EF: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x448); /* subss */
    eax = MEM32(ebp + -12);
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x448); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D9DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -308) = xmm0.f[0]; /* movss */

loc_0039122D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -308)); /* movss */
    MEMF(ebp + -304) = xmm0.f[0]; /* movss */

loc_0039123D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -304)); /* movss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x448); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -88); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0039126F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -88)) */

loc_00391260: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    MEMF(ebp + -312) = xmm0.f[0]; /* movss */
    goto loc_00391287;

loc_0039126F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x448); /* subss */
    MEMF(ebp + -312) = xmm0.f[0]; /* movss */

loc_00391287: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -312)); /* movss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    goto loc_0039136A;

loc_00391299: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x448)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x448); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003912F4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003912C8: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x448)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x448); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -316) = xmm0.f[0]; /* movss */
    goto loc_00391306;

loc_003912F4: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF30)); /* movss */
    MEMF(ebp + -316) = xmm0.f[0]; /* movss */
    goto loc_00391306;

loc_00391306: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -316)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x448); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -88); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00391350; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -88)) */

loc_00391336: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x448); /* subss */
    MEMF(ebp + -320) = xmm0.f[0]; /* movss */
    goto loc_0039135D;

loc_00391350: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    MEMF(ebp + -320) = xmm0.f[0]; /* movss */

loc_0039135D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -320)); /* movss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */

loc_0039136A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x448); /* addss */
    MEMF(eax + 0x448) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0x59CA7C);
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2E8)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0x59CA7C);
    edx = MEM32(ecx);
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x80) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x84) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x88) = ecx;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = ebp + -32;
    eax = ebp + -44;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391418u); RECOMP_ABI_CALL(0x00252740u, sub_00252740); /* call 0x00252740 */

loc_00391418: ;
    goto loc_00391446;

loc_0039141A: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391446u); RECOMP_ABI_CALL(0x00252740u, sub_00252740); /* call 0x00252740 */

loc_00391446: ;
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
 * sub_00391450
 * Original: 0x00391450 - 0x00391490 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391450(void)
{
    uint32_t ebp = g_ebp;

loc_00391450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391490
 * Original: 0x00391490 - 0x003915A0 (272 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391490(void)
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

loc_00391490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003914C2u); RECOMP_ABI_CALL(0x00389280u, sub_00389280); /* call 0x00389280 */

loc_003914C2: ;
    xmm0 = XMM_SCALAR(MEMF(0x5A1F40)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003914E9u); RECOMP_ABI_CALL(0x00389DA0u, sub_00389DA0); /* call 0x00389DA0 */

loc_003914E9: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00391578; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00391508: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x18); /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391531u); RECOMP_ABI_CALL(0x0038A100u, sub_0038A100); /* call 0x0038A100 */

loc_00391531: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391552u); RECOMP_ABI_CALL(0x0038A100u, sub_0038A100); /* call 0x0038A100 */

loc_00391552: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x18); /* addss */
    MEMF(ebp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00391582;

loc_00391578: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEMF(ebp + 0x14) = xmm0.f[0]; /* movss */

loc_00391582: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391598u); RECOMP_ABI_CALL(0x0038FDF0u, sub_0038FDF0); /* call 0x0038FDF0 */

loc_00391598: ;
    eax = MEM32(ebp + 0x10);
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
 * sub_003915A0
 * Original: 0x003915A0 - 0x003915DB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003915A0(void)
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

loc_003915A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
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
 * sub_003915E0
 * Original: 0x003915E0 - 0x0039161E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003915E0(void)
{
    uint32_t ebp = g_ebp;

loc_003915E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    ecx = MEM32(ebp + 8);
    eax = ecx;
    MEM32(ebp + -12) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0xC)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    eax = ecx;
    eax = eax + 8;
    MEMD(esp) = xmm0.d[0]; /* movsd */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391614u); RECOMP_ABI_CALL(0x00409250u, sub_00409250); /* call 0x00409250 */

loc_00391614: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00391620
 * Original: 0x00391620 - 0x00391652 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391620(void)
{
    uint32_t ebp = g_ebp;

loc_00391620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    ecx = ebp + -4;
    eax = esp;
    MEM32(eax + 8) = ecx;
    ecx = ebp + -8;
    MEM32(eax + 4) = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391647u); RECOMP_ABI_CALL(0x004094A0u, sub_004094A0); /* call 0x004094A0 */

loc_00391647: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391660
 * Original: 0x00391660 - 0x00391688 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391660(void)
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

loc_00391660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039167Bu); RECOMP_ABI_CALL(0x003F3CD0u, sub_003F3CD0); /* call 0x003F3CD0 */

loc_0039167B: ;
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
 * sub_00391690
 * Original: 0x00391690 - 0x003916B8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391690(void)
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

loc_00391690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003916ABu); RECOMP_ABI_CALL(0x003F3BE0u, sub_003F3BE0); /* call 0x003F3BE0 */

loc_003916AB: ;
    MEMD(ebp + -8) = fp_top(); /* fst */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
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
 * sub_003916C0
 * Original: 0x003916C0 - 0x003916ED (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003916C0(void)
{
    uint32_t ebp = g_ebp;

loc_003916C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003916E8u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003916E8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003916F0
 * Original: 0x003916F0 - 0x00391739 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003916F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003916F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;

loc_0039170C: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00391734; /* jae: above or equal (unsigned >=) */

loc_00391714: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = ecx & 3;
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039170C;

loc_00391734: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391740
 * Original: 0x00391740 - 0x00391789 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391740(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;

loc_0039175C: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00391784; /* jae: above or equal (unsigned >=) */

loc_00391764: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = ecx & 7;
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039175C;

loc_00391784: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391790
 * Original: 0x00391790 - 0x003917D9 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391790(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;

loc_003917AC: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003917D4; /* jae: above or equal (unsigned >=) */

loc_003917B4: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0xF;
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003917AC;

loc_003917D4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003917E0
 * Original: 0x003917E0 - 0x003917F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003917E0(void)
{
    uint32_t ebp = g_ebp;

loc_003917E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0x460C44;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003917F4u); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

}


/**
 * sub_00391800
 * Original: 0x00391800 - 0x0039180D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391800(void)
{
    uint32_t ebp = g_ebp;

loc_00391800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391810
 * Original: 0x00391810 - 0x0039181E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391810(void)
{
    uint32_t ebp = g_ebp;

loc_00391810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391820
 * Original: 0x00391820 - 0x00391841 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391834u); RECOMP_ABI_CALL(0x700001D0u, host_sdl_init); /* call 0x700001D0 */

loc_00391834: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391850
 * Original: 0x00391850 - 0x0039187B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391850(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039186Eu); RECOMP_ABI_CALL(0x70000250u, host_sdl_set_hint); /* call 0x70000250 */

loc_0039186E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391880
 * Original: 0x00391880 - 0x003918B5 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391880(void)
{
    uint32_t ebp = g_ebp;

loc_00391880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax) = 0x5ACB50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391893u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_00391893: ;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003918A3u); RECOMP_ABI_CALL(0x70000160u, host_sdl_get_error); /* call 0x70000160 */

loc_003918A3: ;
    eax = esp;
    MEM32(eax) = 0x5ACB50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003918B0u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003918B0: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003918C0
 * Original: 0x003918C0 - 0x003918D0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003918C0(void)
{
    uint32_t ebp = g_ebp;

loc_003918C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003918CBu); RECOMP_ABI_CALL(0x700002C0u, host_sdl_ticks); /* call 0x700002C0 */

loc_003918CB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003918D0
 * Original: 0x003918D0 - 0x003918E0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003918D0(void)
{
    uint32_t ebp = g_ebp;

loc_003918D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003918DBu); RECOMP_ABI_CALL(0x700002B0u, host_sdl_thread_id); /* call 0x700002B0 */

loc_003918DB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003918E0
 * Original: 0x003918E0 - 0x003918F9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003918E0(void)
{
    uint32_t ebp = g_ebp;

loc_003918E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003918F4u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003918F4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391900
 * Original: 0x00391900 - 0x00391921 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391900(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391914u); RECOMP_ABI_CALL(0x70000240u, host_sdl_set_clipboard_text); /* call 0x70000240 */

loc_00391914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391930
 * Original: 0x00391930 - 0x00391965 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391930(void)
{
    uint32_t ebp = g_ebp;

loc_00391930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x408;
    eax = ebp + -1024;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039194Fu); RECOMP_ABI_CALL(0x70000150u, host_sdl_get_clipboard_text); /* call 0x70000150 */

loc_0039194F: ;
    eax = ebp + -1024;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039195Du); RECOMP_ABI_CALL(0x003A42F0u, sub_003A42F0); /* call 0x003A42F0 */

loc_0039195D: ;
    esp = esp + 0x408;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391970
 * Original: 0x00391970 - 0x003919BD (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391970(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003919AEu); RECOMP_ABI_CALL(0x700002A0u, host_sdl_show_toast); /* call 0x700002A0 */

loc_003919AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003919C0
 * Original: 0x003919C0 - 0x003919F8 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003919C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003919C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003919EBu); RECOMP_ABI_CALL(0x70000290u, host_sdl_show_simple_message_box); /* call 0x70000290 */

loc_003919EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391A00
 * Original: 0x00391A00 - 0x00391A4F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391A00(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00391A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _shift_result = RECOMP_SHIFT(edx, 6, 32, 1, NULL, &_shift_of);
    edx = _shift_result;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = 0;
    eax = MEM32(ebp + 8);
    ecx = 0x3E8;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = (uint32_t)((int32_t)edx * (int32_t)0xF4240);
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391A4Au); RECOMP_ABI_CALL(0x00435D60u, sub_00435D60); /* call 0x00435D60 */

loc_00391A4A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391A50
 * Original: 0x00391A50 - 0x00391A9A (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391A50(void)
{
    uint32_t ebp = g_ebp;

loc_00391A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -24);
    ebx = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391A92u); RECOMP_ABI_CALL(0x70000100u, host_sdl_create_window); /* call 0x70000100 */

loc_00391A92: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391AA0
 * Original: 0x00391AA0 - 0x00391AFB (91 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391AA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -8) = 0;
    edx = MEM32(ebp + 8);
    ecx = ebp + -4;
    eax = ebp + -8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391AD6u); RECOMP_ABI_CALL(0x70000300u, host_sdl_window_size_in_pixels); /* call 0x70000300 */

loc_00391AD6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391AE4; /* je: equal / zero */

loc_00391ADC: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_00391AE4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391AF2; /* je: equal / zero */

loc_00391AEA: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;

loc_00391AF2: ;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391B00
 * Original: 0x00391B00 - 0x00391B35 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391B00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -1) = LO8(eax);
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391B28u); RECOMP_ABI_CALL(0x70000260u, host_sdl_set_relative_mouse); /* call 0x70000260 */

loc_00391B28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391B40
 * Original: 0x00391B40 - 0x00391BA3 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391B40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -8) = 0;
    edx = MEM32(ebp + 8);
    ecx = ebp + -4;
    eax = ebp + -8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391B76u); RECOMP_ABI_CALL(0x700002F0u, host_sdl_window_size); /* call 0x700002F0 */

loc_00391B76: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391B87; /* je: equal / zero */

loc_00391B7F: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_00391B87: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391B95; /* je: equal / zero */

loc_00391B8D: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;

loc_00391B95: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391BB0
 * Original: 0x00391BB0 - 0x00391BCA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391BB0(void)
{
    uint32_t ebp = g_ebp;

loc_00391BB0: ;
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
    PUSH32(esp, 0x00391BC5u); RECOMP_ABI_CALL(0x700002E0u, host_sdl_window_flags); /* call 0x700002E0 */

loc_00391BC5: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391BD0
 * Original: 0x00391BD0 - 0x00391C05 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391BD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391BF8u); RECOMP_ABI_CALL(0x70000280u, host_sdl_set_window_size); /* call 0x70000280 */

loc_00391BF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391C10
 * Original: 0x00391C10 - 0x00391C45 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391C10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -1) = LO8(eax);
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391C38u); RECOMP_ABI_CALL(0x70000270u, host_sdl_set_window_fullscreen); /* call 0x70000270 */

loc_00391C38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391C50
 * Original: 0x00391C50 - 0x00391C89 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391C50(void)
{
    uint32_t ebp = g_ebp;

loc_00391C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391C84u); RECOMP_ABI_CALL(0x700002D0u, host_sdl_warp_mouse); /* call 0x700002D0 */

loc_00391C84: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391C90
 * Original: 0x00391C90 - 0x00391CBB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391C90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391CAEu); RECOMP_ABI_CALL(0x700001A0u, host_sdl_gl_set_attribute); /* call 0x700001A0 */

loc_00391CAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391CC0
 * Original: 0x00391CC0 - 0x00391CD9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391CC0(void)
{
    uint32_t ebp = g_ebp;

loc_00391CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391CD4u); RECOMP_ABI_CALL(0x70000180u, host_sdl_gl_create_context); /* call 0x70000180 */

loc_00391CD4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391CE0
 * Original: 0x00391CE0 - 0x00391D0B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391CFEu); RECOMP_ABI_CALL(0x70000190u, host_sdl_gl_make_current); /* call 0x70000190 */

loc_00391CFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391D10
 * Original: 0x00391D10 - 0x00391D31 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391D10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391D24u); RECOMP_ABI_CALL(0x700001B0u, host_sdl_gl_set_swap_interval); /* call 0x700001B0 */

loc_00391D24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391D40
 * Original: 0x00391D40 - 0x00391D61 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391D54u); RECOMP_ABI_CALL(0x700001C0u, host_sdl_gl_swap_window); /* call 0x700001C0 */

loc_00391D54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391D70
 * Original: 0x00391D70 - 0x00391D89 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391D70(void)
{
    uint32_t ebp = g_ebp;

loc_00391D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391D84u); RECOMP_ABI_CALL(0x70000000u, guest_gl_get_proc_address); /* call 0x70000000 */

loc_00391D84: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391D90
 * Original: 0x00391D90 - 0x00391DD6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391D90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x88;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391DAD; /* je: equal / zero */

loc_00391DA2: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -132) = eax;
    goto loc_00391DB8;

loc_00391DAD: ;
    eax = ebp + -128;
    MEM32(ebp + -132) = eax;
    goto loc_00391DB8;

loc_00391DB8: ;
    eax = MEM32(ebp + -132);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391DC6u); RECOMP_ABI_CALL(0x70000200u, host_sdl_poll_event); /* call 0x70000200 */

loc_00391DC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x88;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391DE0
 * Original: 0x00391DE0 - 0x00391E75 (149 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391DE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00391DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 8);
    eax = ebp + -68;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391DFCu); RECOMP_ABI_CALL(0x70000170u, host_sdl_get_gamepads); /* call 0x70000170 */

loc_00391DFC: ;
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -72);
    eax = eax + 1;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391E10u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_00391E10: ;
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391E22; /* jne: not equal / not zero */

loc_00391E19: ;
    MEM32(ebp + -4) = 0;
    goto loc_00391E6D;

loc_00391E22: ;
    MEM32(ebp + -80) = 0;

loc_00391E29: ;
    eax = MEM32(ebp + -80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -72) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00391E4C; /* jge: greater or equal (signed >=) */

loc_00391E31: ;
    eax = MEM32(ebp + -80);
    edx = MEM32(ebp + eax * 4 + -68);
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + -80);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -80);
    eax = eax + 1;
    MEM32(ebp + -80) = eax;
    goto loc_00391E29;

loc_00391E4C: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + -72);
    MEM32(eax + ecx * 4) = 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391E67; /* je: equal / zero */

loc_00391E5F: ;
    ecx = MEM32(ebp + -72);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_00391E67: ;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -4) = eax;

loc_00391E6D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391E80
 * Original: 0x00391E80 - 0x00391E99 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391E80(void)
{
    uint32_t ebp = g_ebp;

loc_00391E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391E94u); RECOMP_ABI_CALL(0x700001F0u, host_sdl_open_gamepad); /* call 0x700001F0 */

loc_00391E94: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391EA0
 * Original: 0x00391EA0 - 0x00391EB9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391EA0(void)
{
    uint32_t ebp = g_ebp;

loc_00391EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391EB4u); RECOMP_ABI_CALL(0x70000130u, host_sdl_gamepad_from_id); /* call 0x70000130 */

loc_00391EB4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391EC0
 * Original: 0x00391EC0 - 0x00391EE3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391EC0(void)
{
    uint32_t ebp = g_ebp;

loc_00391EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391EDEu); RECOMP_ABI_CALL(0x70000110u, host_sdl_gamepad_axis); /* call 0x70000110 */

loc_00391EDE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391EF0
 * Original: 0x00391EF0 - 0x00391F1B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391EF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391F0Eu); RECOMP_ABI_CALL(0x70000120u, host_sdl_gamepad_button); /* call 0x70000120 */

loc_00391F0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391F20
 * Original: 0x00391F20 - 0x00391F39 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391F20(void)
{
    uint32_t ebp = g_ebp;

loc_00391F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391F34u); RECOMP_ABI_CALL(0x70000140u, host_sdl_gamepad_type); /* call 0x70000140 */

loc_00391F34: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391F40
 * Original: 0x00391F40 - 0x00391F85 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391F40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x14);
    SET_LO16(eax, MEM16(ebp + 0x10));
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    edx = ZX16(MEM16(ebp + 0xC));
    ecx = ZX16(MEM16(ebp + 0x10));
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391F77u); RECOMP_ABI_CALL(0x70000230u, host_sdl_rumble_gamepad); /* call 0x70000230 */

loc_00391F77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391F90
 * Original: 0x00391F90 - 0x00391FC9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391F90(void)
{
    uint32_t ebp = g_ebp;

loc_00391F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391FC3u); RECOMP_ABI_CALL(0x700001E0u, host_sdl_open_audio_stream); /* call 0x700001E0 */

loc_00391FC3: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00391FD0
 * Original: 0x00391FD0 - 0x00392005 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391FD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00391FF8u); RECOMP_ABI_CALL(0x70000210u, host_sdl_put_audio_stream_data); /* call 0x70000210 */

loc_00391FF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392010
 * Original: 0x00392010 - 0x00392031 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392024u); RECOMP_ABI_CALL(0x70000220u, host_sdl_resume_audio_stream_device); /* call 0x70000220 */

loc_00392024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392040
 * Original: 0x00392040 - 0x003920B8 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392040(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(0xDFC010) = eax;
    eax = 0x43E4D0;
    MEM32(0xDFBFFC) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(0xDFBE3C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039206Fu); RECOMP_ABI_CALL(0x003921A0u, sub_003921A0); /* call 0x003921A0 */

loc_0039206F: ;
    eax = 0x55C918;
    MEM32(ebp + -4) = eax;

loc_00392078: ;
    eax = 0x55C91C;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00392093; /* jae: above or equal (unsigned >=) */

loc_00392083: ;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00392088u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00392088: ;
    eax = MEM32(ebp + -4);
    eax = eax + 4;
    MEM32(ebp + -4) = eax;
    goto loc_00392078;

loc_00392093: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003920AAu); RECOMP_ABI_CALL(0x00337350u, sub_00337350); /* call 0x00337350 */

loc_003920AA: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003920B8u); RECOMP_ABI_CALL(0x003DD2A0u, sub_003DD2A0); /* call 0x003DD2A0 */

}


/**
 * sub_003920C0
 * Original: 0x003920C0 - 0x0039218B (203 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003920C0(void)
{
    uint32_t ebp = g_ebp;

loc_003920C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
    eax = MEM32(ebp + 0x38);
    eax = MEM32(ebp + 0x3C);
    eax = MEM32(ebp + 0x30);
    eax = MEM32(ebp + 0x34);
    eax = MEM32(ebp + 0x28);
    eax = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0x28);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + 0x34);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x38);
    MEM32(ebp + -48) = eax;
    ecx = MEM32(ebp + 0x3C);
    eax = esp;
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(ebp + -48);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -40);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392183u); RECOMP_ABI_CALL(0x70000320u, host_syscall); /* call 0x70000320 */

loc_00392183: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392190
 * Original: 0x00392190 - 0x003921A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392190(void)
{
    uint32_t ebp = g_ebp;

loc_00392190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039219Bu); RECOMP_ABI_CALL(0x70000090u, host_get_tp); /* call 0x70000090 */

loc_0039219B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003921A0
 * Original: 0x003921A0 - 0x0039220C (108 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003921A0(void)
{
    uint32_t ebp = g_ebp;

loc_003921A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xC686BC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003921B4u); RECOMP_ABI_CALL(0x00392210u, sub_00392210); /* call 0x00392210 */

loc_003921B4: ;
    eax = 0xC686BC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003921C2u); RECOMP_ABI_CALL(0x70000310u, host_set_tp); /* call 0x70000310 */

loc_003921C2: ;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xB2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003921D6u); RECOMP_ABI_CALL(0x00392270u, sub_00392270); /* call 0x00392270 */

loc_003921D6: ;
    MEM32(0xC686D4) = eax;
    MEM8(0xDFBFF4) = 1;
    MEM8(0xDFBFF5) = 1;
    MEM32(0x838E9C) = 0;
    MEM32(0x838F28) = 0;
    MEM32(0x838E10) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392210
 * Original: 0x00392210 - 0x00392268 (88 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392210(void)
{
    uint32_t ebp = g_ebp;

loc_00392210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x20) = 2;
    eax = MEM32(ebp + -4);
    ecx = 0xDFBFF4;
    ecx = ecx + 0x20;
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x4C;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x4C) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x78) = 1;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392270
 * Original: 0x00392270 - 0x003922E7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392270(void)
{
    uint32_t ebp = g_ebp;

loc_00392270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003922E2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003922E2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003922F0
 * Original: 0x003922F0 - 0x003923A4 (180 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003922F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003922F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039230Au); RECOMP_ABI_CALL(0x70000310u, host_set_tp); /* call 0x70000310 */

loc_0039230A: ;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xB2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039231Eu); RECOMP_ABI_CALL(0x00392270u, sub_00392270); /* call 0x00392270 */

loc_0039231E: ;
    ecx = eax;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x70);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x74);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00392337u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00392337: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x40) = ecx;
    eax = MEM32(ebp + -4);
    eax = eax + 0x78;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392361u); RECOMP_ABI_CALL(0x003923B0u, sub_003923B0); /* call 0x003923B0 */

loc_00392361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392373; /* jne: not equal / not zero */

loc_00392366: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392371u); RECOMP_ABI_CALL(0x003923E0u, sub_003923E0); /* call 0x003923E0 */

loc_00392371: ;
    goto loc_00392391;

loc_00392373: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x78;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392391u); RECOMP_ABI_CALL(0x00392440u, sub_00392440); /* call 0x00392440 */

loc_00392391: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039239Fu); RECOMP_ABI_CALL(0x70000310u, host_set_tp); /* call 0x70000310 */

loc_0039239F: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003923B0
 * Original: 0x003923B0 - 0x003923D1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003923B0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003923B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* lock cmpxchg */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003923E0
 * Original: 0x003923E0 - 0x0039243B (91 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003923E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003923E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003923F0: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x80) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039241D; /* jae: above or equal (unsigned >=) */

loc_003923FE: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x7C);
    ecx = MEM32(ebp + -4);
    eax = MEM32(eax + ecx * 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392412u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00392412: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003923F0;

loc_0039241D: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x7C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039242Bu); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039242B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392436u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00392436: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392440
 * Original: 0x00392440 - 0x00392511 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039245F; /* je: equal / zero */

loc_00392458: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0039245F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0039246C; /* jge: greater or equal (signed >=) */

loc_00392465: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0039246C: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    edx = 0; /* xor self */
    edi = MEM32(ebp + 0x10);
    esi = edi;
    esi = esi | 1;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + 0xC);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -24) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003924B3u); RECOMP_ABI_CALL(0x00392A10u, sub_00392A10); /* call 0x00392A10 */

loc_003924B3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00392506; /* jne: not equal / not zero */

loc_003924BF: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -28) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003924FDu); RECOMP_ABI_CALL(0x00392A10u, sub_00392A10); /* call 0x00392A10 */

loc_003924FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_00392506: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392520
 * Original: 0x00392520 - 0x00392595 (117 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039253Au); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039253A: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392551; /* jne: not equal / not zero */

loc_00392543: ;
    eax = 0x47D381;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392551u); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

loc_00392551: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039255Cu); RECOMP_ABI_CALL(0x00392210u, sub_00392210); /* call 0x00392210 */

loc_0039255C: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x78) = 2;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392571u); RECOMP_ABI_CALL(0x70000310u, host_set_tp); /* call 0x70000310 */

loc_00392571: ;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xB2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392585u); RECOMP_ABI_CALL(0x00392270u, sub_00392270); /* call 0x00392270 */

loc_00392585: ;
    ecx = eax;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003925A0
 * Original: 0x003925A0 - 0x003926A4 (260 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003925A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003925A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003925C6u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_003925C6: ;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0x100000;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003925E2; /* jne: not equal / not zero */

loc_003925D6: ;
    MEM32(ebp + -4) = 0xB;
    goto loc_0039269C;

loc_003925E2: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003925EDu); RECOMP_ABI_CALL(0x00392210u, sub_00392210); /* call 0x00392210 */

loc_003925ED: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x70) = ecx;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x74) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392636; /* je: equal / zero */

loc_00392605: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00392617; /* jbe: below or equal (unsigned <=) */

loc_0039260F: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;

loc_00392617: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392634; /* je: equal / zero */

loc_00392620: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x78) = 2;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x20) = 3;

loc_00392634: ;
    goto loc_00392636;

loc_00392636: ;
    eax = 0xDFBFF4;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392647u); RECOMP_ABI_CALL(0x003926B0u, sub_003926B0); /* call 0x003926B0 */

loc_00392647: ;
    MEM8(0xDFBFF7) = 1;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392668u); RECOMP_ABI_CALL(0x70000330u, host_thread_create); /* call 0x70000330 */

loc_00392668: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392695; /* je: equal / zero */

loc_00392671: ;
    eax = 0xDFBFF4;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392682u); RECOMP_ABI_CALL(0x003926D0u, sub_003926D0); /* call 0x003926D0 */

loc_00392682: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039268Du); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039268D: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    goto loc_0039269C;

loc_00392695: ;
    MEM32(ebp + -4) = 0;

loc_0039269C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003926B0
 * Original: 0x003926B0 - 0x003926C1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003926B0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003926B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    { uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(eax), 1u);
      uint32_t _new = _old + 1u;
      _fa = _new; _fb = 0; _fas = (int32_t)_new; _fbs = 0; } /* lock inc */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003926D0
 * Original: 0x003926D0 - 0x003926E1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003926D0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003926D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    { uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(eax), -1u);
      uint32_t _new = _old - 1u;
      _fa = _new; _fb = 0; _fas = (int32_t)_new; _fbs = 0; } /* lock dec */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003926F0
 * Original: 0x003926F0 - 0x00392784 (148 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003926F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003926F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_00392702: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x78);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392748; /* je: equal / zero */

loc_00392710: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039271F; /* jne: not equal / not zero */

loc_00392716: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0039277C;

loc_0039271F: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x78;
    eax = MEM32(ebp + -12);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392746u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_00392746: ;
    goto loc_00392702;

loc_00392748: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392759; /* je: equal / zero */

loc_0039274E: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_00392759: ;
    eax = 0xDFBFF4;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039276Au); RECOMP_ABI_CALL(0x003926D0u, sub_003926D0); /* call 0x003926D0 */

loc_0039276A: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392775u); RECOMP_ABI_CALL(0x003923E0u, sub_003923E0); /* call 0x003923E0 */

loc_00392775: ;
    MEM32(ebp + -4) = 0;

loc_0039277C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392790
 * Original: 0x00392790 - 0x003927E5 (85 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392790(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 0x78;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003927BDu); RECOMP_ABI_CALL(0x003923B0u, sub_003923B0); /* call 0x003923B0 */

loc_003927BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003927DE; /* jne: not equal / not zero */

loc_003927C2: ;
    eax = 0xDFBFF4;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003927D3u); RECOMP_ABI_CALL(0x003926D0u, sub_003926D0); /* call 0x003926D0 */

loc_003927D3: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003927DEu); RECOMP_ABI_CALL(0x003923E0u, sub_003923E0); /* call 0x003923E0 */

loc_003927DE: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003927F0
 * Original: 0x003927F0 - 0x00392807 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003927F0(void)
{
    uint32_t ebp = g_ebp;

loc_003927F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0x460C5C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392807u); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

}


/**
 * sub_00392810
 * Original: 0x00392810 - 0x003929F3 (483 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392810(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00392810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x38)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039281Eu); RECOMP_ABI_CALL(0x00392A00u, sub_00392A00); /* call 0x00392A00 */

loc_0039281E: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00392881; /* jne: not equal / not zero */

loc_00392836: ;
    eax = 0xC68740;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392844u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00392844: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00392873; /* jne: not equal / not zero */

loc_00392853: ;
    eax = MEM32(0x5ACB60);
    ecx = eax;
    ecx++;
    MEM32(0x5ACB60) = ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 8) = ecx;

loc_00392873: ;
    eax = 0xC68740;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392881u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00392881: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x80) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00392916; /* jbe: below or equal (unsigned <=) */

loc_00392893: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x10;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x7C);
    eax = MEM32(ebp + -24);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003928B4u); RECOMP_ABI_CALL(0x003E9E40u, sub_003E9E40); /* call 0x003E9E40 */

loc_003928B4: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003928CB; /* jne: not equal / not zero */

loc_003928BD: ;
    eax = 0x474A70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003928CBu); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

loc_003928CB: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x80);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + -24);
    edx = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(edx + 0x80))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392901u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00392901: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x7C) = ecx;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x80) = ecx;

loc_00392916: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x7C);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(eax + ecx * 4);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003929EB; /* jne: not equal / not zero */

loc_00392932: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00392946; /* jbe: below or equal (unsigned <=) */

loc_0039293B: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -36) = eax;
    goto loc_00392950;

loc_00392946: ;
    eax = 4;
    MEM32(ebp + -36) = eax;
    goto loc_00392950;

loc_00392950: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax + MEM32(ebp + -32);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    edx = MEM32(ebp + -32);
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    edx = edx ^ 0xFFFFFFFFu;
    eax = eax & edx;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039297Bu); RECOMP_ABI_CALL(0x003E6600u, sub_003E6600); /* call 0x003E6600 */

loc_0039297B: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00392992; /* jne: not equal / not zero */

loc_00392984: ;
    eax = 0x469582;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392992u); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

loc_00392992: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003929BB; /* je: equal / zero */

loc_0039299B: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003929B9u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003929B9: ;
    goto loc_003929D9;

loc_003929BB: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003929D9u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003929D9: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x7C);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM32(eax + ecx * 4) = edx;

loc_003929EB: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392A00
 * Original: 0x00392A00 - 0x00392A10 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392A00(void)
{
    uint32_t ebp = g_ebp;

loc_00392A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392A0Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_00392A0B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392A10
 * Original: 0x00392A10 - 0x00392AAB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392A10(void)
{
    uint32_t ebp = g_ebp;

loc_00392A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -24) = eax;
    ecx = MEM32(ebp + 0x24);
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392AA3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00392AA3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00392DC0
 * Original: 0x00392DC0 - 0x00392DCD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392DC0(void)
{
    uint32_t ebp = g_ebp;

loc_00392DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00392DD0
 * Original: 0x00392DD0 - 0x00392DDD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392DD0(void)
{
    uint32_t ebp = g_ebp;

loc_00392DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00392DE0
 * Original: 0x00392DE0 - 0x00392DF2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392DE0(void)
{
    uint32_t ebp = g_ebp;

loc_00392DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00392E00
 * Original: 0x00392E00 - 0x00392E0A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392E00(void)
{
    uint32_t ebp = g_ebp;

loc_00392E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00392E10
 * Original: 0x00392E10 - 0x00392F09 (249 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392E10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x428;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392E33u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_00392E33: ;
    MEM32(ebp + -1032) = eax;
    _fa = (uint32_t)(MEM32(ebp + -1032)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1032), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392E4E; /* jne: not equal / not zero */

loc_00392E42: ;
    MEM32(ebp + -4) = 0;
    goto loc_00392EFC;

loc_00392E4E: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -1028;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392E6Bu); RECOMP_ABI_CALL(0x003BAD80u, sub_003BAD80); /* call 0x003BAD80 */

loc_00392E6B: ;
    eax = ebp + -1028;
    MEM32(ebp + -1040) = eax;
    eax = MEM32(ebp + -1032);
    MEM32(ebp + -1036) = eax;
    eax = 0x44D0E3;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392E91u); RECOMP_ABI_CALL(0x003B6550u, sub_003B6550); /* call 0x003B6550 */

loc_00392E91: ;
    edx = MEM32(ebp + -1040);
    ecx = MEM32(ebp + -1036);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392EADu); RECOMP_ABI_CALL(0x70000070u, host_bink_open); /* call 0x70000070 */

loc_00392EAD: ;
    ecx = eax;
    eax = MEM32(ebp + -1032);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + -1032);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392EF3; /* jne: not equal / not zero */

loc_00392EC4: ;
    eax = MEM32(ebp + -1032);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392ED2u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00392ED2: ;
    eax = ebp + -1028;
    ecx = 0x493EF4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392EEAu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_00392EEA: ;
    MEM32(ebp + -4) = 0;
    goto loc_00392EFC;

loc_00392EF3: ;
    eax = MEM32(ebp + -1032);
    MEM32(ebp + -4) = eax;

loc_00392EFC: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x428;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00392F10
 * Original: 0x00392F10 - 0x00392F3F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392F10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392F38; /* je: equal / zero */

loc_00392F1F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392F2Du); RECOMP_ABI_CALL(0x70000030u, host_bink_close); /* call 0x70000030 */

loc_00392F2D: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392F38u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00392F38: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00392F40
 * Original: 0x00392F40 - 0x00392F79 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392F40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392F62; /* je: equal / zero */

loc_00392F4F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392F5Du); RECOMP_ABI_CALL(0x70000050u, host_bink_decode); /* call 0x70000050 */

loc_00392F5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392F70; /* jne: not equal / not zero */

loc_00392F62: ;
    eax = 0x477679;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392F70u); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

loc_00392F70: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00392F80
 * Original: 0x00392F80 - 0x00392FBE (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392F80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392FA9; /* je: equal / zero */

loc_00392F8F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392FA4u); RECOMP_ABI_CALL(0x70000060u, host_bink_next); /* call 0x70000060 */

loc_00392FA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392FB7; /* jne: not equal / not zero */

loc_00392FA9: ;
    eax = 0x48B532;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392FB7u); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

loc_00392FB7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00392FC0
 * Original: 0x00392FC0 - 0x00392FF3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392FC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392FC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392FE2; /* je: equal / zero */

loc_00392FCF: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00392FDDu); RECOMP_ABI_CALL(0x70000080u, host_bink_wait); /* call 0x70000080 */

loc_00392FDD: ;
    MEM32(ebp + -4) = eax;
    goto loc_00392FE9;

loc_00392FE2: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_00392FE9;

loc_00392FE9: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393000
 * Original: 0x00393000 - 0x00393087 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039306D; /* je: equal / zero */

loc_00393024: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    MEM32(ebp + -20) = eax;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp + 4) = ebx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393068u); RECOMP_ABI_CALL(0x70000040u, host_bink_copy); /* call 0x70000040 */

loc_00393068: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039307B; /* jne: not equal / not zero */

loc_0039306D: ;
    eax = 0x452D06;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039307Bu); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

loc_0039307B: ;
    eax = 0; /* xor self */
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 32; return; /* ret 28 */

}


/**
 * sub_00393090
 * Original: 0x00393090 - 0x003930FA (106 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393090(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003930BFu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003930BF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003930F3; /* je: equal / zero */

loc_003930C5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x24) = ecx;

loc_003930F3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00393100
 * Original: 0x00393100 - 0x00393171 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393132u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00393132: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039316A; /* je: equal / zero */

loc_00393138: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393157; /* je: equal / zero */

loc_0039314C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -8) = eax;
    goto loc_00393161;

loc_00393157: ;
    eax = 1;
    MEM32(ebp + -8) = eax;
    goto loc_00393161;

loc_00393161: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0xC) = ecx;

loc_0039316A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00393400
 * Original: 0x00393400 - 0x00393411 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393400(void)
{
    uint32_t ebp = g_ebp;

loc_00393400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edx;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393420
 * Original: 0x00393420 - 0x00393447 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393420(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x90 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00393442; /* jae: above or equal (unsigned >=) */

loc_00393435: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    MEM32(eax * 4 + 0x8C03F4) = ecx;

loc_00393442: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393450
 * Original: 0x00393450 - 0x00393462 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393450(void)
{
    uint32_t ebp = g_ebp;

loc_00393450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05C4) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393470
 * Original: 0x00393470 - 0x00393482 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393470(void)
{
    uint32_t ebp = g_ebp;

loc_00393470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05C8) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393490
 * Original: 0x00393490 - 0x003934A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393490(void)
{
    uint32_t ebp = g_ebp;

loc_00393490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05CC) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003934B0
 * Original: 0x003934B0 - 0x003934C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003934B0(void)
{
    uint32_t ebp = g_ebp;

loc_003934B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05D0) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003934D0
 * Original: 0x003934D0 - 0x003934E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003934D0(void)
{
    uint32_t ebp = g_ebp;

loc_003934D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05D4) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003934F0
 * Original: 0x003934F0 - 0x00393502 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003934F0(void)
{
    uint32_t ebp = g_ebp;

loc_003934F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05D8) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393510
 * Original: 0x00393510 - 0x00393522 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393510(void)
{
    uint32_t ebp = g_ebp;

loc_00393510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05DC) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393530
 * Original: 0x00393530 - 0x00393542 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393530(void)
{
    uint32_t ebp = g_ebp;

loc_00393530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05E0) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393550
 * Original: 0x00393550 - 0x00393562 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393550(void)
{
    uint32_t ebp = g_ebp;

loc_00393550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05E4) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393570
 * Original: 0x00393570 - 0x00393582 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393570(void)
{
    uint32_t ebp = g_ebp;

loc_00393570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05E8) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393590
 * Original: 0x00393590 - 0x003935A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393590(void)
{
    uint32_t ebp = g_ebp;

loc_00393590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05EC) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003935B0
 * Original: 0x003935B0 - 0x003935C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003935B0(void)
{
    uint32_t ebp = g_ebp;

loc_003935B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05F0) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003935D0
 * Original: 0x003935D0 - 0x003935E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003935D0(void)
{
    uint32_t ebp = g_ebp;

loc_003935D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05F4) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003935F0
 * Original: 0x003935F0 - 0x00393683 (147 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003935F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003935F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_SCALAR_BITS(MEM32(ebp + 8)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D840)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    MEM32(0x8C0528) = eax;
    eax = MEM32(ebp + -4);
    MEM32(0x8C052C) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0x8C0530) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0x8C0534) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0x8C0538) = eax;
    eax = MEM32(ebp + 8);
    MEM32(0x8C05F8) = eax;
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393690
 * Original: 0x00393690 - 0x003936A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393690(void)
{
    uint32_t ebp = g_ebp;

loc_00393690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C05FC) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003936B0
 * Original: 0x003936B0 - 0x003936C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003936B0(void)
{
    uint32_t ebp = g_ebp;

loc_003936B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0600) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003936D0
 * Original: 0x003936D0 - 0x003936E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003936D0(void)
{
    uint32_t ebp = g_ebp;

loc_003936D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0604) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003936F0
 * Original: 0x003936F0 - 0x00393702 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003936F0(void)
{
    uint32_t ebp = g_ebp;

loc_003936F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0608) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393710
 * Original: 0x00393710 - 0x00393722 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393710(void)
{
    uint32_t ebp = g_ebp;

loc_00393710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C060C) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393730
 * Original: 0x00393730 - 0x00393742 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393730(void)
{
    uint32_t ebp = g_ebp;

loc_00393730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0610) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393750
 * Original: 0x00393750 - 0x00393762 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393750(void)
{
    uint32_t ebp = g_ebp;

loc_00393750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0614) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393770
 * Original: 0x00393770 - 0x00393782 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393770(void)
{
    uint32_t ebp = g_ebp;

loc_00393770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0618) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393790
 * Original: 0x00393790 - 0x003937A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393790(void)
{
    uint32_t ebp = g_ebp;

loc_00393790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C061C) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003937B0
 * Original: 0x003937B0 - 0x003937C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003937B0(void)
{
    uint32_t ebp = g_ebp;

loc_003937B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0620) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003937D0
 * Original: 0x003937D0 - 0x003937E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003937D0(void)
{
    uint32_t ebp = g_ebp;

loc_003937D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0624) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003937F0
 * Original: 0x003937F0 - 0x00393802 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003937F0(void)
{
    uint32_t ebp = g_ebp;

loc_003937F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0628) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393810
 * Original: 0x00393810 - 0x00393822 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393810(void)
{
    uint32_t ebp = g_ebp;

loc_00393810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C062C) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393830
 * Original: 0x00393830 - 0x00393842 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393830(void)
{
    uint32_t ebp = g_ebp;

loc_00393830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0x8C0630) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003938E0
 * Original: 0x003938E0 - 0x00393964 (132 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003938E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003938E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    _fa = (uint32_t)(MEM32(0xC68744)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68744), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039395A; /* jne: not equal / not zero */

loc_003938EF: ;
    ecx = 0xC68744;
    eax = 0x5ACB64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393907u); RECOMP_ABI_CALL(0x00393970u, sub_00393970); /* call 0x00393970 */

loc_00393907: ;
    eax = MEM32(0xC68744);
    xmm0.f[0] = (float)(int32_t)MEM32(0xC68744); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACB64); /* mulss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0x43DDF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACB68); /* mulss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = 0x493F0F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E0;
    MEMD(esp + 0xC) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039395Au); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039395A: ;
    eax = MEM32(0xC68744);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393970
 * Original: 0x00393970 - 0x00393B8A (538 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393970(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00393970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ebp + -4;
    eax = ebp + -8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039398Eu); RECOMP_ABI_CALL(0x003B8230u, sub_003B8230); /* call 0x003B8230 */

loc_0039398E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003939F5; /* je: equal / zero */

loc_00393993: ;
    eax = (uint32_t)((int32_t)MEM32(ebp + -4) * (int32_t)0x1E0);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -8);
    ecx = 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = MEM32(ebp + -28);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + -8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + -8))); }
    ecx = eax;
    ecx = ecx + 1;
    ecx = ecx & 0xFFFFFFFEu;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -4); /* cvtsi2ss */
    eax = MEM32(ebp + 8);
    xmm1.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -8); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DDF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    goto loc_00393B85;

loc_003939F5: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0x280;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = ebp + -12;
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393A2Fu); RECOMP_ABI_CALL(0x70000340u, platform_screen_mode); /* call 0x70000340 */

loc_00393A2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393B85; /* je: equal / zero */

loc_00393A38: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00393B85; /* jle: less or equal (signed <=) */

loc_00393A42: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00393B85; /* jle: less or equal (signed <=) */

loc_00393A4C: ;
    eax = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)0x1E0);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -16);
    ecx = 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = MEM32(ebp + -32);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + -16)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + -16))); }
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x280) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x280 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00393A82; /* jge: greater or equal (signed >=) */

loc_00393A78: ;
    eax = 0x280;
    MEM32(ebp + -36) = eax;
    goto loc_00393AA4;

loc_00393A82: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x780 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00393A95; /* jle: less or equal (signed <=) */

loc_00393A8B: ;
    eax = 0x780;
    MEM32(ebp + -40) = eax;
    goto loc_00393A9E;

loc_00393A95: ;
    eax = MEM32(ebp + -20);
    eax = eax & 0xFFFFFFFEu;
    MEM32(ebp + -40) = eax;

loc_00393A9E: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -36) = eax;

loc_00393AA4: ;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = 0x45AF46;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393ABAu); RECOMP_ABI_CALL(0x003B6640u, sub_003B6640); /* call 0x003B6640 */

loc_00393ABA: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x280) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x280 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00393AF7; /* jl: less (signed <) */

loc_00393AC6: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00393AF7; /* jge: greater or equal (signed >=) */

loc_00393ACE: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -12);
    ecx = 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = MEM32(ebp + -44);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + -12)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + -12))); }
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -12) = eax;

loc_00393AF7: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -12); /* cvtsi2ss */
    eax = MEM32(ebp + 8);
    xmm1.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -16); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DDF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393B83; /* je: equal / zero */

loc_00393B31: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -20);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393B83; /* je: equal / zero */

loc_00393B40: ;
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00393B62; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00393B54: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    goto loc_00393B6F;

loc_00393B62: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */

loc_00393B6F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_00393B83: ;
    goto loc_00393B85;

loc_00393B85: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393B90
 * Original: 0x00393B90 - 0x00393BCD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 8));
    eax = ZX8(MEM8(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393BB9; /* je: equal / zero */

loc_00393BA2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393BA7u); RECOMP_ABI_CALL(0x003938E0u, sub_003938E0); /* call 0x003938E0 */

loc_00393BA7: ;
    eax = eax - 0x280;
    ecx = 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -4) = eax;
    goto loc_00393BC0;

loc_00393BB9: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_00393BC0;

loc_00393BC0: ;
    eax = MEM32(ebp + -4);
    MEM32(0xC68748) = eax;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393BD0
 * Original: 0x00393BD0 - 0x00393BF9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393BD0(void)
{
    uint32_t ebp = g_ebp;

loc_00393BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xC6874C;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFF;
    MEM32(esp + 8) = 0x37C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393BF4u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00393BF4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393C00
 * Original: 0x00393C00 - 0x00393C0B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C00(void)
{
    uint32_t ebp = g_ebp;

loc_00393C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0xC68AC8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393C10
 * Original: 0x00393C10 - 0x00393C49 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C10(void)
{
    uint32_t ebp = g_ebp;

loc_00393C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393C27u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_00393C27: ;
    eax = MEM32(ebp + 8);
    MEM32(0xC68AE4) = eax;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393C3Du); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_00393C3D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393C42u); RECOMP_ABI_CALL(0x00393C50u, sub_00393C50); /* call 0x00393C50 */

loc_00393C42: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393C50
 * Original: 0x00393C50 - 0x00393CD3 (131 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393C64u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_00393C64: ;
    _fa = (uint32_t)(MEM32(0xC79EC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79EC0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393CC0; /* jne: not equal / not zero */

loc_00393C6D: ;
    ecx = ebp + -4;
    eax = 0; /* xor self */
    eax = 0x39A530;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393C94u); RECOMP_ABI_CALL(0x003925A0u, sub_003925A0); /* call 0x003925A0 */

loc_00393C94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393CB0; /* jne: not equal / not zero */

loc_00393C99: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393CA4u); RECOMP_ABI_CALL(0x00392790u, sub_00392790); /* call 0x00392790 */

loc_00393CA4: ;
    MEM32(0xC79EC0) = 1;
    goto loc_00393CBE;

loc_00393CB0: ;
    eax = 0x458518;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393CBEu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_00393CBE: ;
    goto loc_00393CC0;

loc_00393CC0: ;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393CCEu); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_00393CCE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393CE0
 * Original: 0x00393CE0 - 0x00393D38 (88 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393CEBu); RECOMP_ABI_CALL(0x00393C50u, sub_00393C50); /* call 0x00393C50 */

loc_00393CEB: ;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393CF9u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_00393CF9: ;
    eax = MEM32(0xC68AE8);
    MEM32(ebp + -4) = eax;

loc_00393D01: ;
    eax = MEM32(0xC68AE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393D25; /* jne: not equal / not zero */

loc_00393D0B: ;
    ecx = 0xC68AEC;
    eax = 0xC68ACC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393D23u); RECOMP_ABI_CALL(0x0042F3A0u, sub_0042F3A0); /* call 0x0042F3A0 */

loc_00393D23: ;
    goto loc_00393D01;

loc_00393D25: ;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393D33u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_00393D33: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393D40
 * Original: 0x00393D40 - 0x00393DC1 (129 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393D5Bu); RECOMP_ABI_CALL(0x00393DD0u, sub_00393DD0); /* call 0x00393DD0 */

loc_00393D5B: ;
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;

loc_00393D60: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393DA1; /* je: equal / zero */

loc_00393D66: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393D94; /* jne: not equal / not zero */

loc_00393D71: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393D94; /* jne: not equal / not zero */

loc_00393D7A: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393D8E; /* je: equal / zero */

loc_00393D80: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00393D94; /* jbe: below or equal (unsigned <=) */

loc_00393D8E: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;

loc_00393D94: ;
    goto loc_00393D96;

loc_00393D96: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    goto loc_00393D60;

loc_00393DA1: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393DB2; /* je: equal / zero */

loc_00393DA7: ;
    eax = MEM32(ebp + -8);
    eax = eax + 8;
    MEM32(ebp + -12) = eax;
    goto loc_00393DB9;

loc_00393DB2: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_00393DB9;

loc_00393DB9: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393DD0
 * Original: 0x00393DD0 - 0x00393DF7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393DD0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00393DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 0xC, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx ^ eax;
    ecx = ecx & 0xFF;
    eax = 0xC79EC4;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00393E00
 * Original: 0x00393E00 - 0x00393E0F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E00(void)
{
    uint32_t ebp = g_ebp;

loc_00393E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00393E10
 * Original: 0x00393E10 - 0x00393E1D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E10(void)
{
    uint32_t ebp = g_ebp;

loc_00393E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00393E20
 * Original: 0x00393E20 - 0x003941AA (906 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00393E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0xC79E84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E84), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394195; /* jne: not equal / not zero */

loc_00393E45: ;
    eax = 0xC68B1C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x1136C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393E65u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00393E65: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393E88; /* je: equal / zero */

loc_00393E6B: ;
    eax = MEM32(ebp + 0x18);
    ecx = 0xC68B1C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393E88u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00393E88: ;
    _fa = (uint32_t)(MEM32(0xC68B1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68B1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393E9B; /* je: equal / zero */

loc_00393E91: ;
    eax = MEM32(0xC68B1C);
    MEM32(ebp + -16) = eax;
    goto loc_00393EA5;

loc_00393E9B: ;
    eax = 0x280;
    MEM32(ebp + -16) = eax;
    goto loc_00393EA5;

loc_00393EA5: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(0xC68B20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68B20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393EBE; /* je: equal / zero */

loc_00393EB4: ;
    eax = MEM32(0xC68B20);
    MEM32(ebp + -20) = eax;
    goto loc_00393EC8;

loc_00393EBE: ;
    eax = 0x1E0;
    MEM32(ebp + -20) = eax;
    goto loc_00393EC8;

loc_00393EC8: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    edx = 0xC68B1C;
    edx = edx + 0x34;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x12;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393EF5u); RECOMP_ABI_CALL(0x0039D970u, sub_0039D970); /* call 0x0039D970 */

loc_00393EF5: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    edx = 0xC68B1C;
    edx = edx + 0x4C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x2E;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393F1Cu); RECOMP_ABI_CALL(0x0039D970u, sub_0039D970); /* call 0x0039D970 */

loc_00393F1C: ;
    eax = 0xC68B1C;
    eax = eax + 0x34;
    MEM32(0xC68B80) = eax;
    eax = 0xC68B1C;
    eax = eax + 0x4C;
    MEM32(0xC68B84) = eax;
    MEM32(ebp + -12) = 0;

loc_00393F3F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00393FD6; /* jge: greater or equal (signed >=) */

loc_00393F49: ;
    ecx = MEM32(ebp + -12);
    eax = 0xC68B1C;
    eax = eax + 0x84;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -12);
    eax = 0xC68B1C;
    eax = eax + 0x84;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -12);
    eax = 0xC68B1C;
    eax = eax + 0x84;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -12);
    eax = 0xC68B1C;
    eax = eax + 0x84;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_00393F3F;

loc_00393FD6: ;
    eax = MEM32(ebp + -4);
    MEM32(0xC68B90) = eax;
    eax = MEM32(ebp + -8);
    MEM32(0xC68B94) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(0xC68B9C) = xmm0.f[0]; /* movss */
    MEM32(0xC79E7C) = 1;
    MEM32(0x8C05E0) = 1;
    MEM32(0x8C04F4) = 1;
    MEM32(0x8C04D8) = 0x203;
    MEM32(0x8C0500) = 0x1010101;
    MEM32(0x8C04EC) = 1;
    MEM32(0x8C04F0) = 0;
    MEM32(0x8C051C) = 0x8006;
    MEM32(0x8C05F0) = 0x901;
    MEM32(0x8C05EC) = 0x900;
    MEM32(0x8C05D0) = 0x1B02;
    MEM32(0x8C04DC) = 0x207;
    MEM32(0x8C050C) = 0x207;
    MEM32(0x8C0514) = 0xFF;
    MEM32(0x8C0518) = 0xFF;
    MEM32(0x8C05E8) = 0x1E00;
    MEM32(0x8C0504) = 0x1E00;
    MEM32(0x8C0508) = 0x1E00;
    MEM32(ebp + -12) = 0;

loc_003940B1: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00394147; /* jge: greater or equal (signed >=) */

loc_003940BB: ;
    ecx = MEM32(ebp + -12);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 0x28) = 1;
    ecx = MEM32(ebp + -12);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 0x2C) = 1;
    ecx = MEM32(ebp + -12);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 0x30) = 1;
    ecx = MEM32(ebp + -12);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 0x34) = 1;
    ecx = MEM32(ebp + -12);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 0x38) = 1;
    ecx = MEM32(ebp + -12);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 0x48) = 1;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_003940B1;

loc_00394147: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039414Cu); RECOMP_ABI_CALL(0x003941B0u, sub_003941B0); /* call 0x003941B0 */

loc_0039414C: ;
    eax = 0x44D0F1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039415Au); RECOMP_ABI_CALL(0x003B6550u, sub_003B6550); /* call 0x003B6550 */

loc_0039415A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039417D; /* jne: not equal / not zero */

loc_0039415F: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394171u); RECOMP_ABI_CALL(0x003B82F0u, sub_003B82F0); /* call 0x003B82F0 */

loc_00394171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039417D; /* je: equal / zero */

loc_00394176: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039417Bu); RECOMP_ABI_CALL(0x003943A0u, sub_003943A0); /* call 0x003943A0 */

loc_0039417B: ;
    goto loc_0039418B;

loc_0039417D: ;
    eax = 0x46661D;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039418Bu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039418B: ;
    MEM32(0xC79E84) = 1;

loc_00394195: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039419Au); RECOMP_ABI_CALL(0x00394740u, sub_00394740); /* call 0x00394740 */

loc_0039419A: ;
    ecx = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 28; return; /* ret 24 */

}


/**
 * sub_003941B0
 * Original: 0x003941B0 - 0x00394393 (483 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003941B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003941B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    xmm0 = XMM_SCALAR(MEMF(0x43D820)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(0xC68B84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68B84), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394216; /* je: equal / zero */

loc_003941CC: ;
    eax = MEM32(0xC68B84);
    edx = MEM32(eax + 0xC);
    eax = MEM32(0xC68B84);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -52;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003941EFu); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_003941EF: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0x2C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394207; /* je: equal / zero */

loc_003941F5: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0x30 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394207; /* je: equal / zero */

loc_003941FB: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0x2D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394207; /* je: equal / zero */

loc_00394201: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0x31 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394214; /* jne: not equal / not zero */

loc_00394207: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_00394214: ;
    goto loc_00394216;

loc_00394216: ;
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B90)); /* movd to xmm */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm3 = xmm2; /* movaps */
    xmm0 = XMM_OR(xmm0, xmm3); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm4 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(0xC69C6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B94)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm3); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm1 = XMM_MEM(0x43ECD0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(0xC69C70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0xC68B9C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0xC68B98)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(0xC69C74) = xmm0.f[0]; /* movss */
    MEM32(0xC69C78) = 0;
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B88)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm3); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm1 = XMM_SCALAR_BITS(MEM32(0xC68B90)); /* movd to xmm */
    xmm1 = XMM_OR(xmm1, xmm3); /* por */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(0xC69C7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B8C)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm3); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm1 = XMM_SCALAR_BITS(MEM32(0xC68B94)); /* movd to xmm */
    xmm1 = XMM_OR(xmm1, xmm3); /* por */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm2 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(0xC69C80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xC68B98); /* mulss */
    MEMF(0xC69C84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0xC69C88) = xmm0.f[0]; /* movss */
    eax = MEM32(0xC68E40);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039438E; /* jne: not equal / not zero */

loc_00394348: ;
    eax = 0xC68B1C;
    eax = eax + 0x1150;
    MEM32(esp) = 0x3A;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039436Bu); RECOMP_ABI_CALL(0x00395BE0u, sub_00395BE0); /* call 0x00395BE0 */

loc_0039436B: ;
    eax = 0xC68B1C;
    eax = eax + 0x1160;
    MEM32(esp) = 0x3B;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039438Eu); RECOMP_ABI_CALL(0x00395BE0u, sub_00395BE0); /* call 0x00395BE0 */

loc_0039438E: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003943A0
 * Original: 0x003943A0 - 0x0039473F (927 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003943A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003943A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -12) = 0;
    eax = ebp + -8;
    MEM32(esp) = 0x821B;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C60); PUSH32(esp, 0x003943C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003943C9: ;
    eax = ebp + -12;
    MEM32(esp) = 0x821C;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C60); PUSH32(esp, 0x003943DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003943DD: ;
    MEM32(0x969C64) = 0;
    MEM32(0x969C68) = 0; /* GLES on iOS/tvOS: disable border_clamp -> use GL_CLAMP_TO_EDGE */
    eax = 0x477699;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003943FFu); RECOMP_ABI_CALL(0x700000C0u, host_gl_has_extension); /* call 0x700000C0 */

loc_003943FF: ;
    MEM32(0x969C6C) = eax;
    eax = 0x46959F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394412u); RECOMP_ABI_CALL(0x700000C0u, host_gl_has_extension); /* call 0x700000C0 */

loc_00394412: ;
    MEM32(0x969C70) = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 3 (32-bit) */
    MEM8(ebp + -21) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_0039443D; /* jg: greater (signed >) */

loc_00394422: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 3 (32-bit) */
    MEM8(ebp + -22) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00394437; /* jne: not equal / not zero */

loc_0039442D: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM8(ebp + -22) = LO8(eax);

loc_00394437: ;
    SET_LO8(eax, MEM8(ebp + -22));
    MEM8(ebp + -21) = LO8(eax);

loc_0039443D: ;
    SET_LO8(eax, MEM8(ebp + -21));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(0x969C74) = eax;
    MEM32(0x969C78) = 0;
    eax = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)0x64);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)0xA);
    eax = eax + ecx;
    edx = 0xC7A2C4;
    ecx = 0x47AB65;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394482u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_00394482: ;
    eax = 0xC7A2C4;
    MEM32(0x969C7C) = eax;
    MEM32(esp) = 0x8642;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C80); PUSH32(esp, 0x0039449Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039449A: ;
    eax = 0xC68B1C;
    eax = eax + 0x1308;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C84); PUSH32(esp, 0x003944B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003944B6: ;
    eax = MEM32(0x969C88);
    ecx = MEM32(0xC69E24);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003944C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003944C6: ;
    eax = 0xC68B1C;
    eax = eax + 0x1310;
    MEM32(esp) = 3;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C8C); PUSH32(esp, 0x003944E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003944E2: ;
    eax = 0xC68B1C;
    eax = eax + 0x131C;
    MEM32(esp) = 3;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C8C); PUSH32(esp, 0x003944FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003944FE: ;
    MEM32(ebp + -20) = 0;

loc_00394505: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003945A3; /* jge: greater or equal (signed >=) */

loc_0039450F: ;
    eax = MEM32(0x969C90);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx * 4 + 0xC69E2C);
    MEM32(esp) = 0x8892;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039452Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039452B: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x8892;
    MEM32(esp + 4) = 0x1000000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x88E0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C94); PUSH32(esp, 0x00394552u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00394552: ;
    eax = MEM32(0x969C90);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx * 4 + 0xC69E38);
    MEM32(esp) = 0x8893;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039456Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039456E: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x8893;
    MEM32(esp + 4) = 0x200000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x88E0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C94); PUSH32(esp, 0x00394595u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00394595: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_00394505;

loc_003945A3: ;
    eax = MEM32(0xC69E2C);
    MEM32(0xC69E28) = eax;
    eax = MEM32(0xC69E38);
    MEM32(0xC69E4C) = eax;
    eax = 0xC68B1C;
    eax = eax + 0x1338;
    MEM32(esp) = 4;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C98); PUSH32(esp, 0x003945D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003945D3: ;
    eax = 0xC68B1C;
    eax = eax + 0x1348;
    MEM32(esp) = 0x1000;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C9C); PUSH32(esp, 0x003945EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003945EF: ;
    _fa = (uint32_t)(MEM32(0x969C78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039466A; /* je: equal / zero */

loc_003945F8: ;
    eax = 0xC68B1C;
    eax = eax + 0xD350;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C8C); PUSH32(esp, 0x00394614u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00394614: ;
    eax = MEM32(0x969C90);
    ecx = MEM32(0xC75E6C);
    MEM32(esp) = 0x92C0;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039462Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039462C: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x92C0;
    MEM32(esp + 4) = 0x4000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x88E8;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C94); PUSH32(esp, 0x00394653u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00394653: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x92C0;
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C90); PUSH32(esp, 0x0039466Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039466A: ;
    MEM32(ebp + -16) = 0;

loc_00394671: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003946C7; /* jge: greater or equal (signed >=) */

loc_00394677: ;
    ecx = MEM32(ebp + -16);
    eax = 0xC68B1C;
    eax = eax + 0x11F4;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(0x969CA0);
    edx = MEM32(ebp + -16);
    esi = MEM32(ebp + -16);
    ecx = 0xC68B1C;
    ecx = ecx + 0x11F4;
    _shift_result = RECOMP_SHIFT(esi, 4, 32, 0, NULL, &_shift_of);
    esi = _shift_result;
    ecx = ecx + esi;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003946BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003946BC: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_00394671;

loc_003946C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003946CCu); RECOMP_ABI_CALL(0x003A3C30u, sub_003A3C30); /* call 0x003A3C30 */

loc_003946CC: ;
    eax = 0x45DEFF;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003946DAu); RECOMP_ABI_CALL(0x003B66A0u, sub_003B66A0); /* call 0x003B66A0 */

loc_003946DA: ;
    MEM32(0xC79EB0) = eax;
    eax = 0x488D8B;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003946EDu); RECOMP_ABI_CALL(0x003B66A0u, sub_003B66A0); /* call 0x003B66A0 */

loc_003946ED: ;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394708; /* je: equal / zero */

loc_003946F5: ;
    eax = 0x488D8B;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394703u); RECOMP_ABI_CALL(0x003B66A0u, sub_003B66A0); /* call 0x003B66A0 */

loc_00394703: ;
    MEM32(ebp + -28) = eax;
    goto loc_0039470F;

loc_00394708: ;
    eax = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    goto loc_0039470F;

loc_0039470F: ;
    eax = MEM32(ebp + -28);
    MEM32(0xC79EB4) = eax;
    eax = 0x46392C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394725u); RECOMP_ABI_CALL(0x003B6550u, sub_003B6550); /* call 0x003B6550 */

loc_00394725: ;
    MEM32(0xC79EB8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039472Fu); RECOMP_ABI_CALL(0x00393BD0u, sub_00393BD0); /* call 0x00393BD0 */

loc_0039472F: ;
    MEM32(0xC79E80) = 1;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00394740
 * Original: 0x00394740 - 0x0039474B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394740(void)
{
    uint32_t ebp = g_ebp;

loc_00394740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0xC68B1C;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00394750
 * Original: 0x00394750 - 0x003948B7 (359 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394750(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00394750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394770u); RECOMP_ABI_CALL(0x003B96E0u, sub_003B96E0); /* call 0x003B96E0 */

loc_00394770: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039478F; /* je: equal / zero */

loc_00394776: ;
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039478F; /* je: equal / zero */

loc_0039477F: ;
    eax = ebp + -36;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039478Au); RECOMP_ABI_CALL(0x003B9890u, sub_003B9890); /* call 0x003B9890 */

loc_0039478A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039479B; /* jne: not equal / not zero */

loc_0039478F: ;
    MEM32(ebp + -4) = 0;
    goto loc_003948AF;

loc_0039479B: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003947B8u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003947B8: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003947E3u); RECOMP_ABI_CALL(0x003948C0u, sub_003948C0); /* call 0x003948C0 */

loc_003947E3: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + 4;
    eax = MEM32(ebp + 0xC);
    eax = eax + 6;
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394811u); RECOMP_ABI_CALL(0x003948C0u, sub_003948C0); /* call 0x003948C0 */

loc_00394811: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 8) = LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00394836; /* jge: greater or equal (signed >=) */

loc_0039482E: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -40) = eax;
    goto loc_00394840;

loc_00394836: ;
    eax = 0xFF;
    MEM32(ebp + -40) = eax;
    goto loc_00394840;

loc_00394840: ;
    eax = MEM32(ebp + -40);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 9) = LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0039485C; /* jge: greater or equal (signed >=) */

loc_00394854: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -44) = eax;
    goto loc_00394866;

loc_0039485C: ;
    eax = 0xFF;
    MEM32(ebp + -44) = eax;
    goto loc_00394866;

loc_00394866: ;
    eax = MEM32(ebp + -44);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 0xA) = LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFF8u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00394881; /* jge: greater or equal (signed >=) */

loc_00394877: ;
    eax = 0xFFFFFFF8u;
    MEM32(ebp + -48) = eax;
    goto loc_0039489D;

loc_00394881: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00394891; /* jle: less or equal (signed <=) */

loc_00394887: ;
    eax = 8;
    MEM32(ebp + -52) = eax;
    goto loc_00394897;

loc_00394891: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -52) = eax;

loc_00394897: ;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -48) = eax;

loc_0039489D: ;
    eax = MEM32(ebp + -48);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 0xB) = LO8(ecx);
    MEM32(ebp + -4) = 1;

loc_003948AF: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003948C0
 * Original: 0x003948C0 - 0x00394AAA (490 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003948C0(void)
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

loc_003948C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = 0xC68B1C;
    eax = eax + 0x34;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003948E7u); RECOMP_ABI_CALL(0x00399AB0u, sub_00399AB0); /* call 0x00399AB0 */

loc_003948E7: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x14);
    MEM16(eax) = 0xFFFF;
    eax = MEM32(ebp + 0x10);
    MEM16(eax) = 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394905; /* jne: not equal / not zero */

loc_00394900: ;
    goto loc_00394AA5;

loc_00394905: ;
    ecx = ebp + -8;
    eax = ebp + -12;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394917u); RECOMP_ABI_CALL(0x003B9910u, sub_003B9910); /* call 0x003B9910 */

loc_00394917: ;
    ecx = ebp + -16;
    eax = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394929u); RECOMP_ABI_CALL(0x003B8630u, sub_003B8630); /* call 0x003B8630 */

loc_00394929: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00394935; /* jle: less or equal (signed <=) */

loc_0039492F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0039493A; /* jg: greater (signed >) */

loc_00394935: ;
    goto loc_00394AA5;

loc_0039493A: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x28));
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x24));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x24)); }
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00394978; /* jle: less or equal (signed <=) */

loc_0039495D: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x24));
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x28)); }
    MEM32(ebp + -24) = eax;

loc_00394978: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -24);
    eax = eax - ecx;
    ecx = eax;
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -28);
    eax = eax - ecx;
    ecx = eax;
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM32(ebp + -36) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -16); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -32); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + -4);
    xmm1 = XMM_SCALAR_BITS(MEM32(eax + 0xC)); /* movd to xmm */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm3 = xmm2; /* movaps */
    xmm1 = XMM_OR(xmm1, xmm3); /* por */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -24); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -20); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -12); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -36); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + -4);
    xmm1 = XMM_SCALAR_BITS(MEM32(eax + 0x10)); /* movd to xmm */
    xmm1 = XMM_OR(xmm1, xmm3); /* por */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + -28); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394A46u); RECOMP_ABI_CALL(0x003938E0u, sub_003938E0); /* call 0x003938E0 */

loc_00394A46: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    eax = eax + 0xFFFFFD80u;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(0x43D97C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394A6Fu); RECOMP_ABI_CALL(0x003F6330u, sub_003F6330); /* call 0x003F6330 */

loc_00394A6F: ;
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(ebp + -52); /* cvttss2si */
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x10);
    MEM16(eax) = LO16(ecx);
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394A90u); RECOMP_ABI_CALL(0x003F6330u, sub_003F6330); /* call 0x003F6330 */

loc_00394A90: ;
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x14);
    MEM16(eax) = LO16(ecx);

loc_00394AA5: ;
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
 * sub_00394AB0
 * Original: 0x00394AB0 - 0x00394BEB (315 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394AB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00394AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    _fa = (uint32_t)(MEM32(0xC68744)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68744), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394ACC; /* jne: not equal / not zero */

loc_00394ABF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394AC4u); RECOMP_ABI_CALL(0x003938E0u, sub_003938E0); /* call 0x003938E0 */

loc_00394AC4: ;
    MEM32(ebp + -4) = eax;
    goto loc_00394BE3;

loc_00394ACC: ;
    eax = ebp + -16;
    ecx = ebp + -8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394ADEu); RECOMP_ABI_CALL(0x00393970u, sub_00393970); /* call 0x00393970 */

loc_00394ADE: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xC68744)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xC68744) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394B0E; /* jne: not equal / not zero */

loc_00394AE9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x5ACB64); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00394B0E; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(0x5ACB64)) */

loc_00394AF7: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00394B0E; /* jp: parity (xmm0.f[0] vs MEMF(0x5ACB64)) */

loc_00394AF9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x5ACB68); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00394B0E; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(0x5ACB68)) */

loc_00394B07: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00394B0E; /* jp: parity (xmm0.f[0] vs MEMF(0x5ACB68)) */

loc_00394B09: ;
    goto loc_00394BDB;

loc_00394B0E: ;
    eax = MEM32(ebp + -8);
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -16); /* mulss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0x43DDF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -12); /* mulss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = 0x493F0F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E0;
    MEMD(esp + 0xC) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394B56u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_00394B56: ;
    eax = MEM32(ebp + -8);
    MEM32(0xC68744) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(0x5ACB64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(0x5ACB68) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(0xC79E84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E84), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394BD9; /* je: equal / zero */

loc_00394B81: ;
    eax = MEM32(ebp + -8);
    MEM32(0xC68B1C) = eax;
    eax = MEM32(ebp + -8);
    ecx = 0xC68B1C;
    ecx = ecx + 0x34;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x12;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x1E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394BB1u); RECOMP_ABI_CALL(0x0039DAE0u, sub_0039DAE0); /* call 0x0039DAE0 */

loc_00394BB1: ;
    eax = MEM32(ebp + -8);
    ecx = 0xC68B1C;
    ecx = ecx + 0x4C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x2E;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x1E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394BD9u); RECOMP_ABI_CALL(0x0039DAE0u, sub_0039DAE0); /* call 0x0039DAE0 */

loc_00394BD9: ;
    goto loc_00394BDB;

loc_00394BDB: ;
    eax = MEM32(0xC68744);
    MEM32(ebp + -4) = eax;

loc_00394BE3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00394BF0
 * Original: 0x00394BF0 - 0x00394BFA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394BF0(void)
{
    uint32_t ebp = g_ebp;

loc_00394BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00394C00
 * Original: 0x00394C00 - 0x00394D27 (295 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394C00(void)
{
    uint32_t ebp = g_ebp;

loc_00394C00: ;
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
    MEM32(esp + 8) = 0xD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394C26u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00394C26: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x58) = 0x1000;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x5C) = 0x1000;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x60) = 0x200;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x64) = 0x2000;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x68) = 0x1000;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x6C) = 4;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x94) = 4;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x98) = 4;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xA0) = 8;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xA8) = 4;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D570)); /* movss */
    MEMF(eax + 0xB0) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xB4) = 0xFFFFF;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xB8) = 0xFFFF;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xBC) = 0x10;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC0) = 0xFF;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC4) = 0xFFFE0101u;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC8) = 0xC0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xCC) = 0xFFFF0101u;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00394D30
 * Original: 0x00394D30 - 0x00394D5B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394D30(void)
{
    uint32_t ebp = g_ebp;

loc_00394D30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC68B50);
    eax = eax + 1;
    MEM32(0xC68B50) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = 0xC68B1C;
    ecx = ecx + 0x34;
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00394D60
 * Original: 0x00394D60 - 0x00394DA0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394D60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00394D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xC68B84);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394D83; /* jne: not equal / not zero */

loc_00394D7A: ;
    MEM32(ebp + -4) = 0x88760866u;
    goto loc_00394D96;

loc_00394D83: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_00394D96: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00394DA0
 * Original: 0x00394DA0 - 0x00394EA4 (260 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394DA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00394DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394DB2u); RECOMP_ABI_CALL(0x00394EB0u, sub_00394EB0); /* call 0x00394EB0 */

loc_00394DB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E09; /* je: equal / zero */

loc_00394DB7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394DC8; /* je: equal / zero */

loc_00394DBD: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    goto loc_00394DCF;

loc_00394DC8: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_00394DCF;

loc_00394DCF: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394DE6; /* je: equal / zero */

loc_00394DDB: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    MEM32(ebp + -28) = eax;
    goto loc_00394DED;

loc_00394DE6: ;
    eax = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    goto loc_00394DED;

loc_00394DED: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -28);
    edx = 0x455319;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394E09u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_00394E09: ;
    eax = MEM32(0xC79EA4);
    eax = eax + 1;
    MEM32(0xC79EA4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E24; /* je: equal / zero */

loc_00394E1C: ;
    eax = MEM32(ebp + 8);
    MEM32(0xC68B80) = eax;

loc_00394E24: ;
    eax = MEM32(ebp + 0xC);
    MEM32(0xC68B84) = eax;
    _fa = (uint32_t)(MEM32(0xC68B80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68B80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E97; /* je: equal / zero */

loc_00394E35: ;
    esi = MEM32(0xC68B80);
    edx = ebp + -8;
    ecx = ebp + -12;
    eax = ebp + -16;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394E58u); RECOMP_ABI_CALL(0x00394F00u, sub_00394F00); /* call 0x00394F00 */

loc_00394E58: ;
    MEM32(0xC68B88) = 0;
    MEM32(0xC68B8C) = 0;
    eax = MEM32(ebp + -8);
    MEM32(0xC68B90) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0xC68B94) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0xC68B98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(0xC68B9C) = xmm0.f[0]; /* movss */

loc_00394E97: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394E9Cu); RECOMP_ABI_CALL(0x003941B0u, sub_003941B0); /* call 0x003941B0 */

loc_00394E9C: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00394EB0
 * Original: 0x00394EB0 - 0x00394EFE (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394EB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00394EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    _fa = (uint32_t)(MEM32(0x5ACB78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ACB78), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394ED2; /* jne: not equal / not zero */

loc_00394EBF: ;
    eax = 0x48E665;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394ECDu); RECOMP_ABI_CALL(0x003B6640u, sub_003B6640); /* call 0x003B6640 */

loc_00394ECD: ;
    MEM32(0x5ACB78) = eax;

loc_00394ED2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x5ACB78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ACB78), 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_00394EF1; /* jl: less (signed <) */

loc_00394EE0: ;
    eax = MEM32(0xC79E78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5ACB78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5ACB78) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_00394EF1: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00394F00
 * Original: 0x00394F00 - 0x00394FB0 (176 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394F00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00394F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -36;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394F31u); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_00394F31: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -40) = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x2A (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00394F9E; /* je: equal / zero */

loc_00394F52: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x2B (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00394F9E; /* je: equal / zero */

loc_00394F5D: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x2C (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00394F9E; /* je: equal / zero */

loc_00394F68: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x2D (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00394F9E; /* je: equal / zero */

loc_00394F73: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x2E (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00394F9E; /* je: equal / zero */

loc_00394F7E: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x2F (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00394F9E; /* je: equal / zero */

loc_00394F89: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x30 (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00394F9E; /* je: equal / zero */

loc_00394F94: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x31 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -41) = LO8(eax);

loc_00394F9E: ;
    SET_LO8(eax, MEM8(ebp + -41));
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00394FB0
 * Original: 0x00394FB0 - 0x00394FE5 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394FB0(void)
{
    uint32_t ebp = g_ebp;

loc_00394FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0xC68B1C;
    ecx = ecx + 0x6C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394FD9u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00394FD9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394FDEu); RECOMP_ABI_CALL(0x003941B0u, sub_003941B0); /* call 0x003941B0 */

loc_00394FDE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00394FF0
 * Original: 0x00394FF0 - 0x00395034 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394FF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00394FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039502D; /* jae: above or equal (unsigned >=) */

loc_00395002: ;
    eax = MEM32(ebp + 8);
    ecx = 0xC68B1C;
    ecx = ecx + 0x84;
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039502Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039502D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395040
 * Original: 0x00395040 - 0x00395083 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395040(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039507C; /* jae: above or equal (unsigned >=) */

loc_00395052: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = 0xC68B1C;
    eax = eax + 0x84;
    _shift_result = RECOMP_SHIFT(edx, 6, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039507Cu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039507C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395090
 * Original: 0x00395090 - 0x0039509A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395090(void)
{
    uint32_t ebp = g_ebp;

loc_00395090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003950A0
 * Original: 0x003950A0 - 0x003950AA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950A0(void)
{
    uint32_t ebp = g_ebp;

loc_003950A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003950B0
 * Original: 0x003950B0 - 0x003950CD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950B0(void)
{
    uint32_t ebp = g_ebp;

loc_003950B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(0xC68E40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003950C6u); RECOMP_ABI_CALL(0x003941B0u, sub_003941B0); /* call 0x003941B0 */

loc_003950C6: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003950D0
 * Original: 0x003950D0 - 0x003950D7 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950D0(void)
{
    uint32_t ebp = g_ebp;

loc_003950D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003950E0
 * Original: 0x003950E0 - 0x003950FA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003950E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003950F5; /* je: equal / zero */

loc_003950EF: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CA4); PUSH32(esp, 0x003950F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003950F5: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00395100
 * Original: 0x00395100 - 0x00395127 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395120; /* je: equal / zero */

loc_00395115: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00395120u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00395120: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00395130
 * Original: 0x00395130 - 0x003951F9 (201 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395130(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395148; /* je: equal / zero */

loc_0039513F: ;
    _fa = (uint32_t)(MEM32(0xC75E68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC75E68), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039514D; /* je: equal / zero */

loc_00395148: ;
    goto loc_003951F4;

loc_0039514D: ;
    MEM32(0xC75E68) = 1;
    _fa = (uint32_t)(MEM32(0x969C78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003951DC; /* je: equal / zero */

loc_00395160: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(0xC75E70);
    eax = eax + 1;
    eax = eax & 0xFFF;
    MEM32(0xC75E70) = eax;
    eax = MEM32(0xC75E70);
    MEM32(0xC75E74) = eax;
    eax = MEM32(0x969C90);
    ecx = MEM32(0xC75E6C);
    MEM32(esp) = 0x92C0;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039519Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039519B: ;
    ecx = MEM32(0xC75E74);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = ebp + -4;
    MEM32(esp) = 0x92C0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003951C3u); RECOMP_ABI_CALL(0x700000A0u, host_gl_buffer_write); /* call 0x700000A0 */

loc_003951C3: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x92C0;
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C90); PUSH32(esp, 0x003951DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003951DA: ;
    goto loc_003951F4;

loc_003951DC: ;
    eax = MEM32(0x969CA8);
    ecx = MEM32(0xC69E64);
    MEM32(esp) = 0x8C2F;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003951F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003951F4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00395200
 * Original: 0x00395200 - 0x003952E5 (229 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039521B; /* je: equal / zero */

loc_00395212: ;
    _fa = (uint32_t)(MEM32(0xC75E68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC75E68), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395227; /* jne: not equal / not zero */

loc_0039521B: ;
    MEM32(ebp + -4) = 0;
    goto loc_003952DB;

loc_00395227: ;
    MEM32(0xC75E68) = 0;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFF;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395249; /* jne: not equal / not zero */

loc_00395242: ;
    MEM32(ebp + 8) = 1;

loc_00395249: ;
    _fa = (uint32_t)(MEM32(0x969C78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395279; /* je: equal / zero */

loc_00395252: ;
    ecx = MEM32(0xC75E74);
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC75E78) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC6DE64) = 1;
    MEM32(ebp + -4) = 0;
    goto loc_003952DB;

loc_00395279: ;
    MEM32(esp) = 0x8C2F;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CAC); PUSH32(esp, 0x00395286u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00395286: ;
    xmm0 = XMM_SCALAR(MEMF(0x5ACB6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACB70); /* mulss */
    eax = MEM32(ebp + 8);
    MEMF(eax * 4 + 0xC71E64) = xmm0.f[0]; /* movss */
    eax = MEM32(0xC69E64);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0xC69E64);
    MEM32(0xC69E64) = eax;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC69E64) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC6DE64) = 1;
    MEM32(ebp + -4) = 0;

loc_003952DB: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003952F0
 * Original: 0x003952F0 - 0x0039542F (319 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003952F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003952F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -12) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395323; /* je: equal / zero */

loc_00395313: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;

loc_00395323: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFF;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039533B; /* jne: not equal / not zero */

loc_00395334: ;
    MEM32(ebp + 8) = 1;

loc_0039533B: ;
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395351; /* je: equal / zero */

loc_00395344: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xC6DE64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xC6DE64), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039536C; /* jne: not equal / not zero */

loc_00395351: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395360; /* je: equal / zero */

loc_00395357: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0;

loc_00395360: ;
    MEM32(ebp + -4) = 0;
    goto loc_00395425;

loc_0039536C: ;
    _fa = (uint32_t)(MEM32(0x969C78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003953AE; /* je: equal / zero */

loc_00395375: ;
    ecx = MEM32(0xC75E6C);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0xC75E78);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395394u); RECOMP_ABI_CALL(0x700000D0u, host_gl_read_buffer_word); /* call 0x700000D0 */

loc_00395394: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003953A5; /* je: equal / zero */

loc_0039539D: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_003953A5: ;
    MEM32(ebp + -4) = 0;
    goto loc_00395425;

loc_003953AE: ;
    eax = MEM32(0x969CB0);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx * 4 + 0xC69E64);
    ecx = ebp + -8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x8867;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003953D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003953D1: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003953E0; /* jne: not equal / not zero */

loc_003953D7: ;
    MEM32(ebp + -4) = 0x88760828u;
    goto loc_00395425;

loc_003953E0: ;
    eax = MEM32(0x969CB0);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx * 4 + 0xC69E64);
    ecx = ebp + -12;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x8866;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00395403u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00395403: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395410; /* je: equal / zero */

loc_00395409: ;
    MEM32(ebp + -12) = 0xF4240;

loc_00395410: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039541E; /* je: equal / zero */

loc_00395416: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_0039541E: ;
    MEM32(ebp + -4) = 0;

loc_00395425: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00395430
 * Original: 0x00395430 - 0x00395474 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395430(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00395430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x81 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00395455; /* jne: not equal / not zero */

loc_00395445: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395450u); RECOMP_ABI_CALL(0x003935F0u, sub_003935F0); /* call 0x003935F0 */

loc_00395450: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    goto loc_0039546D;

loc_00395455: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x90 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0039546B; /* jae: above or equal (unsigned >=) */

loc_0039545E: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0x8C03F4) = ecx;

loc_0039546B: ;
    goto loc_0039546D;

loc_0039546D: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395480
 * Original: 0x00395480 - 0x003954B9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003954B2; /* jae: above or equal (unsigned >=) */

loc_00395495: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003954B2; /* jae: above or equal (unsigned >=) */

loc_0039549B: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + ecx * 4) = edx;

loc_003954B2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003954C0
 * Original: 0x003954C0 - 0x003954E7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003954C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003954C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003954E3; /* jae: above or equal (unsigned >=) */

loc_003954CF: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(edx, 7, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax + 0x70) = ecx;

loc_003954E3: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003954F0
 * Original: 0x003954F0 - 0x00395517 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003954F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003954F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00395513; /* jae: above or equal (unsigned >=) */

loc_003954FF: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(edx, 7, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax + 0x74) = ecx;

loc_00395513: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395520
 * Original: 0x00395520 - 0x00395547 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00395543; /* jae: above or equal (unsigned >=) */

loc_0039552F: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(edx, 7, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax + 0x78) = ecx;

loc_00395543: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395550
 * Original: 0x00395550 - 0x00395583 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039557F; /* jae: above or equal (unsigned >=) */

loc_00395562: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039557F; /* jae: above or equal (unsigned >=) */

loc_00395568: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + ecx * 4) = edx;

loc_0039557F: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00395590
 * Original: 0x00395590 - 0x003955B0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003955AC; /* jae: above or equal (unsigned >=) */

loc_0039559F: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC68E20) = ecx;

loc_003955AC: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003955B0
 * Original: 0x003955B0 - 0x003955D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003955B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003955B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003955CC; /* jae: above or equal (unsigned >=) */

loc_003955BF: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC68E30) = ecx;

loc_003955CC: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003955D0
 * Original: 0x003955D0 - 0x00395739 (361 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003955D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003955D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003955E4; /* jne: not equal / not zero */

loc_003955DF: ;
    goto loc_00395732;

loc_003955E4: ;
    eax = MEM32(ebp + 8);
    ecx = 0x8C03F4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395601u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00395601: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    MEM32(0x8C0414) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    MEM32(0x8C0418) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 0x28;
    ecx = 0x8C03F4;
    ecx = ecx + 0x28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039563Au); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039563A: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x48;
    ecx = 0x8C03F4;
    ecx = ecx + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039565Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039565D: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x68;
    ecx = 0x8C03F4;
    ecx = ecx + 0x68;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395680u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00395680: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x88;
    ecx = 0x8C03F4;
    ecx = ecx + 0x88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003956A8u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003956A8: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xA8);
    MEM32(0x8C049C) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xAC);
    MEM32(0x8C04A0) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xB0);
    MEM32(0x8C04A4) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 0xB4;
    ecx = 0x8C03F4;
    ecx = ecx + 0xB4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003956FAu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003956FA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xD4);
    MEM32(0x8C04C8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xD8);
    MEM32(0x8C05C4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xDC);
    MEM32(0x8C04D0) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xE0);
    MEM32(0x8C04D4) = eax;

loc_00395732: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00395740
 * Original: 0x00395740 - 0x0039581D (221 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395740(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395766u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_00395766: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039577B; /* jne: not equal / not zero */

loc_0039576F: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_00395813;

loc_0039577B: ;
    eax = MEM32(ebp + -8);
    MEM32(eax) = 0x76736864;
    ecx = MEM32(0xC79E7C);
    eax = ecx;
    eax = eax + 1;
    MEM32(0xC79E7C) = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003957F2; /* je: equal / zero */

loc_003957A0: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    _shift_result = RECOMP_SHIFT(ecx, 0x10, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003957C2u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003957C2: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 8);
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + 4;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003957F2u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003957F2: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395804u); RECOMP_ABI_CALL(0x00395820u, sub_00395820); /* call 0x00395820 */

loc_00395804: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_00395813: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}


/**
 * sub_00395820
 * Original: 0x00395820 - 0x003959FA (474 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    eax = ebp + -72;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395851u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00395851: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -89) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00395868; /* je: equal / zero */

loc_0039585C: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -89) = LO8(eax);

loc_00395868: ;
    SET_LO8(eax, MEM8(ebp + -89));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00395874; /* jne: not equal / not zero */

loc_0039586F: ;
    goto loc_003959F4;

loc_00395874: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -76);
    _shift_result = RECOMP_SHIFT(eax, 0x1D, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -80);
    eax--;
    MEM32(ebp + -96) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    if ((!_cf && eax != 0)) goto loc_003959E2; /* ja: above (unsigned >) */

loc_00395895: ;
    eax = MEM32(ebp + -96);
    eax = MEM32(eax * 4 + 0x4CF5E4);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003958A1u) goto loc_003958A1;
    if (_jt == 0x003958AFu) goto loc_003958AF;
    if (_jt == 0x003959B3u) goto loc_003959B3;
    if (_jt == 0x003959CCu) goto loc_003959CC;
    if (_jt == 0x003959E2u) goto loc_003959E2;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003958A1: ;
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    MEM32(ebp + -8) = eax;
    goto loc_003959E4;

loc_003958AF: ;
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003958FB; /* je: equal / zero */

loc_003958BC: ;
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0000;
    _shift_result = RECOMP_SHIFT(eax, 0x10, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003958DF; /* je: equal / zero */

loc_003958D7: ;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -100) = eax;
    goto loc_003958E8;

loc_003958DF: ;
    eax = MEM32(ebp + -84);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -100) = eax;

loc_003958E8: ;
    ecx = MEM32(ebp + -100);
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + eax * 4 + -72))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + eax * 4 + -72);
    MEM32(ebp + eax * 4 + -72) = ecx;
    goto loc_003959B1;

loc_003958FB: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003959AF; /* jae: above or equal (unsigned >=) */

loc_00395908: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x70);
    esi = ecx;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(1)) >> 32) & 1);
    esi = esi + 1;
    MEM32(edx + 0x70) = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -88);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + -8);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -88);
    MEM8(eax + 1) = LO8(ecx);
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF0000;
    _shift_result = RECOMP_SHIFT(eax, 0x10, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -88);
    MEM8(eax + 2) = LO8(ecx);
    eax = MEM32(ebp + -88);
    eax = ZX8(MEM8(eax + 2));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039595Eu); RECOMP_ABI_CALL(0x0039A620u, sub_0039A620); /* call 0x0039A620 */

loc_0039595E: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -88);
    MEM8(eax + 3) = LO8(ecx);
    eax = MEM32(ebp + -8);
    eax = MEM32(ebp + eax * 4 + -72);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -88);
    MEM16(eax + 4) = LO16(ecx);
    eax = MEM32(ebp + -88);
    ecx = ZX8(MEM8(eax + 3));
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + eax * 4 + -72))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + eax * 4 + -72);
    MEM32(ebp + eax * 4 + -72) = ecx;
    eax = MEM32(ebp + -88);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003959AD; /* jne: not equal / not zero */

loc_00395995: ;
    eax = MEM32(ebp + -88);
    ecx = ZX8(MEM8(eax));
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    ecx = eax;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(eax + 0x74);
    MEM32(eax + 0x74) = ecx;

loc_003959AD: ;
    goto loc_003959AF;

loc_003959AF: ;
    goto loc_003959B1;

loc_003959B1: ;
    goto loc_003959E4;

loc_003959B3: ;
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1E000000;
    _shift_result = RECOMP_SHIFT(eax, 0x19, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    eax = eax + MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = eax;
    goto loc_003959E4;

loc_003959CC: ;
    eax = MEM32(ebp + -76);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F000000;
    _shift_result = RECOMP_SHIFT(eax, 0x18, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    eax = eax + MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = eax;
    goto loc_003959E4;

loc_003959E2: ;
    goto loc_003959E4;

loc_003959E4: ;
    goto loc_003959E6;

loc_003959E6: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(ebp + 0xC) = eax;
    goto loc_00395851;

loc_003959F4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x74)) >> 32) & 1);
    esp = esp + 0x74;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00395A00
 * Original: 0x00395A00 - 0x00395A0A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A00(void)
{
    uint32_t ebp = g_ebp;

loc_00395A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00395A10
 * Original: 0x00395A10 - 0x00395A4E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395A24u); RECOMP_ABI_CALL(0x00395A50u, sub_00395A50); /* call 0x00395A50 */

loc_00395A24: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395A47; /* je: equal / zero */

loc_00395A2D: ;
    eax = MEM32(ebp + -4);
    MEM32(0xC68E44) = eax;
    MEM32(0xC69068) = 0;
    eax = MEM32(ebp + -4);
    MEM32(0xC68E48) = eax;

loc_00395A47: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_00395A50
 * Original: 0x00395A50 - 0x00395A92 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395A7B; /* je: equal / zero */

loc_00395A65: ;
    eax = MEM32(ebp + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395A7B; /* jne: not equal / not zero */

loc_00395A70: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76736864) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x76736864 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395A84; /* je: equal / zero */

loc_00395A7B: ;
    MEM32(ebp + -4) = 0;
    goto loc_00395A8A;

loc_00395A84: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_00395A8A: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00395AA0
 * Original: 0x00395AA0 - 0x00395AD3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395AA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x88 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00395ACC; /* jae: above or equal (unsigned >=) */

loc_00395AB5: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395AC0u); RECOMP_ABI_CALL(0x00395A50u, sub_00395A50); /* call 0x00395A50 */

loc_00395AC0: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax * 4 + 0xC68E48) = ecx;

loc_00395ACC: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395AE0
 * Original: 0x00395AE0 - 0x00395B20 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395AE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395AE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395AF7u); RECOMP_ABI_CALL(0x00395A50u, sub_00395A50); /* call 0x00395A50 */

loc_00395AF7: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395B08; /* je: equal / zero */

loc_00395B00: ;
    eax = MEM32(ebp + -4);
    MEM32(0xC68E44) = eax;

loc_00395B08: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x88 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00395B19; /* jae: above or equal (unsigned >=) */

loc_00395B11: ;
    eax = MEM32(ebp + 0xC);
    MEM32(0xC69068) = eax;

loc_00395B19: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395B20
 * Original: 0x00395B20 - 0x00395B61 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395B37u); RECOMP_ABI_CALL(0x00395A50u, sub_00395A50); /* call 0x00395A50 */

loc_00395B37: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395B4B; /* je: equal / zero */

loc_00395B40: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -8) = eax;
    goto loc_00395B52;

loc_00395B4B: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_00395B52;

loc_00395B52: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395B70
 * Original: 0x00395B70 - 0x00395BD1 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00395B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x60;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00395B97; /* jl: less (signed <) */

loc_00395B8E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00395B99; /* jl: less (signed <) */

loc_00395B97: ;
    goto loc_00395BCA;

loc_00395B99: ;
    eax = MEM32(ebp + -4);
    eax = eax + MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00395BB1; /* jle: less or equal (signed <=) */

loc_00395BA6: ;
    eax = 0xC0;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -4))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + 0x10) = eax;

loc_00395BB1: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395BCAu); RECOMP_ABI_CALL(0x00395BE0u, sub_00395BE0); /* call 0x00395BE0 */

loc_00395BCA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00395BE0
 * Original: 0x00395BE0 - 0x00395CC8 (232 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395BE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;

loc_00395BFC: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00395CC3; /* jae: above or equal (unsigned >=) */

loc_00395C08: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + MEM32(ebp + -8);
    eax = 0xC68B1C;
    eax = eax + 0x550;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = ecx + edx;
    xmm1 = XMM_MEM(ecx); /* movups */
    xmm0 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_PCMPEQB(xmm0, xmm1); /* pcmpeqb */
    eax = XMM_PMOVMSKB(xmm0); /* pmovmskb */
    eax = eax - 0xFFFF;
    SET_LO8(eax, ((eax != 0)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395CB3; /* je: equal / zero */

loc_00395C47: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + MEM32(ebp + -8);
    eax = 0xC68B1C;
    eax = eax + 0x550;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = ecx + edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0xC7A2C8);
    ecx = ecx + 1;
    MEM32(0xC7A2C8) = ecx;
    eax = MEM32(ebp + 8);
    eax = eax + MEM32(ebp + -8);
    MEM32(eax * 4 + 0xC7A2CC) = ecx;
    eax = MEM32(ebp + 8);
    eax = eax + MEM32(ebp + -8);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(0xC7A2C8);
    eax = eax & 0x3FF;
    MEM8(eax + 0xC7A5CC) = LO8(ecx);

loc_00395CB3: ;
    goto loc_00395CB5;

loc_00395CB5: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_00395BFC;

loc_00395CC3: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00395CD0
 * Original: 0x00395CD0 - 0x00395D1E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395CD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00395CE5; /* jb: below (unsigned <) */

loc_00395CE3: ;
    goto loc_00395D17;

loc_00395CE5: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395CF6; /* je: equal / zero */

loc_00395CEB: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    goto loc_00395CFD;

loc_00395CF6: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_00395CFD;

loc_00395CFD: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    MEM32(eax * 8 + 0xC69C8C) = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(eax * 8 + 0xC69C90) = ecx;

loc_00395D17: ;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00395D20
 * Original: 0x00395D20 - 0x00395D59 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(0xC69D0C) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395D43; /* je: equal / zero */

loc_00395D38: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    goto loc_00395D4A;

loc_00395D43: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_00395D4A;

loc_00395D4A: ;
    eax = MEM32(ebp + -4);
    MEM32(0x969CB4) = eax;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00395D60
 * Original: 0x00395D60 - 0x00395E7F (287 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00395D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395D89; /* je: equal / zero */

loc_00395D76: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395D84u); RECOMP_ABI_CALL(0x00395E80u, sub_00395E80); /* call 0x00395E80 */

loc_00395D84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395D8E; /* jne: not equal / not zero */

loc_00395D89: ;
    goto loc_00395E77;

loc_00395D8E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edx = 0x450204;
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395DB4u); RECOMP_ABI_CALL(0x00396F70u, sub_00396F70); /* call 0x00396F70 */

loc_00395DB4: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395DC6u); RECOMP_ABI_CALL(0x00397820u, sub_00397820); /* call 0x00397820 */

loc_00395DC6: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395E3B; /* jne: not equal / not zero */

loc_00395DCC: ;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    eax = ebp + -8;
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395DE8u); RECOMP_ABI_CALL(0x00397D90u, sub_00397D90); /* call 0x00397D90 */

loc_00395DE8: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x969CB8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395E0Du); RECOMP_ABI_CALL(0x00397F10u, sub_00397F10); /* call 0x00397F10 */

loc_00395E0D: ;
    edx = MEM32(ebp + -20);
    ecx = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp) = 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0x1403;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00395E2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00395E2E: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395E39u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00395E39: ;
    goto loc_00395E69;

loc_00395E3B: ;
    eax = MEM32(0x969CBC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395E4Eu); RECOMP_ABI_CALL(0x00397FC0u, sub_00397FC0); /* call 0x00397FC0 */

loc_00395E4E: ;
    edx = eax;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + 0x10);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00395E69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00395E69: ;
    eax = 0x450204;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395E77u); RECOMP_ABI_CALL(0x00398030u, sub_00398030); /* call 0x00398030 */

loc_00395E77: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00395E80
 * Original: 0x00395E80 - 0x00396F69 (4329 bytes, 904 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395E80(void)
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

loc_00395E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4F0;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395E93u); RECOMP_ABI_CALL(0x0039A710u, sub_0039A710); /* call 0x0039A710 */

loc_00395E93: ;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -848) = 0;
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395EC1; /* je: equal / zero */

loc_00395EA9: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395EC1; /* je: equal / zero */

loc_00395EAF: ;
    _fa = (uint32_t)(MEM32(0xC68E44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68E44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395EC1; /* je: equal / zero */

loc_00395EB8: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395EDA; /* jne: not equal / not zero */

loc_00395EC1: ;
    eax = MEM32(0xC79E98);
    eax = eax + 1;
    MEM32(0xC79E98) = eax;
    MEM32(ebp + -12) = 0;
    goto loc_00396F5C;

loc_00395EDA: ;
    eax = MEM32(0xC79EB0);
    MEM32(ebp + -856) = eax;

loc_00395EE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -856)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -856), 0 (32-bit) */
    MEM8(ebp + -1229) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00395F0B; /* je: equal / zero */

loc_00395EF6: ;
    eax = MEM32(ebp + -856);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1229) = LO8(eax);

loc_00395F0B: ;
    SET_LO8(eax, MEM8(ebp + -1229));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00395F17; /* jne: not equal / not zero */

loc_00395F15: ;
    goto loc_00395F72;

loc_00395F17: ;
    eax = MEM32(ebp + -856);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395F25u); RECOMP_ABI_CALL(0x00425F20u, sub_00425F20); /* call 0x00425F20 */

loc_00395F25: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395F39; /* jne: not equal / not zero */

loc_00395F2D: ;
    MEM32(ebp + -12) = 0;
    goto loc_00396F5C;

loc_00395F39: ;
    eax = MEM32(ebp + -856);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395F4Fu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_00395F4F: ;
    MEM32(ebp + -856) = eax;
    _fa = (uint32_t)(MEM32(ebp + -856)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -856), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395F6D; /* je: equal / zero */

loc_00395F5E: ;
    eax = MEM32(ebp + -856);
    eax = eax + 1;
    MEM32(ebp + -856) = eax;

loc_00395F6D: ;
    goto loc_00395EE5;

loc_00395F72: ;
    eax = ebp + -848;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395F80u); RECOMP_ABI_CALL(0x003994D0u, sub_003994D0); /* call 0x003994D0 */

loc_00395F80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395F9E; /* jne: not equal / not zero */

loc_00395F85: ;
    eax = MEM32(0xC79E9C);
    eax = eax + 1;
    MEM32(0xC79E9C) = eax;
    MEM32(ebp + -12) = 0;
    goto loc_00396F5C;

loc_00395F9E: ;
    eax = MEM32(ebp + -848);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395FACu); RECOMP_ABI_CALL(0x0039A750u, sub_0039A750); /* call 0x0039A750 */

loc_00395FAC: ;
    eax = ebp + -268;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xFC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395FCCu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00395FCC: ;
    ecx = ebp + -268;
    eax = 0x8C03F4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395FECu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00395FEC: ;
    eax = ebp + -268;
    eax = eax + 0x28;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039600Fu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039600F: ;
    MEM32(ebp + -96) = 0;
    MEM32(ebp + -92) = 0;
    eax = MEM32(0x8C05C4);
    MEM32(ebp + -40) = eax;
    eax = ebp + -844;
    eax = eax + 0x1E8;
    ecx = ebp + -268;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396042u); RECOMP_ABI_CALL(0x0039B0E0u, sub_0039B0E0); /* call 0x0039B0E0 */

loc_00396042: ;
    MEM32(ebp + -852) = 0;

loc_0039604C: ;
    _fa = (uint32_t)(MEM32(ebp + -852)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -852), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003960B5; /* jge: greater or equal (signed >=) */

loc_00396055: ;
    ecx = MEM32(ebp + -852);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -852);
    MEM8(ebp + eax + -32) = LO8(ecx);
    ecx = MEM32(ebp + -852);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0x50);
    _shift_result = RECOMP_SHIFT(eax, 0x1C, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0xF;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -852);
    MEM8(ebp + eax + -28) = LO8(ecx);
    eax = MEM32(ebp + -852);
    eax = eax + 1;
    MEM32(ebp + -852) = eax;
    goto loc_0039604C;

loc_003960B5: ;
    _fa = (uint32_t)(MEM32(0x8C04E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C04E4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003960CB; /* je: equal / zero */

loc_003960BE: ;
    eax = MEM32(0x8C04DC);
    MEM32(ebp + -1236) = eax;
    goto loc_003960D5;

loc_003960CB: ;
    eax = 0; /* xor self */
    MEM32(ebp + -1236) = eax;
    goto loc_003960D5;

loc_003960D5: ;
    eax = MEM32(ebp + -1236);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(0x8C053C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C053C), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -20) = LO8(eax);
    eax = MEM32(0x8C0540);
    MEM8(ebp + -19) = LO8(eax);
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039610Au); RECOMP_ABI_CALL(0x0039BA00u, sub_0039BA00); /* call 0x0039BA00 */

loc_0039610A: ;
    MEM32(ebp + -1240) = eax;
    eax = ebp + -268;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039611Eu); RECOMP_ABI_CALL(0x0039BB70u, sub_0039BB70); /* call 0x0039BB70 */

loc_0039611E: ;
    ecx = MEM32(ebp + -1240);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396130u); RECOMP_ABI_CALL(0x0039B460u, sub_0039B460); /* call 0x0039B460 */

loc_00396130: ;
    MEM32(ebp + -272) = eax;
    _fa = (uint32_t)(MEM32(ebp + -272)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -272), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396166; /* jne: not equal / not zero */

loc_0039613F: ;
    eax = MEM32(0xC79EA0);
    eax = eax + 1;
    MEM32(0xC79EA0) = eax;
    eax = 0x441CDF;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039615Au); RECOMP_ABI_CALL(0x00398030u, sub_00398030); /* call 0x00398030 */

loc_0039615A: ;
    MEM32(ebp + -12) = 0;
    goto loc_00396F5C;

loc_00396166: ;
    eax = 0x456A01;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396174u); RECOMP_ABI_CALL(0x00398030u, sub_00398030); /* call 0x00398030 */

loc_00396174: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396189; /* je: equal / zero */

loc_0039617A: ;
    eax = MEM32(0xC79E8C);
    eax = eax + 1;
    MEM32(0xC79E8C) = eax;
    goto loc_00396196;

loc_00396189: ;
    eax = MEM32(0xC79E88);
    eax = eax + 1;
    MEM32(0xC79E88) = eax;

loc_00396196: ;
    eax = MEM32(ebp + -272);
    eax = MEM32(eax + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003961A7u); RECOMP_ABI_CALL(0x0039BD80u, sub_0039BD80); /* call 0x0039BD80 */

loc_003961A7: ;
    eax = MEM32(ebp + -272);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003963AA; /* jl: less (signed <) */

loc_003961B7: ;
    eax = MEM32(ebp + -272);
    eax = MEM32(eax + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xC7A2C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xC7A2C8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003963AA; /* je: equal / zero */

loc_003961CC: ;
    eax = MEM32(ebp + -272);
    eax = MEM32(eax + 0x50);
    MEM32(ebp + -860) = eax;
    MEM32(ebp + -864) = 0;
    eax = MEM32(0xC7A2C8);
    ecx = MEM32(ebp + -272);
    eax = eax - MEM32(ecx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00396296; /* ja: above (unsigned >) */

loc_003961FE: ;
    eax = MEM32(ebp + -272);
    eax = MEM32(eax + 0x58);
    eax = eax + 1;
    MEM32(ebp + -872) = eax;

loc_00396210: ;
    eax = MEM32(ebp + -872);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xC7A2C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xC7A2C8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00396294; /* ja: above (unsigned >) */

loc_0039621E: ;
    eax = MEM32(ebp + -872);
    eax = eax & 0x3FF;
    eax = ZX8(MEM8(eax + 0xC7A5CC));
    MEM32(ebp + -868) = eax;
    eax = MEM32(ebp + -868);
    ecx = MEM32(ebp + -272);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0039624A; /* jb: below (unsigned <) */

loc_00396248: ;
    goto loc_00396280;

loc_0039624A: ;
    eax = MEM32(ebp + -860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -868)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -868) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00396264; /* jbe: below or equal (unsigned <=) */

loc_00396258: ;
    eax = MEM32(ebp + -868);
    MEM32(ebp + -860) = eax;

loc_00396264: ;
    eax = MEM32(ebp + -864);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -868)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -868) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039627E; /* jae: above or equal (unsigned >=) */

loc_00396272: ;
    eax = MEM32(ebp + -868);
    MEM32(ebp + -864) = eax;

loc_0039627E: ;
    goto loc_00396280;

loc_00396280: ;
    eax = MEM32(ebp + -872);
    eax = eax + 1;
    MEM32(ebp + -872) = eax;
    goto loc_00396210;

loc_00396294: ;
    goto loc_00396304;

loc_00396296: ;
    MEM32(ebp + -868) = 0;

loc_003962A0: ;
    eax = MEM32(ebp + -868);
    ecx = MEM32(ebp + -272);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00396302; /* jae: above or equal (unsigned >=) */

loc_003962B1: ;
    eax = MEM32(ebp + -868);
    eax = MEM32(eax * 4 + 0xC7A2CC);
    ecx = MEM32(ebp + -272);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x58) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003962EF; /* jbe: below or equal (unsigned <=) */

loc_003962C9: ;
    eax = MEM32(ebp + -860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -868)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -868) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003962E3; /* jbe: below or equal (unsigned <=) */

loc_003962D7: ;
    eax = MEM32(ebp + -868);
    MEM32(ebp + -860) = eax;

loc_003962E3: ;
    eax = MEM32(ebp + -868);
    MEM32(ebp + -864) = eax;

loc_003962EF: ;
    goto loc_003962F1;

loc_003962F1: ;
    eax = MEM32(ebp + -868);
    eax = eax + 1;
    MEM32(ebp + -868) = eax;
    goto loc_003962A0;

loc_00396302: ;
    goto loc_00396304;

loc_00396304: ;
    eax = MEM32(ebp + -860);
    ecx = MEM32(ebp + -272);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039639B; /* jae: above or equal (unsigned >=) */

loc_00396319: ;
    eax = MEM32(ebp + -272);
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039636E; /* je: equal / zero */

loc_00396325: ;
    eax = MEM32(0x969CC0);
    ecx = MEM32(ebp + -272);
    esi = MEM32(ecx + 0x10);
    esi = esi + MEM32(ebp + -860);
    edx = MEM32(ebp + -864);
    edx = edx - MEM32(ebp + -860);
    edx = edx + 1;
    edi = MEM32(ebp + -860);
    ecx = 0xC68B1C;
    ecx = ecx + 0x550;
    _shift_result = RECOMP_SHIFT(edi, 4, 32, 0, NULL, &_shift_of);
    edi = _shift_result;
    ecx = ecx + edi;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039636Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039636C: ;
    goto loc_00396399;

loc_0039636E: ;
    eax = MEM32(0x969CC0);
    ecx = MEM32(ebp + -272);
    edx = MEM32(ecx + 0x10);
    ecx = 0xC68B1C;
    ecx = ecx + 0x550;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0xC0;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00396399u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00396399: ;
    goto loc_0039639B;

loc_0039639B: ;
    ecx = MEM32(0xC7A2C8);
    eax = MEM32(ebp + -272);
    MEM32(eax + 0x58) = ecx;

loc_003963AA: ;
    MEM32(ebp + -1184) = 0;
    eax = MEM32(ebp + -1184);
    ecx = MEM32(0xC69C6C);
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0xC69C70);
    MEM32(ebp + eax * 4 + -1176) = ecx;
    ecx = MEM32(0xC69C74);
    MEM32(ebp + eax * 4 + -1172) = ecx;
    ecx = MEM32(0xC69C78);
    MEM32(ebp + eax * 4 + -1168) = ecx;
    eax = MEM32(ebp + -1184);
    eax = eax + 4;
    MEM32(ebp + -1184) = eax;
    eax = MEM32(ebp + -1184);
    ecx = MEM32(0xC69C7C);
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0xC69C80);
    MEM32(ebp + eax * 4 + -1176) = ecx;
    ecx = MEM32(0xC69C84);
    MEM32(ebp + eax * 4 + -1172) = ecx;
    ecx = MEM32(0xC69C88);
    MEM32(ebp + eax * 4 + -1168) = ecx;
    eax = MEM32(ebp + -1184);
    eax = eax + 4;
    MEM32(ebp + -1184) = eax;
    eax = MEM32(ebp + -1184);
    ecx = ebp + -1180;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = ebp + -844;
    eax = eax + 0x1E8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396476u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00396476: ;
    eax = MEM32(ebp + -1184);
    eax = eax + 0x10;
    MEM32(ebp + -1184) = eax;
    ecx = MEM32(0x8C059C);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    MEM32(ebp + -852) = 0;

loc_003964AD: ;
    _fa = (uint32_t)(MEM32(ebp + -852)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -852), 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00396517; /* jge: greater or equal (signed >=) */

loc_003964B6: ;
    eax = MEM32(ebp + -852);
    eax = eax + 0xA;
    ecx = MEM32(eax * 4 + 0x8C03F4);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -852);
    eax = eax + 0x12;
    ecx = MEM32(eax * 4 + 0x8C03F4);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -852);
    eax = eax + 1;
    MEM32(ebp + -852) = eax;
    goto loc_003964AD;

loc_00396517: ;
    ecx = MEM32(0x8C04A0);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0x8C04A4);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0x8C05CC);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0x8C0544);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0x8C0548);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0x8C054C);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0x8C04E8);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    ecx = MEM32(0xC68748);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    MEM32(ebp + -852) = 0;

loc_00396611: ;
    _fa = (uint32_t)(MEM32(ebp + -852)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -852), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00396730; /* jge: greater or equal (signed >=) */

loc_0039661E: ;
    ecx = MEM32(ebp + -852);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -1188) = eax;
    eax = MEM32(ebp + -1188);
    ecx = MEM32(eax + 0x58);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -1188);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -1188);
    ecx = MEM32(eax + 0x64);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -1188);
    ecx = MEM32(eax + 0x60);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -1188);
    ecx = MEM32(eax + 0x68);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -1188);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -1188);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(ebp + -1184);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -1184) = edx;
    MEM32(ebp + eax * 4 + -1180) = ecx;
    eax = MEM32(ebp + -852);
    eax = eax + 1;
    MEM32(ebp + -852) = eax;
    goto loc_00396611;

loc_00396730: ;
    _fa = (uint32_t)(MEM32(0xC7A9CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC7A9CC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039675F; /* je: equal / zero */

loc_00396739: ;
    ecx = ebp + -1180;
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x134;
    MEM32(eax + 4) = 0xC7A9D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396756u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_00396756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396BE5; /* je: equal / zero */

loc_0039675F: ;
    eax = 0xC7AB04;
    MEM32(ebp + -1192) = eax;
    eax = ebp + -1180;
    ecx = 0xC7A9D0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x134;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039678Bu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039678B: ;
    eax = MEM32(0xC7A9CC);
    eax = eax + 1;
    MEM32(0xC7A9CC) = eax;
    eax = MEM32(ebp + -1192);
    ecx = MEM32(0xC69C6C);
    MEM32(eax) = ecx;
    ecx = MEM32(0xC69C70);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0xC69C74);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0xC69C78);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -1192);
    ecx = MEM32(0xC69C7C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(0xC69C80);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(0xC69C84);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(0xC69C88);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -1192);
    ecx = ecx + 0x1E8;
    eax = ebp + -844;
    eax = eax + 0x1E8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396816u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00396816: ;
    _fa = (uint32_t)(MEM32(0x8C059C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C059C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396844; /* je: equal / zero */

loc_0039681F: ;
    eax = MEM32(0x8C059C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039682Cu); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_0039682C: ;
    MEMF(ebp + -1200) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1200)); /* movss */
    MEMF(ebp + -1244) = xmm0.f[0]; /* movss */
    goto loc_00396856;

loc_00396844: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -1244) = xmm0.f[0]; /* movss */
    goto loc_00396856;

loc_00396856: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1244)); /* movss */
    eax = MEM32(ebp + -1192);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM32(ebp + -852) = 0;

loc_00396873: ;
    _fa = (uint32_t)(MEM32(ebp + -852)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -852), 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003968EF; /* jge: greater or equal (signed >=) */

loc_0039687C: ;
    eax = MEM32(ebp + -852);
    eax = eax + 0xA;
    ecx = MEM32(eax * 4 + 0x8C03F4);
    eax = MEM32(ebp + -1192);
    eax = eax + 0x24;
    edx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003968ACu); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_003968AC: ;
    eax = MEM32(ebp + -852);
    eax = eax + 0x12;
    ecx = MEM32(eax * 4 + 0x8C03F4);
    eax = MEM32(ebp + -1192);
    eax = eax + 0xA4;
    edx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003968DEu); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_003968DE: ;
    eax = MEM32(ebp + -852);
    eax = eax + 1;
    MEM32(ebp + -852) = eax;
    goto loc_00396873;

loc_003968EF: ;
    ecx = MEM32(0x8C04A0);
    edx = MEM32(ebp + -1192);
    edx = edx + 0x124;
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039690Du); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_0039690D: ;
    ecx = MEM32(0x8C04A4);
    edx = MEM32(ebp + -1192);
    edx = edx + 0x134;
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039692Bu); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_0039692B: ;
    ecx = MEM32(0x8C05CC);
    edx = MEM32(ebp + -1192);
    edx = edx + 0x144;
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396949u); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_00396949: ;
    ecx = MEM32(0x8C0544);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396958u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396958: ;
    eax = MEM32(ebp + -1192);
    MEMF(eax + 0x154) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8C0548);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396973u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396973: ;
    eax = MEM32(ebp + -1192);
    MEMF(eax + 0x158) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8C054C);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039698Eu); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_0039698E: ;
    eax = MEM32(ebp + -1192);
    MEMF(eax + 0x15C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -1192);
    MEM32(eax + 0x160) = 0;
    eax = ZX8(MEM8(0x8C04E8));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + -1192);
    MEMF(eax + 0x164) = xmm0.f[0]; /* movss */
    MEM32(ebp + -852) = 0;

loc_003969CD: ;
    _fa = (uint32_t)(MEM32(ebp + -852)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -852), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00396BCF; /* jge: greater or equal (signed >=) */

loc_003969DA: ;
    ecx = MEM32(ebp + -852);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -1196) = eax;
    eax = MEM32(ebp + -1196);
    eax = MEM32(eax + 0x58);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396A02u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396A02: ;
    MEMF(ebp + -1228) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1228)); /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x168;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1196);
    eax = MEM32(eax + 0x5C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396A3Bu); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396A3B: ;
    MEMF(ebp + -1224) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1224)); /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x168;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1196);
    eax = MEM32(eax + 0x64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396A75u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396A75: ;
    MEMF(ebp + -1220) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1220)); /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x168;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1196);
    eax = MEM32(eax + 0x60);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396AAFu); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396AAF: ;
    MEMF(ebp + -1216) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1216)); /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x168;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1196);
    eax = MEM32(eax + 0x68);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396AE9u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396AE9: ;
    MEMF(ebp + -1212) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1212)); /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x1A8;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1196);
    eax = MEM32(eax + 0x6C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396B22u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396B22: ;
    MEMF(ebp + -1208) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1208)); /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x1A8;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x1A8;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1192);
    eax = eax + 0x1A8;
    ecx = MEM32(ebp + -852);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1196);
    eax = MEM32(eax + 0x40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396B98u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_00396B98: ;
    MEMF(ebp + -1204) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1204)); /* movss */
    eax = MEM32(ebp + -1192);
    ecx = MEM32(ebp + -852);
    MEMF(eax + ecx * 4 + 0x22C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -852);
    eax = eax + 1;
    MEM32(ebp + -852) = eax;
    goto loc_003969CD;

loc_00396BCF: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0xC68748); /* cvtsi2ss */
    eax = MEM32(ebp + -1192);
    MEMF(eax + 0x228) = xmm0.f[0]; /* movss */

loc_00396BE5: ;
    eax = MEM32(ebp + -272);
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xC7A9CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xC7A9CC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396C04; /* jne: not equal / not zero */

loc_00396BF6: ;
    eax = MEM32(ebp + -272);
    MEM32(ebp + -12) = eax;
    goto loc_00396F5C;

loc_00396C04: ;
    ecx = MEM32(0xC7A9CC);
    eax = MEM32(ebp + -272);
    MEM32(eax + 0x5C) = ecx;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    eax = 0xC7AB04;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396C43u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396C43: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x10;
    eax = 0xC7AB04;
    eax = eax + 0x10;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396C79u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396C79: ;
    eax = MEM32(ebp + -272);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ebp + -272);
    eax = eax + 0x60;
    eax = eax + 0x20;
    xmm0 = XMM_SCALAR(MEMF(0xC7AB24)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396CA8u); RECOMP_ABI_CALL(0x0039BE60u, sub_0039BE60); /* call 0x0039BE60 */

loc_00396CA8: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x20);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x24;
    eax = 0xC7AB04;
    eax = eax + 0x24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396CDEu); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396CDE: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x24);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0xA4;
    eax = 0xC7AB04;
    eax = eax + 0xA4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396D19u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396D19: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x28);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x124;
    eax = 0xC7AB04;
    eax = eax + 0x124;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396D54u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396D54: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x134;
    eax = 0xC7AB04;
    eax = eax + 0x134;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396D8Fu); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396D8F: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x30);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x144;
    eax = 0xC7AB04;
    eax = eax + 0x144;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396DCAu); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396DCA: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x34);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x154;
    eax = 0xC7AB04;
    eax = eax + 0x154;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396E05u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396E05: ;
    eax = MEM32(ebp + -272);
    ecx = MEM32(eax + 0x38);
    eax = MEM32(ebp + -272);
    eax = eax + 0x60;
    eax = eax + 0x164;
    xmm0 = XMM_SCALAR(MEMF(0xC7AC68)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396E36u); RECOMP_ABI_CALL(0x0039BE60u, sub_0039BE60); /* call 0x0039BE60 */

loc_00396E36: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x3C);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x168;
    eax = 0xC7AB04;
    eax = eax + 0x168;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396E71u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396E71: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x40);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x1A8;
    eax = 0xC7AB04;
    eax = eax + 0x1A8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396EACu); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396EAC: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x44);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x1E8;
    eax = 0xC7AB04;
    eax = eax + 0x1E8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396EE7u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396EE7: ;
    eax = MEM32(ebp + -272);
    ecx = MEM32(eax + 0x4C);
    eax = MEM32(ebp + -272);
    eax = eax + 0x60;
    eax = eax + 0x228;
    xmm0 = XMM_SCALAR(MEMF(0xC7AD2C)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396F18u); RECOMP_ABI_CALL(0x0039BE60u, sub_0039BE60); /* call 0x0039BE60 */

loc_00396F18: ;
    eax = MEM32(ebp + -272);
    edx = MEM32(eax + 0x48);
    ecx = MEM32(ebp + -272);
    ecx = ecx + 0x60;
    ecx = ecx + 0x22C;
    eax = 0xC7AB04;
    eax = eax + 0x22C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396F53u); RECOMP_ABI_CALL(0x0039BDE0u, sub_0039BDE0); /* call 0x0039BDE0 */

loc_00396F53: ;
    eax = MEM32(ebp + -272);
    MEM32(ebp + -12) = eax;

loc_00396F5C: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x4F0;
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
 * sub_00396F70
 * Original: 0x00396F70 - 0x00397811 (2209 bytes, 547 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396F70(void)
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

loc_00396F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x16C;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396F8Du); RECOMP_ABI_CALL(0x0039A710u, sub_0039A710); /* call 0x0039A710 */

loc_00396F8D: ;
    MEM32(ebp + -16) = eax;
    eax = 0x8C03F4;
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396F9Eu); RECOMP_ABI_CALL(0x00394EB0u, sub_00394EB0); /* call 0x00394EB0 */

loc_00396F9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396FA8; /* jne: not equal / not zero */

loc_00396FA3: ;
    goto loc_00397806;

loc_00396FA8: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -108) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396FCB; /* je: equal / zero */

loc_00396FC0: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 4);
    MEM32(ebp + -120) = eax;
    goto loc_00396FD2;

loc_00396FCB: ;
    eax = 0; /* xor self */
    MEM32(ebp + -120) = eax;
    goto loc_00396FD2;

loc_00396FD2: ;
    eax = MEM32(ebp + -120);
    MEM32(ebp + -124) = eax;
    _fa = (uint32_t)(MEM32(0xC68E44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68E44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396FEE; /* je: equal / zero */

loc_00396FE1: ;
    eax = MEM32(0xC68E44);
    eax = MEM32(eax + 4);
    MEM32(ebp + -128) = eax;
    goto loc_00396FF5;

loc_00396FEE: ;
    eax = 0; /* xor self */
    MEM32(ebp + -128) = eax;
    goto loc_00396FF5;

loc_00396FF5: ;
    eax = MEM32(ebp + -128);
    MEM32(ebp + -184) = eax;
    eax = MEM32(0xC68B88);
    MEM32(ebp + -180) = eax;
    eax = MEM32(0xC68B8C);
    MEM32(ebp + -176) = eax;
    eax = MEM32(0xC68B90);
    MEM32(ebp + -172) = eax;
    eax = MEM32(0xC68B94);
    MEM32(ebp + -168) = eax;
    xmm0 = XMM_SCALAR(MEMF(0xC68B98)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0xC68B9C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x1EC);
    MEM32(ebp + -164) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x100);
    MEM32(ebp + -160) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xE4);
    MEM32(ebp + -156) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xEC);
    MEM32(ebp + -152) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xF8);
    MEM32(ebp + -148) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xFC);
    MEM32(ebp + -144) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x1FC);
    MEM32(ebp + -140) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x10C);
    MEM32(ebp + -136) = eax;
    eax = MEM32(ebp + -20);
    ebx = MEM32(eax + 0x1D0);
    eax = MEM32(ebp + -20);
    edi = MEM32(eax + 0xD4);
    eax = MEM32(ebp + -20);
    esi = MEM32(eax + 0x20);
    eax = MEM32(ebp + -20);
    edx = MEM32(eax + 0x24);
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xE8);
    MEM32(ebp + -132) = eax;
    eax = 0x491360;
    MEM32(esp) = eax;
    eax = MEM32(ebp + -116);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -112);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -108);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + -124);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + -184);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + -180);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + -176);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + -172);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + -168);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + -164);
    MEMD(esp + 0x28) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ebp + -160);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ebp + -156);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ebp + -152);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebp + -148);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ebp + -144);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebp + -140);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(ebp + -136);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(ebp + -132);
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003971C6u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003971C6: ;
    MEM32(ebp + -24) = 0;

loc_003971CD: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003973AA; /* jge: greater or equal (signed >=) */

loc_003971D7: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0xC68E20);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003971FD; /* je: equal / zero */

loc_003971EA: ;
    eax = MEM32(0x8C05C4);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -24) * (int32_t)5);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397202; /* jne: not equal / not zero */

loc_003971FD: ;
    goto loc_0039739C;

loc_00397202: ;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -64;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397221u); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_00397221: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -224) = eax;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 4);
    MEM32(ebp + -220) = eax;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -216) = eax;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -212) = eax;
    eax = MEM32(ebp + -64);
    MEM32(ebp + -208) = eax;
    eax = MEM32(ebp + -60);
    MEM32(ebp + -204) = eax;
    eax = MEM32(ebp + -56);
    MEM32(ebp + -200) = eax;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -196) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -192) = eax;
    ebx = MEM32(ebp + -40);
    edi = MEM32(ebp + -44);
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039728Fu); RECOMP_ABI_CALL(0x00393D40u, sub_00393D40); /* call 0x00393D40 */

loc_0039728F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    esi = ZX8(LO8(eax));
    ecx = MEM32(ebp + -24);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0x38);
    MEM32(ebp + -232) = eax;
    ecx = MEM32(ebp + -24);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0x3C);
    MEM32(ebp + -228) = eax;
    ecx = MEM32(ebp + -24);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0x40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003972E1u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_003972E1: ;
    edx = MEM32(ebp + -232);
    MEMF(ebp + -104) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -24);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -228);
    eax = MEM32(eax + 0x44);
    MEM32(ebp + -188) = eax;
    eax = 0x471E3A;
    MEM32(esp) = eax;
    eax = MEM32(ebp + -224);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -220);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -216);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + -212);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + -208);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + -204);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + -200);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + -196);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + -192);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + -188);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = ecx;
    MEMD(esp + 0x3C) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039739Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039739C: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_003971CD;

loc_003973AA: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x144);
    MEM32(ebp + -252) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x134);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003973CAu); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_003973CA: ;
    MEMF(ebp + -100) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -264) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x138);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003973EFu); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_003973EF: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -264)); /* movsd */
    MEMF(ebp + -96) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -96)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x204);
    MEM32(ebp + -248) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x1F0);
    MEM32(ebp + -244) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x118);
    MEM32(ebp + -240) = eax;
    eax = MEM32(ebp + -20);
    ebx = MEM32(eax + 0x11C);
    eax = MEM32(ebp + -20);
    edi = MEM32(eax + 0x120);
    eax = MEM32(ebp + -20);
    esi = MEM32(eax + 0x124);
    eax = MEM32(ebp + -20);
    edx = MEM32(eax + 0x1F4);
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0x110);
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x114);
    MEM32(ebp + -236) = eax;
    eax = 0x44A103;
    MEM32(esp) = eax;
    eax = MEM32(ebp + -252);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -248);
    MEMD(esp + 8) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + -244);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + -240);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + -236);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003974CCu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003974CC: ;
    eax = 0x47D3A0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003974DAu); RECOMP_ABI_CALL(0x003B6550u, sub_003B6550); /* call 0x003B6550 */

loc_003974DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003975C4; /* je: equal / zero */

loc_003974E3: ;
    MEM32(ebp + -68) = 0;

loc_003974EA: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0xC0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003975C2; /* jge: greater or equal (signed >=) */

loc_003974F7: ;
    ecx = MEM32(ebp + -68);
    eax = 0xC68B1C;
    eax = eax + 0x550;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397556; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0039751C: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397556; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0039751E: ;
    eax = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397556; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0039752E: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397556; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00397530: ;
    eax = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397556; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00397540: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397556; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00397542: ;
    eax = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397556; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00397552: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397556; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00397554: ;
    goto loc_003975B2;

loc_00397556: ;
    eax = MEM32(ebp + -68);
    ecx = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = 0x497114;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003975B2u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003975B2: ;
    goto loc_003975B4;

loc_003975B4: ;
    eax = MEM32(ebp + -68);
    eax = eax + 1;
    MEM32(ebp + -68) = eax;
    goto loc_003974EA;

loc_003975C2: ;
    goto loc_003975C4;

loc_003975C4: ;
    _fa = (uint32_t)(MEM32(0xC68E44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68E44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039771E; /* je: equal / zero */

loc_003975D1: ;
    MEM32(ebp + -76) = 0;

loc_003975D8: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(0xC68E44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x70) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039763B; /* jae: above or equal (unsigned >=) */

loc_003975E6: ;
    eax = MEM32(0xC68E44);
    eax = eax + 0x10;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -76) * (int32_t)6);
    eax = eax + ecx;
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -80);
    esi = ZX8(MEM8(eax));
    eax = MEM32(ebp + -80);
    edx = ZX8(MEM8(eax + 1));
    eax = MEM32(ebp + -80);
    ecx = ZX16(MEM16(eax + 4));
    eax = MEM32(ebp + -80);
    eax = ZX8(MEM8(eax + 2));
    edi = 0x471EC5;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397630u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_00397630: ;
    eax = MEM32(ebp + -76);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    goto loc_003975D8;

loc_0039763B: ;
    MEM32(ebp + -76) = 0;

loc_00397642: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039771C; /* jae: above or equal (unsigned >=) */

loc_0039764C: ;
    ecx = MEM32(ebp + -76);
    eax = 0xC68B1C;
    eax = eax + 0x11F4;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003976B0; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00397671: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003976B0; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00397673: ;
    eax = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003976B0; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00397683: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003976B0; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00397685: ;
    eax = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003976B0; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00397695: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003976B0; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00397697: ;
    eax = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003976B0; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_003976AC: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003976B0; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_003976AE: ;
    goto loc_0039770C;

loc_003976B0: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = 0x458541;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039770Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039770C: ;
    goto loc_0039770E;

loc_0039770E: ;
    eax = MEM32(ebp + -76);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    goto loc_00397642;

loc_0039771C: ;
    goto loc_0039771E;

loc_0039771E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397806; /* je: equal / zero */

loc_00397728: ;
    MEM32(ebp + -88) = 0;

loc_0039772F: ;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -88), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00397804; /* jge: greater or equal (signed >=) */

loc_00397739: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -88);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397798; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00397759: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397798; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0039775B: ;
    eax = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397798; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0039776B: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397798; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0039776D: ;
    eax = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397798; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0039777D: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397798; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0039777F: ;
    eax = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00397798; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00397794: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00397798; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00397796: ;
    goto loc_003977F4;

loc_00397798: ;
    eax = MEM32(ebp + -88);
    ecx = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = MEM32(ebp + -92);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ecx = 0x4831C2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003977F4u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003977F4: ;
    goto loc_003977F6;

loc_003977F6: ;
    eax = MEM32(ebp + -88);
    eax = eax + 1;
    MEM32(ebp + -88) = eax;
    goto loc_0039772F;

loc_00397804: ;
    goto loc_00397806;

loc_00397806: ;
    esp = esp + 0x16C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00397820
 * Original: 0x00397820 - 0x00397D8E (1390 bytes, 292 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00397820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x17C;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC68E44);
    MEM32(ebp + -16) = eax;
    eax = ebp + -208;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039785Au); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039785A: ;
    eax = ebp + -272;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039787Au); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039787A: ;
    MEM32(ebp + -280) = 0;
    MEM32(ebp + -276) = 0;

loc_0039788E: ;
    eax = MEM32(ebp + -276);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x70) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00397A29; /* jae: above or equal (unsigned >=) */

loc_003978A0: ;
    eax = MEM32(ebp + -16);
    eax = eax + 0x10;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -276) * (int32_t)6);
    eax = eax + ecx;
    MEM32(ebp + -284) = eax;
    eax = MEM32(ebp + -284);
    eax = ZX8(MEM8(eax + 1));
    MEM32(ebp + -288) = eax;
    eax = MEM32(ebp + -288);
    eax = MEM32(eax * 8 + 0xC69C90);
    MEM32(ebp + -292) = eax;
    _fa = (uint32_t)(MEM32(ebp + -292)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -292), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003978F3; /* je: equal / zero */

loc_003978E1: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC));
    MEM32(ebp + -336) = eax;
    goto loc_00397900;

loc_003978F3: ;
    eax = 0x40;
    MEM32(ebp + -336) = eax;
    goto loc_00397900;

loc_00397900: ;
    eax = MEM32(ebp + -336);
    MEM32(ebp + -296) = eax;
    eax = MEM32(ebp + -288);
    _fa = (uint32_t)(MEM32(eax * 8 + 0xC69C8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0xC69C8C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039793B; /* je: equal / zero */

loc_0039791C: ;
    eax = MEM32(ebp + -284);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039793B; /* je: equal / zero */

loc_0039792B: ;
    eax = MEM32(ebp + -288);
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -208)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -208), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397940; /* je: equal / zero */

loc_0039793B: ;
    goto loc_00397A15;

loc_00397940: ;
    eax = MEM32(ebp + -288);
    MEM32(ebp + eax * 4 + -208) = 1;
    eax = MEM32(ebp + -288);
    MEM32(ebp + eax * 4 + -80) = 0;
    eax = MEM32(ebp + -288);
    eax = MEM32(eax * 8 + 0xC69C8C);
    eax = eax | 0x80000000u;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -292));
    eax = eax + ecx;
    MEM32(ebp + -300) = eax;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -288);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397998u); RECOMP_ABI_CALL(0x0039CB30u, sub_0039CB30); /* call 0x0039CB30 */

loc_00397998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979EF; /* jne: not equal / not zero */

loc_0039799D: ;
    esi = MEM32(ebp + -300);
    edx = MEM32(ebp + -296);
    eax = MEM32(ebp + -288);
    ecx = ebp + -80;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    edi = MEM32(ebp + -288);
    eax = ebp + -144;
    _shift_result = RECOMP_SHIFT(edi, 2, 32, 0, NULL, &_shift_of);
    edi = _shift_result;
    eax = eax + edi;
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003979E6u); RECOMP_ABI_CALL(0x00398390u, sub_00398390); /* call 0x00398390 */

loc_003979E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003979ED; /* je: equal / zero */

loc_003979EB: ;
    goto loc_00397A15;

loc_003979ED: ;
    goto loc_003979EF;

loc_003979EF: ;
    eax = MEM32(ebp + -288);
    MEM32(ebp + eax * 4 + -80) = 0;
    eax = MEM32(ebp + -296);
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;
    eax = eax + MEM32(ebp + -280);
    MEM32(ebp + -280) = eax;

loc_00397A15: ;
    eax = MEM32(ebp + -276);
    eax = eax + 1;
    MEM32(ebp + -276) = eax;
    goto loc_0039788E;

loc_00397A29: ;
    eax = MEM32(ebp + -280);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397A37u); RECOMP_ABI_CALL(0x0039CBA0u, sub_0039CBA0); /* call 0x0039CBA0 */

loc_00397A37: ;
    MEM32(ebp + -276) = 0;

loc_00397A41: ;
    eax = MEM32(ebp + -276);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x70) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00397CE0; /* jae: above or equal (unsigned >=) */

loc_00397A53: ;
    eax = MEM32(ebp + -16);
    eax = eax + 0x10;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -276) * (int32_t)6);
    eax = eax + ecx;
    MEM32(ebp + -304) = eax;
    eax = MEM32(ebp + -304);
    eax = ZX8(MEM8(eax + 1));
    MEM32(ebp + -308) = eax;
    eax = MEM32(ebp + -308);
    eax = MEM32(eax * 8 + 0xC69C90);
    MEM32(ebp + -312) = eax;
    eax = MEM32(ebp + -308);
    _fa = (uint32_t)(MEM32(eax * 8 + 0xC69C8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0xC69C8C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397AAA; /* je: equal / zero */

loc_00397A9B: ;
    eax = MEM32(ebp + -304);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397AAF; /* jne: not equal / not zero */

loc_00397AAA: ;
    goto loc_00397CCC;

loc_00397AAF: ;
    eax = MEM32(ebp + -308);
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -80), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397B7B; /* jne: not equal / not zero */

loc_00397AC0: ;
    eax = MEM32(ebp + -308);
    eax = MEM32(eax * 8 + 0xC69C8C);
    eax = eax | 0x80000000u;
    MEM32(ebp + -328) = eax;
    _fa = (uint32_t)(MEM32(ebp + -312)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -312), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397AF3; /* je: equal / zero */

loc_00397AE1: ;
    eax = MEM32(ebp + -312);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC));
    MEM32(ebp + -340) = eax;
    goto loc_00397B00;

loc_00397AF3: ;
    eax = 0x40;
    MEM32(ebp + -340) = eax;
    goto loc_00397B00;

loc_00397B00: ;
    eax = MEM32(ebp + -340);
    MEM32(ebp + -332) = eax;
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -308);
    edx = MEM32(ebp + -328);
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -312));
    edx = edx + eax;
    ecx = MEM32(ebp + -332);
    eax = MEM32(ebp + -312);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397B4Bu); RECOMP_ABI_CALL(0x0039CC00u, sub_0039CC00); /* call 0x0039CC00 */

loc_00397B4B: ;
    ecx = eax;
    eax = MEM32(ebp + -308);
    MEM32(ebp + eax * 4 + -144) = ecx;
    ecx = MEM32(0xC69E28);
    eax = MEM32(ebp + -308);
    MEM32(ebp + eax * 4 + -80) = ecx;
    eax = MEM32(ebp + -332);
    eax = eax + MEM32(0xC79EAC);
    MEM32(0xC79EAC) = eax;

loc_00397B7B: ;
    eax = MEM32(ebp + -304);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397BF7; /* jne: not equal / not zero */

loc_00397B8A: ;
    eax = MEM32(ebp + -304);
    esi = ZX8(MEM8(eax));
    eax = MEM32(ebp + -308);
    edx = MEM32(ebp + eax * 4 + -80);
    ecx = MEM32(ebp + -312);
    eax = MEM32(ebp + -308);
    eax = MEM32(ebp + eax * 4 + -144);
    edi = MEM32(ebp + -304);
    edi = ZX16(MEM16(edi + 4));
    eax = eax + edi;
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = 0x1405;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397BF2u); RECOMP_ABI_CALL(0x003989E0u, sub_003989E0); /* call 0x003989E0 */

loc_00397BF2: ;
    goto loc_00397CB8;

loc_00397BF7: ;
    esi = MEM32(ebp + -304);
    edx = ebp + -316;
    ecx = ebp + -320;
    eax = ebp + -321;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397C23u); RECOMP_ABI_CALL(0x0039CD80u, sub_0039CD80); /* call 0x0039CD80 */

loc_00397C23: ;
    eax = MEM32(ebp + -304);
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -348) = eax;
    eax = MEM32(ebp + -308);
    ebx = MEM32(ebp + eax * 4 + -80);
    edi = MEM32(ebp + -316);
    esi = MEM32(ebp + -320);
    SET_LO8(edx, MEM8(ebp + -321));
    eax = MEM32(ebp + -312);
    MEM32(ebp + -352) = eax;
    eax = MEM32(ebp + -308);
    eax = MEM32(ebp + eax * 4 + -144);
    ecx = MEM32(ebp + -304);
    ecx = ZX16(MEM16(ecx + 4));
    eax = eax + ecx;
    ecx = MEM32(ebp + -352);
    MEM32(ebp + -344) = eax;
    eax = 0; /* xor self */
    eax = MEM32(ebp + -348);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -344);
    MEM32(esp + 4) = ebx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = esi;
    edx = ZX8(LO8(edx));
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397CB8u); RECOMP_ABI_CALL(0x003989E0u, sub_003989E0); /* call 0x003989E0 */

loc_00397CB8: ;
    eax = MEM32(ebp + -304);
    eax = ZX8(MEM8(eax));
    MEM32(ebp + eax * 4 + -272) = 1;

loc_00397CCC: ;
    eax = MEM32(ebp + -276);
    eax = eax + 1;
    MEM32(ebp + -276) = eax;
    goto loc_00397A41;

loc_00397CE0: ;
    MEM32(ebp + -276) = 0;

loc_00397CEA: ;
    _fa = (uint32_t)(MEM32(ebp + -276)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -276), 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00397D83; /* jae: above or equal (unsigned >=) */

loc_00397CF7: ;
    eax = MEM32(ebp + -276);
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -272)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -272), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397D6D; /* jne: not equal / not zero */

loc_00397D07: ;
    eax = MEM32(ebp + -276);
    MEM32(ebp + -356) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x74);
    ecx = MEM32(ebp + -276);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397D39; /* je: equal / zero */

loc_00397D2F: ;
    eax = 0; /* xor self */
    MEM32(ebp + -360) = eax;
    goto loc_00397D55;

loc_00397D39: ;
    ecx = MEM32(ebp + -276);
    eax = 0xC68B1C;
    eax = eax + 0x11F4;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -360) = eax;

loc_00397D55: ;
    ecx = MEM32(ebp + -356);
    eax = MEM32(ebp + -360);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D6Du); RECOMP_ABI_CALL(0x0039CF80u, sub_0039CF80); /* call 0x0039CF80 */

loc_00397D6D: ;
    goto loc_00397D6F;

loc_00397D6F: ;
    eax = MEM32(ebp + -276);
    eax = eax + 1;
    MEM32(ebp + -276) = eax;
    goto loc_00397CEA;

loc_00397D83: ;
    esp = esp + 0x17C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00397D90
 * Original: 0x00397D90 - 0x00397F05 (373 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397D90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00397D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)((int32_t)MEM32(ebp + -4) * (int32_t)6);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 2;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397DB9u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_00397DB9: ;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;

loc_00397DC3: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00397EF4; /* jae: above or equal (unsigned >=) */

loc_00397DCF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397DE7; /* je: equal / zero */

loc_00397DD5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = ZX16(MEM16(eax + ecx * 2));
    MEM32(ebp + -24) = eax;
    goto loc_00397DF3;

loc_00397DE7: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -24) = eax;

loc_00397DF3: ;
    eax = MEM32(ebp + -24);
    MEM16(ebp + -14) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397E13; /* je: equal / zero */

loc_00397E00: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = ZX16(MEM16(eax + ecx * 2 + 2));
    MEM32(ebp + -28) = eax;
    goto loc_00397E22;

loc_00397E13: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 1;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -28) = eax;

loc_00397E22: ;
    eax = MEM32(ebp + -28);
    MEM16(ebp + -16) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397E42; /* je: equal / zero */

loc_00397E2F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = ZX16(MEM16(eax + ecx * 2 + 4));
    MEM32(ebp + -32) = eax;
    goto loc_00397E51;

loc_00397E42: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 2;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -32) = eax;

loc_00397E51: ;
    eax = MEM32(ebp + -32);
    MEM16(ebp + -18) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397E71; /* je: equal / zero */

loc_00397E5E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = ZX16(MEM16(eax + ecx * 2 + 6));
    MEM32(ebp + -36) = eax;
    goto loc_00397E80;

loc_00397E71: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 3;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -36) = eax;

loc_00397E80: ;
    eax = MEM32(ebp + -36);
    MEM16(ebp + -20) = LO16(eax);
    SET_LO16(edx, MEM16(ebp + -14));
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)6);
    MEM16(eax + ecx * 2) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -16));
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)6);
    MEM16(eax + ecx * 2 + 2) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -18));
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)6);
    MEM16(eax + ecx * 2 + 4) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -14));
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)6);
    MEM16(eax + ecx * 2 + 6) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -18));
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)6);
    MEM16(eax + ecx * 2 + 8) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -20));
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)6);
    MEM16(eax + ecx * 2 + 0xA) = LO16(edx);
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_00397DC3;

loc_00397EF4: ;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -4) * (int32_t)6);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00397F10
 * Original: 0x00397F10 - 0x00397FB4 (164 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397F10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00397F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(0xC69E4C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397F35u); RECOMP_ABI_CALL(0x00398750u, sub_00398750); /* call 0x00398750 */

loc_00397F35: ;
    eax = MEM32(0xC69E50);
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00397F75; /* jbe: below or equal (unsigned <=) */

loc_00397F44: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x8893;
    MEM32(esp + 4) = 0x200000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x88E0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C94); PUSH32(esp, 0x00397F6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00397F6B: ;
    MEM32(0xC69E50) = 0;

loc_00397F75: ;
    eax = MEM32(0xC69E50);
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0x8893;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397F9Eu); RECOMP_ABI_CALL(0x700000A0u, host_gl_buffer_write); /* call 0x700000A0 */

loc_00397F9E: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + MEM32(0xC69E50);
    MEM32(0xC69E50) = eax;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00397FC0
 * Original: 0x00397FC0 - 0x00398026 (102 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397FC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00397FC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax--;
    MEM32(ebp + -8) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(9));
    eax = eax - 9;
    if ((!_cf && eax != 0)) goto loc_00398017; /* ja: above (unsigned >) */

loc_00397FD5: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0x4CF5F8);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x00397FE1u) goto loc_00397FE1;
    if (_jt == 0x00397FEAu) goto loc_00397FEA;
    if (_jt == 0x00397FF3u) goto loc_00397FF3;
    if (_jt == 0x00397FFCu) goto loc_00397FFC;
    if (_jt == 0x00398005u) goto loc_00398005;
    if (_jt == 0x0039800Eu) goto loc_0039800E;
    if (_jt == 0x00398017u) goto loc_00398017;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00397FE1: ;
    MEM32(ebp + -4) = 0;
    goto loc_0039801E;

loc_00397FEA: ;
    MEM32(ebp + -4) = 1;
    goto loc_0039801E;

loc_00397FF3: ;
    MEM32(ebp + -4) = 2;
    goto loc_0039801E;

loc_00397FFC: ;
    MEM32(ebp + -4) = 3;
    goto loc_0039801E;

loc_00398005: ;
    MEM32(ebp + -4) = 5;
    goto loc_0039801E;

loc_0039800E: ;
    MEM32(ebp + -4) = 6;
    goto loc_0039801E;

loc_00398017: ;
    MEM32(ebp + -4) = 4;

loc_0039801E: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00398030
 * Original: 0x00398030 - 0x003980B5 (133 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398030(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00398030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0x5ACB7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ACB7C), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00398056; /* jge: greater or equal (signed >=) */

loc_00398043: ;
    eax = 0x48B56F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398051u); RECOMP_ABI_CALL(0x003B6550u, sub_003B6550); /* call 0x003B6550 */

loc_00398051: ;
    MEM32(0x5ACB7C) = eax;

loc_00398056: ;
    _fa = (uint32_t)(MEM32(0x5ACB7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ACB7C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398061; /* jne: not equal / not zero */

loc_0039805F: ;
    goto loc_003980AF;

loc_00398061: ;
    goto loc_00398063;

loc_00398063: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CC4); PUSH32(esp, 0x00398069u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398069: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003980AF; /* je: equal / zero */

loc_00398071: ;
    eax = MEM32(0xC7CE0C);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(0xC7CE0C) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003980AD; /* jae: above or equal (unsigned >=) */

loc_00398088: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(0xC79E78);
    esi = 0x46F137;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003980ADu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003980AD: ;
    goto loc_00398063;

loc_003980AF: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003980C0
 * Original: 0x003980C0 - 0x0039838C (716 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003980C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003980C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -32) = 0;
    MEM32(ebp + -36) = 0;
    MEM32(ebp + -40) = 0;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -48) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398113; /* je: equal / zero */

loc_003980FA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398113; /* je: equal / zero */

loc_00398100: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039810Eu); RECOMP_ABI_CALL(0x00395E80u, sub_00395E80); /* call 0x00395E80 */

loc_0039810E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398118; /* jne: not equal / not zero */

loc_00398113: ;
    goto loc_00398382;

loc_00398118: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 8 (32-bit) */
    MEM8(ebp + -57) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00398163; /* je: equal / zero */

loc_00398123: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x969C74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C74), 0 (32-bit) */
    MEM8(ebp + -57) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00398163; /* je: equal / zero */

loc_00398131: ;
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(esi, 1, 32, 0, NULL, &_shift_of);
    esi = _shift_result;
    edx = ebp + -48;
    ecx = ebp + -36;
    eax = ebp + -32;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039815Au); RECOMP_ABI_CALL(0x00398390u, sub_00398390); /* call 0x00398390 */

loc_0039815A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -57) = LO8(eax);

loc_00398163: ;
    SET_LO8(eax, MEM8(ebp + -57));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -52) = eax;
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -32);
    edx = MEM32(ebp + -52);
    ecx = ebp + -16;
    eax = ebp + -20;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039819Cu); RECOMP_ABI_CALL(0x003985B0u, sub_003985B0); /* call 0x003985B0 */

loc_0039819C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0x488D83;
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003981C2u); RECOMP_ABI_CALL(0x00396F70u, sub_00396F70); /* call 0x00396F70 */

loc_003981C2: ;
    ecx = MEM32(0xC69D0C);
    ecx = ecx + MEM32(ebp + -16);
    eax = MEM32(ebp + -20);
    eax = eax - MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003981E0u); RECOMP_ABI_CALL(0x00397820u, sub_00397820); /* call 0x00397820 */

loc_003981E0: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398232; /* je: equal / zero */

loc_003981E6: ;
    eax = MEM32(ebp + -48);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003981F1u); RECOMP_ABI_CALL(0x00398750u, sub_00398750); /* call 0x00398750 */

loc_003981F1: ;
    eax = MEM32(0x969CC8);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398204u); RECOMP_ABI_CALL(0x00397FC0u, sub_00397FC0); /* call 0x00397FC0 */

loc_00398204: ;
    edi = eax;
    eax = MEM32(ebp + -64);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -36);
    ecx = 0; /* xor self */
    ecx = ecx - MEM32(ebp + -16);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = 0x1403;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039822Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039822D: ;
    goto loc_00398382;

loc_00398232: ;
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(0xC79EAC);
    MEM32(0xC79EAC) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398270; /* jne: not equal / not zero */

loc_0039824E: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -28;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398267u); RECOMP_ABI_CALL(0x00397D90u, sub_00397D90); /* call 0x00397D90 */

loc_00398267: ;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -44) = eax;

loc_00398270: ;
    _fa = (uint32_t)(MEM32(0x969C74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C74), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398328; /* jne: not equal / not zero */

loc_0039827D: ;
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 2;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039828Du); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_0039828D: ;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -24) = 0;

loc_00398297: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003982C4; /* jae: above or equal (unsigned >=) */

loc_0039829F: ;
    eax = MEM32(ebp + -44);
    ecx = MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + ecx * 2));
    eax = eax - MEM32(ebp + -16);
    SET_LO16(edx, LO16(eax));
    eax = MEM32(ebp + -56);
    ecx = MEM32(ebp + -24);
    MEM16(eax + ecx * 2) = LO16(edx);
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_00398297;

loc_003982C4: ;
    eax = MEM32(0x969CB8);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003982D7u); RECOMP_ABI_CALL(0x00397FC0u, sub_00397FC0); /* call 0x00397FC0 */

loc_003982D7: ;
    esi = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -72) = eax;
    ecx = MEM32(ebp + -56);
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003982F3u); RECOMP_ABI_CALL(0x00397F10u, sub_00397F10); /* call 0x00397F10 */

loc_003982F3: ;
    edx = MEM32(ebp + -72);
    ecx = eax;
    eax = MEM32(ebp + -68);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0x1403;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398310u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398310: ;
    eax = MEM32(ebp + -56);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039831Bu); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039831B: ;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398326u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00398326: ;
    goto loc_00398382;

loc_00398328: ;
    eax = MEM32(0x969CC8);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039833Bu); RECOMP_ABI_CALL(0x00397FC0u, sub_00397FC0); /* call 0x00397FC0 */

loc_0039833B: ;
    edi = eax;
    esi = MEM32(ebp + -28);
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398354u); RECOMP_ABI_CALL(0x00397F10u, sub_00397F10); /* call 0x00397F10 */

loc_00398354: ;
    edx = eax;
    eax = MEM32(ebp + -76);
    ecx = 0; /* xor self */
    ecx = ecx - MEM32(ebp + -16);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = 0x1403;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398377u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398377: ;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398382u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00398382: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00398390
 * Original: 0x00398390 - 0x003985AA (538 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398390(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00398390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x80000000u;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -28) = 0xFFFFFFFFu;
    MEM32(ebp + -32) = 0;
    MEM32(ebp + -36) = 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003983E1; /* je: equal / zero */

loc_003983CB: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x80000000u (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003983E1; /* jb: below (unsigned <) */

loc_003983D4: ;
    eax = MEM32(ebp + -8);
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003983ED; /* jbe: below or equal (unsigned <=) */

loc_003983E1: ;
    MEM32(ebp + -4) = 0;
    goto loc_003985A2;

loc_003983ED: ;
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(eax, 0x16, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + MEM32(ebp + 0xC);
    eax = eax - 1;
    _shift_result = RECOMP_SHIFT(eax, 0x16, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398413; /* je: equal / zero */

loc_00398407: ;
    MEM32(ebp + -4) = 0;
    goto loc_003985A2;

loc_00398413: ;
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + MEM32(ebp + 0xC);
    eax = eax - 1;
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -24) = eax;

loc_00398434: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003984E0; /* jae: above or equal (unsigned >=) */

loc_00398440: ;
    eax = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + 0xC7CE90));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039847D; /* jne: not equal / not zero */

loc_00398450: ;
    eax = MEM32(0xC79E78);
    ecx = MEM32(ebp + -24);
    eax = eax - MEM32(ecx * 4 + 0xCACE90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x258) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x258 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00398472; /* jae: above or equal (unsigned >=) */

loc_00398466: ;
    MEM32(ebp + -4) = 0;
    goto loc_003985A2;

loc_00398472: ;
    eax = MEM32(ebp + -24);
    MEM8(eax + 0xC7CE90) = 0;

loc_0039847D: ;
    eax = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + 0xC7CE90));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398496; /* je: equal / zero */

loc_0039848D: ;
    MEM32(ebp + -36) = 0;
    goto loc_003984D0;

loc_00398496: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0xC8CE90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003984B2; /* jae: above or equal (unsigned >=) */

loc_003984A5: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0xC8CE90);
    MEM32(ebp + -28) = eax;

loc_003984B2: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0xC8CE90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003984CE; /* jbe: below or equal (unsigned <=) */

loc_003984C1: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0xC8CE90);
    MEM32(ebp + -32) = eax;

loc_003984CE: ;
    goto loc_003984D0;

loc_003984D0: ;
    goto loc_003984D2;

loc_003984D2: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_00398434;

loc_003984E0: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003984FD; /* je: equal / zero */

loc_003984E6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003984F8u); RECOMP_ABI_CALL(0x003A3C50u, sub_003A3C50); /* call 0x003A3C50 */

loc_003984F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00398560; /* jbe: below or equal (unsigned <=) */

loc_003984FD: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -20);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039850Fu); RECOMP_ABI_CALL(0x0039D0F0u, sub_0039D0F0); /* call 0x0039D0F0 */

loc_0039850F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398520; /* jne: not equal / not zero */

loc_00398514: ;
    MEM32(ebp + -4) = 0;
    goto loc_003985A2;

loc_00398520: ;
    MEM32(ebp + -32) = 0;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -24) = eax;

loc_0039852D: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039855E; /* jae: above or equal (unsigned >=) */

loc_00398535: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0xC8CE90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00398551; /* jbe: below or equal (unsigned <=) */

loc_00398544: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0xC8CE90);
    MEM32(ebp + -32) = eax;

loc_00398551: ;
    goto loc_00398553;

loc_00398553: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_0039852D;

loc_0039855E: ;
    goto loc_00398560;

loc_00398560: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax * 4 + 0xC7CE10);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0x16, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx - eax;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039858D; /* je: equal / zero */

loc_00398585: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;

loc_0039858D: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + MEM32(0xC79EA8);
    MEM32(0xC79EA8) = eax;
    MEM32(ebp + -4) = 1;

loc_003985A2: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003985B0
 * Original: 0x003985B0 - 0x00398742 (402 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003985B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003985B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    ecx = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x9E3779B1u);
    eax = eax ^ ecx;
    eax = eax & 0xFFF;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 0xFFFF;
    MEM32(ebp + -16) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398668; /* je: equal / zero */

loc_003985F2: ;
    ecx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398668; /* jne: not equal / not zero */

loc_00398609: ;
    ecx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398668; /* jne: not equal / not zero */

loc_0039861F: ;
    ecx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398668; /* jne: not equal / not zero */

loc_00398635: ;
    ecx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = ZX16(MEM16(eax + 0xC));
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = ZX16(MEM16(eax + 0xE));
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;
    goto loc_0039873D;

loc_00398668: ;
    MEM32(ebp + -8) = 0;

loc_0039866F: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003986BC; /* jae: above or equal (unsigned >=) */

loc_00398677: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00398693; /* jae: above or equal (unsigned >=) */

loc_00398686: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2));
    MEM32(ebp + -12) = eax;

loc_00398693: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003986AF; /* jbe: below or equal (unsigned <=) */

loc_003986A2: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2));
    MEM32(ebp + -16) = eax;

loc_003986AF: ;
    goto loc_003986B1;

loc_003986B1: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039866F;

loc_003986BC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039872D; /* je: equal / zero */

loc_003986C2: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -12);
    SET_LO16(ecx, LO16(eax));
    edx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0xC) = LO16(ecx);
    eax = MEM32(ebp + -16);
    SET_LO16(ecx, LO16(eax));
    edx = MEM32(ebp + -4);
    eax = 0xCCCE90;
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = eax + edx;
    MEM16(eax + 0xE) = LO16(ecx);

loc_0039872D: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;

loc_0039873D: ;
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00398750
 * Original: 0x00398750 - 0x00398785 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398750(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00398750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC68824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398780; /* je: equal / zero */

loc_00398763: ;
    eax = MEM32(ebp + 8);
    MEM32(0xC68824) = eax;
    eax = MEM32(0x969C90);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = 0x8893;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398780u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398780: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00398790
 * Original: 0x00398790 - 0x003987B6 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398790(void)
{
    uint32_t ebp = g_ebp;

loc_00398790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    MEM32(0xC69E10) = 1;
    eax = MEM32(ebp + 8);
    MEM32(0xC69E14) = eax;
    MEM32(0xC69E1C) = 0;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003987C0
 * Original: 0x003987C0 - 0x00398966 (422 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003987C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003987C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x50;
    MEM32(ebp + -12) = 0x100;
    eax = MEM32(0xC69E1C);
    MEM32(ebp + -24) = eax;
    eax = MEM32(0xC69E14);
    MEM32(ebp + -28) = eax;
    MEM32(0xC69E10) = 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398800; /* je: equal / zero */

loc_003987EF: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003987FBu); RECOMP_ABI_CALL(0x00395E80u, sub_00395E80); /* call 0x00395E80 */

loc_003987FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398805; /* jne: not equal / not zero */

loc_00398800: ;
    goto loc_0039895F;

loc_00398805: ;
    edx = MEM32(ebp + -28);
    ecx = MEM32(ebp + -24);
    eax = MEM32(0xC69E18);
    esi = 0x469174;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039882Au); RECOMP_ABI_CALL(0x00396F70u, sub_00396F70); /* call 0x00396F70 */

loc_0039882A: ;
    ecx = MEM32(0xC69E18);
    eax = MEM32(ebp + -24);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -12));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398843u); RECOMP_ABI_CALL(0x00398970u, sub_00398970); /* call 0x00398970 */

loc_00398843: ;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = 0;

loc_0039884D: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003988AE; /* jae: above or equal (unsigned >=) */

loc_00398853: ;
    esi = MEM32(ebp + -20);
    edx = MEM32(0xC69E28);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -16);
    edi = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(edi, 2, 32, 0, NULL, &_shift_of);
    edi = _shift_result;
    _shift_result = RECOMP_SHIFT(edi, 2, 32, 0, NULL, &_shift_of);
    edi = _shift_result;
    eax = eax + edi;
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0xC) = 0x1406;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003988A3u); RECOMP_ABI_CALL(0x003989E0u, sub_003989E0); /* call 0x003989E0 */

loc_003988A3: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_0039884D;

loc_003988AE: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398923; /* jne: not equal / not zero */

loc_003988B4: ;
    ecx = MEM32(ebp + -24);
    eax = 0; /* xor self */
    eax = ebp + -32;
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003988D0u); RECOMP_ABI_CALL(0x00397D90u, sub_00397D90); /* call 0x00397D90 */

loc_003988D0: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(0x969CB8);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -44) = eax;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + -32);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003988F5u); RECOMP_ABI_CALL(0x00397F10u, sub_00397F10); /* call 0x00397F10 */

loc_003988F5: ;
    edx = MEM32(ebp + -44);
    ecx = eax;
    eax = MEM32(ebp + -40);
    MEM32(esp) = 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0x1403;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398916u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398916: ;
    eax = MEM32(ebp + -36);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398921u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00398921: ;
    goto loc_00398951;

loc_00398923: ;
    eax = MEM32(0x969CBC);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398936u); RECOMP_ABI_CALL(0x00397FC0u, sub_00397FC0); /* call 0x00397FC0 */

loc_00398936: ;
    edx = eax;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -24);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398951u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398951: ;
    eax = 0x44A0F4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039895Fu); RECOMP_ABI_CALL(0x00398030u, sub_00398030); /* call 0x00398030 */

loc_0039895F: ;
    esp = esp + 0x50;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00398970
 * Original: 0x00398970 - 0x003989DF (111 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398970(void)
{
    uint32_t ebp = g_ebp;

loc_00398970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398993u); RECOMP_ABI_CALL(0x0039CBA0u, sub_0039CBA0); /* call 0x0039CBA0 */

loc_00398993: ;
    eax = MEM32(0xC69E48);
    MEM32(ebp + -4) = eax;
    eax = MEM32(0xC69E28);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003989A8u); RECOMP_ABI_CALL(0x0039D0B0u, sub_0039D0B0); /* call 0x0039D0B0 */

loc_003989A8: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0x8892;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003989C9u); RECOMP_ABI_CALL(0x700000A0u, host_gl_buffer_write); /* call 0x700000A0 */

loc_003989C9: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + MEM32(0xC69E48);
    MEM32(0xC69E48) = eax;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003989E0
 * Original: 0x003989E0 - 0x00398B6C (396 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003989E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003989E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    SET_LO8(eax, MEM8(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0xC6874C;
    eax = eax + 0xEC;
    ecx = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)0x18);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 0xC68828));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398A3D; /* je: equal / zero */

loc_00398A25: ;
    eax = MEM32(ebp + 8);
    MEM8(eax + 0xC68828) = 1;
    eax = MEM32(0x969CCC);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398A3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398A3D: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AA2; /* jne: not equal / not zero */

loc_00398A47: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AA2; /* jne: not equal / not zero */

loc_00398A52: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AA2; /* jne: not equal / not zero */

loc_00398A5D: ;
    eax = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + 0xC));
    ecx = ZX8(MEM8(ebp + 0x18));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AA2; /* jne: not equal / not zero */

loc_00398A6C: ;
    eax = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + 0xD));
    esi = MEM32(ebp + 0x1C);
    ecx = 0; /* xor self */
    edx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = edx; /* cmovne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AA2; /* jne: not equal / not zero */

loc_00398A87: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AA2; /* jne: not equal / not zero */

loc_00398A92: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AA2; /* jne: not equal / not zero */

loc_00398A9D: ;
    goto loc_00398B64;

loc_00398AA2: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398AADu); RECOMP_ABI_CALL(0x0039D0B0u, sub_0039D0B0); /* call 0x0039D0B0 */

loc_00398AAD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398ADE; /* je: equal / zero */

loc_00398AB3: ;
    eax = MEM32(0x969CD0);
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x24);
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398ADCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398ADC: ;
    goto loc_00398B17;

loc_00398ADE: ;
    eax = MEM32(0x969CD4);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    SET_LO8(ebx, MEM8(ebp + 0x18));
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x24);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    esi = ZX8(LO8(ebx));
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00398B17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00398B17: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -16);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + -16);
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x18));
    eax = MEM32(ebp + -16);
    MEM8(eax + 0xC) = LO8(ecx);
    edx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -16);
    MEM8(eax + 0xD) = LO8(ecx);
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + 0x24);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x14) = ecx;

loc_00398B64: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00398B70
 * Original: 0x00398B70 - 0x00398BC2 (82 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398B70(void)
{
    uint32_t ebp = g_ebp;

loc_00398B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398BBBu); RECOMP_ABI_CALL(0x00398BD0u, sub_00398BD0); /* call 0x00398BD0 */

loc_00398BBB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00398BD0
 * Original: 0x00398BD0 - 0x00398CAB (219 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398BD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00398BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398C08; /* jne: not equal / not zero */

loc_00398BFA: ;
    MEM32(ebp + 8) = 0;
    MEM32(ebp + -4) = 1;

loc_00398C08: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398C14; /* jl: less (signed <) */

loc_00398C0E: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398C19; /* jl: less (signed <) */

loc_00398C14: ;
    goto loc_00398CA6;

loc_00398C19: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    ecx = MEM32(ebp + 8);
    eax = 0xC68B1C;
    eax = eax + 0x11F4;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    ecx = MEM32(ebp + 8);
    eax = 0xC68B1C;
    eax = eax + 0x11F4;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    ecx = MEM32(ebp + 8);
    eax = 0xC68B1C;
    eax = eax + 0x11F4;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    ecx = MEM32(ebp + 8);
    eax = 0xC68B1C;
    eax = eax + 0x11F4;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(0xC69E10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC69E10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398CA6; /* je: equal / zero */

loc_00398C95: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398CA1; /* jne: not equal / not zero */

loc_00398C9B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398CA6; /* jne: not equal / not zero */

loc_00398CA1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398CA6u); RECOMP_ABI_CALL(0x0039D570u, sub_0039D570); /* call 0x0039D570 */

loc_00398CA6: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00398CB0
 * Original: 0x00398CB0 - 0x00398D0B (91 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398CB0(void)
{
    uint32_t ebp = g_ebp;

loc_00398CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398D04u); RECOMP_ABI_CALL(0x00398BD0u, sub_00398BD0); /* call 0x00398BD0 */

loc_00398D04: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_00398D10
 * Original: 0x00398D10 - 0x00398D66 (86 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398D10(void)
{
    uint32_t ebp = g_ebp;

loc_00398D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0x10));
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398D5Fu); RECOMP_ABI_CALL(0x00398BD0u, sub_00398BD0); /* call 0x00398BD0 */

loc_00398D5F: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_00398D70
 * Original: 0x00398D70 - 0x00398DFF (143 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398D70(void)
{
    uint32_t ebp = g_ebp;

loc_00398D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x18));
    SET_LO8(eax, MEM8(ebp + 0x14));
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO8(eax, MEM8(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ebp + 0xC));
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43DBB4)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    ecx = ZX8(MEM8(ebp + 0x10));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43DBB4)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    ecx = ZX8(MEM8(ebp + 0x14));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43DBB4)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    ecx = ZX8(MEM8(ebp + 0x18));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = XMM_SCALAR(MEMF(0x43DBB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398DF8u); RECOMP_ABI_CALL(0x00398BD0u, sub_00398BD0); /* call 0x00398BD0 */

loc_00398DF8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_00398E00
 * Original: 0x00398E00 - 0x00398E5C (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398E00(void)
{
    uint32_t ebp = g_ebp;

loc_00398E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398E1Eu); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_00398E1E: ;
    eax = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398E55u); RECOMP_ABI_CALL(0x00398BD0u, sub_00398BD0); /* call 0x00398BD0 */

loc_00398E55: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_00398E60
 * Original: 0x00398E60 - 0x00398ECA (106 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398E60(void)
{
    uint32_t ebp = g_ebp;

loc_00398E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = ZX8(MEM8(ebp + 9));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = ZX8(MEM8(ebp + 8));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = ZX8(MEM8(ebp + 0xB));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00398ED0
 * Original: 0x00398ED0 - 0x003994C2 (1522 bytes, 394 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398ED0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00398ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0xCC;
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -32) = 0;
    MEM32(ebp + -36) = 0;
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398F17; /* je: equal / zero */

loc_00398F07: ;
    eax = ebp + -36;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398F12u); RECOMP_ABI_CALL(0x003994D0u, sub_003994D0); /* call 0x003994D0 */

loc_00398F12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398F1C; /* jne: not equal / not zero */

loc_00398F17: ;
    goto loc_003994B5;

loc_00398F1C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398F21u); RECOMP_ABI_CALL(0x00394EB0u, sub_00394EB0); /* call 0x00394EB0 */

loc_00398F21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398FC6; /* je: equal / zero */

loc_00398F2A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -92) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(0xC68B80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68B80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398F60; /* je: equal / zero */

loc_00398F53: ;
    eax = MEM32(0xC68B80);
    eax = MEM32(eax + 4);
    MEM32(ebp + -100) = eax;
    goto loc_00398F67;

loc_00398F60: ;
    eax = 0; /* xor self */
    MEM32(ebp + -100) = eax;
    goto loc_00398F67;

loc_00398F67: ;
    eax = MEM32(ebp + -100);
    MEM32(ebp + -104) = eax;
    _fa = (uint32_t)(MEM32(0xC68B84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC68B84), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398F83; /* je: equal / zero */

loc_00398F76: ;
    eax = MEM32(0xC68B84);
    eax = MEM32(eax + 4);
    MEM32(ebp + -108) = eax;
    goto loc_00398F8A;

loc_00398F83: ;
    eax = 0; /* xor self */
    MEM32(ebp + -108) = eax;
    goto loc_00398F8A;

loc_00398F8A: ;
    ecx = MEM32(ebp + -104);
    edx = MEM32(ebp + -76);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    esi = MEM32(ebp + -92);
    edi = MEM32(ebp + -96);
    eax = MEM32(ebp + -108);
    ebx = 0x4584D4;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEMD(esp + 0xC) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398FC6u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_00398FC6: ;
    eax = MEM32(0xC79E90);
    eax = eax + 1;
    MEM32(0xC79E90) = eax;
    ecx = MEM32(ebp + 0x14);
    eax = ebp + -28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398FE5u); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_00398FE5: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003990A8; /* je: equal / zero */

loc_00398FF6: ;
    eax = MEM32(0x969CD8);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx & 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(ebp + 0x10);
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    SET_HI8(ecx, LO8(ecx));
    esi = MEM32(ebp + 0x10);
    esi = esi & 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ebx = ZX8(LO8(ecx));
    SET_LO8(edx, LO8(ebx));
    esi = MEM32(ebp + 0x10);
    esi = esi & 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ebx = ZX8(LO8(ecx));
    SET_LO8(ecx, LO8(ebx));
    esi = ZX8(HI8(edx));
    MEM32(esp) = esi;
    esi = ZX8(HI8(ecx));
    MEM32(esp + 4) = esi;
    edx = ZX8(LO8(edx));
    MEM32(esp + 8) = edx;
    ecx = ZX8(LO8(ecx));
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039906Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039906B: ;
    eax = MEM32(0x969CDC);
    xmm3 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039909Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039909D: ;
    eax = MEM32(ebp + -32);
    eax = eax | 0x4000;
    MEM32(ebp + -32) = eax;

loc_003990A8: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003990E6; /* je: equal / zero */

loc_003990AE: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003990E6; /* je: equal / zero */

loc_003990B9: ;
    MEM32(esp) = 1;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CE0); PUSH32(esp, 0x003990C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003990C6: ;
    eax = MEM32(0x969CE4);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003990DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003990DB: ;
    eax = MEM32(ebp + -32);
    eax = eax | 0x100;
    MEM32(ebp + -32) = eax;

loc_003990E6: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039911C; /* je: equal / zero */

loc_003990EC: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039911C; /* je: equal / zero */

loc_003990F7: ;
    MEM32(esp) = 0xFF;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CE8); PUSH32(esp, 0x00399104u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399104: ;
    eax = MEM32(0x969CEC);
    ecx = MEM32(ebp + 0x1C);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399111u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399111: ;
    eax = MEM32(ebp + -32);
    eax = eax | 0x400;
    MEM32(ebp + -32) = eax;

loc_0039911C: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399127; /* jne: not equal / not zero */

loc_00399122: ;
    goto loc_003994B5;

loc_00399127: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399137; /* je: equal / zero */

loc_0039912D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399287; /* jne: not equal / not zero */

loc_00399137: ;
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B88)); /* movd to xmm */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    MEMD(ebp + -128) = xmm1.d[0]; /* movsd */
    xmm2 = xmm1; /* movaps */
    XMM_STORE(ebp + -152, xmm2); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399174u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_00399174: ;
    xmm2 = XMM_MEM(ebp + -152); /* movaps */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    MEM32(ebp + -44) = eax;
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B8C)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003991A9u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_003991A9: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(0x969C80);
    ecx = esp;
    MEM32(ecx) = 0xC11;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003991BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003991BB: ;
    xmm2 = XMM_MEM(ebp + -152); /* movaps */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    eax = MEM32(0x969CF0);
    MEM32(ebp + -112) = eax;
    edi = MEM32(ebp + -44);
    esi = MEM32(ebp + -48);
    eax = MEM32(0xC68B88);
    ecx = MEM32(0xC68B90);
    eax = eax + ecx;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399204u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_00399204: ;
    xmm2 = XMM_MEM(ebp + -152); /* movaps */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    ecx = MEM32(ebp + -44);
    eax = eax - ecx;
    MEM32(ebp + -116) = eax;
    eax = MEM32(0xC68B8C);
    ecx = MEM32(0xC68B94);
    eax = eax + ecx;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399247u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_00399247: ;
    edx = MEM32(ebp + -116);
    ecx = eax;
    eax = MEM32(ebp + -112);
    ecx = ecx - MEM32(ebp + -48);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399263u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399263: ;
    eax = MEM32(0x969CF4);
    ecx = MEM32(ebp + -32);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399270u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399270: ;
    MEM32(esp) = 0xC11;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CF8); PUSH32(esp, 0x0039927Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039927D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399282u); RECOMP_ABI_CALL(0x00393BD0u, sub_00393BD0); /* call 0x00393BD0 */

loc_00399282: ;
    goto loc_003994B5;

loc_00399287: ;
    MEM32(esp) = 0xC11;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C80); PUSH32(esp, 0x00399294u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399294: ;
    MEM32(ebp + -40) = 0;

loc_0039929B: ;
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003994A3; /* jae: above or equal (unsigned >=) */

loc_003992A7: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xC68B88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xC68B88) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003992D1; /* jbe: below or equal (unsigned <=) */

loc_003992BC: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax);
    MEM32(ebp + -156) = eax;
    goto loc_003992DC;

loc_003992D1: ;
    eax = MEM32(0xC68B88);
    MEM32(ebp + -156) = eax;

loc_003992DC: ;
    eax = MEM32(ebp + -156);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xC68B8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xC68B8C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00399311; /* jbe: below or equal (unsigned <=) */

loc_003992FB: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 4);
    MEM32(ebp + -160) = eax;
    goto loc_0039931C;

loc_00399311: ;
    eax = MEM32(0xC68B8C);
    MEM32(ebp + -160) = eax;

loc_0039931C: ;
    eax = MEM32(ebp + -160);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 8);
    ecx = MEM32(0xC68B88);
    ecx = ecx + MEM32(0xC68B90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00399359; /* jae: above or equal (unsigned >=) */

loc_00399343: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -164) = eax;
    goto loc_0039936A;

loc_00399359: ;
    eax = MEM32(0xC68B88);
    eax = eax + MEM32(0xC68B90);
    MEM32(ebp + -164) = eax;

loc_0039936A: ;
    eax = MEM32(ebp + -164);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(0xC68B8C);
    ecx = ecx + MEM32(0xC68B94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003993A7; /* jae: above or equal (unsigned >=) */

loc_00399391: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -40);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -168) = eax;
    goto loc_003993B8;

loc_003993A7: ;
    eax = MEM32(0xC68B8C);
    eax = eax + MEM32(0xC68B94);
    MEM32(ebp + -168) = eax;

loc_003993B8: ;
    eax = MEM32(ebp + -168);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -60) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003993D1; /* jge: greater or equal (signed >=) */

loc_003993C9: ;
    eax = MEM32(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -64) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003993D6; /* jl: less (signed <) */

loc_003993D1: ;
    goto loc_00399495;

loc_003993D6: ;
    eax = MEM32(ebp + -52);
    eax = eax + MEM32(0xC68748);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003993F7u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_003993F7: ;
    MEM32(ebp + -68) = eax;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -56); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399411u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_00399411: ;
    MEM32(ebp + -72) = eax;
    eax = MEM32(0x969CF0);
    MEM32(ebp + -172) = eax;
    edi = MEM32(ebp + -68);
    esi = MEM32(ebp + -72);
    eax = MEM32(ebp + -60);
    eax = eax + MEM32(0xC68748);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399446u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_00399446: ;
    eax = eax - MEM32(ebp + -68);
    MEM32(ebp + -176) = eax;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -64); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399466u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_00399466: ;
    edx = MEM32(ebp + -176);
    ecx = eax;
    eax = MEM32(ebp + -172);
    ecx = ecx - MEM32(ebp + -72);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399488u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399488: ;
    eax = MEM32(0x969CF4);
    ecx = MEM32(ebp + -32);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399495u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399495: ;
    eax = MEM32(ebp + -40);
    eax = eax + 1;
    MEM32(ebp + -40) = eax;
    goto loc_0039929B;

loc_003994A3: ;
    MEM32(esp) = 0xC11;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CF8); PUSH32(esp, 0x003994B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003994B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003994B5u); RECOMP_ABI_CALL(0x00393BD0u, sub_00393BD0); /* call 0x00393BD0 */

loc_003994B5: ;
    esp = esp + 0xCC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 28; return; /* ret 24 */

}


/**
 * sub_003994D0
 * Original: 0x003994D0 - 0x0039960A (314 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003994D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003994D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC68B80);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003994E6u); RECOMP_ABI_CALL(0x00399AB0u, sub_00399AB0); /* call 0x00399AB0 */

loc_003994E6: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(0xC68B84);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003994F6u); RECOMP_ABI_CALL(0x00399AB0u, sub_00399AB0); /* call 0x00399AB0 */

loc_003994F6: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039950F; /* je: equal / zero */

loc_003994FF: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039950F; /* jne: not equal / not zero */

loc_00399508: ;
    MEM32(ebp + -12) = 0;

loc_0039950F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399527; /* jne: not equal / not zero */

loc_00399515: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399527; /* jne: not equal / not zero */

loc_0039951B: ;
    MEM32(ebp + -4) = 0;
    goto loc_00399602;

loc_00399527: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039953C; /* je: equal / zero */

loc_0039952D: ;
    ecx = MEM32(0xC79E78);
    ecx = ecx + 1;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x2C) = ecx;

loc_0039953C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399551; /* je: equal / zero */

loc_00399542: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    goto loc_0039955E;

loc_00399551: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */

loc_0039955E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(0x5ACB6C) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399580; /* je: equal / zero */

loc_00399571: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    goto loc_0039958D;

loc_00399580: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */

loc_0039958D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(0x5ACB70) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003995AB; /* je: equal / zero */

loc_003995A0: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -24) = eax;
    goto loc_003995B2;

loc_003995AB: ;
    eax = 0; /* xor self */
    MEM32(ebp + -24) = eax;
    goto loc_003995B2;

loc_003995B2: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003995C9; /* je: equal / zero */

loc_003995BE: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -32) = eax;
    goto loc_003995D0;

loc_003995C9: ;
    eax = 0; /* xor self */
    MEM32(ebp + -32) = eax;
    goto loc_003995D0;

loc_003995D0: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -32);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003995E2u); RECOMP_ABI_CALL(0x0039A390u, sub_0039A390); /* call 0x0039A390 */

loc_003995E2: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003995EAu); RECOMP_ABI_CALL(0x0039D620u, sub_0039D620); /* call 0x0039D620 */

loc_003995EA: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 1;

loc_00399602: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00399610
 * Original: 0x00399610 - 0x00399657 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399610(void)
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

loc_00399610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax * 4 + 0x5ACB6C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399646u); RECOMP_ABI_CALL(0x003F6330u, sub_003F6330); /* call 0x003F6330 */

loc_00399646: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
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
 * sub_00399660
 * Original: 0x00399660 - 0x00399AA2 (1090 bytes, 268 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00399660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x6C;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0x5ACB74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ACB74), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00399691; /* jge: greater or equal (signed >=) */

loc_0039967E: ;
    eax = 0x441CC8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039968Cu); RECOMP_ABI_CALL(0x003B6640u, sub_003B6640); /* call 0x003B6640 */

loc_0039968C: ;
    MEM32(0x5ACB74) = eax;

loc_00399691: ;
    _fa = (uint32_t)(MEM32(0xC79E80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79E80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399906; /* je: equal / zero */

loc_0039969E: ;
    eax = 0xC68B1C;
    eax = eax + 0x34;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003996AFu); RECOMP_ABI_CALL(0x00399AB0u, sub_00399AB0); /* call 0x00399AB0 */

loc_003996AF: ;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003996B7u); RECOMP_ABI_CALL(0x00394EB0u, sub_00394EB0); /* call 0x00394EB0 */

loc_003996B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003996DE; /* je: equal / zero */

loc_003996BC: ;
    ecx = MEM32(0xC68B54);
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x18);
    edx = 0x499CFC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003996DEu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003996DE: ;
    _fa = (uint32_t)(MEM32(0x5ACB74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ACB74), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00399704; /* jle: less or equal (signed <=) */

loc_003996E7: ;
    eax = MEM32(0xC79E78);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x5ACB74));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x5ACB74)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399704; /* jne: not equal / not zero */

loc_003996F9: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399704u); RECOMP_ABI_CALL(0x0039A080u, sub_0039A080); /* call 0x0039A080 */

loc_00399704: ;
    ecx = ebp + -20;
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399716u); RECOMP_ABI_CALL(0x003B8630u, sub_003B8630); /* call 0x003B8630 */

loc_00399716: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x28));
    ecx = MEM32(ebp + -16);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x24));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x24)); }
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00399754; /* jle: less or equal (signed <=) */

loc_00399739: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x24));
    ecx = MEM32(ebp + -16);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x28)); }
    MEM32(ebp + -28) = eax;

loc_00399754: ;
    eax = MEM32(ebp + -20);
    eax = eax - MEM32(ebp + -28);
    ecx = 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -24);
    eax = eax - MEM32(ebp + -32);
    ecx = 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -40) = eax;
    eax = 0; /* xor self */
    MEM32(esp) = 0x8CA9;
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CFC); PUSH32(esp, 0x0039978Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039978D: ;
    MEM32(esp) = 0xC11;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CF8); PUSH32(esp, 0x0039979Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039979A: ;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CD8); PUSH32(esp, 0x003997BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003997BF: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CDC); PUSH32(esp, 0x003997E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003997E7: ;
    MEM32(esp) = 0x4000;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CF4); PUSH32(esp, 0x003997F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003997F4: ;
    eax = MEM32(0x969CFC);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399814u); RECOMP_ABI_CALL(0x0039A390u, sub_0039A390); /* call 0x0039A390 */

loc_00399814: ;
    ecx = eax;
    eax = MEM32(ebp + -52);
    MEM32(esp) = 0x8CA8;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399826u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399826: ;
    eax = MEM32(0x969D00);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x24);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -16);
    ebx = MEM32(eax + 0x28);
    edi = MEM32(ebp + -36);
    esi = MEM32(ebp + -40);
    esi = esi + MEM32(ebp + -32);
    edx = MEM32(ebp + -36);
    edx = edx + MEM32(ebp + -28);
    ecx = MEM32(ebp + -40);
    eax = 0; /* xor self */
    eax = MEM32(ebp + -48);
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -44);
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = 0x4000;
    MEM32(esp + 0x24) = 0x2601;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399890u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399890: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399895u); RECOMP_ABI_CALL(0x003B8660u, sub_003B8660); /* call 0x003B8660 */

loc_00399895: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039989Au); RECOMP_ABI_CALL(0x00393BD0u, sub_00393BD0); /* call 0x00393BD0 */

loc_0039989A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039989Fu); RECOMP_ABI_CALL(0x003C0F10u, sub_003C0F10); /* call 0x003C0F10 */

loc_0039989F: ;
    eax = MEM32(0xC69E44);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003998ACu); RECOMP_ABI_CALL(0x700000B0u, host_gl_fence_frame); /* call 0x700000B0 */

loc_003998AC: ;
    eax = MEM32(0xC69E44);
    eax = eax + 1;
    ecx = 3;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(0xC69E44) = edx;
    eax = MEM32(0xC69E44);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003998D0u); RECOMP_ABI_CALL(0x700000E0u, host_gl_wait_frame); /* call 0x700000E0 */

loc_003998D0: ;
    eax = MEM32(0xC69E44);
    eax = MEM32(eax * 4 + 0xC69E2C);
    MEM32(0xC69E28) = eax;
    eax = MEM32(0xC69E44);
    eax = MEM32(eax * 4 + 0xC69E38);
    MEM32(0xC69E4C) = eax;
    MEM32(0xC69E48) = 0;
    MEM32(0xC69E50) = 0;

loc_00399906: ;
    eax = MEM32(0xC79E78);
    eax = eax + 1;
    MEM32(0xC79E78) = eax;
    eax = MEM32(0xC79E94);
    eax = eax + 1;
    MEM32(0xC79E94) = eax;
    _fa = (uint32_t)(MEM32(0xC79EB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79EB8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399A2C; /* je: equal / zero */

loc_0039992D: ;
    eax = MEM32(0xC79E78);
    ecx = 0x3C;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399A2C; /* jne: not equal / not zero */

loc_00399944: ;
    eax = MEM32(0xC79E78);
    MEM32(ebp + -72) = eax;
    eax = MEM32(0xC79E88);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0xC79E94));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0xC79E94)); }
    MEM32(ebp + -68) = eax;
    eax = MEM32(0xC79E8C);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0xC79E94));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0xC79E94)); }
    MEM32(ebp + -64) = eax;
    eax = MEM32(0xC79E90);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0xC79E94));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0xC79E94)); }
    MEM32(ebp + -60) = eax;
    eax = MEM32(0xC79EA4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0xC79E94));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0xC79E94)); }
    ebx = eax;
    edi = MEM32(0xC79E98);
    esi = MEM32(0xC79E9C);
    eax = MEM32(0xC79EA0);
    MEM32(ebp + -76) = eax;
    eax = MEM32(0xC79EA8);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0xC79E94));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0xC79E94)); }
    ecx = eax;
    _shift_result = RECOMP_SHIFT(ecx, 0xA, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(0xC79EAC);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0xC79E94));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0xC79E94)); }
    edx = MEM32(ebp + -76);
    _shift_result = RECOMP_SHIFT(eax, 0xA, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -56) = eax;
    eax = 0x450209;
    MEM32(esp) = eax;
    eax = MEM32(ebp + -72);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -68);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -64);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + -60);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + -56);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399A0Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_00399A0C: ;
    eax = 0xC79E88;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399A2Cu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00399A2C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399A31u); RECOMP_ABI_CALL(0x003B87D0u, sub_003B87D0); /* call 0x003B87D0 */

loc_00399A31: ;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399A3Fu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_00399A3F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399A44u); RECOMP_ABI_CALL(0x003B8200u, sub_003B8200); /* call 0x003B8200 */

loc_00399A44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399A58; /* je: equal / zero */

loc_00399A49: ;
    eax = MEM32(0xC68AC8);
    eax = eax + 1;
    MEM32(0xC68AC8) = eax;
    goto loc_00399A8A;

loc_00399A58: ;
    goto loc_00399A5A;

loc_00399A5A: ;
    _fa = (uint32_t)(MEM32(0xC79EBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79EBC), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00399A7D; /* jb: below (unsigned <) */

loc_00399A63: ;
    ecx = 0xC68AEC;
    eax = 0xC68ACC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399A7Bu); RECOMP_ABI_CALL(0x0042F3A0u, sub_0042F3A0); /* call 0x0042F3A0 */

loc_00399A7B: ;
    goto loc_00399A5A;

loc_00399A7D: ;
    eax = MEM32(0xC79EBC);
    eax = eax + 1;
    MEM32(0xC79EBC) = eax;

loc_00399A8A: ;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399A98u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_00399A98: ;
    esp = esp + 0x6C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}


/**
 * sub_00399AB0
 * Original: 0x00399AB0 - 0x0039A077 (1479 bytes, 395 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399AB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00399AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0xCC;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -36) = 0;
    eax = 0x48651A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399AD4u); RECOMP_ABI_CALL(0x003DC4D0u, sub_003DC4D0); /* call 0x003DC4D0 */

loc_00399AD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399BB9; /* je: equal / zero */

loc_00399ADD: ;
    _fa = (uint32_t)(MEM32(0xCDCE90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xCDCE90), 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00399BB9; /* jae: above or equal (unsigned >=) */

loc_00399AEA: ;
    eax = MEM32(0xCDCE90);
    eax = eax + 1;
    MEM32(0xCDCE90) = eax;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399B16; /* je: equal / zero */

loc_00399B0C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -64) = eax;
    goto loc_00399B1D;

loc_00399B16: ;
    eax = 0; /* xor self */
    MEM32(ebp + -64) = eax;
    goto loc_00399B1D;

loc_00399B1D: ;
    eax = MEM32(ebp + -64);
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399B34; /* je: equal / zero */

loc_00399B29: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -72) = eax;
    goto loc_00399B3B;

loc_00399B34: ;
    eax = 0; /* xor self */
    MEM32(ebp + -72) = eax;
    goto loc_00399B3B;

loc_00399B3B: ;
    eax = MEM32(ebp + -72);
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399B52; /* je: equal / zero */

loc_00399B47: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -80) = eax;
    goto loc_00399B59;

loc_00399B52: ;
    eax = 0; /* xor self */
    MEM32(ebp + -80) = eax;
    goto loc_00399B59;

loc_00399B59: ;
    eax = MEM32(ebp + -80);
    MEM32(ebp + -84) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399B70; /* je: equal / zero */

loc_00399B65: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -88) = eax;
    goto loc_00399B77;

loc_00399B70: ;
    eax = 0; /* xor self */
    MEM32(ebp + -88) = eax;
    goto loc_00399B77;

loc_00399B77: ;
    esi = MEM32(ebp + -68);
    edi = MEM32(ebp + -56);
    ebx = MEM32(ebp + -60);
    eax = MEM32(ebp + -88);
    edx = 0x838DC4;
    ecx = 0x471EF5;
    MEM32(esp) = edx;
    edx = MEM32(ebp + -76);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(ebp + -84);
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399BB9u); RECOMP_ABI_CALL(0x0041AA40u, sub_0041AA40); /* call 0x0041AA40 */

loc_00399BB9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399BC8; /* je: equal / zero */

loc_00399BBF: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399BD4; /* jne: not equal / not zero */

loc_00399BC8: ;
    MEM32(ebp + -16) = 0;
    goto loc_0039A069;

loc_00399BD4: ;
    eax = MEM32(0x43E5B8);
    MEM32(ebp + -44) = eax;
    eax = MEM32(0x43E5BC);
    MEM32(ebp + -40) = eax;
    esi = MEM32(ebp + 8);
    edx = ebp + -24;
    ecx = ebp + -28;
    eax = ebp + -32;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399C04u); RECOMP_ABI_CALL(0x00394F00u, sub_00394F00); /* call 0x00394F00 */

loc_00399C04: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -92) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399C0Fu); RECOMP_ABI_CALL(0x003938E0u, sub_003938E0); /* call 0x003938E0 */

loc_00399C0F: ;
    ecx = eax;
    eax = MEM32(ebp + -92);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399C3B; /* jne: not equal / not zero */

loc_00399C18: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x1E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399C3B; /* jne: not equal / not zero */

loc_00399C21: ;
    xmm0 = XMM_SCALAR(MEMF(0x5ACB64)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5ACB68)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */

loc_00399C3B: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399C49u); RECOMP_ABI_CALL(0x00393DD0u, sub_00393DD0); /* call 0x00393DD0 */

loc_00399C49: ;
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;

loc_00399C4E: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399CBB; /* je: equal / zero */

loc_00399C54: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399CAE; /* jne: not equal / not zero */

loc_00399C62: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399CAE; /* jne: not equal / not zero */

loc_00399C6D: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399CAE; /* jne: not equal / not zero */

loc_00399C78: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399CAE; /* jne: not equal / not zero */

loc_00399C83: ;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -44); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00399CAE; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(ebp + -44)) */

loc_00399C91: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00399CAE; /* jp: parity (xmm0.f[0] vs MEMF(ebp + -44)) */

loc_00399C93: ;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -40); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00399CAE; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(ebp + -40)) */

loc_00399CA1: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00399CAE; /* jp: parity (xmm0.f[0] vs MEMF(ebp + -40)) */

loc_00399CA3: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    goto loc_0039A069;

loc_00399CAE: ;
    goto loc_00399CB0;

loc_00399CB0: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    goto loc_00399C4E;

loc_00399CBB: ;
    eax = esp;
    MEM32(eax + 4) = 0x30;
    MEM32(eax) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399CCFu); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_00399CCF: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -20);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x14) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + -20);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    eax = MEM32(ebp + -20);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR_BITS(MEM32(ebp + -24)); /* movd to xmm */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm4 = xmm3; /* movaps */
    xmm0 = XMM_OR(xmm0, xmm4); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm3.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    xmm1 = XMM_SCALAR(MEMF(0x43D5F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = eax & edx;
    ecx = ecx | eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x24) = ecx;
    xmm0 = XMM_SCALAR_BITS(MEM32(ebp + -28)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm4); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm3.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    ecx = (int32_t)xmm2.f[0]; /* cvttss2si */
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = eax & edx;
    ecx = ecx | eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x28) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399E86; /* je: equal / zero */

loc_00399DB0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -36);
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -108) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -104) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -100) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    ebx = MEM32(ebp + -52);
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -20);
    edi = MEM32(eax + 0x24);
    eax = MEM32(ebp + -20);
    esi = MEM32(eax + 0x28);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -96) = eax;
    eax = 0x838DC4;
    MEM32(ebp + -124) = eax;
    eax = 0x458560;
    MEM32(ebp + -120) = eax;
    eax = MEM32(ebp + -124);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -120);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -116);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -112);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + -108);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + -104);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + -100);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + -96);
    MEMD(esp + 0x1C) = xmm1.d[0]; /* movsd */
    MEM32(esp + 0x24) = ebx;
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399E86u); RECOMP_ABI_CALL(0x0041AA40u, sub_0041AA40); /* call 0x0041AA40 */

loc_00399E86: ;
    eax = MEM32(0x969D04);
    ecx = MEM32(ebp + -20);
    ecx = ecx + 8;
    ecx = ecx + 0x10;
    MEM32(esp) = 1;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399EA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399EA1: ;
    eax = MEM32(0x969D08);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0x18);
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399EB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399EB9: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = 0x813D;
    MEM32(esp + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D0C); PUSH32(esp, 0x00399ED8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399ED8: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399F34; /* je: equal / zero */

loc_00399EDE: ;
    eax = MEM32(0x969D10);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0x28);
    esi = 0; /* xor self */
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x88F0;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x84F9;
    MEM32(esp + 0x1C) = 0x84FA;
    MEM32(esp + 0x20) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399F32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399F32: ;
    goto loc_00399F88;

loc_00399F34: ;
    eax = MEM32(0x969D10);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0x28);
    esi = 0; /* xor self */
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x8058;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x80E1;
    MEM32(esp + 0x1C) = 0x1401;
    MEM32(esp + 0x20) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00399F88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399F88: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A016; /* je: equal / zero */

loc_00399F92: ;
    ebx = MEM32(ebp + -36);
    eax = MEM32(ebp + -20);
    edi = MEM32(eax + 0x18);
    eax = MEM32(ebp + -20);
    esi = MEM32(eax + 0x24);
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x28);
    MEM32(ebp + -144) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -140) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969CC4); PUSH32(esp, 0x00399FBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00399FBC: ;
    edx = MEM32(ebp + -144);
    ecx = MEM32(ebp + -140);
    MEM32(ebp + -128) = eax;
    eax = 0x838DC4;
    MEM32(ebp + -136) = eax;
    eax = 0x45AF6C;
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -136);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -132);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -128);
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A016u); RECOMP_ABI_CALL(0x0041AA40u, sub_0041AA40); /* call 0x0041AA40 */

loc_0039A016: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A01Bu); RECOMP_ABI_CALL(0x00393BD0u, sub_00393BD0); /* call 0x00393BD0 */

loc_0039A01B: ;
    ecx = MEM32(0xCDCE94);
    eax = MEM32(ebp + -20);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -20);
    MEM32(0xCDCE94) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A03Cu); RECOMP_ABI_CALL(0x00393DD0u, sub_00393DD0); /* call 0x00393DD0 */

loc_0039A03C: ;
    ecx = MEM32(eax);
    eax = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -148) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A05Bu); RECOMP_ABI_CALL(0x00393DD0u, sub_00393DD0); /* call 0x00393DD0 */

loc_0039A05B: ;
    ecx = MEM32(ebp + -148);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;

loc_0039A069: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0xCC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039A080
 * Original: 0x0039A080 - 0x0039A38C (780 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A080(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039A080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x280;
    eax = MEM32(ebp + 8);
    eax = 0x4695F1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A09Cu); RECOMP_ABI_CALL(0x003B66A0u, sub_003B66A0); /* call 0x003B66A0 */

loc_0039A09C: ;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A0BA; /* je: equal / zero */

loc_0039A0A4: ;
    eax = 0x4695F1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A0B2u); RECOMP_ABI_CALL(0x003B66A0u, sub_003B66A0); /* call 0x003B66A0 */

loc_0039A0B2: ;
    MEM32(ebp + -612) = eax;
    goto loc_0039A0C4;

loc_0039A0BA: ;
    eax = 0; /* xor self */
    MEM32(ebp + -612) = eax;
    goto loc_0039A0C4;

loc_0039A0C4: ;
    eax = MEM32(ebp + -612);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x28);
    MEM32(ebp + -20) = eax;
    eax = ebp + -598;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A0FFu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039A0FF: ;
    MEM8(ebp + -598) = 0x42;
    MEM8(ebp + -597) = 0x4D;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -20));
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -604) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A128; /* jne: not equal / not zero */

loc_0039A123: ;
    goto loc_0039A382;

loc_0039A128: ;
    eax = MEM32(ebp + -604);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A136u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_0039A136: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(0x969CFC);
    MEM32(ebp + -616) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A15Cu); RECOMP_ABI_CALL(0x0039A390u, sub_0039A390); /* call 0x0039A390 */

loc_0039A15C: ;
    ecx = eax;
    eax = MEM32(ebp + -616);
    MEM32(esp) = 0x8CA8;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A171u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A171: ;
    eax = MEM32(0x969D14);
    esi = MEM32(ebp + -16);
    edx = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    edi = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = 0x80E1;
    MEM32(esp + 0x14) = 0x1401;
    MEM32(esp + 0x18) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A1AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A1AE: ;
    MEM32(ebp + -544) = 0;

loc_0039A1B8: ;
    eax = MEM32(ebp + -544);
    ecx = MEM32(ebp + -16);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -20));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039A235; /* jae: above or equal (unsigned >=) */

loc_0039A1C9: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -544);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    SET_LO8(eax, MEM8(eax + ecx));
    MEM8(ebp + -605) = LO8(eax);
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -544);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    SET_LO8(edx, MEM8(eax + ecx + 2));
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -544);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEM8(eax + ecx) = LO8(edx);
    SET_LO8(edx, MEM8(ebp + -605));
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -544);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEM8(eax + ecx + 2) = LO8(edx);
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -544);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEM8(eax + ecx + 3) = 0xFF;
    eax = MEM32(ebp + -544);
    eax = eax + 1;
    MEM32(ebp + -544) = eax;
    goto loc_0039A1B8;

loc_0039A235: ;
    esi = ebp + -536;
    ecx = MEM32(ebp + -12);
    eax = MEM32(0xC79E78);
    edx = 0x45DF1D;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0x200;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A265u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_0039A265: ;
    ecx = ebp + -536;
    eax = 0x44AE69;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A27Du); RECOMP_ABI_CALL(0x0041A200u, sub_0041A200); /* call 0x0041A200 */

loc_0039A27D: ;
    MEM32(ebp + -540) = eax;
    _fa = (uint32_t)(MEM32(ebp + -540)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -540), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A377; /* je: equal / zero */

loc_0039A290: ;
    eax = MEM32(ebp + -604);
    eax = eax + 0x36;
    MEM32(ebp + -596) = eax;
    MEM32(ebp + -588) = 0x36;
    MEM32(ebp + -584) = 0x28;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -580) = eax;
    eax = 0; /* xor self */
    eax = eax - MEM32(ebp + -20);
    MEM32(ebp + -576) = eax;
    MEM16(ebp + -572) = 1;
    MEM16(ebp + -570) = 0x20;
    eax = MEM32(ebp + -604);
    MEM32(ebp + -564) = eax;
    ecx = ebp + -598;
    eax = MEM32(ebp + -540);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0x36;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A30Du); RECOMP_ABI_CALL(0x0041BFA0u, sub_0041BFA0); /* call 0x0041BFA0 */

loc_0039A30D: ;
    MEM32(ebp + -544) = 0;

loc_0039A317: ;
    eax = MEM32(ebp + -544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039A369; /* jae: above or equal (unsigned >=) */

loc_0039A322: ;
    edx = MEM32(ebp + -24);
    eax = MEM32(ebp + -544);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -16));
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + -540);
    MEM32(esp) = edx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A358u); RECOMP_ABI_CALL(0x0041BFA0u, sub_0041BFA0); /* call 0x0041BFA0 */

loc_0039A358: ;
    eax = MEM32(ebp + -544);
    eax = eax + 1;
    MEM32(ebp + -544) = eax;
    goto loc_0039A317;

loc_0039A369: ;
    eax = MEM32(ebp + -540);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A377u); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_0039A377: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A382u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039A382: ;
    esp = esp + 0x280;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039A390
 * Original: 0x0039A390 - 0x0039A51D (397 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A390(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    ecx = 0x8CE0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -12) = eax;
    eax = MEM32(0xCDCE98);
    MEM32(ebp + -8) = eax;

loc_0039A3B7: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A3ED; /* je: equal / zero */

loc_0039A3BD: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A3E1; /* jne: not equal / not zero */

loc_0039A3C8: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A3E1; /* jne: not equal / not zero */

loc_0039A3D3: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -4) = eax;
    goto loc_0039A515;

loc_0039A3E1: ;
    goto loc_0039A3E3;

loc_0039A3E3: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    goto loc_0039A3B7;

loc_0039A3ED: ;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A401u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039A401: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x969D18);
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0xC;
    MEM32(esp) = 1;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A42Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A42E: ;
    eax = MEM32(0x969CFC);
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp) = 0x8D40;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A446u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A446: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A47B; /* je: equal / zero */

loc_0039A44C: ;
    eax = MEM32(0x969D1C);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    MEM32(esp) = 0x8D40;
    MEM32(esp + 4) = 0x8CE0;
    MEM32(esp + 8) = 0xDE1;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A47Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A47B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A4B0; /* je: equal / zero */

loc_0039A481: ;
    eax = MEM32(0x969D1C);
    ecx = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    MEM32(esp) = 0x8D40;
    MEM32(esp + 4) = 0x821A;
    MEM32(esp + 8) = 0xDE1;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A4B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A4B0: ;
    eax = ebp + -12;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D20); PUSH32(esp, 0x0039A4C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A4C4: ;
    MEM32(esp) = 0x8D40;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D24); PUSH32(esp, 0x0039A4D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A4D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8CD5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8CD5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A4F4; /* je: equal / zero */

loc_0039A4D8: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0x46C59D;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A4F4u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039A4F4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A4F9u); RECOMP_ABI_CALL(0x00393BD0u, sub_00393BD0); /* call 0x00393BD0 */

loc_0039A4F9: ;
    ecx = MEM32(0xCDCE98);
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(0xCDCE98) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -4) = eax;

loc_0039A515: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039A520
 * Original: 0x0039A520 - 0x0039A527 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A520(void)
{
    uint32_t ebp = g_ebp;

loc_0039A520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039A530
 * Original: 0x0039A530 - 0x0039A616 (230 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A530(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039A530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = ebp + -16;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A54Cu); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_0039A54C: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFE502A)) >> 32) & 1);
    eax = eax + 0xFE502A;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B9ACA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x3B9ACA00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0039A578; /* jl: less (signed <) */

loc_0039A560: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC4653600u)) >> 32) & 1);
    eax = eax + 0xC4653600u;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -12)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -12) = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -16) = eax;

loc_0039A578: ;
    eax = ebp + -16;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = 1;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A59Du); RECOMP_ABI_CALL(0x00435390u, sub_00435390); /* call 0x00435390 */

loc_0039A59D: ;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A5ABu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039A5AB: ;
    eax = MEM32(0xC68AE8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(0xC68AE8) = eax;
    _fa = (uint32_t)(MEM32(0xC79EBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79EBC), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039A5DB; /* je: equal / zero */

loc_0039A5C1: ;
    eax = MEM32(0xC79EBC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(0xC79EBC) = eax;
    eax = MEM32(0xC68AC8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(0xC68AC8) = eax;

loc_0039A5DB: ;
    eax = MEM32(0xC68AE4);
    MEM32(ebp + -20) = eax;
    eax = 0xC68AEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A5F1u); RECOMP_ABI_CALL(0x0042E1D0u, sub_0042E1D0); /* call 0x0042E1D0 */

loc_0039A5F1: ;
    eax = 0xC68ACC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A5FFu); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039A5FF: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039A611; /* je: equal / zero */

loc_0039A605: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ebp + -20); PUSH32(esp, 0x0039A611u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A611: ;
    goto loc_0039A54C;

}


/**
 * sub_0039A620
 * Original: 0x0039A620 - 0x0039A710 (240 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A620(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0039A620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFEFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFEFu;
    MEM32(ebp + -8) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x61));
    eax = eax - 0x61;
    if ((!_cf && eax != 0)) goto loc_0039A701; /* ja: above (unsigned >) */

loc_0039A63B: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0x4CF620);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0039A647u) goto loc_0039A647;
    if (_jt == 0x0039A653u) goto loc_0039A653;
    if (_jt == 0x0039A65Fu) goto loc_0039A65F;
    if (_jt == 0x0039A66Bu) goto loc_0039A66B;
    if (_jt == 0x0039A677u) goto loc_0039A677;
    if (_jt == 0x0039A683u) goto loc_0039A683;
    if (_jt == 0x0039A68Cu) goto loc_0039A68C;
    if (_jt == 0x0039A695u) goto loc_0039A695;
    if (_jt == 0x0039A69Eu) goto loc_0039A69E;
    if (_jt == 0x0039A6A7u) goto loc_0039A6A7;
    if (_jt == 0x0039A6B0u) goto loc_0039A6B0;
    if (_jt == 0x0039A6B9u) goto loc_0039A6B9;
    if (_jt == 0x0039A6C2u) goto loc_0039A6C2;
    if (_jt == 0x0039A6CBu) goto loc_0039A6CB;
    if (_jt == 0x0039A6D4u) goto loc_0039A6D4;
    if (_jt == 0x0039A6DDu) goto loc_0039A6DD;
    if (_jt == 0x0039A6E6u) goto loc_0039A6E6;
    if (_jt == 0x0039A6EFu) goto loc_0039A6EF;
    if (_jt == 0x0039A6F8u) goto loc_0039A6F8;
    if (_jt == 0x0039A701u) goto loc_0039A701;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0039A647: ;
    MEM32(ebp + -4) = 4;
    goto loc_0039A708;

loc_0039A653: ;
    MEM32(ebp + -4) = 8;
    goto loc_0039A708;

loc_0039A65F: ;
    MEM32(ebp + -4) = 0xC;
    goto loc_0039A708;

loc_0039A66B: ;
    MEM32(ebp + -4) = 0x10;
    goto loc_0039A708;

loc_0039A677: ;
    MEM32(ebp + -4) = 4;
    goto loc_0039A708;

loc_0039A683: ;
    MEM32(ebp + -4) = 2;
    goto loc_0039A708;

loc_0039A68C: ;
    MEM32(ebp + -4) = 4;
    goto loc_0039A708;

loc_0039A695: ;
    MEM32(ebp + -4) = 6;
    goto loc_0039A708;

loc_0039A69E: ;
    MEM32(ebp + -4) = 8;
    goto loc_0039A708;

loc_0039A6A7: ;
    MEM32(ebp + -4) = 2;
    goto loc_0039A708;

loc_0039A6B0: ;
    MEM32(ebp + -4) = 4;
    goto loc_0039A708;

loc_0039A6B9: ;
    MEM32(ebp + -4) = 6;
    goto loc_0039A708;

loc_0039A6C2: ;
    MEM32(ebp + -4) = 8;
    goto loc_0039A708;

loc_0039A6CB: ;
    MEM32(ebp + -4) = 4;
    goto loc_0039A708;

loc_0039A6D4: ;
    MEM32(ebp + -4) = 1;
    goto loc_0039A708;

loc_0039A6DD: ;
    MEM32(ebp + -4) = 2;
    goto loc_0039A708;

loc_0039A6E6: ;
    MEM32(ebp + -4) = 3;
    goto loc_0039A708;

loc_0039A6EF: ;
    MEM32(ebp + -4) = 4;
    goto loc_0039A708;

loc_0039A6F8: ;
    MEM32(ebp + -4) = 0xC;
    goto loc_0039A708;

loc_0039A701: ;
    MEM32(ebp + -4) = 0;

loc_0039A708: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039A710
 * Original: 0x0039A710 - 0x0039A743 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xC69068);
    eax = MEM32(eax * 4 + 0xC68E48);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A733; /* je: equal / zero */

loc_0039A72B: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    goto loc_0039A73B;

loc_0039A733: ;
    eax = MEM32(0xC68E44);
    MEM32(ebp + -8) = eax;

loc_0039A73B: ;
    eax = MEM32(ebp + -8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039A750
 * Original: 0x0039A750 - 0x0039B0D6 (2438 bytes, 612 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A750(void)
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

loc_0039A750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0xBC;
    eax = MEM32(ebp + 8);
    eax = 0x8C03F4;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x10C);
    MEM32(ebp + -20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM8(ebp + -137) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0039A795; /* je: equal / zero */

loc_0039A782: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x1EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1EC), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -137) = LO8(eax);

loc_0039A795: ;
    SET_LO8(eax, MEM8(ebp + -137));
    eax = ZX8(LO8(eax));
    eax = eax & 1;
    MEM32(ebp + -68) = eax;
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B88)); /* movd to xmm */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    MEMD(ebp + -152) = xmm1.d[0]; /* movsd */
    xmm2 = xmm1; /* movaps */
    XMM_STORE(ebp + -168, xmm2); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A7E4u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_0039A7E4: ;
    xmm2 = XMM_MEM(ebp + -168); /* movaps */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEM32(ebp + -36) = eax;
    xmm0 = XMM_SCALAR_BITS(MEM32(0xC68B8C)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A81Cu); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_0039A81C: ;
    xmm2 = XMM_MEM(ebp + -168); /* movaps */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEM32(ebp + -32) = eax;
    eax = MEM32(0xC68B88);
    ecx = MEM32(0xC68B90);
    eax = eax + ecx;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A85Du); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_0039A85D: ;
    xmm2 = XMM_MEM(ebp + -168); /* movaps */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    ecx = MEM32(ebp + -36);
    eax = eax - ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(0xC68B8C);
    ecx = MEM32(0xC68B94);
    eax = eax + ecx;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A8A3u); RECOMP_ABI_CALL(0x00399610u, sub_00399610); /* call 0x00399610 */

loc_0039A8A3: ;
    eax = eax - MEM32(ebp + -32);
    MEM32(ebp + -24) = eax;
    eax = ebp + -36;
    xmm1 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_MEM(0xC68754); /* movups */
    xmm0 = XMM_PCMPEQB(xmm0, xmm1); /* pcmpeqb */
    eax = XMM_PMOVMSKB(xmm0); /* pmovmskb */
    eax = eax - 0xFFFF;
    SET_LO8(eax, ((eax != 0)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A910; /* je: equal / zero */

loc_0039A8CE: ;
    eax = MEM32(ebp + -36);
    MEM32(0xC68754) = eax;
    eax = MEM32(ebp + -32);
    MEM32(0xC68758) = eax;
    eax = MEM32(ebp + -28);
    MEM32(0xC6875C) = eax;
    eax = MEM32(ebp + -24);
    MEM32(0xC68760) = eax;
    eax = MEM32(0x969D28);
    edi = MEM32(ebp + -36);
    esi = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    ecx = MEM32(ebp + -24);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A910u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A910: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -40) = eax;
    eax = ebp + -52;
    xmm1 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_MEM(0xC68764); /* movups */
    xmm0 = XMM_PCMPEQB(xmm0, xmm1); /* pcmpeqb */
    eax = XMM_PMOVMSKB(xmm0); /* pmovmskb */
    eax = eax - 0xFFFF;
    SET_LO8(eax, ((eax != 0)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A98F; /* je: equal / zero */

loc_0039A94D: ;
    eax = MEM32(ebp + -52);
    MEM32(0xC68764) = eax;
    eax = MEM32(ebp + -48);
    MEM32(0xC68768) = eax;
    eax = MEM32(ebp + -44);
    MEM32(0xC6876C) = eax;
    eax = MEM32(ebp + -40);
    MEM32(0xC68770) = eax;
    eax = MEM32(0x969CF0);
    edi = MEM32(ebp + -52);
    esi = MEM32(ebp + -48);
    edx = MEM32(ebp + -44);
    ecx = MEM32(ebp + -40);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039A98Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039A98F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    MEM8(ebp + -169) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0039A9AA; /* jle: less or equal (signed <=) */

loc_0039A99D: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(ebp + -169) = LO8(eax);

loc_0039A9AA: ;
    SET_LO8(eax, MEM8(ebp + -169));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = 0xC6874C;
    ecx = ecx + 0x36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xC11;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A9D2u); RECOMP_ABI_CALL(0x0039BEC0u, sub_0039BEC0); /* call 0x0039BEC0 */

loc_0039A9D2: ;
    xmm0 = XMM_SCALAR(MEMF(0xC68B98)); /* movss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xC68B9C)); /* movss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    ecx = ebp + -60;
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 8;
    MEM32(eax) = 0xC68774;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AA06u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0039AA06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AA3F; /* je: equal / zero */

loc_0039AA0B: ;
    eax = MEM32(ebp + -60);
    MEM32(0xC68774) = eax;
    eax = MEM32(ebp + -56);
    MEM32(0xC68778) = eax;
    eax = MEM32(0x969D2C);
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AA3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AA3F: ;
    eax = MEM32(ebp + -68);
    ecx = 0xC6874C;
    ecx = ecx + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xB71;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AA5Fu); RECOMP_ABI_CALL(0x0039BEC0u, sub_0039BEC0); /* call 0x0039BEC0 */

loc_0039AA5F: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AAB9; /* je: equal / zero */

loc_0039AA65: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AA82; /* je: equal / zero */

loc_0039AA71: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0xE4);
    MEM32(ebp + -176) = eax;
    goto loc_0039AA8F;

loc_0039AA82: ;
    eax = 0x200;
    MEM32(ebp + -176) = eax;
    goto loc_0039AA8F;

loc_0039AA8F: ;
    eax = MEM32(ebp + -176);
    MEM32(ebp + -72) = eax;
    eax = MEM32(0xC68784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -72) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AAB7; /* je: equal / zero */

loc_0039AAA2: ;
    eax = MEM32(ebp + -72);
    MEM32(0xC68784) = eax;
    eax = MEM32(0x969D30);
    ecx = MEM32(ebp + -72);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AAB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AAB7: ;
    goto loc_0039AAB9;

loc_0039AAB9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    MEM8(ebp + -177) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0039AADA; /* je: equal / zero */

loc_0039AAC7: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x100), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -177) = LO8(eax);

loc_0039AADA: ;
    SET_LO8(edx, MEM8(ebp + -177));
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    MEM8(ebp + -73) = LO8(eax);
    eax = ZX8(MEM8(0xC68788));
    ecx = ZX8(MEM8(ebp + -73));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AB25; /* je: equal / zero */

loc_0039AAFF: ;
    SET_LO8(eax, MEM8(ebp + -73));
    MEM8(0xC68788) = LO8(eax);
    eax = MEM32(0x969CE0);
    esi = ZX8(MEM8(ebp + -73));
    ecx = 0; /* xor self */
    edx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = edx; /* cmovne */
    ecx = ZX8(LO8(ecx));
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AB25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AB25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM8(ebp + -178) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0039AB46; /* je: equal / zero */

loc_0039AB33: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x1F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1F0), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -178) = LO8(eax);

loc_0039AB46: ;
    SET_LO8(eax, MEM8(ebp + -178));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = 0xC6874C;
    ecx = ecx + 0x31;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xB90;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AB6Eu); RECOMP_ABI_CALL(0x0039BEC0u, sub_0039BEC0); /* call 0x0039BEC0 */

loc_0039AB6E: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039ACF1; /* je: equal / zero */

loc_0039AB78: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x1F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1F0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039ACF1; /* je: equal / zero */

loc_0039AB88: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x118)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x118), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039ABA5; /* je: equal / zero */

loc_0039AB94: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x118);
    MEM32(ebp + -184) = eax;
    goto loc_0039ABB2;

loc_0039ABA5: ;
    eax = 0x200;
    MEM32(ebp + -184) = eax;
    goto loc_0039ABB2;

loc_0039ABB2: ;
    eax = MEM32(ebp + -184);
    MEM32(ebp + -80) = eax;
    eax = MEM32(0xC6878C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -80) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039ABE5; /* jne: not equal / not zero */

loc_0039ABC5: ;
    eax = MEM32(0xC68790);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x11C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x11C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039ABE5; /* jne: not equal / not zero */

loc_0039ABD5: ;
    eax = MEM32(0xC68794);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x120) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AC30; /* je: equal / zero */

loc_0039ABE5: ;
    eax = MEM32(ebp + -80);
    MEM32(0xC6878C) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x11C);
    MEM32(0xC68790) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x120);
    MEM32(0xC68794) = eax;
    eax = MEM32(0x969D34);
    esi = MEM32(ebp + -80);
    ecx = MEM32(ebp + -16);
    edx = MEM32(ecx + 0x11C);
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 0x120);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AC30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AC30: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x1F4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AC41u); RECOMP_ABI_CALL(0x0039BF30u, sub_0039BF30); /* call 0x0039BF30 */

loc_0039AC41: ;
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x110);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AC55u); RECOMP_ABI_CALL(0x0039BF30u, sub_0039BF30); /* call 0x0039BF30 */

loc_0039AC55: ;
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x114);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AC69u); RECOMP_ABI_CALL(0x0039BF30u, sub_0039BF30); /* call 0x0039BF30 */

loc_0039AC69: ;
    MEM32(ebp + -84) = eax;
    ecx = ebp + -92;
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xC;
    MEM32(eax) = 0xC68798;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AC86u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0039AC86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039ACBE; /* je: equal / zero */

loc_0039AC8B: ;
    eax = MEM32(ebp + -92);
    MEM32(0xC68798) = eax;
    eax = MEM32(ebp + -88);
    MEM32(0xC6879C) = eax;
    eax = MEM32(ebp + -84);
    MEM32(0xC687A0) = eax;
    eax = MEM32(0x969D38);
    esi = MEM32(ebp + -92);
    edx = MEM32(ebp + -88);
    ecx = MEM32(ebp + -84);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039ACBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039ACBE: ;
    eax = MEM32(0xC687A4);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x124) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039ACEF; /* je: equal / zero */

loc_0039ACCE: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x124);
    MEM32(0xC687A4) = eax;
    eax = MEM32(0x969CE8);
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 0x124);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039ACEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039ACEF: ;
    goto loc_0039ACF1;

loc_0039ACF1: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0xEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xEC), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = 0xC6874C;
    ecx = ecx + 0x32;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xBE2;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AD20u); RECOMP_ABI_CALL(0x0039BEC0u, sub_0039BEC0); /* call 0x0039BEC0 */

loc_0039AD20: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0xEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xEC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AE4A; /* je: equal / zero */

loc_0039AD30: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x128);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AD41u); RECOMP_ABI_CALL(0x0039BF60u, sub_0039BF60); /* call 0x0039BF60 */

loc_0039AD41: ;
    MEM32(ebp + -96) = eax;
    eax = MEM32(0xC687A8);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xF8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xF8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039AD64; /* jne: not equal / not zero */

loc_0039AD54: ;
    eax = MEM32(0xC687AC);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xFC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AD9A; /* je: equal / zero */

loc_0039AD64: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0xF8);
    MEM32(0xC687A8) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0xFC);
    MEM32(0xC687AC) = eax;
    eax = MEM32(0x969D3C);
    edx = MEM32(0xC687A8);
    ecx = MEM32(0xC687AC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AD9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AD9A: ;
    eax = MEM32(0xC687B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -96) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039ADB9; /* je: equal / zero */

loc_0039ADA4: ;
    eax = MEM32(ebp + -96);
    MEM32(0xC687B0) = eax;
    eax = MEM32(0x969D40);
    ecx = MEM32(ebp + -96);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039ADB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039ADB9: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 0x12C);
    eax = ebp + -112;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039ADD1u); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_0039ADD1: ;
    eax = ebp + -112;
    xmm1 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_MEM(0xC687B4); /* movups */
    xmm0 = XMM_PCMPEQB(xmm0, xmm1); /* pcmpeqb */
    eax = XMM_PMOVMSKB(xmm0); /* pmovmskb */
    eax = eax - 0xFFFF;
    SET_LO8(eax, ((eax != 0)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AE48; /* je: equal / zero */

loc_0039ADF6: ;
    eax = MEM32(ebp + -112);
    MEM32(0xC687B4) = eax;
    eax = MEM32(ebp + -108);
    MEM32(0xC687B8) = eax;
    eax = MEM32(ebp + -104);
    MEM32(0xC687BC) = eax;
    eax = MEM32(ebp + -100);
    MEM32(0xC687C0) = eax;
    eax = MEM32(0x969D44);
    xmm3 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -108)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AE48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AE48: ;
    goto loc_0039AE4A;

loc_0039AE4A: ;
    edx = MEM32(ebp + -20);
    edx = edx & 0x10000;
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    esi = MEM32(ebp + -20);
    esi = esi & 0x100;
    ecx = 0; /* xor self */
    edx = 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = edx; /* cmovne */
    eax = eax | ecx;
    esi = MEM32(ebp + -20);
    esi = esi & 1;
    ecx = 0; /* xor self */
    edx = 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = edx; /* cmovne */
    eax = eax | ecx;
    esi = MEM32(ebp + -20);
    esi = esi & 0x1000000;
    ecx = 0; /* xor self */
    edx = 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = edx; /* cmovne */
    eax = eax | ecx;
    MEM8(ebp + -61) = LO8(eax);
    eax = ZX8(MEM8(0xC687C4));
    ecx = ZX8(MEM8(ebp + -61));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AF35; /* je: equal / zero */

loc_0039AEB7: ;
    SET_LO8(eax, MEM8(ebp + -61));
    MEM8(0xC687C4) = LO8(eax);
    eax = MEM32(0x969CD8);
    ecx = ZX8(MEM8(ebp + -61));
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    SET_HI8(edx, LO8(ecx));
    ecx = ZX8(MEM8(ebp + -61));
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    SET_HI8(ecx, LO8(ecx));
    esi = ZX8(MEM8(ebp + -61));
    esi = esi & 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ebx = ZX8(LO8(ecx));
    SET_LO8(edx, LO8(ebx));
    esi = ZX8(MEM8(ebp + -61));
    esi = esi & 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    ebx = ZX8(LO8(ecx));
    SET_LO8(ecx, LO8(ebx));
    esi = ZX8(HI8(edx));
    MEM32(esp) = esi;
    esi = ZX8(HI8(ecx));
    MEM32(esp + 4) = esi;
    edx = ZX8(LO8(edx));
    MEM32(esp + 8) = edx;
    ecx = ZX8(LO8(ecx));
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AF35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AF35: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1FC), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = 0xC6874C;
    ecx = ecx + 0x33;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xB44;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039AF64u); RECOMP_ABI_CALL(0x0039BEC0u, sub_0039BEC0); /* call 0x0039BEC0 */

loc_0039AF64: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1FC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AFF7; /* je: equal / zero */

loc_0039AF74: ;
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 0x1F8);
    eax = 0x901;
    ecx = 0x900;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x901) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x901 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 0x1FC);
    eax = MEM32(ebp + -16);
    esi = MEM32(eax + 0x1F8);
    eax = 0x405;
    ecx = 0x404;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -120) = eax;
    eax = MEM32(0xC687C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -116) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AFD6; /* je: equal / zero */

loc_0039AFC1: ;
    eax = MEM32(ebp + -116);
    MEM32(0xC687C8) = eax;
    eax = MEM32(0x969D48);
    ecx = MEM32(ebp + -116);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AFD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AFD6: ;
    eax = MEM32(0xC687CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -120) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AFF5; /* je: equal / zero */

loc_0039AFE0: ;
    eax = MEM32(ebp + -120);
    MEM32(0xC687CC) = eax;
    eax = MEM32(0x969D4C);
    ecx = MEM32(ebp + -120);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039AFF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039AFF5: ;
    goto loc_0039AFF7;

loc_0039AFF7: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x144), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = 0xC6874C;
    ecx = ecx + 0x34;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x8037;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B026u); RECOMP_ABI_CALL(0x0039BEC0u, sub_0039BEC0); /* call 0x0039BEC0 */

loc_0039B026: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x144), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B0CB; /* je: equal / zero */

loc_0039B036: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x134);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B047u); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_0039B047: ;
    MEMF(ebp + -136) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    MEMF(ebp + -128) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x138);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B06Bu); RECOMP_ABI_CALL(0x0039BDB0u, sub_0039BDB0); /* call 0x0039BDB0 */

loc_0039B06B: ;
    MEMF(ebp + -132) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    MEMF(ebp + -124) = xmm0.f[0]; /* movss */
    ecx = ebp + -128;
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 8;
    MEM32(eax) = 0xC687D4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B098u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0039B098: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B0C9; /* je: equal / zero */

loc_0039B09D: ;
    eax = MEM32(ebp + -128);
    MEM32(0xC687D4) = eax;
    eax = MEM32(ebp + -124);
    MEM32(0xC687D8) = eax;
    eax = MEM32(0x969D50);
    xmm1 = XMM_SCALAR(MEMF(ebp + -128)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -124)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B0C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B0C9: ;
    goto loc_0039B0CB;

loc_0039B0CB: ;
    esp = esp + 0xBC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0039B0E0
 * Original: 0x0039B0E0 - 0x0039B455 (885 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039B0E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039B0E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x64;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;

loc_0039B0F4: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0039B44F; /* jge: greater or equal (signed >=) */

loc_0039B0FE: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0xC68E20);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B116u); RECOMP_ABI_CALL(0x0039BFE0u, sub_0039BFE0); /* call 0x0039BFE0 */

loc_0039B116: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B19F; /* je: equal / zero */

loc_0039B17E: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B19F; /* je: equal / zero */

loc_0039B187: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B19F; /* je: equal / zero */

loc_0039B18D: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B19F; /* je: equal / zero */

loc_0039B193: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B19F; /* je: equal / zero */

loc_0039B199: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B1E0; /* jne: not equal / not zero */

loc_0039B19F: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xDE1;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B1BCu); RECOMP_ABI_CALL(0x0039C000u, sub_0039C000); /* call 0x0039C000 */

loc_0039B1BC: ;
    edx = MEM32(ebp + -16);
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    SET_LO8(edx, LO8(eax));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM8(eax + ecx + 0xE8) = LO8(edx);
    goto loc_0039B441;

loc_0039B1E0: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B1EEu); RECOMP_ABI_CALL(0x00393D40u, sub_00393D40); /* call 0x00393D40 */

loc_0039B1EE: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B2E7; /* je: equal / zero */

loc_0039B1FB: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -56;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B21Au); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039B21A: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -60) = 0xDE1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B299; /* je: equal / zero */

loc_0039B230: ;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR_BITS(MEM32(eax + 4)); /* movd to xmm */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm2 = xmm1; /* movaps */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm3.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEMF(eax + ecx) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR_BITS(MEM32(eax + 8)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_0039B299: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B2DB; /* jne: not equal / not zero */

loc_0039B29F: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B2DB; /* jne: not equal / not zero */

loc_0039B2A5: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039B2DB; /* jbe: below or equal (unsigned <=) */

loc_0039B2AB: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -52) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B2DB; /* jne: not equal / not zero */

loc_0039B2B6: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B2DB; /* jne: not equal / not zero */

loc_0039B2C1: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    ecx = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B2D6u); RECOMP_ABI_CALL(0x0039C0C0u, sub_0039C0C0); /* call 0x0039C0C0 */

loc_0039B2D6: ;
    MEM32(ebp + -64) = eax;
    goto loc_0039B2E2;

loc_0039B2DB: ;
    MEM32(ebp + -40) = 1;

loc_0039B2E2: ;
    goto loc_0039B3B6;

loc_0039B2E7: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xC68E30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xC68E30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B31B; /* je: equal / zero */

loc_0039B2F4: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0xC68E30);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B31B; /* je: equal / zero */

loc_0039B304: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0xC68E30);
    eax = MEM32(eax + 4);
    eax = eax | 0x80000000u;
    MEM32(ebp + -72) = eax;
    goto loc_0039B322;

loc_0039B31B: ;
    eax = 0; /* xor self */
    MEM32(ebp + -72) = eax;
    goto loc_0039B322;

loc_0039B322: ;
    eax = MEM32(ebp + -72);
    MEM32(ebp + -68) = eax;
    esi = MEM32(ebp + -12);
    edx = MEM32(ebp + -68);
    ecx = ebp + -60;
    eax = ebp + -56;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B348u); RECOMP_ABI_CALL(0x003C0360u, sub_003C0360); /* call 0x003C0360 */

loc_0039B348: ;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B3B4; /* je: equal / zero */

loc_0039B351: ;
    xmm0 = XMM_SCALAR_BITS(MEM32(ebp + -52)); /* movd to xmm */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm2 = xmm1; /* movaps */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm3.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEMF(eax + ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR_BITS(MEM32(ebp + -48)); /* movd to xmm */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_0039B3B4: ;
    goto loc_0039B3B6;

loc_0039B3B6: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + -64);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B3CFu); RECOMP_ABI_CALL(0x0039C000u, sub_0039C000); /* call 0x0039C000 */

loc_0039B3CF: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0xC69E54);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B3E8u); RECOMP_ABI_CALL(0x0039C4B0u, sub_0039C4B0); /* call 0x0039C4B0 */

loc_0039B3E8: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B403u); RECOMP_ABI_CALL(0x0039C500u, sub_0039C500); /* call 0x0039C500 */

loc_0039B403: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8513) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0x8513 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B416; /* jne: not equal / not zero */

loc_0039B40C: ;
    eax = 3;
    MEM32(ebp + -76) = eax;
    goto loc_0039B42F;

loc_0039B416: ;
    edx = MEM32(ebp + -60);
    eax = 1;
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x806F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x806F (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -76) = eax;

loc_0039B42F: ;
    eax = MEM32(ebp + -76);
    SET_LO8(edx, LO8(eax));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM8(eax + ecx + 0xE8) = LO8(edx);

loc_0039B441: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039B0F4;

loc_0039B44F: ;
    esp = esp + 0x64;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039B460
 * Original: 0x0039B460 - 0x0039B9FF (1439 bytes, 390 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039B460(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039B460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x1054;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)0x9E3779B1u);
    eax = eax ^ MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x3FF;
    eax = 0xC7AE00;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -24) = 0;
    _fa = (uint32_t)(MEM32(0xC7ADFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC7ADFC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B4CB; /* je: equal / zero */

loc_0039B4A4: ;
    eax = MEM32(0xC7ADFC);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B4CB; /* jne: not equal / not zero */

loc_0039B4B1: ;
    eax = MEM32(0xC7ADFC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B4CB; /* jne: not equal / not zero */

loc_0039B4BE: ;
    eax = MEM32(0xC7ADFC);
    MEM32(ebp + -8) = eax;
    goto loc_0039B9F3;

loc_0039B4CB: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;

loc_0039B4D3: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B523; /* je: equal / zero */

loc_0039B4D9: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B517; /* jne: not equal / not zero */

loc_0039B4E4: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B517; /* jne: not equal / not zero */

loc_0039B4EF: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B504; /* jne: not equal / not zero */

loc_0039B4F8: ;
    MEM32(ebp + -8) = 0;
    goto loc_0039B9F3;

loc_0039B504: ;
    eax = MEM32(ebp + -20);
    MEM32(0xC7ADFC) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    goto loc_0039B9F3;

loc_0039B517: ;
    goto loc_0039B519;

loc_0039B519: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;
    goto loc_0039B4D3;

loc_0039B523: ;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x29C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B537u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039B537: ;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -20);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -20);
    eax = eax + 0x60;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFF;
    MEM32(esp + 8) = 0x23C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B56Au); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039B56A: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -20);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B588; /* je: equal / zero */

loc_0039B582: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B594; /* jne: not equal / not zero */

loc_0039B588: ;
    MEM32(ebp + -8) = 0;
    goto loc_0039B9F3;

loc_0039B594: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D54); PUSH32(esp, 0x0039B59Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B59A: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x969D58);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B5B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B5B9: ;
    eax = MEM32(0x969D58);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B5D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B5D0: ;
    eax = MEM32(0x969D5C);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B5E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B5E0: ;
    eax = MEM32(0x969D60);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = ebp + -24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x8B82;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B5FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B5FF: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039B65F; /* jne: not equal / not zero */

loc_0039B605: ;
    eax = MEM32(0x969D64);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = ebp + -4124;
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x1000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B631u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B631: ;
    eax = ebp + -4124;
    ecx = 0x474A89;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B649u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039B649: ;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0xC) = 0;
    MEM32(ebp + -8) = 0;
    goto loc_0039B9F3;

loc_0039B65F: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B66Du); RECOMP_ABI_CALL(0x0039BD80u, sub_0039BD80); /* call 0x0039BD80 */

loc_0039B66D: ;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x45853F;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B687u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B687: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x50) = 0xC0;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0039B76F; /* jl: less (signed <) */

loc_0039B6A6: ;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x54) = 1;
    MEM32(ebp + -4128) = 1;

loc_0039B6BA: ;
    _fa = (uint32_t)(MEM32(ebp + -4128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4128), 0xC0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039B76D; /* jae: above or equal (unsigned >=) */

loc_0039B6CA: ;
    edx = ebp + -4144;
    eax = MEM32(ebp + -4128);
    ecx = 0x466657;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x10;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B6F4u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_0039B6F4: ;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = ebp + -4144;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B70Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B70E: ;
    MEM32(ebp + -4148) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4148), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0039B72B; /* jge: greater or equal (signed >=) */

loc_0039B71D: ;
    ecx = MEM32(ebp + -4128);
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x50) = ecx;
    goto loc_0039B76D;

loc_0039B72B: ;
    eax = MEM32(ebp + -4148);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0x10);
    ecx = ecx + MEM32(ebp + -4128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039B757; /* je: equal / zero */

loc_0039B741: ;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x54) = 0;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x50) = 0xC0;
    goto loc_0039B76D;

loc_0039B757: ;
    goto loc_0039B759;

loc_0039B759: ;
    eax = MEM32(ebp + -4128);
    eax = eax + 1;
    MEM32(ebp + -4128) = eax;
    goto loc_0039B6BA;

loc_0039B76D: ;
    goto loc_0039B76F;

loc_0039B76F: ;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x49134B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B789u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B789: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x45533D;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B7ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B7AB: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x4776BB;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B7CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B7CD: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x49135A;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B7EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B7EF: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x488DA2;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B811u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B811: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x444741;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B833u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B833: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x44474D;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B855u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B855: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x493F31;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B877u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B877: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x44722B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B899u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B899: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x48B551;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B8BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B8BB: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x38) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x48E67B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B8DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B8DD: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x48650B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B8FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B8FF: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x40) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x48B561;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B921u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B921: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x44) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x45AF5B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B943u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B943: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x48) = ecx;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = 0x4695BF;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B965u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B965: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x4C) = ecx;
    MEM32(ebp + -28) = 0;

loc_0039B974: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0039B9E5; /* jge: greater or equal (signed >=) */

loc_0039B97A: ;
    edx = ebp + -4156;
    eax = MEM32(ebp + -28);
    ecx = 0x460C97;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039B9A1u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_0039B9A1: ;
    eax = MEM32(0x969D6C);
    MEM32(ebp + -4160) = eax;
    eax = MEM32(0x969D68);
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 0xC);
    ecx = ebp + -4156;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B9C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B9C6: ;
    edx = eax;
    eax = MEM32(ebp + -4160);
    ecx = MEM32(ebp + -28);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039B9DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039B9DA: ;
    eax = MEM32(ebp + -28);
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    goto loc_0039B974;

loc_0039B9E5: ;
    eax = MEM32(ebp + -20);
    MEM32(0xC7ADFC) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;

loc_0039B9F3: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x1054;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BA00
 * Original: 0x0039BA00 - 0x0039BB68 (360 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BA00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039BA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x230;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 0x78), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039BB54; /* jne: not equal / not zero */

loc_0039BA35: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -540) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -536) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BA5D; /* je: equal / zero */

loc_0039BA53: ;
    eax = 0; /* xor self */
    MEM32(ebp + -544) = eax;
    goto loc_0039BA6B;

loc_0039BA5D: ;
    eax = MEM32(0xC68E44);
    eax = MEM32(eax + 0x74);
    MEM32(ebp + -544) = eax;

loc_0039BA6B: ;
    ecx = MEM32(ebp + -536);
    edx = MEM32(ebp + -540);
    eax = MEM32(ebp + -544);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BA8Du); RECOMP_ABI_CALL(0x003AAE20u, sub_003AAE20); /* call 0x003AAE20 */

loc_0039BA8D: ;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -16);
    eax = 0x48D90F;
    MEM32(esp) = 0x8B31;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BAADu); RECOMP_ABI_CALL(0x0039C9D0u, sub_0039C9D0); /* call 0x0039C9D0 */

loc_0039BAAD: ;
    edx = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    MEM32(eax + ecx * 4 + 0x78) = edx;
    _fa = (uint32_t)(MEM32(0xC79EB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79EB4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BB49; /* je: equal / zero */

loc_0039BAC6: ;
    edi = ebp + -528;
    edx = MEM32(0xC79EB4);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    esi = 0x474AAA;
    MEM32(esp) = edi;
    MEM32(esp + 4) = 0x200;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BB01u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_0039BB01: ;
    ecx = ebp + -528;
    eax = 0x48C279;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BB19u); RECOMP_ABI_CALL(0x0041A200u, sub_0041A200); /* call 0x0041A200 */

loc_0039BB19: ;
    MEM32(ebp + -532) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BB47; /* je: equal / zero */

loc_0039BB24: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -532);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BB39u); RECOMP_ABI_CALL(0x0041AE30u, sub_0041AE30); /* call 0x0041AE30 */

loc_0039BB39: ;
    eax = MEM32(ebp + -532);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BB47u); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_0039BB47: ;
    goto loc_0039BB49;

loc_0039BB49: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BB54u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039BB54: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + ecx * 4 + 0x78);
    esp = esp + 0x230;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BB70
 * Original: 0x0039BB70 - 0x0039BD7B (523 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BB70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039BB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x234;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0xC7BE00)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC7BE00), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BBBD; /* je: equal / zero */

loc_0039BB86: ;
    ecx = MEM32(0xC7BE00);
    ecx = ecx + 8;
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0xFC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BBA5u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0039BBA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039BBBD; /* jne: not equal / not zero */

loc_0039BBAA: ;
    eax = MEM32(0xC7BE00);
    eax = MEM32(eax + 0x104);
    MEM32(ebp + -8) = eax;
    goto loc_0039BD6F;

loc_0039BBBD: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BBD0u); RECOMP_ABI_CALL(0x0039CAD0u, sub_0039CAD0); /* call 0x0039CAD0 */

loc_0039BBD0: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x3FF;
    eax = 0xC7BE04;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;

loc_0039BBF2: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BC49; /* je: equal / zero */

loc_0039BBF8: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039BC3D; /* jne: not equal / not zero */

loc_0039BC03: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 8;
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0xFC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BC1Fu); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0039BC1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039BC3D; /* jne: not equal / not zero */

loc_0039BC24: ;
    eax = MEM32(ebp + -20);
    MEM32(0xC7BE00) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x104);
    MEM32(ebp + -8) = eax;
    goto loc_0039BD6F;

loc_0039BC3D: ;
    goto loc_0039BC3F;

loc_0039BC3F: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;
    goto loc_0039BBF2;

loc_0039BC49: ;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BC5Du); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039BC5D: ;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 8;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BC86u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039BC86: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BC91u); RECOMP_ABI_CALL(0x003A8A70u, sub_003A8A70); /* call 0x003A8A70 */

loc_0039BC91: ;
    MEM32(ebp + -24) = eax;
    ecx = MEM32(ebp + -24);
    eax = 0x4831BC;
    MEM32(esp) = 0x8B30;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BCB1u); RECOMP_ABI_CALL(0x0039C9D0u, sub_0039C9D0); /* call 0x0039C9D0 */

loc_0039BCB1: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x104) = ecx;
    _fa = (uint32_t)(MEM32(0xC79EB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC79EB4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BD3E; /* je: equal / zero */

loc_0039BCC5: ;
    esi = ebp + -536;
    ecx = MEM32(0xC79EB4);
    eax = MEM32(ebp + -12);
    edx = 0x4502A0;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0x200;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BCF6u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_0039BCF6: ;
    ecx = ebp + -536;
    eax = 0x48C279;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BD0Eu); RECOMP_ABI_CALL(0x0041A200u, sub_0041A200); /* call 0x0041A200 */

loc_0039BD0E: ;
    MEM32(ebp + -540) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BD3C; /* je: equal / zero */

loc_0039BD19: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -540);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BD2Eu); RECOMP_ABI_CALL(0x0041AE30u, sub_0041AE30); /* call 0x0041AE30 */

loc_0039BD2E: ;
    eax = MEM32(ebp + -540);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BD3Cu); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_0039BD3C: ;
    goto loc_0039BD3E;

loc_0039BD3E: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BD49u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039BD49: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -20);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -20);
    MEM32(0xC7BE00) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x104);
    MEM32(ebp + -8) = eax;

loc_0039BD6F: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x234;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BD80
 * Original: 0x0039BD80 - 0x0039BDAD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BD80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039BD80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC6874C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BDA8; /* je: equal / zero */

loc_0039BD93: ;
    eax = MEM32(ebp + 8);
    MEM32(0xC6874C) = eax;
    eax = MEM32(0x969D70);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039BDA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039BDA8: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BDB0
 * Original: 0x0039BDB0 - 0x0039BDD1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BDB0(void)
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

loc_0039BDB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
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
 * sub_0039BDE0
 * Original: 0x0039BDE0 - 0x0039BE5E (126 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BDE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039BDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0039BE1C; /* jl: less (signed <) */

loc_0039BDF9: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    _shift_result = RECOMP_SHIFT(esi, 2, 32, 0, NULL, &_shift_of);
    esi = _shift_result;
    _shift_result = RECOMP_SHIFT(esi, 2, 32, 0, NULL, &_shift_of);
    esi = _shift_result;
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BE17u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0039BE17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039BE1E; /* jne: not equal / not zero */

loc_0039BE1C: ;
    goto loc_0039BE58;

loc_0039BE1E: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039BE3Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039BE3D: ;
    eax = MEM32(0x969CC0);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039BE58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039BE58: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BE60
 * Original: 0x0039BE60 - 0x0039BEB7 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BE60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039BE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0039BE8C; /* jl: less (signed <) */

loc_0039BE77: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0x10);
    eax = eax - ecx;
    SET_LO8(eax, ((eax != 0)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039BE8E; /* jne: not equal / not zero */

loc_0039BE8C: ;
    goto loc_0039BEB2;

loc_0039BE8E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(0x969D74);
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039BEB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039BEB2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BEC0
 * Original: 0x0039BEC0 - 0x0039BF21 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BEC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039BEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    ecx = ZX8(MEM8(ebp + -1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039BEF2; /* jne: not equal / not zero */

loc_0039BEF0: ;
    goto loc_0039BF1C;

loc_0039BEF2: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    eax = MEM32(ebp + 8);
    MEM8(eax) = LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BF0F; /* je: equal / zero */

loc_0039BF00: ;
    eax = MEM32(0x969C80);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039BF0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039BF0D: ;
    goto loc_0039BF1C;

loc_0039BF0F: ;
    eax = MEM32(0x969CF8);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039BF1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039BF1C: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BF30
 * Original: 0x0039BF30 - 0x0039BF54 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BF30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039BF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039BF45; /* je: equal / zero */

loc_0039BF3D: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0039BF4C;

loc_0039BF45: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_0039BF4C;

loc_0039BF4C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BF60
 * Original: 0x0039BF60 - 0x0039BFDB (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BF60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0039BF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x8007)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039BFBA; /* je: equal / zero */

loc_0039BF76: ;
    goto loc_0039BF78;

loc_0039BF78: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x8008)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039BFC3; /* je: equal / zero */

loc_0039BF82: ;
    goto loc_0039BF84;

loc_0039BF84: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x800A)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039BFA8; /* je: equal / zero */

loc_0039BF8E: ;
    goto loc_0039BF90;

loc_0039BF90: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x800B)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039BFB1; /* je: equal / zero */

loc_0039BF9A: ;
    goto loc_0039BF9C;

loc_0039BF9C: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xF005)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039BFB1; /* je: equal / zero */

loc_0039BFA6: ;
    goto loc_0039BFCC;

loc_0039BFA8: ;
    MEM32(ebp + -4) = 0x800A;
    goto loc_0039BFD3;

loc_0039BFB1: ;
    MEM32(ebp + -4) = 0x800B;
    goto loc_0039BFD3;

loc_0039BFBA: ;
    MEM32(ebp + -4) = 0x8007;
    goto loc_0039BFD3;

loc_0039BFC3: ;
    MEM32(ebp + -4) = 0x8008;
    goto loc_0039BFD3;

loc_0039BFCC: ;
    MEM32(ebp + -4) = 0x8006;

loc_0039BFD3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039BFE0
 * Original: 0x0039BFE0 - 0x0039BFF6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039BFE0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039BFE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(0x8C05C4);
    ecx = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)5);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x1F;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C000
 * Original: 0x0039C000 - 0x0039C0BE (190 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039C000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8513) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x8513 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039C022; /* jne: not equal / not zero */

loc_0039C018: ;
    eax = 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039C038;

loc_0039C022: ;
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x806F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x806F (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -8) = eax;

loc_0039C038: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    eax = 0xC6874C;
    eax = eax + 0x94;
    ecx = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)0xC);
    eax = eax + ecx;
    ecx = MEM32(ebp + -4);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039C05C; /* jne: not equal / not zero */

loc_0039C05A: ;
    goto loc_0039C0B9;

loc_0039C05C: ;
    eax = MEM32(0xC687DC);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x84C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039C08B; /* je: equal / zero */

loc_0039C06E: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x84C0;
    MEM32(0xC687DC) = eax;
    eax = MEM32(0x969D78);
    ecx = MEM32(0xC687DC);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C08Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C08B: ;
    edx = MEM32(ebp + 0x10);
    eax = 0xC6874C;
    eax = eax + 0x94;
    ecx = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)0xC);
    eax = eax + ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(0x969D08);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C0B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C0B9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C0C0
 * Original: 0x0039C0C0 - 0x0039C4A4 (996 bytes, 290 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C0C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0039C0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x60)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = 0;
    eax = MEM32(0xC7AD40);
    MEM32(ebp + -12) = eax;

loc_0039C0DD: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C126; /* je: equal / zero */

loc_0039C0E3: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C11A; /* jne: not equal / not zero */

loc_0039C0EE: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C11A; /* jne: not equal / not zero */

loc_0039C0FC: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C11A; /* jne: not equal / not zero */

loc_0039C10A: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C11A; /* jne: not equal / not zero */

loc_0039C118: ;
    goto loc_0039C126;

loc_0039C11A: ;
    goto loc_0039C11C;

loc_0039C11C: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    goto loc_0039C0DD;

loc_0039C126: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C2CA; /* jne: not equal / not zero */

loc_0039C130: ;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C144u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039C144: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(0x969D04);
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0x14;
    MEM32(esp) = 1;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C18Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C18C: ;
    eax = MEM32(0x969D08);
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 0x14);
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C1A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C1A4: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = 0x813C;
    MEM32(esp + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D0C); PUSH32(esp, 0x0039C1C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C1C3: ;
    eax = MEM32(0x969D0C);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x10);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = 0x813D;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C1E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C1E6: ;
    MEM32(ebp + -16) = 0;

loc_0039C1ED: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0039C2B7; /* jae: above or equal (unsigned >=) */

loc_0039C1FC: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C21C; /* je: equal / zero */

loc_0039C20C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -44) = eax;
    goto loc_0039C226;

loc_0039C21C: ;
    eax = 1;
    MEM32(ebp + -44) = eax;
    goto loc_0039C226;

loc_0039C226: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C24C; /* je: equal / zero */

loc_0039C23C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -48) = eax;
    goto loc_0039C256;

loc_0039C24C: ;
    eax = 1;
    MEM32(ebp + -48) = eax;
    goto loc_0039C256;

loc_0039C256: ;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -28) = eax;
    eax = MEM32(0x969D10);
    esi = MEM32(ebp + -16);
    edx = MEM32(ebp + -24);
    ecx = MEM32(ebp + -28);
    edi = 0; /* xor self */
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = 0x8058;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x80E1;
    MEM32(esp + 0x1C) = 0x1401;
    MEM32(esp + 0x20) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C2A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C2A9: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_0039C1ED;

loc_0039C2B7: ;
    ecx = MEM32(0xC7AD40);
    eax = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -12);
    MEM32(0xC7AD40) = eax;

loc_0039C2CA: ;
    MEM32(ebp + -16) = 0;

loc_0039C2D1: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0039C408; /* jae: above or equal (unsigned >=) */

loc_0039C2E0: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C300; /* je: equal / zero */

loc_0039C2F0: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -52) = eax;
    goto loc_0039C30A;

loc_0039C300: ;
    eax = 1;
    MEM32(ebp + -52) = eax;
    goto loc_0039C30A;

loc_0039C30A: ;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C330; /* je: equal / zero */

loc_0039C320: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -56) = eax;
    goto loc_0039C33A;

loc_0039C330: ;
    eax = 1;
    MEM32(ebp + -56) = eax;
    goto loc_0039C33A;

loc_0039C33A: ;
    eax = MEM32(ebp + -56);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -60) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C358u); RECOMP_ABI_CALL(0x003C0100u, sub_003C0100); /* call 0x003C0100 */

loc_0039C358: ;
    ecx = eax;
    eax = MEM32(ebp + -60);
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C367u); RECOMP_ABI_CALL(0x00393D40u, sub_00393D40); /* call 0x00393D40 */

loc_0039C367: ;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C39C; /* je: equal / zero */

loc_0039C370: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C39C; /* jne: not equal / not zero */

loc_0039C37B: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C39C; /* jne: not equal / not zero */

loc_0039C386: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C39C; /* jne: not equal / not zero */

loc_0039C391: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C39E; /* je: equal / zero */

loc_0039C39C: ;
    goto loc_0039C408;

loc_0039C39E: ;
    eax = MEM32(ebp + -40);
    edi = MEM32(eax + 0x10);
    eax = MEM32(ebp + -12);
    esi = MEM32(eax + 0x14);
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C3CBu); RECOMP_ABI_CALL(0x0039C860u, sub_0039C860); /* call 0x0039C860 */

loc_0039C3CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039C3F1; /* jne: not equal / not zero */

loc_0039C3D0: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0x10);
    edx = 0x471DF7;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C3EFu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039C3EF: ;
    goto loc_0039C408;

loc_0039C3F1: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_0039C2D1;

loc_0039C408: ;
    eax = MEM32(0x969D08);
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 0x14);
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C420u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C420: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0039C492; /* jae: above or equal (unsigned >=) */

loc_0039C42B: ;
    eax = MEM32(0x969D0C);
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039C444; /* je: equal / zero */

loc_0039C439: ;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -68) = eax;
    goto loc_0039C44B;

loc_0039C444: ;
    eax = 0; /* xor self */
    MEM32(ebp + -68) = eax;
    goto loc_0039C44B;

loc_0039C44B: ;
    eax = MEM32(ebp + -64);
    ecx = MEM32(ebp + -68);
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = 0x813C;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C466u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C466: ;
    MEM32(esp) = 0xDE1;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D7C); PUSH32(esp, 0x0039C473u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C473: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0xDE1;
    MEM32(esp + 4) = 0x813C;
    MEM32(esp + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D0C); PUSH32(esp, 0x0039C492u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C492: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C497u); RECOMP_ABI_CALL(0x00393BD0u, sub_00393BD0); /* call 0x00393BD0 */

loc_0039C497: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x14);
    esp = esp + 0x60;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C4B0
 * Original: 0x0039C4B0 - 0x0039C4F1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C4B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039C4B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0xC68810);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039C4EC; /* je: equal / zero */

loc_0039C4CB: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC68810) = ecx;
    eax = MEM32(0x969D80);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C4ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C4EC: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C500
 * Original: 0x0039C500 - 0x0039C858 (856 bytes, 244 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C500(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039C500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x94;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0xC69E54);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = 0x969A60;
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x38);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039C548; /* je: equal / zero */

loc_0039C53D: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x3C);
    MEM32(ebp + -84) = eax;
    goto loc_0039C54F;

loc_0039C548: ;
    eax = 0; /* xor self */
    MEM32(ebp + -84) = eax;
    goto loc_0039C54F;

loc_0039C54F: ;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x28);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x30);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x40);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x44);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x48);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x74);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xC7ADEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xC7ADEC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039C5E2; /* je: equal / zero */

loc_0039C5B6: ;
    ecx = 0xC7AD4C;
    eax = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)0x28);
    ecx = ecx + eax;
    edx = ebp + -80;
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C5D8u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0039C5D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039C5E2; /* jne: not equal / not zero */

loc_0039C5DD: ;
    goto loc_0039C84F;

loc_0039C5E2: ;
    ecx = 0xC7AD4C;
    eax = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)0x28);
    ecx = ecx + eax;
    eax = ebp + -80;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C605u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039C605: ;
    eax = MEM32(ebp + 8);
    MEM32(eax * 4 + 0xC7ADEC) = 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039C647; /* jne: not equal / not zero */

loc_0039C619: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039C629; /* jne: not equal / not zero */

loc_0039C61F: ;
    eax = 0x2600;
    MEM32(ebp + -88) = eax;
    goto loc_0039C63F;

loc_0039C629: ;
    edx = MEM32(ebp + -20);
    eax = 0x2702;
    ecx = 0x2700;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -88) = eax;

loc_0039C63F: ;
    eax = MEM32(ebp + -88);
    MEM32(ebp + -24) = eax;
    goto loc_0039C673;

loc_0039C647: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039C657; /* jne: not equal / not zero */

loc_0039C64D: ;
    eax = 0x2601;
    MEM32(ebp + -92) = eax;
    goto loc_0039C66D;

loc_0039C657: ;
    edx = MEM32(ebp + -20);
    eax = 0x2703;
    ecx = 0x2701;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -92) = eax;

loc_0039C66D: ;
    eax = MEM32(ebp + -92);
    MEM32(ebp + -24) = eax;

loc_0039C673: ;
    eax = MEM32(0x969D84);
    edx = MEM32(ebp + -8);
    esi = MEM32(ebp + -24);
    ecx = esp;
    MEM32(ecx + 8) = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 0x2801;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C68Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C68E: ;
    eax = MEM32(0x969D84);
    esi = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 0x34);
    ecx = ecx - 1;
    SET_LO8(ecx, ((ecx == 0)) ? 1 : 0); /* sete */
    edx = ZX8(LO8(ecx));
    edx = edx ^ 0x2601;
    ecx = esp;
    MEM32(ecx) = esi;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 4) = 0x2800;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C6BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C6BB: ;
    eax = MEM32(0x969D84);
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x28);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C6D8u); RECOMP_ABI_CALL(0x0039C960u, sub_0039C960); /* call 0x0039C960 */

loc_0039C6D8: ;
    edx = MEM32(ebp + -116);
    esi = eax;
    eax = MEM32(ebp + -112);
    ecx = esp;
    MEM32(ecx + 8) = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 0x2802;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C6F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C6F0: ;
    eax = MEM32(0x969D84);
    MEM32(ebp + -104) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -108) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x2C);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C70Du); RECOMP_ABI_CALL(0x0039C960u, sub_0039C960); /* call 0x0039C960 */

loc_0039C70D: ;
    edx = MEM32(ebp + -108);
    esi = eax;
    eax = MEM32(ebp + -104);
    ecx = esp;
    MEM32(ecx + 8) = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 0x2803;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C725u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C725: ;
    eax = MEM32(0x969D84);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -100) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C742u); RECOMP_ABI_CALL(0x0039C960u, sub_0039C960); /* call 0x0039C960 */

loc_0039C742: ;
    edx = MEM32(ebp + -100);
    esi = eax;
    eax = MEM32(ebp + -96);
    ecx = esp;
    MEM32(ecx + 8) = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 0x8072;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C75Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C75A: ;
    eax = MEM32(0x969D88);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR_BITS(MEM32(edx + 0x44)); /* movd to xmm */
    xmm1 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x813A;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C798u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C798: ;
    _fa = (uint32_t)(MEM32(0x969C6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C6C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039C815; /* je: equal / zero */

loc_0039C7A1: ;
    eax = MEM32(0x969D88);
    MEM32(ebp + -124) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -120) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039C7E8; /* jne: not equal / not zero */

loc_0039C7B5: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039C7E8; /* jbe: below or equal (unsigned <=) */

loc_0039C7BE: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR_BITS(MEM32(eax + 0x48)); /* movd to xmm */
    xmm1 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -128) = xmm0.f[0]; /* movss */
    goto loc_0039C7F7;

loc_0039C7E8: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -128) = xmm0.f[0]; /* movss */
    goto loc_0039C7F7;

loc_0039C7F7: ;
    eax = MEM32(ebp + -124);
    ecx = MEM32(ebp + -120);
    xmm0 = XMM_SCALAR(MEMF(ebp + -128)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x84FE;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C815u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C815: ;
    _fa = (uint32_t)(MEM32(0x969C68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C68), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039C84F; /* je: equal / zero */

loc_0039C81E: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x74);
    eax = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C833u); RECOMP_ABI_CALL(0x00398E60u, sub_00398E60); /* call 0x00398E60 */

loc_0039C833: ;
    eax = MEM32(0x969D8C);
    edx = MEM32(ebp + -8);
    ecx = ebp + -40;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x1004;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C84Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C84F: ;
    esp = esp + 0x94;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C860
 * Original: 0x0039C860 - 0x0039C927 (199 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C860(void)
{
    uint32_t ebp = g_ebp;

loc_0039C860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(0x969C60);
    MEM32(ebp + -56) = eax;
    eax = MEM32(0x969D90);
    MEM32(ebp + -52) = eax;
    eax = MEM32(0x969C80);
    MEM32(ebp + -48) = eax;
    eax = MEM32(0x969CF8);
    MEM32(ebp + -44) = eax;
    eax = MEM32(0x969D18);
    MEM32(ebp + -40) = eax;
    eax = MEM32(0x969CFC);
    MEM32(ebp + -36) = eax;
    eax = MEM32(0x969D1C);
    MEM32(ebp + -32) = eax;
    eax = MEM32(0x969D94);
    MEM32(ebp + -28) = eax;
    eax = 0x39C930;
    MEM32(ebp + -24) = eax;
    eax = MEM32(0x969D24);
    MEM32(ebp + -20) = eax;
    eax = MEM32(0x969D00);
    MEM32(ebp + -16) = eax;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -60) = eax;
    eax = ebp + -56;
    MEM32(ebp + -64) = eax;
    ebx = 0xC7AD44;
    eax = 0; /* xor self */
    eax = MEM32(ebp + -64);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -60);
    MEM32(esp + 4) = ebx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039C91Fu); RECOMP_ABI_CALL(0x70000010u, halo_gl41_copy_image_2d); /* call 0x70000010 */

loc_0039C91F: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C930
 * Original: 0x0039C930 - 0x0039C952 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C930(void)
{
    uint32_t ebp = g_ebp;

loc_0039C930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = ebp + 8;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969D20); PUSH32(esp, 0x0039C94Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C94D: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C960
 * Original: 0x0039C960 - 0x0039C9C8 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0039C960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;
    MEM32(ebp + -8) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_0039C9B9; /* ja: above (unsigned >) */

loc_0039C977: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0x4CF7A8);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0039C983u) goto loc_0039C983;
    if (_jt == 0x0039C98Cu) goto loc_0039C98C;
    if (_jt == 0x0039C995u) goto loc_0039C995;
    if (_jt == 0x0039C9B0u) goto loc_0039C9B0;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0039C983: ;
    MEM32(ebp + -4) = 0x8370;
    goto loc_0039C9C0;

loc_0039C98C: ;
    MEM32(ebp + -4) = 0x812F;
    goto loc_0039C9C0;

loc_0039C995: ;
    edx = MEM32(0x969C68);
    eax = 0x812F;
    ecx = 0x812D;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -4) = eax;
    goto loc_0039C9C0;

loc_0039C9B0: ;
    MEM32(ebp + -4) = 0x812F;
    goto loc_0039C9C0;

loc_0039C9B9: ;
    MEM32(ebp + -4) = 0x2901;

loc_0039C9C0: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039C9D0
 * Original: 0x0039C9D0 - 0x0039CAC6 (246 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039C9D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039C9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x1024;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(0x969D98);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039C9F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039C9F0: ;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = 0;
    eax = MEM32(0x969D9C);
    edx = MEM32(ebp + -12);
    ecx = ebp + 0xC;
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039CA20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039CA20: ;
    eax = MEM32(0x969DA0);
    ecx = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039CA2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039CA2D: ;
    eax = MEM32(0x969DA4);
    edx = MEM32(ebp + -12);
    ecx = ebp + -16;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x8B81;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039CA49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039CA49: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039CAB4; /* jne: not equal / not zero */

loc_0039CA4F: ;
    eax = MEM32(0x969DA8);
    edx = MEM32(ebp + -12);
    ecx = ebp + -4112;
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x1000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039CA78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039CA78: ;
    edx = MEM32(ebp + 0x10);
    ecx = ebp + -4112;
    eax = MEM32(ebp + 0xC);
    esi = 0x4695CD;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039CA9Eu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039CA9E: ;
    eax = MEM32(0x969DAC);
    ecx = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039CAABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039CAAB: ;
    MEM32(ebp + -8) = 0;
    goto loc_0039CABA;

loc_0039CAB4: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -8) = eax;

loc_0039CABA: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x1024;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039CAD0
 * Original: 0x0039CAD0 - 0x0039CB24 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039CAD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039CAD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0x811C9DC5u;
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + 0xC) = eax;

loc_0039CAF2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039CB1C; /* je: equal / zero */

loc_0039CAF8: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    edx = ecx;
    edx = edx + 4;
    MEM32(ebp + -4) = edx;
    eax = eax ^ MEM32(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1000193);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = eax;
    goto loc_0039CAF2;

loc_0039CB1C: ;
    eax = MEM32(ebp + -8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039CB30
 * Original: 0x0039CB30 - 0x0039CB9D (109 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039CB30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039CB30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;

loc_0039CB43: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x70) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039CB8E; /* jae: above or equal (unsigned >=) */

loc_0039CB4E: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x10;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)6);
    eax = eax + ecx;
    eax = ZX8(MEM8(eax + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039CB81; /* jne: not equal / not zero */

loc_0039CB63: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x10;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)6);
    eax = eax + ecx;
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039CB81; /* jne: not equal / not zero */

loc_0039CB78: ;
    MEM32(ebp + -4) = 1;
    goto loc_0039CB95;

loc_0039CB81: ;
    goto loc_0039CB83;

loc_0039CB83: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039CB43;

loc_0039CB8E: ;
    MEM32(ebp + -4) = 0;

loc_0039CB95: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039CBA0
 * Original: 0x0039CBA0 - 0x0039CBFB (91 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039CBA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039CBA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC69E48);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039CBF6; /* jbe: below or equal (unsigned <=) */

loc_0039CBB8: ;
    eax = MEM32(0xC69E28);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039CBC5u); RECOMP_ABI_CALL(0x0039D0B0u, sub_0039D0B0); /* call 0x0039D0B0 */

loc_0039CBC5: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x8892;
    MEM32(esp + 4) = 0x1000000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x88E0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C94); PUSH32(esp, 0x0039CBECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039CBEC: ;
    MEM32(0xC69E48) = 0;

loc_0039CBF6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039CC00
 * Original: 0x0039CC00 - 0x0039CD77 (375 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039CC00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039CC00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -72) = 0;
    MEM32(ebp + -76) = 0;

loc_0039CC23: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x70) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039CC78; /* jae: above or equal (unsigned >=) */

loc_0039CC2E: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x10;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -76) * (int32_t)6);
    eax = eax + ecx;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -84);
    eax = ZX8(MEM8(eax + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039CC6B; /* jne: not equal / not zero */

loc_0039CC49: ;
    eax = MEM32(ebp + -84);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039CC6B; /* jne: not equal / not zero */

loc_0039CC55: ;
    eax = MEM32(ebp + -84);
    ecx = ZX16(MEM16(eax + 4));
    eax = MEM32(ebp + -72);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -72) = edx;
    MEM32(ebp + eax * 4 + -68) = ecx;

loc_0039CC6B: ;
    goto loc_0039CC6D;

loc_0039CC6D: ;
    eax = MEM32(ebp + -76);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    goto loc_0039CC23;

loc_0039CC78: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039CC84; /* je: equal / zero */

loc_0039CC7E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039CC9E; /* jne: not equal / not zero */

loc_0039CC84: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039CC96u); RECOMP_ABI_CALL(0x00398970u, sub_00398970); /* call 0x00398970 */

loc_0039CC96: ;
    MEM32(ebp + -4) = eax;
    goto loc_0039CD6F;

loc_0039CC9E: ;
    eax = MEM32(0xC7CE08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039CCD4; /* jae: above or equal (unsigned >=) */

loc_0039CCA8: ;
    eax = MEM32(0xC7CE04);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039CCB5u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039CCB5: ;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x10000;
    MEM32(0xC7CE08) = eax;
    eax = MEM32(0xC7CE08);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039CCCFu); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_0039CCCF: ;
    MEM32(0xC7CE04) = eax;

loc_0039CCD4: ;
    edx = MEM32(0xC7CE04);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039CCF0u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039CCF0: ;
    MEM32(ebp + -80) = 0;

loc_0039CCF7: ;
    eax = MEM32(ebp + -80);
    eax = eax + MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0039CD57; /* ja: above (unsigned >) */

loc_0039CD02: ;
    MEM32(ebp + -76) = 0;

loc_0039CD09: ;
    eax = MEM32(ebp + -76);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -72) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039CD4A; /* jae: above or equal (unsigned >=) */

loc_0039CD11: ;
    eax = MEM32(0xC7CE04);
    eax = eax + MEM32(ebp + -80);
    ecx = MEM32(ebp + -76);
    eax = eax + MEM32(ebp + ecx * 4 + -68);
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + -88);
    SET_LO8(eax, MEM8(eax));
    MEM8(ebp + -89) = LO8(eax);
    eax = MEM32(ebp + -88);
    SET_LO8(ecx, MEM8(eax + 2));
    eax = MEM32(ebp + -88);
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + -89));
    eax = MEM32(ebp + -88);
    MEM8(eax + 2) = LO8(ecx);
    eax = MEM32(ebp + -76);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    goto loc_0039CD09;

loc_0039CD4A: ;
    goto loc_0039CD4C;

loc_0039CD4C: ;
    eax = MEM32(ebp + 0x18);
    eax = eax + MEM32(ebp + -80);
    MEM32(ebp + -80) = eax;
    goto loc_0039CCF7;

loc_0039CD57: ;
    ecx = MEM32(0xC7CE04);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039CD6Cu); RECOMP_ABI_CALL(0x00398970u, sub_00398970); /* call 0x00398970 */

loc_0039CD6C: ;
    MEM32(ebp + -4) = eax;

loc_0039CD6F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x68;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039CD80
 * Original: 0x0039CD80 - 0x0039CF7D (509 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039CD80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0039CD80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 0;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 2));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFEFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFEFu;
    MEM32(ebp + -4) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x61));
    eax = eax - 0x61;
    if ((!_cf && eax != 0)) goto loc_0039CF66; /* ja: above (unsigned >) */

loc_0039CDAC: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax * 4 + 0x4CF7B8);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0039CDB8u) goto loc_0039CDB8;
    if (_jt == 0x0039CDCFu) goto loc_0039CDCF;
    if (_jt == 0x0039CDE6u) goto loc_0039CDE6;
    if (_jt == 0x0039CDFDu) goto loc_0039CDFD;
    if (_jt == 0x0039CE14u) goto loc_0039CE14;
    if (_jt == 0x0039CE31u) goto loc_0039CE31;
    if (_jt == 0x0039CE48u) goto loc_0039CE48;
    if (_jt == 0x0039CE5Fu) goto loc_0039CE5F;
    if (_jt == 0x0039CE76u) goto loc_0039CE76;
    if (_jt == 0x0039CE8Du) goto loc_0039CE8D;
    if (_jt == 0x0039CEAAu) goto loc_0039CEAA;
    if (_jt == 0x0039CEC7u) goto loc_0039CEC7;
    if (_jt == 0x0039CEE4u) goto loc_0039CEE4;
    if (_jt == 0x0039CEFEu) goto loc_0039CEFE;
    if (_jt == 0x0039CF18u) goto loc_0039CF18;
    if (_jt == 0x0039CF32u) goto loc_0039CF32;
    if (_jt == 0x0039CF4Cu) goto loc_0039CF4C;
    if (_jt == 0x0039CF66u) goto loc_0039CF66;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0039CDB8: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 1;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1406;
    goto loc_0039CF78;

loc_0039CDCF: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 2;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1406;
    goto loc_0039CF78;

loc_0039CDE6: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 3;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1406;
    goto loc_0039CF78;

loc_0039CDFD: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1406;
    goto loc_0039CF78;

loc_0039CE14: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1401;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CE31: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 1;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    goto loc_0039CF78;

loc_0039CE48: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 2;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    goto loc_0039CF78;

loc_0039CE5F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 3;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    goto loc_0039CF78;

loc_0039CE76: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    goto loc_0039CF78;

loc_0039CE8D: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 1;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CEAA: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 2;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CEC7: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 3;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CEE4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1402;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CEFE: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 1;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1401;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CF18: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 2;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1401;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CF32: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 3;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1401;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CF4C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1401;
    eax = MEM32(ebp + 0x14);
    MEM8(eax) = 1;
    goto loc_0039CF78;

loc_0039CF66: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1406;

loc_0039CF78: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039CF80
 * Original: 0x0039CF80 - 0x0039D0A2 (290 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039CF80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039CF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 0xC68828));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039CFC7; /* je: equal / zero */

loc_0039CFAF: ;
    eax = MEM32(ebp + 8);
    MEM8(eax + 0xC68828) = 0;
    eax = MEM32(0x969DB0);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039CFC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039CFC7: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 0xC689B8));
    ecx = ZX8(MEM8(ebp + -1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039D019; /* jne: not equal / not zero */

loc_0039CFDA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D014; /* je: equal / zero */

loc_0039CFE0: ;
    ecx = MEM32(ebp + 8);
    eax = 0xC6874C;
    eax = eax + 0x27C;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(ecx); /* movups */
    xmm0 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_PCMPEQB(xmm0, xmm1); /* pcmpeqb */
    eax = XMM_PMOVMSKB(xmm0); /* pmovmskb */
    eax = eax - 0xFFFF;
    SET_LO8(eax, ((eax != 0)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039D019; /* jne: not equal / not zero */

loc_0039D014: ;
    goto loc_0039D09D;

loc_0039D019: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    eax = MEM32(ebp + 8);
    MEM8(eax + 0xC689B8) = LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D06E; /* je: equal / zero */

loc_0039D02C: ;
    ecx = MEM32(ebp + 8);
    eax = 0xC6874C;
    eax = eax + 0x27C;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x969CA0);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D06Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D06C: ;
    goto loc_0039D09D;

loc_0039D06E: ;
    eax = MEM32(0x969DB4);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D09Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D09D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

