/* Generated ELF translation shard 14: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_00148540
 * Original: 0x00148540 - 0x0014858B (75 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148540(void)
{
    uint32_t ebp = g_ebp;

loc_00148540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(0xBCDB58);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x208);
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x200) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x204) = xmm0.f[0]; /* movss */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148590
 * Original: 0x00148590 - 0x0014863D (173 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM16(ebp + -2) = 0;

loc_0014859C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001485D1; /* jge: greater or equal (signed >=) */

loc_001485A5: ;
    eax = 0; /* xor self */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001485C3u); RECOMP_ABI_CALL(0x0016B260u, sub_0016B260); /* call 0x0016B260 */

loc_001485C3: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_0014859C;

loc_001485D1: ;
    eax = MEM32(0xBCDB58);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x82C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001485F0u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_001485F0: ;
    MEM32(ebp + -8) = 0;

loc_001485F7: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00148638; /* jge: greater or equal (signed >=) */

loc_001485FD: ;
    eax = MEM32(ebp + -8);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148609u); RECOMP_ABI_CALL(0x0016B140u, sub_0016B140); /* call 0x0016B140 */

loc_00148609: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014862B; /* je: equal / zero */

loc_0014860D: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014862Bu); RECOMP_ABI_CALL(0x0016B260u, sub_0016B260); /* call 0x0016B260 */

loc_0014862B: ;
    goto loc_0014862D;

loc_0014862D: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_001485F7;

loc_00148638: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148640
 * Original: 0x00148640 - 0x00148785 (325 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    MEM16(ebp + -2) = 0;

loc_0014864C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00148780; /* jge: greater or equal (signed >=) */

loc_00148659: ;
    eax = MEM32(0xBCDB58);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x208);
    eax = eax + ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148678u); RECOMP_ABI_CALL(0x00148790u, sub_00148790); /* call 0x00148790 */

loc_00148678: ;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = 0;

loc_00148682: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001486B3; /* jge: greater or equal (signed >=) */

loc_00148688: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + ecx * 4 + 0x1E0); /* addss */
    MEMF(eax + ecx * 4 + 0x1E0) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_00148682;

loc_001486B3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001486BFu); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_001486BF: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014874F; /* je: equal / zero */

loc_001486CC: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -20);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001486E1u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_001486E1: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014874D; /* je: equal / zero */

loc_001486EE: ;
    eax = MEM32(ebp + -24);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001486FAu); RECOMP_ABI_CALL(0x0018AEA0u, sub_0018AEA0); /* call 0x0018AEA0 */

loc_001486FA: ;
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148703u); RECOMP_ABI_CALL(0x0018B420u, sub_0018B420); /* call 0x0018B420 */

loc_00148703: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014872D; /* jne: not equal / not zero */

loc_00148707: ;
    eax = MEM32(ebp + -24);
    SET_LO16(ecx, LO16(eax));
    SET_LO16(eax, MEM16(ebp + -16));
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(LO16(eax));
    MEM32(esp + 4) = eax;
    eax = ZX16(MEM16(ebp + -14));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014872Bu); RECOMP_ABI_CALL(0x0016B260u, sub_0016B260); /* call 0x0016B260 */

loc_0014872B: ;
    goto loc_0014874B;

loc_0014872D: ;
    eax = MEM32(ebp + -24);
    ecx = 0; /* xor self */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014874Bu); RECOMP_ABI_CALL(0x0016B260u, sub_0016B260); /* call 0x0016B260 */

loc_0014874B: ;
    goto loc_0014874D;

loc_0014874D: ;
    goto loc_0014876D;

loc_0014874F: ;
    eax = 0; /* xor self */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014876Du); RECOMP_ABI_CALL(0x0016B260u, sub_0016B260); /* call 0x0016B260 */

loc_0014876D: ;
    goto loc_0014876F;

loc_0014876F: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_0014864C;

loc_00148780: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148790
 * Original: 0x00148790 - 0x00148A69 (729 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148790(void)
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

loc_00148790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x200)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x204)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEM32(ebp + -20) = 0;

loc_001487C0: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001488FE; /* jge: greater or equal (signed >=) */

loc_001487CA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4 + 0x1E0)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    MEM32(ebp + -24) = 0;

loc_001487E5: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001488EE; /* jge: greater or equal (signed >=) */

loc_001487EF: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -20) * (int32_t)0x3C);
    eax = eax + ecx;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -24) * (int32_t)0x14);
    eax = eax + ecx;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -28); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001488DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -28)) */

loc_00148813: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + -32);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 4); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014883E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00148834: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    goto loc_0014889B;

loc_0014883E: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + -32);
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 4); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00148873; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00148864: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    goto loc_00148891;

loc_00148873: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + -32);
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 4); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */

loc_00148891: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */

loc_0014889B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -32);
    SET_LO16(eax, MEM16(eax + 8));
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001488C0u); RECOMP_ABI_CALL(0x001D33D0u, sub_001D33D0); /* call 0x001D33D0 */

loc_001488C0: ;
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    eax = MEM32(ebp + -32);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + -24);
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + eax * 4 + -12); /* addss */
    MEMF(ebp + eax * 4 + -12) = xmm0.f[0]; /* movss */

loc_001488DE: ;
    goto loc_001488E0;

loc_001488E0: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_001487E5;

loc_001488EE: ;
    goto loc_001488F0;

loc_001488F0: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_001487C0;

loc_001488FE: ;
    eax = MEM32(0xBCDB58);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x828)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00148917; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00148913: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00148917; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00148915: ;
    goto loc_0014895F;

loc_00148917: ;
    eax = MEM32(0xBCDB58);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x820)); /* movss */
    eax = MEM32(0xBCDB58);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x828); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -12); /* addss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBCDB58);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x824)); /* movss */
    eax = MEM32(0xBCDB58);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x828); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -8); /* addss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */

loc_0014895F: ;
    xmm1 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -12); /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014897E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00148974: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    goto loc_001489C3;

loc_0014897E: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -12); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001489A7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00148998: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    goto loc_001489B9;

loc_001489A7: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -12); /* mulss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */

loc_001489B9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */

loc_001489C3: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001489DCu); RECOMP_ABI_CALL(0x00148A70u, sub_00148A70); /* call 0x00148A70 */

loc_001489DC: ;
    MEM16(ebp + -4) = LO16(eax);
    xmm1 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_001489FF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001489F5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    goto loc_00148A44;

loc_001489FF: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00148A28; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00148A19: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    goto loc_00148A3A;

loc_00148A28: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */

loc_00148A3A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */

loc_00148A44: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148A5Du); RECOMP_ABI_CALL(0x00148A70u, sub_00148A70); /* call 0x00148A70 */

loc_00148A5D: ;
    MEM16(ebp + -2) = LO16(eax);
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
 * sub_00148A70
 * Original: 0x00148A70 - 0x00148AA6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148A70(void)
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

loc_00148A70: ;
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
    PUSH32(esp, 0x00148A8Fu); RECOMP_ABI_CALL(0x00407F30u, sub_00407F30); /* call 0x00407F30 */

loc_00148A8F: ;
    MEMD(ebp + -16) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = (int32_t)xmm0.d[0]; /* cvttsd2si */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
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
 * sub_00148AB0
 * Original: 0x00148AB0 - 0x00148B61 (177 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148AB0(void)
{
    uint32_t ebp = g_ebp;

loc_00148AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x44B0CB;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80;
    MEM32(esp + 8) = 0xD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148AD4u); RECOMP_ABI_CALL(0x00328930u, sub_00328930); /* call 0x00328930 */

loc_00148AD4: ;
    MEM32(0x8BFACC) = eax;
    eax = 0x44013A;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x10;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148AF7u); RECOMP_ABI_CALL(0x00328930u, sub_00328930); /* call 0x00328930 */

loc_00148AF7: ;
    MEM32(0x8C0638) = eax;
    eax = 0x4899F9;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148B1Cu); RECOMP_ABI_CALL(0x00328600u, sub_00328600); /* call 0x00328600 */

loc_00148B1C: ;
    MEM32(0x8C063C) = eax;
    eax = MEM32(0x8C063C);
    eax = eax + 4;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148B41u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00148B41: ;
    eax = MEM32(0x8C063C);
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x24) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148B5Cu); RECOMP_ABI_CALL(0x00141980u, sub_00141980); /* call 0x00141980 */

loc_00148B5C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148B70
 * Original: 0x00148B70 - 0x00148C55 (229 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148B70(void)
{
    uint32_t ebp = g_ebp;

loc_00148B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148B7Bu); RECOMP_ABI_CALL(0x00141A20u, sub_00141A20); /* call 0x00141A20 */

loc_00148B7B: ;
    eax = MEM32(0x8C063C);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148B9Au); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00148B9A: ;
    eax = MEM32(0x8C063C);
    eax = eax + 4;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148BBAu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00148BBA: ;
    eax = MEM32(0x8C063C);
    eax = eax + 0x14;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148BDAu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00148BDA: ;
    eax = MEM32(0x8C063C);
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x29) = 0;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x26) = 0;
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x28) = 0;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2A) = 0xFFFF;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2C) = 0;
    eax = MEM32(0x8BFACC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C25u); RECOMP_ABI_CALL(0x001E1740u, sub_001E1740); /* call 0x001E1740 */

loc_00148C25: ;
    eax = MEM32(0x8C0638);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C32u); RECOMP_ABI_CALL(0x001E1740u, sub_001E1740); /* call 0x001E1740 */

loc_00148C32: ;
    eax = 0xBCDB60;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0x800;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C50u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00148C50: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148C60
 * Original: 0x00148C60 - 0x00148C85 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148C60(void)
{
    uint32_t ebp = g_ebp;

loc_00148C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0x8BFACC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C73u); RECOMP_ABI_CALL(0x001E1470u, sub_001E1470); /* call 0x001E1470 */

loc_00148C73: ;
    eax = MEM32(0x8C0638);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C80u); RECOMP_ABI_CALL(0x001E1470u, sub_001E1470); /* call 0x001E1470 */

loc_00148C80: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148C90
 * Original: 0x00148C90 - 0x00148CCE (62 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148C90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0x8BFACC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8BFACC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148CA6; /* je: equal / zero */

loc_00148C9C: ;
    MEM32(0x8BFACC) = 0;

loc_00148CA6: ;
    _fa = (uint32_t)(MEM32(0x8C0638)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C0638), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148CB9; /* je: equal / zero */

loc_00148CAF: ;
    MEM32(0x8C0638) = 0;

loc_00148CB9: ;
    _fa = (uint32_t)(MEM32(0x8C063C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C063C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148CCC; /* je: equal / zero */

loc_00148CC2: ;
    MEM32(0x8C063C) = 0;

loc_00148CCC: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148CD0
 * Original: 0x00148CD0 - 0x00148CE7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148CD0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00148CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0xBCDB60;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148CF0
 * Original: 0x00148CF0 - 0x00148D40 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148CF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148D11u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_00148D11: ;
    eax = ebp + -24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148D1Cu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_00148D1C: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148D38; /* je: equal / zero */

loc_00148D24: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00148D36; /* jne: not equal / not zero */

loc_00148D30: ;
    MEM8(ebp + -1) = 1;
    goto loc_00148D38;

loc_00148D36: ;
    goto loc_00148D11;

loc_00148D38: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148D40
 * Original: 0x00148D40 - 0x00148DD3 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00148D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    MEM32(ebp + -4) = 0;

loc_00148D54: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00148D92; /* jge: greater or equal (signed >=) */

loc_00148D5A: ;
    eax = MEM32(ebp + -4);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148D66u); RECOMP_ABI_CALL(0x0016B140u, sub_0016B140); /* call 0x0016B140 */

loc_00148D66: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00148D85; /* je: equal / zero */

loc_00148D6E: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148D79u); RECOMP_ABI_CALL(0x00148CF0u, sub_00148CF0); /* call 0x00148CF0 */

loc_00148D79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00148D85; /* jne: not equal / not zero */

loc_00148D7D: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    goto loc_00148D92;

loc_00148D85: ;
    goto loc_00148D87;

loc_00148D87: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_00148D54;

loc_00148D92: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00148DCB; /* jne: not equal / not zero */

loc_00148D98: ;
    MEM32(ebp + -4) = 0;

loc_00148D9F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00148DC9; /* jge: greater or equal (signed >=) */

loc_00148DA5: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148DB0u); RECOMP_ABI_CALL(0x00148CF0u, sub_00148CF0); /* call 0x00148CF0 */

loc_00148DB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00148DBC; /* jne: not equal / not zero */

loc_00148DB4: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    goto loc_00148DC9;

loc_00148DBC: ;
    goto loc_00148DBE;

loc_00148DBE: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_00148D9F;

loc_00148DC9: ;
    goto loc_00148DCB;

loc_00148DCB: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148DE0
 * Original: 0x00148DE0 - 0x00148E03 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148DE0(void)
{
    uint32_t ebp = g_ebp;

loc_00148DE0: ;
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
    PUSH32(esp, 0x00148DFEu); RECOMP_ABI_CALL(0x001E1850u, sub_001E1850); /* call 0x001E1850 */

loc_00148DFE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148E10
 * Original: 0x00148E10 - 0x00148E1E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148E10(void)
{
    uint32_t ebp = g_ebp;

loc_00148E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x8C063C);
    SET_LO16(eax, MEM16(eax + 0x2C));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148E20
 * Original: 0x00148E20 - 0x00148E9A (122 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148E20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148E3C; /* jl: less (signed <) */

loc_00148E33: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148E70; /* jl: less (signed <) */

loc_00148E3C: ;
    ecx = 0x487251;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3AF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148E64u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00148E64: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148E70u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00148E70: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00148E82; /* jne: not equal / not zero */

loc_00148E79: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00148E92;

loc_00148E82: ;
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax + ecx * 4 + 4);
    MEM32(ebp + -4) = eax;

loc_00148E92: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148EA0
 * Original: 0x00148EA0 - 0x00148F6E (206 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148EA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148EBF; /* jl: less (signed <) */

loc_00148EB6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148EF3; /* jl: less (signed <) */

loc_00148EBF: ;
    ecx = 0x442680;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3B8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148EE7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00148EE7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148EF3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00148EF3: ;
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax + ecx * 4 + 4);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148F24; /* je: equal / zero */

loc_00148F09: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148F1Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00148F1E: ;
    MEM16(eax + 2) = 0xFFFF;

loc_00148F24: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(eax + ecx * 4 + 4) = edx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148F69; /* je: equal / zero */

loc_00148F3A: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebp + -6) = LO16(eax);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(0x8C063C);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax + edx * 4 + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148F61u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00148F61: ;
    SET_LO16(ecx, MEM16(ebp + -6));
    MEM16(eax + 2) = LO16(ecx);

loc_00148F69: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148F70
 * Original: 0x00148F70 - 0x00148F7E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148F70(void)
{
    uint32_t ebp = g_ebp;

loc_00148F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x8C063C);
    SET_LO16(eax, MEM16(eax + 0x24));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148F80
 * Original: 0x00148F80 - 0x00148FEF (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148F80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebp + -2) = 0xFFFF;
    MEM16(ebp + -4) = 0;

loc_00148F94: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FE6; /* jge: greater or equal (signed >=) */

loc_00148F9D: ;
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148FD6; /* je: equal / zero */

loc_00148FAD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00148FD6; /* jle: less or equal (signed <=) */

loc_00148FB9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148FCE; /* jl: less (signed <) */

loc_00148FC5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00148FD6; /* jne: not equal / not zero */

loc_00148FCE: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(ebp + -2) = LO16(eax);

loc_00148FD6: ;
    goto loc_00148FD8;

loc_00148FD8: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_00148F94;

loc_00148FE6: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00148FF0
 * Original: 0x00148FF0 - 0x00149042 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148FF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149014u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_00149014: ;
    eax = ebp + -24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014901Fu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014901F: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014903A; /* je: equal / zero */

loc_00149027: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149038; /* jne: not equal / not zero */

loc_00149032: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;

loc_00149038: ;
    goto loc_00149014;

loc_0014903A: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149050
 * Original: 0x00149050 - 0x001490F3 (163 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149050(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149050: ;
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
    PUSH32(esp, 0x0014906Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014906E: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x38) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x34) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001490AA; /* je: equal / zero */

loc_00149093: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001490AAu); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_001490AA: ;
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x28) = 1;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001490C7u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_001490C7: ;
    eax = ebp + -24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001490D2u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_001490D2: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001490EE; /* je: equal / zero */

loc_001490DA: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001490EC; /* je: equal / zero */

loc_001490E3: ;
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x28) = 0;

loc_001490EC: ;
    goto loc_001490C7;

loc_001490EE: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149100
 * Original: 0x00149100 - 0x00149234 (308 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149119u); RECOMP_ABI_CALL(0x00142B00u, sub_00142B00); /* call 0x00142B00 */

loc_00149119: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149121u); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_00149121: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014915B; /* je: equal / zero */

loc_00149127: ;
    ecx = 0x4758A2;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x424;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014914Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014914F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014915Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014915B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149199; /* je: equal / zero */

loc_00149161: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149174u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00149174: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x1C8) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149199u); RECOMP_ABI_CALL(0x00380480u, sub_00380480); /* call 0x00380480 */

loc_00149199: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001491DF; /* je: equal / zero */

loc_0014919F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001491B2u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_001491B2: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001491C8u); RECOMP_ABI_CALL(0x00380480u, sub_00380480); /* call 0x00380480 */

loc_001491C8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001491D4u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_001491D4: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x1C8) = ecx;

loc_001491DF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001491EBu); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_001491EB: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149203u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00149203: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x38) = 0xFFFFFFFFu;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014922Fu); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_0014922F: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149240
 * Original: 0x00149240 - 0x0014924D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149240(void)
{
    uint32_t ebp = g_ebp;

loc_00149240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x8C063C);
    SET_LO8(eax, MEM8(eax + 0x28));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149250
 * Original: 0x00149250 - 0x0014925D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149250(void)
{
    uint32_t ebp = g_ebp;

loc_00149250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x8C063C);
    eax = eax + 0x70;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149260
 * Original: 0x00149260 - 0x0014926D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149260(void)
{
    uint32_t ebp = g_ebp;

loc_00149260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x8C063C);
    eax = eax + 0x30;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149270
 * Original: 0x00149270 - 0x00149290 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149270(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x29) = LO8(ecx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149290
 * Original: 0x00149290 - 0x001492A8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149290(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x8C063C);
    _fa = (uint32_t)(MEM8(eax + 0x29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x29), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001492B0
 * Original: 0x001492B0 - 0x00149413 (355 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001492B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_001492B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x38)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(0x8BFACC);
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001492CAu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_001492CA: ;
    eax = ebp + -20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001492D5u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_001492D5: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00149407; /* je: equal / zero */

loc_001492E1: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001492EC; /* jne: not equal / not zero */

loc_001492EA: ;
    goto loc_001492CA;

loc_001492EC: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149302u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00149302: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149313u); RECOMP_ABI_CALL(0x00222440u, sub_00222440); /* call 0x00222440 */

loc_00149313: ;
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -44);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149329u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00149329: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 4);
    eax = eax & 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00149345; /* je: equal / zero */

loc_0014933C: ;
    MEM8(ebp + -1) = 1;
    goto loc_0014940B;

loc_00149345: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00149396; /* jne: not equal / not zero */

loc_00149351: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014937D; /* jne: not equal / not zero */

loc_0014935D: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014936Bu); RECOMP_ABI_CALL(0x00364790u, sub_00364790); /* call 0x00364790 */

loc_0014936B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00149378; /* je: equal / zero */

loc_0014936F: ;
    MEM8(ebp + -1) = 1;
    goto loc_0014940B;

loc_00149378: ;
    goto loc_001492CA;

loc_0014937D: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014938E; /* je: equal / zero */

loc_00149389: ;
    goto loc_001492CA;

loc_0014938E: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -36) = eax;
    goto loc_001493ED;

loc_00149396: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001493AFu); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_001493AF: ;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001493BD; /* jne: not equal / not zero */

loc_001493B8: ;
    goto loc_001492CA;

loc_001493BD: ;
    eax = MEM32(ebp + -36);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001493D2u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_001493D2: ;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + 0x17C);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_001493EB; /* jne: not equal / not zero */

loc_001493E6: ;
    goto loc_001492CA;

loc_001493EB: ;
    goto loc_001493ED;

loc_001493ED: ;
    eax = MEM32(ebp + -36);
    eax = ZX8(MEM8(eax + 0x428));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_00149402; /* jle: less or equal (signed <=) */

loc_001493FC: ;
    MEM8(ebp + -1) = 1;
    goto loc_0014940B;

loc_00149402: ;
    goto loc_001492CA;

loc_00149407: ;
    MEM8(ebp + -1) = 0;

loc_0014940B: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149420
 * Original: 0x00149420 - 0x0014946A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149420(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014943Au); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014943A: ;
    eax = ebp + -24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149445u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_00149445: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014945E; /* je: equal / zero */

loc_0014944D: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014945C; /* jne: not equal / not zero */

loc_00149456: ;
    MEM8(ebp + -1) = 1;
    goto loc_00149462;

loc_0014945C: ;
    goto loc_0014943A;

loc_0014945E: ;
    MEM8(ebp + -1) = 0;

loc_00149462: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149470
 * Original: 0x00149470 - 0x0014965B (491 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149470(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    MEM16(ebp + -12) = 0;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014948Au); RECOMP_ABI_CALL(0x0018B330u, sub_0018B330); /* call 0x0018B330 */

loc_0014948A: ;
    MEM16(ebp + -10) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014949D; /* jne: not equal / not zero */

loc_00149497: ;
    MEM16(ebp + -10) = 0;

loc_0014949D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001494A9u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_001494A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149656; /* jne: not equal / not zero */

loc_001494B2: ;
    eax = (uint32_t)(int32_t)SMEM16(0x59C932);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149633; /* jne: not equal / not zero */

loc_001494C2: ;
    MEM16(ebp + -12) = 0;

loc_001494C8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00149612; /* jge: greater or equal (signed >=) */

loc_001494D5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001494E7; /* jl: less (signed <) */

loc_001494DE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014951B; /* jl: less (signed <) */

loc_001494E7: ;
    ecx = 0x487251;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3AF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014950Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014950F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014951Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014951B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014952E; /* jne: not equal / not zero */

loc_00149524: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -16) = eax;
    goto loc_0014953E;

loc_0014952E: ;
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12);
    eax = MEM32(eax + ecx * 4 + 4);
    MEM32(ebp + -16) = eax;

loc_0014953E: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001495FF; /* je: equal / zero */

loc_0014954E: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149563u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00149563: ;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014957Au); RECOMP_ABI_CALL(0x00148EA0u, sub_00148EA0); /* call 0x00148EA0 */

loc_0014957A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014958Eu); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_0014958E: ;
    SET_LO16(ecx, MEM16(ebp + -10));
    eax = MEM32(ebp + -8);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001495A4u); RECOMP_ABI_CALL(0x00148EA0u, sub_00148EA0); /* call 0x00148EA0 */

loc_001495A4: ;
    SET_LO16(ecx, MEM16(ebp + -10));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001495BDu); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_001495BD: ;
    SET_LO16(eax, MEM16(ebp + -12));
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001495D2u); RECOMP_ABI_CALL(0x00181000u, sub_00181000); /* call 0x00181000 */

loc_001495D2: ;
    SET_LO16(eax, MEM16(ebp + -12));
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001495E7u); RECOMP_ABI_CALL(0x0017E1E0u, sub_0017E1E0); /* call 0x0017E1E0 */

loc_001495E7: ;
    eax = 0x47E2C8;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001495FDu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_001495FD: ;
    goto loc_00149612;

loc_001495FF: ;
    goto loc_00149601;

loc_00149601: ;
    SET_LO16(eax, MEM16(ebp + -12));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12) = LO16(eax);
    goto loc_001494C8;

loc_00149612: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149631; /* jne: not equal / not zero */

loc_0014961B: ;
    eax = 0x456240;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149631u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_00149631: ;
    goto loc_00149654;

loc_00149633: ;
    eax = (uint32_t)(int32_t)SMEM16(0x59C932);
    ecx = 0x4481D6;
    MEM32(esp) = 2;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149654u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_00149654: ;
    goto loc_00149656;

loc_00149656: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149660
 * Original: 0x00149660 - 0x001496CF (111 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014966Bu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014966B: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x354);
    MEM16(ebp + -10) = LO16(eax);
    _fa = (uint32_t)(MEM32(0x838FC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838FC8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001496C6; /* je: equal / zero */

loc_00149684: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x42C;
    eax = ZX16(MEM16(0x838FC8));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001496A8u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_001496A8: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001496C4; /* jle: less or equal (signed <=) */

loc_001496B7: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xA4);
    MEM16(ebp + -10) = LO16(eax);

loc_001496C4: ;
    goto loc_001496C6;

loc_001496C6: ;
    SET_LO16(eax, MEM16(ebp + -10));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001496D0
 * Original: 0x001496D0 - 0x001497CF (255 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001496D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001496D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001496DFu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_001496DF: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 0;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149725; /* jl: less (signed <) */

loc_001496F2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x354)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x354) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00149725; /* jge: greater or equal (signed >=) */

loc_00149701: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x354;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149722u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00149722: ;
    MEM32(ebp + -12) = eax;

loc_00149725: ;
    _fa = (uint32_t)(MEM32(0x838FC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838FC8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001497C7; /* je: equal / zero */

loc_00149732: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x42C;
    eax = ZX16(MEM16(0x838FC8));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149756u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00149756: ;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001497C5; /* jl: less (signed <) */

loc_00149762: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xA4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001497C5; /* jge: greater or equal (signed >=) */

loc_00149771: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0xA4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149792u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00149792: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 0x7E));
    MEM16(ebp + -14) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001497C3; /* jl: less (signed <) */

loc_001497A9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x5A4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001497C3; /* jge: greater or equal (signed >=) */

loc_001497B8: ;
    SET_LO16(ecx, MEM16(ebp + -14));
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x12) = LO16(ecx);

loc_001497C3: ;
    goto loc_001497C5;

loc_001497C5: ;
    goto loc_001497C7;

loc_001497C7: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001497D0
 * Original: 0x001497D0 - 0x0014983D (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001497D0(void)
{
    uint32_t ebp = g_ebp;

loc_001497D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x5C) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x60) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x68) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x6C) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 0x70) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x74) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x78) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x80) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x84) = ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149840
 * Original: 0x00149840 - 0x00149892 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149840(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014985Au); RECOMP_ABI_CALL(0x001498A0u, sub_001498A0); /* call 0x001498A0 */

loc_0014985A: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00149885; /* je: equal / zero */

loc_00149867: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149879u); RECOMP_ABI_CALL(0x001498A0u, sub_001498A0); /* call 0x001498A0 */

loc_00149879: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_00149885: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001498A0
 * Original: 0x001498A0 - 0x001498BF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001498A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001498A0: ;
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
 * sub_001498C0
 * Original: 0x001498C0 - 0x00149A86 (454 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001498C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001498C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x14);
    SET_LO16(eax, MEM16(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001498EB; /* jne: not equal / not zero */

loc_001498D9: ;
    eax = MEM32(0x8BFACC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001498E6u); RECOMP_ABI_CALL(0x001E1610u, sub_001E1610); /* call 0x001E1610 */

loc_001498E6: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_00149903;

loc_001498EB: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149900u); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_00149900: ;
    MEM32(ebp + 0xC) = eax;

loc_00149903: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149915; /* jl: less (signed <) */

loc_0014990C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149952; /* jl: less (signed <) */

loc_00149915: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149952; /* je: equal / zero */

loc_0014991E: ;
    ecx = 0x45912C;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x135;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149946u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00149946: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149952u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00149952: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149A6C; /* je: equal / zero */

loc_0014995C: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149971u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00149971: ;
    MEM32(ebp + -4) = eax;
    eax = 0x4A1B86;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149989; /* je: equal / zero */

loc_00149983: ;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -12) = eax;

loc_00149989: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 4;
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001499A6u); RECOMP_ABI_CALL(0x0035B3B0u, sub_0035B3B0); /* call 0x0035B3B0 */

loc_001499A6: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x1A) = 0;
    SET_LO16(ecx, MEM16(ebp + 0x10));
    eax = MEM32(ebp + -4);
    MEM16(eax + 2) = LO16(ecx);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x34) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x38) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x3C) = 0xFFFF;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x40) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x20) = 1;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149A1Au); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00149A1A: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x28) = 0;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0xCC) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0xD1) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149A6A; /* je: equal / zero */

loc_00149A4D: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x48;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149A6Au); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_00149A6A: ;
    goto loc_00149A6C;

loc_00149A6C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149A7Eu); RECOMP_ABI_CALL(0x00149A90u, sub_00149A90); /* call 0x00149A90 */

loc_00149A7E: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149A90
 * Original: 0x00149A90 - 0x00149B21 (145 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149A90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00149A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0xBCDB60;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;

loc_00149AB5: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00149AE2; /* jge: greater or equal (signed >=) */

loc_00149ABB: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149AD5; /* jne: not equal / not zero */

loc_00149AC7: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    MEM32(eax + ecx * 4) = edx;
    goto loc_00149AE2;

loc_00149AD5: ;
    goto loc_00149AD7;

loc_00149AD7: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_00149AB5;

loc_00149AE2: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149B1C; /* jne: not equal / not zero */

loc_00149AE8: ;
    ecx = 0x46FF77;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xF0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149B10u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00149B10: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149B1Cu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00149B1C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149B30
 * Original: 0x00149B30 - 0x00149C79 (329 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149B30(void)
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

loc_00149B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149B3Eu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00149B3E: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x354);
    MEM16(ebp + -14) = LO16(eax);
    _fa = (uint32_t)(MEM32(0x838FC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838FC8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149B99; /* je: equal / zero */

loc_00149B57: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x42C;
    eax = ZX16(MEM16(0x838FC8));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149B7Bu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00149B7B: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00149B97; /* jle: less or equal (signed <=) */

loc_00149B8A: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xA4);
    MEM16(ebp + -14) = LO16(eax);

loc_00149B97: ;
    goto loc_00149B99;

loc_00149B99: ;
    MEM16(ebp + -18) = 0xFFFF;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    MEM16(ebp + -16) = 0;

loc_00149BAD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00149C70; /* jge: greater or equal (signed >=) */

loc_00149BBD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149BC9u); RECOMP_ABI_CALL(0x001496D0u, sub_001496D0); /* call 0x001496D0 */

loc_00149BC9: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149BDEu); RECOMP_ABI_CALL(0x00131A80u, sub_00131A80); /* call 0x00131A80 */

loc_00149BDE: ;
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149C06u); RECOMP_ABI_CALL(0x00149C80u, sub_00149C80); /* call 0x00149C80 */

loc_00149C06: ;
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149C2Au); RECOMP_ABI_CALL(0x003D8E90u, sub_003D8E90); /* call 0x003D8E90 */

loc_00149C2A: ;
    MEMD(ebp + -40) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -24); /* mulss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -28); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00149C5D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -28)) */

loc_00149C4B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(ebp + -18) = LO16(eax);

loc_00149C5D: ;
    goto loc_00149C5F;

loc_00149C5F: ;
    SET_LO16(eax, MEM16(ebp + -16));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -16) = LO16(eax);
    goto loc_00149BAD;

loc_00149C70: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
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
 * sub_00149C80
 * Original: 0x00149C80 - 0x00149CC1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149C80(void)
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

loc_00149C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149C95u); RECOMP_ABI_CALL(0x001D4C40u, sub_001D4C40); /* call 0x001D4C40 */

loc_00149C95: ;
    ecx = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = esp;
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149CB4u); RECOMP_ABI_CALL(0x001D4EE0u, sub_001D4EE0); /* call 0x001D4EE0 */

loc_00149CB4: ;
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
 * sub_00149CD0
 * Original: 0x00149CD0 - 0x00149DC3 (243 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149CD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149CD0: ;
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
    PUSH32(esp, 0x00149CF1u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00149CF1: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149D07u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00149D07: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x70) = ecx;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x20);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x68) = LO16(ecx);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x1C8) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149D4Bu); RECOMP_ABI_CALL(0x00380480u, sub_00380480); /* call 0x00380480 */

loc_00149D4B: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149D70; /* je: equal / zero */

loc_00149D57: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149D70u); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_00149D70: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x68;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149D90u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00149D90: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x28) = 0;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149DBE; /* je: equal / zero */

loc_00149DAF: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149DBEu); RECOMP_ABI_CALL(0x000F4AE0u, sub_000F4AE0); /* call 0x000F4AE0 */

loc_00149DBE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00149DD0
 * Original: 0x00149DD0 - 0x0014A00F (575 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149DD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00149DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149DF9u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00149DF9: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00149E0D; /* jne: not equal / not zero */

loc_00149E08: ;
    goto loc_0014A00A;

loc_00149E0D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    if ((!_cf && eax != 0)) goto loc_0014A00A; /* ja: above (unsigned >) */

loc_00149E1D: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax * 4 + 0x4A39C4);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x00149E29u) goto loc_00149E29;
    if (_jt == 0x00149E77u) goto loc_00149E77;
    if (_jt == 0x00149EF7u) goto loc_00149EF7;
    if (_jt == 0x00149F37u) goto loc_00149F37;
    if (_jt == 0x00149F6Cu) goto loc_00149F6C;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00149E29: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x77656170;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149E3Cu); RECOMP_ABI_CALL(0x000E0B80u, sub_000E0B80); /* call 0x000E0B80 */

loc_00149E3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00149E72; /* je: equal / zero */

loc_00149E40: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + 0x10);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149E59u); RECOMP_ABI_CALL(0x00171750u, sub_00171750); /* call 0x00171750 */

loc_00149E59: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00149E70; /* je: equal / zero */

loc_00149E62: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149E70u); RECOMP_ABI_CALL(0x00142CF0u, sub_00142CF0); /* call 0x00142CF0 */

loc_00149E70: ;
    goto loc_00149E72;

loc_00149E72: ;
    goto loc_0014A00A;

loc_00149E77: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x77656170;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149E8Au); RECOMP_ABI_CALL(0x000E0B80u, sub_000E0B80); /* call 0x000E0B80 */

loc_00149E8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00149EF2; /* je: equal / zero */

loc_00149E8E: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = 0x77656170;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149EA1u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00149EA1: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + 0x10);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149EC5u); RECOMP_ABI_CALL(0x00171700u, sub_00171700); /* call 0x00171700 */

loc_00149EC5: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x49C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x49C), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00149EF0; /* je: equal / zero */

loc_00149ED1: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x49C);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149EF0u); RECOMP_ABI_CALL(0x003380D0u, sub_003380D0); /* call 0x003380D0 */

loc_00149EF0: ;
    goto loc_00149EF2;

loc_00149EF2: ;
    goto loc_0014A00A;

loc_00149EF7: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x65716970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149F0Au); RECOMP_ABI_CALL(0x000E0B80u, sub_000E0B80); /* call 0x000E0B80 */

loc_00149F0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00149F32; /* je: equal / zero */

loc_00149F0E: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + 0x10);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149F27u); RECOMP_ABI_CALL(0x001716B0u, sub_001716B0); /* call 0x001716B0 */

loc_00149F27: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149F32u); RECOMP_ABI_CALL(0x001B3D20u, sub_001B3D20); /* call 0x001B3D20 */

loc_00149F32: ;
    goto loc_0014A00A;

loc_00149F37: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x65716970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149F4Au); RECOMP_ABI_CALL(0x000E0B80u, sub_000E0B80); /* call 0x000E0B80 */

loc_00149F4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00149F67; /* je: equal / zero */

loc_00149F4E: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + 0x10);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149F67u); RECOMP_ABI_CALL(0x001717A0u, sub_001717A0); /* call 0x001717A0 */

loc_00149F67: ;
    goto loc_0014A00A;

loc_00149F6C: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x65716970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149F7Fu); RECOMP_ABI_CALL(0x000E0B80u, sub_000E0B80); /* call 0x000E0B80 */

loc_00149F7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014A008; /* je: equal / zero */

loc_00149F87: ;
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x65716970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149F9Au); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00149F9A: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x308);
    MEM32(ebp + -16) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    if ((eax == 0)) goto loc_00149FBF; /* je: equal / zero */

loc_00149FA9: ;
    goto loc_00149FAB;

loc_00149FAB: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_00149FD9; /* je: equal / zero */

loc_00149FB3: ;
    goto loc_00149FB5;

loc_00149FB5: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    if ((eax == 0)) goto loc_00149FCC; /* je: equal / zero */

loc_00149FBD: ;
    goto loc_00149FE4;

loc_00149FBF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149FCAu); RECOMP_ABI_CALL(0x0014A010u, sub_0014A010); /* call 0x0014A010 */

loc_00149FCA: ;
    goto loc_00149FE4;

loc_00149FCC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149FD7u); RECOMP_ABI_CALL(0x0014A100u, sub_0014A100); /* call 0x0014A100 */

loc_00149FD7: ;
    goto loc_00149FE4;

loc_00149FD9: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149FE4u); RECOMP_ABI_CALL(0x0014A1F0u, sub_0014A1F0); /* call 0x0014A1F0 */

loc_00149FE4: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + 0x10);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149FFDu); RECOMP_ABI_CALL(0x001717A0u, sub_001717A0); /* call 0x001717A0 */

loc_00149FFD: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A008u); RECOMP_ABI_CALL(0x001B3D20u, sub_001B3D20); /* call 0x001B3D20 */

loc_0014A008: ;
    goto loc_0014A00A;

loc_0014A00A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014A010
 * Original: 0x0014A010 - 0x0014A0FF (239 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A0FA; /* je: equal / zero */

loc_0014A023: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A038u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014A038: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A0F8; /* je: equal / zero */

loc_0014A04B: ;
    eax = ebp + -60;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A068u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0014A068: ;
    SET_LO16(eax, MEM16(0xBCE362));
    MEM16(ebp + -40) = LO16(eax);
    SET_LO16(eax, MEM16(0x585160));
    MEM16(ebp + -60) = LO16(eax);
    MEM16(ebp + -58) = 2;
    xmm0 = XMM_SCALAR(MEMF(0x585170)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x585164)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xBCE364)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x585168)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xBCE368)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x58516C)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 8);
    eax = ebp + -60;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A0F8u); RECOMP_ABI_CALL(0x0011E940u, sub_0011E940); /* call 0x0011E940 */

loc_0014A0F8: ;
    goto loc_0014A0FA;

loc_0014A0FA: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014A100
 * Original: 0x0014A100 - 0x0014A1E7 (231 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A1E2; /* je: equal / zero */

loc_0014A113: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A128u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014A128: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A1E0; /* je: equal / zero */

loc_0014A13B: ;
    eax = ebp + -60;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A158u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0014A158: ;
    MEM16(ebp + -40) = 1;
    MEM16(ebp + -60) = 6;
    MEM16(ebp + -58) = 2;
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D934)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D934)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D934)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 8);
    eax = ebp + -60;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A1E0u); RECOMP_ABI_CALL(0x0011E940u, sub_0011E940); /* call 0x0011E940 */

loc_0014A1E0: ;
    goto loc_0014A1E2;

loc_0014A1E2: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014A1F0
 * Original: 0x0014A1F0 - 0x0014A2DF (239 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A1F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A1F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A2DA; /* je: equal / zero */

loc_0014A203: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A218u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014A218: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A2D8; /* je: equal / zero */

loc_0014A22B: ;
    eax = ebp + -60;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A248u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0014A248: ;
    SET_LO16(eax, MEM16(0xBCE36C));
    MEM16(ebp + -40) = LO16(eax);
    SET_LO16(eax, MEM16(0x585174));
    MEM16(ebp + -60) = LO16(eax);
    MEM16(ebp + -58) = 2;
    xmm0 = XMM_SCALAR(MEMF(0x585184)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x585178)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xBCE370)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x58517C)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x585180)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xBCE374)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 8);
    eax = ebp + -60;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A2D8u); RECOMP_ABI_CALL(0x0011E940u, sub_0011E940); /* call 0x0011E940 */

loc_0014A2D8: ;
    goto loc_0014A2DA;

loc_0014A2DA: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014A2E0
 * Original: 0x0014A2E0 - 0x0014A38F (175 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A2E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A2E0: ;
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
    PUSH32(esp, 0x0014A2FEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014A2FE: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A325; /* je: equal / zero */

loc_0014A30A: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A320u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014A320: ;
    MEM32(ebp + -12) = eax;
    goto loc_0014A32C;

loc_0014A325: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_0014A32C;

loc_0014A32C: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A35D; /* je: equal / zero */

loc_0014A338: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x1C8) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A35Du); RECOMP_ABI_CALL(0x00380480u, sub_00380480); /* call 0x00380480 */

loc_0014A35D: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x34) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A38A; /* je: equal / zero */

loc_0014A373: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A38Au); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_0014A38A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014A390
 * Original: 0x0014A390 - 0x0014A41B (139 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A390(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A3B4u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014A3B4: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A3D3u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014A3D3: ;
    MEM32(ebp + -8) = eax;
    MEM8(ebp + -13) = 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A413; /* je: equal / zero */

loc_0014A3E0: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A3F7; /* je: equal / zero */

loc_0014A3EC: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A3F7u); RECOMP_ABI_CALL(0x00375E50u, sub_00375E50); /* call 0x00375E50 */

loc_0014A3F7: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A410u); RECOMP_ABI_CALL(0x0014A420u, sub_0014A420); /* call 0x0014A420 */

loc_0014A410: ;
    MEM8(ebp + -13) = LO8(eax);

loc_0014A413: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014A420
 * Original: 0x0014A420 - 0x0014AC35 (2069 bytes, 468 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A420(void)
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
loc_0014A420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xE4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A448u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014A448: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A467u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014A467: ;
    MEM32(ebp + -16) = eax;
    MEM8(ebp + -17) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014A4B3; /* je: equal / zero */

loc_0014A474: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A479u); RECOMP_ABI_CALL(0x00148F70u, sub_00148F70); /* call 0x00148F70 */

loc_0014A479: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_0014A4B3; /* jg: greater (signed >) */

loc_0014A47F: ;
    ecx = 0x46D635;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4FB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A4A7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014A4A7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A4B3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014A4B3: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014A876; /* je: equal / zero */

loc_0014A4BD: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A4C8u); RECOMP_ABI_CALL(0x00222440u, sub_00222440); /* call 0x00222440 */

loc_0014A4C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014A876; /* je: equal / zero */

loc_0014A4D1: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A4DCu); RECOMP_ABI_CALL(0x00222440u, sub_00222440); /* call 0x00222440 */

loc_0014A4DC: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A4F2u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014A4F2: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A505u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014A505: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(ebp + -36) = ecx;
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -32) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -24);
    MEM32(ebp + 0xC) = eax;
    eax = ebp + -40;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A536u); RECOMP_ABI_CALL(0x0014E780u, sub_0014E780); /* call 0x0014E780 */

loc_0014A536: ;
    MEMF(ebp + -180) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -180)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0014A58B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014A54C: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(0x43D768)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x2C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014A574; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x2C)) */

loc_0014A55D: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax + 0x24);
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(ebp + -36) = ecx;
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + -32) = eax;
    goto loc_0014A589;

loc_0014A574: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax + 0x30);
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(eax + 0x34);
    MEM32(ebp + -36) = ecx;
    eax = MEM32(eax + 0x38);
    MEM32(ebp + -32) = eax;

loc_0014A589: ;
    goto loc_0014A58B;

loc_0014A58B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM32(esp) = 0x62697064;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A5A8u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014A5A8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x42C)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DCE8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -44); /* mulss */
    eax = MEM32(ebp + -28);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x5C); /* addss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    eax = ebp + -40;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A5DAu); RECOMP_ABI_CALL(0x0014E7C0u, sub_0014E7C0); /* call 0x0014E7C0 */

loc_0014A5DA: ;
    MEMF(ebp + -184) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -184)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0014A626; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0014A5F0: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0014A626; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0014A5F2: ;
    ecx = 0x4539F2;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x525;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A61Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014A61A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A626u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014A626: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0014A669; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0014A633: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0014A669; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0014A635: ;
    ecx = 0x45EFC1;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x526;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A65Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014A65D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A669u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014A669: ;
    eax = ebp + -40;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A678u); RECOMP_ABI_CALL(0x0014E7F0u, sub_0014E7F0); /* call 0x0014E7F0 */

loc_0014A678: ;
    eax = ebp + -40;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A683u); RECOMP_ABI_CALL(0x0014C7F0u, sub_0014C7F0); /* call 0x0014C7F0 */

loc_0014A683: ;
    MEMF(ebp + -188) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -188)); /* movss */
    edx = MEM32(ebp + -28);
    edx = edx + 4;
    edx = edx + 0x4C;
    eax = MEM32(0x59CA64);
    esi = ebp + -96;
    ecx = ebp + -40;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A6B9u); RECOMP_ABI_CALL(0x001D2020u, sub_001D2020); /* call 0x001D2020 */

loc_0014A6B9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */
    MEM16(ebp + -102) = 0;

loc_0014A6C9: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -102);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -189) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_0014A6E9; /* jae: above or equal (unsigned >=) */

loc_0014A6DA: ;
    _fa = (uint32_t)(MEM8(ebp + -17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -17), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -189) = LO8(eax);

loc_0014A6E9: ;
    SET_LO8(eax, MEM8(ebp + -189));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0014A6F8; /* jne: not equal / not zero */

loc_0014A6F3: ;
    goto loc_0014A874;

loc_0014A6F8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -102);
    ecx = 0x4A3A18;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC);
    ecx = ecx + eax;
    edx = ebp + -96;
    eax = ebp + -116;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A71Du); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_0014A71D: ;
    edx = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -116;
    esi = 0; /* xor self */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A766u); RECOMP_ABI_CALL(0x00365010u, sub_00365010); /* call 0x00365010 */

loc_0014A766: ;
    MEM8(ebp + -17) = LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + -17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -17), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014A861; /* jne: not equal / not zero */

loc_0014A773: ;
    MEM16(ebp + -118) = 0;

loc_0014A779: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -118);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -190) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_0014A799; /* jge: greater or equal (signed >=) */

loc_0014A78A: ;
    _fa = (uint32_t)(MEM8(ebp + -17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -17), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -190) = LO8(eax);

loc_0014A799: ;
    SET_LO8(eax, MEM8(ebp + -190));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0014A7A8; /* jne: not equal / not zero */

loc_0014A7A3: ;
    goto loc_0014A85F;

loc_0014A7A8: ;
    eax = MEM32(0x59CA58);
    ecx = MEM32(eax);
    MEM32(ebp + -144) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -140) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -136) = eax;
    eax = ebp + -144;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A7D5u); RECOMP_ABI_CALL(0x0014E860u, sub_0014E860); /* call 0x0014E860 */

loc_0014A7D5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    edx = ebp + -116;
    ecx = ebp + -144;
    eax = ebp + -132;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A7FFu); RECOMP_ABI_CALL(0x0014E890u, sub_0014E890); /* call 0x0014E890 */

loc_0014A7FF: ;
    edx = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -132;
    esi = 0; /* xor self */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A84Bu); RECOMP_ABI_CALL(0x00365010u, sub_00365010); /* call 0x00365010 */

loc_0014A84B: ;
    MEM8(ebp + -17) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -118));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -118) = LO16(eax);
    goto loc_0014A779;

loc_0014A85F: ;
    goto loc_0014A861;

loc_0014A861: ;
    goto loc_0014A863;

loc_0014A863: ;
    SET_LO16(eax, MEM16(ebp + -102));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -102) = LO16(eax);
    goto loc_0014A6C9;

loc_0014A874: ;
    goto loc_0014A8C2;

loc_0014A876: ;
    edx = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    esi = 0; /* xor self */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A8BFu); RECOMP_ABI_CALL(0x00365010u, sub_00365010); /* call 0x00365010 */

loc_0014A8BF: ;
    MEM8(ebp + -17) = LO8(eax);

loc_0014A8C2: ;
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x3C) = 0xFFFF;
    _fa = (uint32_t)(MEM8(ebp + -17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -17), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014A9C8; /* je: equal / zero */

loc_0014A8D5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A8DAu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014A8DA: ;
    MEM32(ebp + -148) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014A91D; /* jne: not equal / not zero */

loc_0014A8E9: ;
    ecx = 0x4562A9;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x56A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A911u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014A911: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A91Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014A91D: ;
    MEM16(ebp + -150) = 0;

loc_0014A926: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -150);
    ecx = MEM32(ebp + -148);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x39C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x39C) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0014A9C6; /* jge: greater or equal (signed >=) */

loc_0014A93F: ;
    ecx = MEM32(ebp + -148);
    ecx = ecx + 0x39C;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -150);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A966u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014A966: ;
    MEM32(ebp + -156) = eax;
    eax = MEM32(ebp + -156);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(0x5A3904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014A9AD; /* jne: not equal / not zero */

loc_0014A981: ;
    eax = MEM32(ebp + -156);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014A99Fu); RECOMP_ABI_CALL(0x00333540u, sub_00333540); /* call 0x00333540 */

loc_0014A99F: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014A9AD; /* je: equal / zero */

loc_0014A9A7: ;
    MEM8(ebp + -17) = 0;
    goto loc_0014A9C6;

loc_0014A9AD: ;
    goto loc_0014A9AF;

loc_0014A9AF: ;
    SET_LO16(eax, MEM16(ebp + -150));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -150) = LO16(eax);
    goto loc_0014A926;

loc_0014A9C6: ;
    goto loc_0014A9C8;

loc_0014A9C8: ;
    _fa = (uint32_t)(MEM8(ebp + -17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -17), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014ABC1; /* je: equal / zero */

loc_0014A9D2: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x20) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AB1B; /* je: equal / zero */

loc_0014A9F6: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AA09u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014AA09: ;
    ecx = MEM32(eax + 0x24);
    MEM32(ebp + -168) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(ebp + -164) = ecx;
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + -160) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AA37u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014AA37: ;
    MEM32(ebp + -172) = eax;
    _fa = (uint32_t)(MEM32(ebp + -172)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -172), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AA7F; /* je: equal / zero */

loc_0014AA46: ;
    eax = MEM32(ebp + -172);
    _fa = (uint32_t)(MEM32(eax + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x42C), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AA7F; /* je: equal / zero */

loc_0014AA55: ;
    eax = MEM32(ebp + -172);
    ecx = MEM32(eax + 0x42C);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x42C) = ecx;
    eax = MEM32(ebp + -172);
    SET_LO8(ecx, MEM8(eax + 0x42B));
    eax = MEM32(ebp + -16);
    MEM8(eax + 0x42B) = LO8(ecx);

loc_0014AA7F: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -168);
    MEM32(eax + 0x1D4) = ecx;
    ecx = MEM32(ebp + -164);
    MEM32(eax + 0x1D8) = ecx;
    ecx = MEM32(ebp + -160);
    MEM32(eax + 0x1DC) = ecx;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -168);
    MEM32(eax + 0x1E0) = ecx;
    ecx = MEM32(ebp + -164);
    MEM32(eax + 0x1E4) = ecx;
    ecx = MEM32(ebp + -160);
    MEM32(eax + 0x1E8) = ecx;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -168);
    MEM32(eax + 0x204) = ecx;
    ecx = MEM32(ebp + -164);
    MEM32(eax + 0x208) = ecx;
    ecx = MEM32(ebp + -160);
    MEM32(eax + 0x20C) = ecx;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AB19; /* je: equal / zero */

loc_0014AB00: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -168;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AB19u); RECOMP_ABI_CALL(0x00143060u, sub_00143060); /* call 0x00143060 */

loc_0014AB19: ;
    goto loc_0014AB1B;

loc_0014AB1B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014ABBF; /* je: equal / zero */

loc_0014AB25: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AB2Au); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0014AB2A: ;
    eax = eax + 0x170;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xF4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AB49u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014AB49: ;
    eax = MEM32(eax + 0xC4);
    MEM32(ebp + -176) = eax;
    _fa = (uint32_t)(MEM32(ebp + -176)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -176), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014ABBD; /* je: equal / zero */

loc_0014AB5E: ;
    eax = MEM32(0x8C063C);
    eax = eax + 0x30;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AB78u); RECOMP_ABI_CALL(0x0014DE30u, sub_0014DE30); /* call 0x0014DE30 */

loc_0014AB78: ;
    edx = MEM32(ebp + -176);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -12);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ABBDu); RECOMP_ABI_CALL(0x001150A0u, sub_001150A0); /* call 0x001150A0 */

loc_0014ABBD: ;
    goto loc_0014ABBF;

loc_0014ABBF: ;
    goto loc_0014AC29;

loc_0014ABC1: ;
    eax = 0x48C78C;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ABD7u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0014ABD7: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014AC17; /* jne: not equal / not zero */

loc_0014ABE3: ;
    ecx = 0x46792A;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5AB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AC0Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014AC0B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AC17u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014AC17: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AC29u); RECOMP_ABI_CALL(0x0014E900u, sub_0014E900); /* call 0x0014E900 */

loc_0014AC29: ;
    SET_LO8(eax, MEM8(ebp + -17));
    esp = esp + 0xE4;
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
 * sub_0014AC40
 * Original: 0x0014AC40 - 0x0014AF43 (771 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AC40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014AC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(MEM8(0xBCDB5C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBCDB5C), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AF3A; /* je: equal / zero */

loc_0014AC57: ;
    MEM16(ebp + -126) = 0;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AC69u); RECOMP_ABI_CALL(0x00148F80u, sub_00148F80); /* call 0x00148F80 */

loc_0014AC69: ;
    MEM16(ebp + -138) = LO16(eax);

loc_0014AC70: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -126);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -161) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_0014AC94; /* jge: greater or equal (signed >=) */

loc_0014AC81: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -161) = LO8(eax);

loc_0014AC94: ;
    SET_LO8(eax, MEM8(ebp + -161));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0014ACA3; /* jne: not equal / not zero */

loc_0014AC9E: ;
    goto loc_0014AF38;

loc_0014ACA3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_0014ACBB; /* jl: less (signed <) */

loc_0014ACAF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_0014ACEF; /* jl: less (signed <) */

loc_0014ACBB: ;
    ecx = 0x487251;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3AF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ACE3u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014ACE3: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ACEFu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014ACEF: ;
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -138);
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 4), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AF0F; /* je: equal / zero */

loc_0014AD06: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -138);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AD15u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_0014AD15: ;
    MEM32(ebp + -144) = eax;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -144);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AD33u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014AD33: ;
    MEM32(ebp + -152) = eax;
    eax = MEM32(ebp + -152);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -148) = eax;
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AF0D; /* je: equal / zero */

loc_0014AD55: ;
    eax = MEM32(ebp + -148);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AD6Bu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014AD6B: ;
    MEM32(ebp + -156) = eax;
    edx = MEM32(ebp + -148);
    ecx = ebp + -124;
    eax = ebp + -112;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AD91u); RECOMP_ABI_CALL(0x003644C0u, sub_003644C0); /* call 0x003644C0 */

loc_0014AD91: ;
    ecx = MEM32(ebp + -148);
    eax = ebp + -124;
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    edx = 0; /* xor self */
    MEM32(esp) = 0xFFFFFFFFu;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ADDAu); RECOMP_ABI_CALL(0x00365010u, sub_00365010); /* call 0x00365010 */

loc_0014ADDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AF0B; /* je: equal / zero */

loc_0014ADE2: ;
    eax = MEM32(ebp + -156);
    eax = MEM32(eax);
    MEM32(esp) = 0x62697064;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ADFAu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014ADFA: ;
    MEM32(ebp + -160) = eax;
    esi = MEM32(ebp + -148);
    edx = ebp + -96;
    ecx = ebp + -132;
    eax = ebp + -136;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AE29u); RECOMP_ABI_CALL(0x003644C0u, sub_003644C0); /* call 0x003644C0 */

loc_0014AE29: ;
    eax = MEM32(ebp + -160);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x42C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -116); /* addss */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x59CA64);
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    eax = ebp + -108;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AE64u); RECOMP_ABI_CALL(0x0014AF50u, sub_0014AF50); /* call 0x0014AF50 */

loc_0014AE64: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    ecx = MEM32(ebp + -148);
    esi = ebp + -124;
    edx = ebp + -108;
    eax = ebp + -84;
    MEM32(esp) = 0x4029;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AE9Du); RECOMP_ABI_CALL(0x0024BC80u, sub_0024BC80); /* call 0x0024BC80 */

loc_0014AE9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AED6; /* je: equal / zero */

loc_0014AEA1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    eax = MEM32(0x5823F0);
    ecx = 0; /* xor self */
    edx = ebp + -124;
    ecx = ebp + -108;
    MEM32(esp) = 0;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AED4u); RECOMP_ABI_CALL(0x0031F8D0u, sub_0031F8D0); /* call 0x0031F8D0 */

loc_0014AED4: ;
    goto loc_0014AF09;

loc_0014AED6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    eax = MEM32(0x5823F4);
    ecx = 0; /* xor self */
    edx = ebp + -124;
    ecx = ebp + -108;
    MEM32(esp) = 0;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AF09u); RECOMP_ABI_CALL(0x0031F8D0u, sub_0031F8D0); /* call 0x0031F8D0 */

loc_0014AF09: ;
    goto loc_0014AF0B;

loc_0014AF0B: ;
    goto loc_0014AF0D;

loc_0014AF0D: ;
    goto loc_0014AF0F;

loc_0014AF0F: ;
    goto loc_0014AF11;

loc_0014AF11: ;
    SET_LO16(eax, MEM16(ebp + -126));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -126) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -138);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AF2Cu); RECOMP_ABI_CALL(0x00148F80u, sub_00148F80); /* call 0x00148F80 */

loc_0014AF2C: ;
    MEM16(ebp + -138) = LO16(eax);
    goto loc_0014AC70;

loc_0014AF38: ;
    goto loc_0014AF3A;

loc_0014AF3A: ;
    esp = esp + 0xC4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014AF50
 * Original: 0x0014AF50 - 0x0014AFA0 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AF50(void)
{
    uint32_t ebp = g_ebp;

loc_0014AF50: ;
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
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014AFA0
 * Original: 0x0014AFA0 - 0x0014B098 (248 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AFA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AFBAu); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_0014AFBA: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014AFCC; /* jne: not equal / not zero */

loc_0014AFC3: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_0014AFFB;

loc_0014AFCC: ;
    eax = MEM32(0x8BFACC);
    MEM32(ebp + -28) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AFE0u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_0014AFE0: ;
    ecx = MEM32(ebp + -28);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014AFEFu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014AFEF: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -8) = eax;

loc_0014AFFB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B007u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_0014B007: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B019; /* jne: not equal / not zero */

loc_0014B010: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_0014B048;

loc_0014B019: ;
    eax = MEM32(0x8BFACC);
    MEM32(ebp + -32) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B02Du); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_0014B02D: ;
    ecx = MEM32(ebp + -32);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B03Cu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014B03C: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -16) = eax;

loc_0014B048: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B093; /* je: equal / zero */

loc_0014B04E: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B093; /* je: equal / zero */

loc_0014B054: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B067u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014B067: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B075u); RECOMP_ABI_CALL(0x00148FF0u, sub_00148FF0); /* call 0x00148FF0 */

loc_0014B075: ;
    edx = eax;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -24);
    eax = eax + 4;
    eax = eax + 0x4C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B093u); RECOMP_ABI_CALL(0x0014A420u, sub_0014A420); /* call 0x0014A420 */

loc_0014B093: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014B0A0
 * Original: 0x0014B0A0 - 0x0014B2F7 (599 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B0A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014B0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x48)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2C) = 0;
    MEM8(ebp + -37) = 0;
    eax = MEM32(0x8C063C);
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2E), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B0EC; /* jne: not equal / not zero */

loc_0014B0C0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B0C5u); RECOMP_ABI_CALL(0x001B6DF0u, sub_001B6DF0); /* call 0x001B6DF0 */

loc_0014B0C5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B0DA; /* jne: not equal / not zero */

loc_0014B0CD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B0D2u); RECOMP_ABI_CALL(0x003743E0u, sub_003743E0); /* call 0x003743E0 */

loc_0014B0D2: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B0EA; /* je: equal / zero */

loc_0014B0DA: ;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2C) = 1;
    goto loc_0014B2EF;

loc_0014B0EA: ;
    goto loc_0014B0EC;

loc_0014B0EC: ;
    eax = MEM32(0x8C063C);
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2E), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B114; /* jne: not equal / not zero */

loc_0014B0F7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B0FCu); RECOMP_ABI_CALL(0x0006F7B0u, sub_0006F7B0); /* call 0x0006F7B0 */

loc_0014B0FC: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B114; /* je: equal / zero */

loc_0014B104: ;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2C) = 2;
    goto loc_0014B2EF;

loc_0014B114: ;
    MEM32(ebp + -32) = 0xFFFFFFFFu;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B12Fu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014B12F: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B13Au); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014B13A: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B20F; /* je: equal / zero */

loc_0014B146: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B20A; /* je: equal / zero */

loc_0014B153: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B161u); RECOMP_ABI_CALL(0x00222440u, sub_00222440); /* call 0x00222440 */

loc_0014B161: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x34) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B1B0; /* jne: not equal / not zero */

loc_0014B16F: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B185u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014B185: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B1AA; /* je: equal / zero */

loc_0014B18E: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x424);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -38) = LO8(eax);
    goto loc_0014B1AE;

loc_0014B1AA: ;
    MEM8(ebp + -38) = 0;

loc_0014B1AE: ;
    goto loc_0014B1EC;

loc_0014B1B0: ;
    eax = MEM32(ebp + -36);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B1C3u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014B1C3: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B1E6; /* je: equal / zero */

loc_0014B1CC: ;
    eax = MEM32(ebp + -28);
    eax = ZX8(MEM8(eax + 0x428));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -38) = LO8(eax);
    goto loc_0014B1EA;

loc_0014B1E6: ;
    MEM8(ebp + -38) = 0;

loc_0014B1EA: ;
    goto loc_0014B1EC;

loc_0014B1EC: ;
    _fa = (uint32_t)(MEM8(ebp + -38)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -38), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B1FD; /* jne: not equal / not zero */

loc_0014B1F2: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -32) = eax;
    goto loc_0014B208;

loc_0014B1FD: ;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2C) = 3;

loc_0014B208: ;
    goto loc_0014B20A;

loc_0014B20A: ;
    goto loc_0014B12F;

loc_0014B20F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B2AB; /* je: equal / zero */

loc_0014B219: ;
    MEM8(ebp + -37) = 1;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B231u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014B231: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B23Cu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014B23C: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B2A9; /* je: equal / zero */

loc_0014B244: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B2A7; /* jne: not equal / not zero */

loc_0014B24D: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B258u); RECOMP_ABI_CALL(0x0014B300u, sub_0014B300); /* call 0x0014B300 */

loc_0014B258: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B2A1; /* je: equal / zero */

loc_0014B261: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B280u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014B280: ;
    edx = MEM32(ebp + -48);
    ecx = MEM32(ebp + -44);
    eax = eax + 4;
    eax = eax + 0x4C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B29Cu); RECOMP_ABI_CALL(0x0014A390u, sub_0014A390); /* call 0x0014A390 */

loc_0014B29C: ;
    MEM8(ebp + -37) = LO8(eax);
    goto loc_0014B2A5;

loc_0014B2A1: ;
    MEM8(ebp + -37) = 0;

loc_0014B2A5: ;
    goto loc_0014B2A7;

loc_0014B2A7: ;
    goto loc_0014B231;

loc_0014B2A9: ;
    goto loc_0014B2AB;

loc_0014B2AB: ;
    eax = MEM32(0x8C063C);
    ecx = ZX8(MEM8(eax + 0x2E));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -49) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B2CA; /* je: equal / zero */

loc_0014B2BE: ;
    _fa = (uint32_t)(MEM8(ebp + -37)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -37), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -49) = LO8(eax);

loc_0014B2CA: ;
    SET_LO8(eax, MEM8(ebp + -49));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x2E) = LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -37)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -37), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B2ED; /* je: equal / zero */

loc_0014B2E2: ;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2C) = 0;

loc_0014B2ED: ;
    goto loc_0014B2EF;

loc_0014B2EF: ;
    SET_LO8(eax, MEM8(ebp + -37));
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014B300
 * Original: 0x0014B300 - 0x0014B828 (1320 bytes, 305 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B300(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014B300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xE8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B321u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014B321: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -196) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B333u); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014B333: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B3C1; /* jne: not equal / not zero */

loc_0014B33B: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B3C1; /* je: equal / zero */

loc_0014B347: ;
    eax = MEM32(0x8C063C);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    eax = MEM32(eax + ecx * 4 + 0x14);
    MEM32(ebp + -196) = eax;
    eax = MEM32(0x8C063C);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    MEM32(eax + ecx * 4 + 0x14) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -196)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -196), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B3BF; /* je: equal / zero */

loc_0014B37A: ;
    eax = MEM32(ebp + -196);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B390u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014B390: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = ZX16(MEM16(eax + 0xB6));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B3BD; /* je: equal / zero */

loc_0014B3A5: ;
    eax = MEM32(ebp + -196);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B3B3u); RECOMP_ABI_CALL(0x00225770u, sub_00225770); /* call 0x00225770 */

loc_0014B3B3: ;
    MEM32(ebp + -196) = 0xFFFFFFFFu;

loc_0014B3BD: ;
    goto loc_0014B3BF;

loc_0014B3BF: ;
    goto loc_0014B3C1;

loc_0014B3C1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B3C6u); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014B3C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B4BA; /* jne: not equal / not zero */

loc_0014B3CE: ;
    _fa = (uint32_t)(MEM32(ebp + -196)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -196), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B4BA; /* je: equal / zero */

loc_0014B3DB: ;
    eax = MEM32(ebp + -196);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B3F1u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014B3F1: ;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -196);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B410u); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_0014B410: ;
    MEM32(ebp + -200) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B456; /* jne: not equal / not zero */

loc_0014B422: ;
    ecx = 0x46792A;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x73A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B44Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014B44A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B456u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014B456: ;
    eax = MEM32(ebp + -196);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B464u); RECOMP_ABI_CALL(0x002240C0u, sub_002240C0); /* call 0x002240C0 */

loc_0014B464: ;
    eax = MEM32(ebp + -196);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B47Au); RECOMP_ABI_CALL(0x00224870u, sub_00224870); /* call 0x00224870 */

loc_0014B47A: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + -196);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B496u); RECOMP_ABI_CALL(0x00149100u, sub_00149100); /* call 0x00149100 */

loc_0014B496: ;
    _fa = (uint32_t)(MEM32(ebp + -200)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -200), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B4B5; /* je: equal / zero */

loc_0014B49F: ;
    eax = MEM32(ebp + -200);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B4B5u); RECOMP_ABI_CALL(0x00224870u, sub_00224870); /* call 0x00224870 */

loc_0014B4B5: ;
    goto loc_0014B7BA;

loc_0014B4BA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B4BFu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014B4BF: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(0x838FC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838FC8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B4EF; /* je: equal / zero */

loc_0014B4CB: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x42C;
    eax = ZX16(MEM16(0x838FC8));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B4EFu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014B4EF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B4FAu); RECOMP_ABI_CALL(0x00149B30u, sub_00149B30); /* call 0x00149B30 */

loc_0014B4FA: ;
    MEM16(ebp + -214) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B7B8; /* je: equal / zero */

loc_0014B511: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B516u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0014B516: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B51Eu); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0014B51E: ;
    eax = eax + 0x170;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xF4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B53Du); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014B53D: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B7B6; /* je: equal / zero */

loc_0014B54D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -214);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B55Cu); RECOMP_ABI_CALL(0x001496D0u, sub_001496D0); /* call 0x001496D0 */

loc_0014B55C: ;
    MEM32(ebp + -32) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B564u); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014B564: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B59B; /* je: equal / zero */

loc_0014B568: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x164;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B58Au); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014B58A: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -204) = eax;
    goto loc_0014B5A7;

loc_0014B59B: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -204) = eax;

loc_0014B5A7: ;
    eax = MEM32(ebp + -204);
    ecx = ebp + -168;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B5C7u); RECOMP_ABI_CALL(0x00224210u, sub_00224210); /* call 0x00224210 */

loc_0014B5C7: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(eax);
    MEM32(ebp + -144) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -140) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -136) = eax;
    eax = ebp + -168;
    eax = eax + 0x34;
    ecx = MEM32(ebp + -32);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B603u); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_0014B603: ;
    eax = MEM32(0x59CA64);
    ecx = MEM32(eax);
    MEM32(ebp + -104) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -100) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -192;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B62Eu); RECOMP_ABI_CALL(0x00130840u, sub_00130840); /* call 0x00130840 */

loc_0014B62E: ;
    ecx = MEM32(eax);
    MEM32(ebp + -180) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -176) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -172) = eax;
    ecx = ebp + -168;
    eax = ebp + -180;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B660u); RECOMP_ABI_CALL(0x001497D0u, sub_001497D0); /* call 0x001497D0 */

loc_0014B660: ;
    eax = ebp + -168;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B66Eu); RECOMP_ABI_CALL(0x0022AC70u, sub_0022AC70); /* call 0x0022AC70 */

loc_0014B66E: ;
    MEM32(ebp + -208) = eax;
    _fa = (uint32_t)(MEM32(ebp + -208)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -208), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B7B4; /* je: equal / zero */

loc_0014B681: ;
    eax = MEM32(ebp + -208);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B697u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014B697: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B7B2; /* je: equal / zero */

loc_0014B6A4: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B6B9u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014B6B9: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x70) = ecx;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x20);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -16);
    MEM16(eax + 0x68) = LO16(ecx);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x1C8) = ecx;
    ecx = MEM32(ebp + -208);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -208);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B703u); RECOMP_ABI_CALL(0x00380480u, sub_00380480); /* call 0x00380480 */

loc_0014B703: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B72B; /* je: equal / zero */

loc_0014B70F: ;
    eax = MEM32(ebp + -12);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + -208);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B72Bu); RECOMP_ABI_CALL(0x001431D0u, sub_001431D0); /* call 0x001431D0 */

loc_0014B72B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B730u); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014B730: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014B7B0; /* jne: not equal / not zero */

loc_0014B734: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B739u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014B739: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x348);
    MEM32(ebp + -212) = eax;
    _fa = (uint32_t)(MEM32(ebp + -212)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -212), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0014B783; /* jle: less or equal (signed <=) */

loc_0014B754: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xAA);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0014B783; /* jle: less or equal (signed <=) */

loc_0014B763: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B781u); RECOMP_ABI_CALL(0x0014C280u, sub_0014C280); /* call 0x0014C280 */

loc_0014B781: ;
    goto loc_0014B7AE;

loc_0014B783: ;
    _fa = (uint32_t)(MEM32(ebp + -212)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -212), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B7AC; /* je: equal / zero */

loc_0014B78C: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x34);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B7ACu); RECOMP_ABI_CALL(0x0014C280u, sub_0014C280); /* call 0x0014C280 */

loc_0014B7AC: ;
    goto loc_0014B7AE;

loc_0014B7AE: ;
    goto loc_0014B7B0;

loc_0014B7B0: ;
    goto loc_0014B7B2;

loc_0014B7B2: ;
    goto loc_0014B7B4;

loc_0014B7B4: ;
    goto loc_0014B7B6;

loc_0014B7B6: ;
    goto loc_0014B7B8;

loc_0014B7B8: ;
    goto loc_0014B7BA;

loc_0014B7BA: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x68;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B7DAu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0014B7DA: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B7EFu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014B7EF: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x28) = 0;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B820; /* je: equal / zero */

loc_0014B811: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B820u); RECOMP_ABI_CALL(0x000F4AE0u, sub_000F4AE0); /* call 0x000F4AE0 */

loc_0014B820: ;
    esp = esp + 0xE8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014B830
 * Original: 0x0014B830 - 0x0014BBF7 (967 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B830(void)
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
loc_0014B830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x84)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BBBC; /* je: equal / zero */

loc_0014B84C: ;
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0014BBBC; /* jle: less or equal (signed <=) */

loc_0014B85E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B863u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014B863: ;
    MEM32(ebp + -28) = eax;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x39C;
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B88Cu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014B88C: ;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -52) = 0xFFFFFFFFu;
    MEM8(ebp + -54) = 0;
    MEM8(ebp + -53) = 0;
    eax = MEM32(ebp + -32);
    SET_LO16(eax, MEM16(eax + 6));
    MEM16(ebp + -58) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B977; /* je: equal / zero */

loc_0014B8B6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x4E4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -58);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B8DFu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014B8DF: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    ecx = MEM32(eax + 0x24);
    MEM32(ebp + -48) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(ebp + -44) = ecx;
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + -40) = eax;

loc_0014B8F7: ;
    eax = 0; /* xor self */
    xmm0 = XMM_SCALAR(MEMF(0x43DCF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -72); /* ucomiss */
    MEM8(ebp + -97) = LO8(eax);
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014B931; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -72)) */

loc_0014B90A: ;
    eax = ebp + -48;
    MEM32(esp) = 0x4029;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B925u); RECOMP_ABI_CALL(0x0024A7A0u, sub_0024A7A0); /* call 0x0024A7A0 */

loc_0014B925: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -97) = LO8(eax);

loc_0014B931: ;
    SET_LO8(eax, MEM8(ebp + -97));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0014B93A; /* jne: not equal / not zero */

loc_0014B938: ;
    goto loc_0014B960;

loc_0014B93A: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -40); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -72); /* addss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    goto loc_0014B8F7;

loc_0014B960: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DCF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -72); /* ucomiss */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -53) = LO8(eax);

loc_0014B977: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B98Bu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014B98B: ;
    eax = ebp + -20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B996u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014B996: ;
    ecx = eax;
    MEM32(ebp + -24) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -98) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B9B1; /* je: equal / zero */

loc_0014B9A5: ;
    _fa = (uint32_t)(MEM8(ebp + -54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -54), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -98) = LO8(eax);

loc_0014B9B1: ;
    SET_LO8(eax, MEM8(ebp + -98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0014B9BD; /* jne: not equal / not zero */

loc_0014B9B8: ;
    goto loc_0014BACA;

loc_0014B9BD: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BAC5; /* je: equal / zero */

loc_0014B9D0: ;
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BAC5; /* je: equal / zero */

loc_0014B9E2: ;
    eax = MEM32(0x8C063C);
    SET_LO16(ecx, MEM16(eax + 0x2A));
    eax = MEM32(ebp + -68);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014B9FDu); RECOMP_ABI_CALL(0x0014BC00u, sub_0014BC00); /* call 0x0014BC00 */

loc_0014B9FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BAC3; /* je: equal / zero */

loc_0014BA06: ;
    eax = MEM32(ebp + -24);
    esi = MEM32(eax + 0x34);
    edx = ebp + -84;
    ecx = ebp + -88;
    eax = ebp + -92;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BA29u); RECOMP_ABI_CALL(0x003644C0u, sub_003644C0); /* call 0x003644C0 */

loc_0014BA29: ;
    eax = ebp + -84;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BA34u); RECOMP_ABI_CALL(0x00332B80u, sub_00332B80); /* call 0x00332B80 */

loc_0014BA34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BA43; /* jne: not equal / not zero */

loc_0014BA39: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -104) = eax;
    goto loc_0014BA7F;

loc_0014BA43: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BA48u); RECOMP_ABI_CALL(0x003326D0u, sub_003326D0); /* call 0x003326D0 */

loc_0014BA48: ;
    eax = eax + 0xE0;
    MEM32(ebp + -108) = eax;
    eax = esp;
    ecx = ebp + -84;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BA5Cu); RECOMP_ABI_CALL(0x00332B80u, sub_00332B80); /* call 0x00332B80 */

loc_0014BA5C: ;
    ecx = MEM32(ebp + -108);
    eax = eax & 0x7FFFFFFF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BA78u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014BA78: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    MEM32(ebp + -104) = eax;

loc_0014BA7F: ;
    eax = MEM32(ebp + -104);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BAC1; /* je: equal / zero */

loc_0014BA8B: ;
    _fa = (uint32_t)(MEM8(ebp + -53)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -53), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BAA5; /* jne: not equal / not zero */

loc_0014BA91: ;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -80);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -40) = eax;
    goto loc_0014BAB4;

loc_0014BAA5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -40); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */

loc_0014BAB4: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -52) = eax;
    MEM8(ebp + -54) = 1;

loc_0014BAC1: ;
    goto loc_0014BAC3;

loc_0014BAC3: ;
    goto loc_0014BAC5;

loc_0014BAC5: ;
    goto loc_0014B98B;

loc_0014BACA: ;
    _fa = (uint32_t)(MEM8(ebp + -54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -54), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BB04; /* jne: not equal / not zero */

loc_0014BAD0: ;
    ecx = 0x45EFAB;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x63E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BAF8u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014BAF8: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BB04u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014BB04: ;
    _fa = (uint32_t)(MEM8(ebp + -54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -54), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BBB1; /* je: equal / zero */

loc_0014BB0E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BB1Au); RECOMP_ABI_CALL(0x00148F80u, sub_00148F80); /* call 0x00148F80 */

loc_0014BB1A: ;
    MEM16(ebp + -56) = LO16(eax);

loc_0014BB1E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BBAF; /* je: equal / zero */

loc_0014BB2B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -56);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BB37u); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_0014BB37: ;
    MEM32(ebp + -64) = eax;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -64);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BB4Fu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014BB4F: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BB9A; /* je: equal / zero */

loc_0014BB5B: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -52) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BB9A; /* je: equal / zero */

loc_0014BB66: ;
    edx = MEM32(ebp + -64);
    ecx = MEM32(ebp + -52);
    eax = ebp + -48;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BB7Fu); RECOMP_ABI_CALL(0x0014BC80u, sub_0014BC80); /* call 0x0014BC80 */

loc_0014BB7F: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -64);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BB94u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014BB94: ;
    MEM16(eax + 0x3C) = 0xFFFF;

loc_0014BB9A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -56);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BBA6u); RECOMP_ABI_CALL(0x00148F80u, sub_00148F80); /* call 0x00148F80 */

loc_0014BBA6: ;
    MEM16(ebp + -56) = LO16(eax);
    goto loc_0014BB1E;

loc_0014BBAF: ;
    goto loc_0014BBB1;

loc_0014BBB1: ;
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2A) = 0xFFFF;

loc_0014BBBC: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BBD0u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014BBD0: ;
    eax = ebp + -20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BBDBu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014BBDB: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BBEE; /* je: equal / zero */

loc_0014BBE3: ;
    eax = MEM32(ebp + -24);
    MEM16(eax + 0x3C) = 0xFFFF;
    goto loc_0014BBD0;

loc_0014BBEE: ;
    esp = esp + 0x84;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014BC00
 * Original: 0x0014BC00 - 0x0014BC74 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014BC00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BC65; /* je: equal / zero */

loc_0014BC16: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BC1Bu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014BC1B: ;
    ecx = eax;
    ecx = ecx + 0x39C;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BC3Bu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014BC3B: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BC56u); RECOMP_ABI_CALL(0x00333540u, sub_00333540); /* call 0x00333540 */

loc_0014BC56: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BC63; /* je: equal / zero */

loc_0014BC5A: ;
    MEM32(ebp + -4) = 1;
    goto loc_0014BC6C;

loc_0014BC63: ;
    goto loc_0014BC65;

loc_0014BC65: ;
    MEM32(ebp + -4) = 0;

loc_0014BC6C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014BC80
 * Original: 0x0014BC80 - 0x0014BE52 (466 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014BC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BCA4u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014BCA4: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BCC3u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014BCC3: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BD00; /* jne: not equal / not zero */

loc_0014BCCC: ;
    ecx = 0x46D585;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4CB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BCF4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014BCF4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD00u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014BD00: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BD3A; /* jne: not equal / not zero */

loc_0014BD06: ;
    ecx = 0x480D96;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4CC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD2Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014BD2E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD3Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014BD3A: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BE4D; /* je: equal / zero */

loc_0014BD44: ;
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BD9B; /* je: equal / zero */

loc_0014BD52: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD57u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014BD57: ;
    ecx = eax;
    ecx = ecx + 0x39C;
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD7Cu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014BD7C: ;
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -16);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD91u); RECOMP_ABI_CALL(0x00333540u, sub_00333540); /* call 0x00333540 */

loc_0014BD91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BD9B; /* jne: not equal / not zero */

loc_0014BD95: ;
    MEM8(ebp + -17) = 1;
    goto loc_0014BD9F;

loc_0014BD9B: ;
    MEM8(ebp + -17) = 0;

loc_0014BD9F: ;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x4C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BDB0u); RECOMP_ABI_CALL(0x00332B80u, sub_00332B80); /* call 0x00332B80 */

loc_0014BDB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BDC2; /* je: equal / zero */

loc_0014BDB5: ;
    eax = ZX8(MEM8(ebp + -17));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BE4B; /* je: equal / zero */

loc_0014BDC2: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BE05; /* je: equal / zero */

loc_0014BDCE: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BDE1u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014BDE1: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xCC);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xCC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BE03; /* je: equal / zero */

loc_0014BDF8: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BE03u); RECOMP_ABI_CALL(0x00375E50u, sub_00375E50); /* call 0x00375E50 */

loc_0014BE03: ;
    goto loc_0014BE05;

loc_0014BE05: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BE2F; /* jne: not equal / not zero */

loc_0014BE11: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BE2Au); RECOMP_ABI_CALL(0x0014A420u, sub_0014A420); /* call 0x0014A420 */

loc_0014BE2A: ;
    MEM8(ebp + -18) = LO8(eax);
    goto loc_0014BE33;

loc_0014BE2F: ;
    MEM8(ebp + -18) = 1;

loc_0014BE33: ;
    _fa = (uint32_t)(MEM8(ebp + -18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -18), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x2E) = LO8(ecx);

loc_0014BE4B: ;
    goto loc_0014BE4D;

loc_0014BE4D: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014BE60
 * Original: 0x0014BE60 - 0x0014BF2F (207 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BE60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014BE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BE7Fu); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014BE7F: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = 0x77656170;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BE97u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014BE97: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BEA5u); RECOMP_ABI_CALL(0x00373710u, sub_00373710); /* call 0x00373710 */

loc_0014BEA5: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BEBBu); RECOMP_ABI_CALL(0x003737C0u, sub_003737C0); /* call 0x003737C0 */

loc_0014BEBB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BED4; /* je: equal / zero */

loc_0014BEC3: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x308);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BF1D; /* jne: not equal / not zero */

loc_0014BED4: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BF1D; /* je: equal / zero */

loc_0014BEDA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BEDFu); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014BEDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014BF03; /* jne: not equal / not zero */

loc_0014BEE3: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BEF5u); RECOMP_ABI_CALL(0x003737C0u, sub_003737C0); /* call 0x003737C0 */

loc_0014BEF5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BF03; /* je: equal / zero */

loc_0014BEFD: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_0014BF1D; /* jl: less (signed <) */

loc_0014BF03: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BF15u); RECOMP_ABI_CALL(0x0012E5D0u, sub_0012E5D0); /* call 0x0012E5D0 */

loc_0014BF15: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014BF23; /* je: equal / zero */

loc_0014BF1D: ;
    MEM8(ebp + -13) = 1;
    goto loc_0014BF27;

loc_0014BF23: ;
    MEM8(ebp + -13) = 0;

loc_0014BF27: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014BF30
 * Original: 0x0014BF30 - 0x0014C049 (281 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014BF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    SET_LO16(eax, MEM16(ebp + 0x10));
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BF57u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014BF57: ;
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014BF6C; /* jl: less (signed <) */

loc_0014BF63: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014BFA0; /* jl: less (signed <) */

loc_0014BF6C: ;
    ecx = 0x47B597;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAEE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BF94u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014BF94: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BFA0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014BFA0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014BFE1; /* jne: not equal / not zero */

loc_0014BFA9: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BFC5u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014BFC5: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x1B4);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BFDF; /* je: equal / zero */

loc_0014BFD9: ;
    MEM8(ebp + -5) = 0;
    goto loc_0014C040;

loc_0014BFDF: ;
    goto loc_0014BFE1;

loc_0014BFE1: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C007; /* jne: not equal / not zero */

loc_0014BFF2: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C005u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0014C005: ;
    goto loc_0014C025;

loc_0014C007: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C00Cu); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014C00C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C023; /* jne: not equal / not zero */

loc_0014C010: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C023u); RECOMP_ABI_CALL(0x0014C0C0u, sub_0014C0C0); /* call 0x0014C0C0 */

loc_0014C023: ;
    goto loc_0014C025;

loc_0014C025: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    edx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x68);
    edx = edx + esi;
    MEM16(eax + ecx * 2 + 0x68) = LO16(edx);
    MEM8(ebp + -5) = 1;

loc_0014C040: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C050
 * Original: 0x0014C050 - 0x0014C0BC (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C050(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C072u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014C072: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C08Bu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014C08B: ;
    MEM32(ebp + -8) = eax;
    SET_LO16(eax, MEM16(ebp + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014C0B7; /* jne: not equal / not zero */

loc_0014C097: ;
    goto loc_0014C099;

loc_0014C099: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x1B4);
    ecx = ecx | 0x10;
    MEM32(eax + 0x1B4) = ecx;
    eax = MEM32(ebp + -8);
    MEM16(eax + 0x3D2) = 0;

loc_0014C0B7: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C0C0
 * Original: 0x0014C0C0 - 0x0014C120 (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C0C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C0E2u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014C0E2: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C0FBu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014C0FB: ;
    MEM32(ebp + -8) = eax;
    SET_LO16(eax, MEM16(ebp + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014C11B; /* jne: not equal / not zero */

loc_0014C107: ;
    goto loc_0014C109;

loc_0014C109: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x1B4);
    ecx = ecx | 0x20;
    MEM32(eax + 0x1B4) = ecx;

loc_0014C11B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C120
 * Original: 0x0014C120 - 0x0014C1F6 (214 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C120(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0x10));
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C146u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014C146: ;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C15B; /* jl: less (signed <) */

loc_0014C152: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C18F; /* jl: less (signed <) */

loc_0014C15B: ;
    ecx = 0x47B597;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB19;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C183u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014C183: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C18Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014C18F: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C1B3; /* jne: not equal / not zero */

loc_0014C1A0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C1B3u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0014C1B3: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x68);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014C1D8; /* jle: less or equal (signed <=) */

loc_0014C1C7: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x68);
    MEM32(ebp + -8) = eax;
    goto loc_0014C1DF;

loc_0014C1D8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    MEM32(ebp + -8) = eax;

loc_0014C1DF: ;
    eax = MEM32(ebp + -8);
    SET_LO16(edx, LO16(eax));
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM16(eax + ecx * 2 + 0x68) = LO16(edx);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C200
 * Original: 0x0014C200 - 0x0014C27B (123 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0014C200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C21Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014C21C: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x64);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C276; /* je: equal / zero */

loc_0014C235: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C249u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014C249: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C254u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014C254: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C274; /* je: equal / zero */

loc_0014C25C: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C272; /* jne: not equal / not zero */

loc_0014C267: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C272u); RECOMP_ABI_CALL(0x00149050u, sub_00149050); /* call 0x00149050 */

loc_0014C272: ;
    goto loc_0014C249;

loc_0014C274: ;
    goto loc_0014C276;

loc_0014C276: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C280
 * Original: 0x0014C280 - 0x0014C4A1 (545 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C280(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014C280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C49C; /* je: equal / zero */

loc_0014C29A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C49C; /* je: equal / zero */

loc_0014C2A7: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C2BAu); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014C2BA: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x1C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C49A; /* je: equal / zero */

loc_0014C2CD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C2D2u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014C2D2: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0x348;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C2F6u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014C2F6: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C332; /* je: equal / zero */

loc_0014C2FF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C30Au); RECOMP_ABI_CALL(0x00373630u, sub_00373630); /* call 0x00373630 */

loc_0014C30A: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x2CE) = 0;

loc_0014C332: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C3A5; /* je: equal / zero */

loc_0014C33B: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x28;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C350u); RECOMP_ABI_CALL(0x0014C4B0u, sub_0014C4B0); /* call 0x0014C4B0 */

loc_0014C350: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C3A3; /* je: equal / zero */

loc_0014C359: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C37Eu); RECOMP_ABI_CALL(0x00384040u, sub_00384040); /* call 0x00384040 */

loc_0014C37E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014C3A3; /* jne: not equal / not zero */

loc_0014C382: ;
    eax = 0x47B5D1;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C398u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0014C398: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C3A3u); RECOMP_ABI_CALL(0x00225770u, sub_00225770); /* call 0x00225770 */

loc_0014C3A3: ;
    goto loc_0014C3A5;

loc_0014C3A5: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C40F; /* je: equal / zero */

loc_0014C3AE: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x3C;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C3C3u); RECOMP_ABI_CALL(0x0014C4B0u, sub_0014C4B0); /* call 0x0014C4B0 */

loc_0014C3C3: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C40D; /* je: equal / zero */

loc_0014C3CC: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -16);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C3E8u); RECOMP_ABI_CALL(0x00384040u, sub_00384040); /* call 0x00384040 */

loc_0014C3E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014C40D; /* jne: not equal / not zero */

loc_0014C3EC: ;
    eax = 0x47B5D1;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C402u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0014C402: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C40Du); RECOMP_ABI_CALL(0x00225770u, sub_00225770); /* call 0x00225770 */

loc_0014C40D: ;
    goto loc_0014C40F;

loc_0014C40F: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x94); /* addss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    eax = MEM32(ebp + -4);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x90); /* addss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    eax = eax + 0x1A4;
    eax = eax + 0x12A;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0x50;
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -18) = 2;

loc_0014C464: ;
    eax = MEM32(ebp + -8);
    edx = ZX8(MEM8(eax));
    eax = MEM32(ebp + -4);
    ecx = ZX8(MEM8(eax));
    ecx = ecx + edx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 0xFFFFFFFFu);
    MEM16(ebp + -18) = LO16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014C464; /* jne: not equal / not zero */

loc_0014C498: ;
    goto loc_0014C49A;

loc_0014C49A: ;
    goto loc_0014C49C;

loc_0014C49C: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C4B0
 * Original: 0x0014C4B0 - 0x0014C566 (182 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C4B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C4B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xA8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -144) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C558; /* je: equal / zero */

loc_0014C4D6: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0xC);
    edx = ebp + -136;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C4F5u); RECOMP_ABI_CALL(0x00224210u, sub_00224210); /* call 0x00224210 */

loc_0014C4F5: ;
    eax = ebp + -136;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C503u); RECOMP_ABI_CALL(0x0022AC70u, sub_0022AC70); /* call 0x0022AC70 */

loc_0014C503: ;
    MEM32(ebp + -144) = eax;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -144), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C556; /* je: equal / zero */

loc_0014C512: ;
    eax = MEM32(ebp + -144);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C528u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014C528: ;
    MEM32(ebp + -140) = eax;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0x12));
    eax = MEM32(ebp + -140);
    MEM16(eax + 0x25E) = LO16(ecx);
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0x10));
    eax = MEM32(ebp + -140);
    MEM16(eax + 0x260) = LO16(ecx);

loc_0014C556: ;
    goto loc_0014C558;

loc_0014C558: ;
    eax = MEM32(ebp + -144);
    esp = esp + 0xA8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C570
 * Original: 0x0014C570 - 0x0014C724 (436 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C570(void)
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

loc_0014C570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C594u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014C594: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C5A9u); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_0014C5A9: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C71F; /* je: equal / zero */

loc_0014C5B6: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C5CCu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014C5CC: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C71D; /* je: equal / zero */

loc_0014C5DF: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C5F8u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014C5F8: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C71B; /* je: equal / zero */

loc_0014C605: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C61Au); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014C61A: ;
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
    PUSH32(esp, 0x0014C64Au); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014C64A: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C719; /* jne: not equal / not zero */

loc_0014C65E: ;
    edx = MEM32(ebp + -12);
    edx = edx + 4;
    edx = edx + 0x2C;
    ecx = MEM32(0x59CA6C);
    eax = ebp + -72;
    eax = eax + 4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C683u); RECOMP_ABI_CALL(0x0014C730u, sub_0014C730); /* call 0x0014C730 */

loc_0014C683: ;
    eax = ebp + -72;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C691u); RECOMP_ABI_CALL(0x0014C7F0u, sub_0014C7F0); /* call 0x0014C7F0 */

loc_0014C691: ;
    MEMF(ebp + -76) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0014C6DE; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0014C6A1: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0014C6DE; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0014C6A3: ;
    edx = MEM32(ebp + -12);
    edx = edx + 4;
    edx = edx + 0x2C;
    ecx = MEM32(0x59CA70);
    eax = ebp + -72;
    eax = eax + 4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C6C8u); RECOMP_ABI_CALL(0x0014C730u, sub_0014C730); /* call 0x0014C730 */

loc_0014C6C8: ;
    eax = ebp + -72;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C6D6u); RECOMP_ABI_CALL(0x0014C7F0u, sub_0014C7F0); /* call 0x0014C7F0 */

loc_0014C6D6: ;
    MEMF(ebp + -80) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */

loc_0014C6DE: ;
    ecx = ebp + -72;
    ecx = ecx + 4;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x2C;
    edx = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C700u); RECOMP_ABI_CALL(0x001D1AC0u, sub_001D1AC0); /* call 0x001D1AC0 */

loc_0014C700: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    edx = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C719u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_0014C719: ;
    goto loc_0014C71B;

loc_0014C71B: ;
    goto loc_0014C71D;

loc_0014C71D: ;
    goto loc_0014C71F;

loc_0014C71F: ;
    esp = esp + 0x68;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0014C730
 * Original: 0x0014C730 - 0x0014C7E4 (180 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C730(void)
{
    uint32_t ebp = g_ebp;

loc_0014C730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014C7F0
 * Original: 0x0014C7F0 - 0x0014C87B (139 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C7F0(void)
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

loc_0014C7F0: ;
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
    PUSH32(esp, 0x0014C804u); RECOMP_ABI_CALL(0x0014E7C0u, sub_0014E7C0); /* call 0x0014E7C0 */

loc_0014C804: ;
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
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0014C861; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014C83A: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -4); /* divss */
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C85Fu); RECOMP_ABI_CALL(0x0014AF50u, sub_0014AF50); /* call 0x0014AF50 */

loc_0014C85F: ;
    goto loc_0014C869;

loc_0014C861: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0014C869: ;
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
 * sub_0014C880
 * Original: 0x0014C880 - 0x0014D3AC (2860 bytes, 604 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C880(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0014C880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x10C4;
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C8B0; /* je: equal / zero */

loc_0014C896: ;
    eax = ZX8(MEM8(0x584578));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C8B0; /* je: equal / zero */

loc_0014C8A2: ;
    eax = 0x584570;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C8B0u); RECOMP_ABI_CALL(0x001006A0u, sub_001006A0); /* call 0x001006A0 */

loc_0014C8B0: ;
    eax = ebp + -4100;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C8BEu); RECOMP_ABI_CALL(0x00146BA0u, sub_00146BA0); /* call 0x00146BA0 */

loc_0014C8BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D349; /* je: equal / zero */

loc_0014C8C6: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -4116;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C8DDu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014C8DD: ;
    eax = ebp + -4116;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C8EBu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014C8EB: ;
    MEM32(ebp + -4120) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D304; /* je: equal / zero */

loc_0014C8FA: ;
    eax = MEM32(ebp + -4108);
    MEM16(ebp + -4198) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4198);
    eax = ebp + -4100;
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -4128) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C939; /* jl: less (signed <) */

loc_0014C92B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C96D; /* jl: less (signed <) */

loc_0014C939: ;
    ecx = 0x4758CC;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x256;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C961u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014C961: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C96Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014C96D: ;
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C982u); RECOMP_ABI_CALL(0x001498A0u, sub_001498A0); /* call 0x001498A0 */

loc_0014C982: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C9FA; /* jne: not equal / not zero */

loc_0014C986: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x478885;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C9CAu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_0014C9CA: ;
    ecx = eax;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x25B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C9EEu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014C9EE: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014C9FAu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014C9FA: ;
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CA0Fu); RECOMP_ABI_CALL(0x001498A0u, sub_001498A0); /* call 0x001498A0 */

loc_0014CA0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CA87; /* jne: not equal / not zero */

loc_0014CA13: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x49256E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CA57u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_0014CA57: ;
    ecx = eax;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x25C;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CA7Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014CA7B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CA87u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014CA87: ;
    eax = MEM32(ebp + -4128);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CA98u); RECOMP_ABI_CALL(0x00149840u, sub_00149840); /* call 0x00149840 */

loc_0014CA98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CB18; /* jne: not equal / not zero */

loc_0014CA9C: ;
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x467903;
    eax = 0x46FED7;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CAE8u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_0014CAE8: ;
    ecx = eax;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x25D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CB0Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014CB0C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CB18u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014CB18: ;
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CB2Du); RECOMP_ABI_CALL(0x001498A0u, sub_001498A0); /* call 0x001498A0 */

loc_0014CB2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CBA5; /* jne: not equal / not zero */

loc_0014CB31: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x4894D5;
    ecx = 0x44B0D3;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CB75u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_0014CB75: ;
    ecx = eax;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x25E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CB99u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014CB99: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CBA5u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014CBA5: ;
    eax = MEM32(ebp + -4128);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC0A; /* je: equal / zero */

loc_0014CBB8: ;
    eax = MEM32(ebp + -4128);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014CBD6; /* jl: less (signed <) */

loc_0014CBC7: ;
    eax = MEM32(ebp + -4128);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014CC0A; /* jle: less or equal (signed <=) */

loc_0014CBD6: ;
    ecx = 0x46FEE9;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x260;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CBFEu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014CBFE: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CC0Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014CC0A: ;
    eax = MEM32(ebp + -4128);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC6F; /* je: equal / zero */

loc_0014CC1D: ;
    eax = MEM32(ebp + -4128);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014CC3B; /* jl: less (signed <) */

loc_0014CC2C: ;
    eax = MEM32(ebp + -4128);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014CC6F; /* jle: less or equal (signed <=) */

loc_0014CC3B: ;
    ecx = 0x484131;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x261;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CC63u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014CC63: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CC6Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014CC6F: ;
    eax = MEM32(ebp + -4128);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CCC5; /* je: equal / zero */

loc_0014CC82: ;
    eax = MEM32(ebp + -4128);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CCC5; /* jge: greater or equal (signed >=) */

loc_0014CC91: ;
    ecx = 0x448271;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x262;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CCB9u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014CCB9: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CCC5u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014CCC5: ;
    eax = MEM32(ebp + -4120);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CDA2; /* jne: not equal / not zero */

loc_0014CCD5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CCDAu); RECOMP_ABI_CALL(0x0010AFD0u, sub_0010AFD0); /* call 0x0010AFD0 */

loc_0014CCDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CDA2; /* jne: not equal / not zero */

loc_0014CCE2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CCE7u); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014CCE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CD53; /* je: equal / zero */

loc_0014CCEB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CCF0u); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_0014CCF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CD51; /* jne: not equal / not zero */

loc_0014CCF4: ;
    eax = MEM32(ebp + -4108);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CD02u); RECOMP_ABI_CALL(0x00132990u, sub_00132990); /* call 0x00132990 */

loc_0014CD02: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CD51; /* je: equal / zero */

loc_0014CD0A: ;
    eax = MEM32(ebp + -4108);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CD18u); RECOMP_ABI_CALL(0x0012E850u, sub_0012E850); /* call 0x0012E850 */

loc_0014CD18: ;
    eax = MEM32(ebp + -4108);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CD26u); RECOMP_ABI_CALL(0x0014B300u, sub_0014B300); /* call 0x0014B300 */

loc_0014CD26: ;
    eax = MEM32(ebp + -4120);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CD42; /* je: equal / zero */

loc_0014CD32: ;
    eax = MEM32(ebp + -4108);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CD40u); RECOMP_ABI_CALL(0x00132330u, sub_00132330); /* call 0x00132330 */

loc_0014CD40: ;
    goto loc_0014CD4F;

loc_0014CD42: ;
    eax = MEM32(ebp + -4120);
    MEM32(eax + 0x2C) = 1;

loc_0014CD4F: ;
    goto loc_0014CD51;

loc_0014CD51: ;
    goto loc_0014CDA0;

loc_0014CD53: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CD58u); RECOMP_ABI_CALL(0x001951E0u, sub_001951E0); /* call 0x001951E0 */

loc_0014CD58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CD9E; /* jne: not equal / not zero */

loc_0014CD5C: ;
    eax = MEM32(ebp + -4120);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xAA);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CD7E; /* jne: not equal / not zero */

loc_0014CD6E: ;
    eax = MEM32(ebp + -4108);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CD7Cu); RECOMP_ABI_CALL(0x0014B300u, sub_0014B300); /* call 0x0014B300 */

loc_0014CD7C: ;
    goto loc_0014CD9C;

loc_0014CD7E: ;
    eax = MEM32(0x8C063C);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x28), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CD9A; /* jne: not equal / not zero */

loc_0014CD89: ;
    eax = MEM32(0x8C063C);
    eax = ZX8(MEM8(eax + 0x2E));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CD9Au); RECOMP_ABI_CALL(0x001C44F0u, sub_001C44F0); /* call 0x001C44F0 */

loc_0014CD9A: ;
    goto loc_0014CD9C;

loc_0014CD9C: ;
    goto loc_0014CD9E;

loc_0014CD9E: ;
    goto loc_0014CDA0;

loc_0014CDA0: ;
    goto loc_0014CDA2;

loc_0014CDA2: ;
    eax = MEM32(ebp + -4120);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D2FF; /* je: equal / zero */

loc_0014CDB2: ;
    eax = MEM32(ebp + -4120);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CDC3u); RECOMP_ABI_CALL(0x00372A20u, sub_00372A20); /* call 0x00372A20 */

loc_0014CDC3: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D2FF; /* je: equal / zero */

loc_0014CDCF: ;
    eax = MEM32(ebp + -4120);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CDE8u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014CDE8: ;
    MEM32(ebp + -4124) = eax;
    eax = MEM32(0x8C063C);
    _fa = (uint32_t)(MEM8(eax + 0x29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x29), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D1E0; /* jne: not equal / not zero */

loc_0014CDFD: ;
    ecx = MEM32(ebp + -4108);
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CE17u); RECOMP_ABI_CALL(0x0014D3B0u, sub_0014D3B0); /* call 0x0014D3B0 */

loc_0014CE17: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CE58; /* je: equal / zero */

loc_0014CE27: ;
    eax = MEM32(ebp + -4124);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CE58; /* jne: not equal / not zero */

loc_0014CE36: ;
    eax = MEM32(ebp + -4108);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CE44u); RECOMP_ABI_CALL(0x0014D630u, sub_0014D630); /* call 0x0014D630 */

loc_0014CE44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CE58; /* jne: not equal / not zero */

loc_0014CE48: ;
    eax = MEM32(ebp + -4128);
    ecx = MEM32(eax);
    ecx = ecx | 0x400;
    MEM32(eax) = ecx;

loc_0014CE58: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax);
    eax = eax & 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CEA0; /* je: equal / zero */

loc_0014CE6A: ;
    eax = MEM32(ebp + -4124);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CEA0; /* jne: not equal / not zero */

loc_0014CE79: ;
    eax = MEM32(ebp + -4120);
    _fa = (uint32_t)(MEM8(eax + 0x3E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3E), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CE9E; /* jne: not equal / not zero */

loc_0014CE85: ;
    eax = MEM32(ebp + -4108);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CE93u); RECOMP_ABI_CALL(0x0014DA10u, sub_0014DA10); /* call 0x0014DA10 */

loc_0014CE93: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -4120);
    MEM8(eax + 0x3E) = LO8(ecx);

loc_0014CE9E: ;
    goto loc_0014CEAA;

loc_0014CEA0: ;
    eax = MEM32(ebp + -4120);
    MEM8(eax + 0x3E) = 0;

loc_0014CEAA: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax);
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CEFA; /* je: equal / zero */

loc_0014CEBC: ;
    eax = MEM32(ebp + -4124);
    _fa = (uint32_t)(MEM32(eax + 0x2C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CEFA; /* je: equal / zero */

loc_0014CECB: ;
    ecx = MEM32(ebp + -4108);
    eax = MEM32(ebp + -4124);
    eax = MEM32(eax + 0x2C8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CEE9u); RECOMP_ABI_CALL(0x0014DBF0u, sub_0014DBF0); /* call 0x0014DBF0 */

loc_0014CEE9: ;
    eax = MEM32(ebp + -4120);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CEFAu); RECOMP_ABI_CALL(0x003735E0u, sub_003735E0); /* call 0x003735E0 */

loc_0014CEFA: ;
    eax = MEM32(ebp + -4120);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -4268) = eax;
    eax = MEM32(ebp + -4120);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CF22u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014CF22: ;
    ecx = MEM32(ebp + -4268);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CF3Bu); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_0014CF3B: ;
    MEM32(ebp + -4196) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4196)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4196), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CFB4; /* je: equal / zero */

loc_0014CF4A: ;
    eax = MEM32(ebp + -4196);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CF58u); RECOMP_ABI_CALL(0x001BD1B0u, sub_001BD1B0); /* call 0x001BD1B0 */

loc_0014CF58: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CFB4; /* je: equal / zero */

loc_0014CF60: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax);
    eax = eax & 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CF84; /* jne: not equal / not zero */

loc_0014CF72: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax);
    eax = eax & 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CF9D; /* je: equal / zero */

loc_0014CF84: ;
    eax = MEM32(ebp + -4120);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CF9Du); RECOMP_ABI_CALL(0x00376720u, sub_00376720); /* call 0x00376720 */

loc_0014CF9D: ;
    eax = MEM32(ebp + -4124);
    SET_LO16(ecx, MEM16(eax + 0x2A2));
    eax = MEM32(ebp + -4128);
    MEM16(eax + 0x18) = LO16(ecx);

loc_0014CFB4: ;
    eax = MEM32(ebp + -4128);
    eax = MEM32(eax);
    MEM16(ebp + -4190) = LO16(eax);
    edx = MEM32(ebp + -4108);
    ecx = ebp + -4192;
    ecx = ecx + 0x28;
    eax = MEM32(ebp + -4128);
    eax = eax + 4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CFEBu); RECOMP_ABI_CALL(0x0014C570u, sub_0014C570); /* call 0x0014C570 */

loc_0014CFEB: ;
    eax = MEM32(ebp + -4152);
    MEM32(ebp + -4140) = eax;
    eax = MEM32(ebp + -4148);
    MEM32(ebp + -4136) = eax;
    eax = MEM32(ebp + -4144);
    MEM32(ebp + -4132) = eax;
    eax = MEM32(ebp + -4140);
    MEM32(ebp + -4164) = eax;
    eax = MEM32(ebp + -4136);
    MEM32(ebp + -4160) = eax;
    eax = MEM32(ebp + -4132);
    MEM32(ebp + -4156) = eax;
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ebp + -4180) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(ebp + -4176) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4172) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4128);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(ebp + -4168) = xmm0.f[0]; /* movss */
    MEM8(ebp + -4192) = 3;
    eax = MEM32(ebp + -4128);
    SET_LO16(eax, MEM16(eax + 0x18));
    MEM16(ebp + -4188) = LO16(eax);
    eax = MEM32(ebp + -4128);
    SET_LO16(eax, MEM16(eax + 0x1A));
    MEM16(ebp + -4186) = LO16(eax);
    eax = MEM32(ebp + -4128);
    SET_LO16(eax, MEM16(eax + 0x1C));
    MEM16(ebp + -4184) = LO16(eax);
    MEM8(ebp + -4191) = 0;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4188);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D114; /* je: equal / zero */

loc_0014D0C8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014D0E0; /* jl: less (signed <) */

loc_0014D0D4: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014D114; /* jle: less or equal (signed <=) */

loc_0014D0E0: ;
    ecx = 0x450F6D;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2E3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D108u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014D108: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D114u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014D114: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4186);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D170; /* je: equal / zero */

loc_0014D124: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4186);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014D13C; /* jl: less (signed <) */

loc_0014D130: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4186);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014D170; /* jle: less or equal (signed <=) */

loc_0014D13C: ;
    ecx = 0x472F44;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2E4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D164u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014D164: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D170u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014D170: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4184);
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D1C0; /* je: equal / zero */

loc_0014D180: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014D1C0; /* jge: greater or equal (signed >=) */

loc_0014D18C: ;
    ecx = 0x4539AC;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2E5;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D1B4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014D1B4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D1C0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014D1C0: ;
    eax = MEM32(ebp + -4120);
    ecx = MEM32(eax + 0x34);
    eax = ebp + -4192;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D1DBu); RECOMP_ABI_CALL(0x003876A0u, sub_003876A0); /* call 0x003876A0 */

loc_0014D1DB: ;
    goto loc_0014D2FD;

loc_0014D1E0: ;
    eax = MEM32(ebp + -4124);
    _fa = (uint32_t)(MEM32(eax + 0x1A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D2FB; /* jne: not equal / not zero */

loc_0014D1F3: ;
    eax = MEM32(ebp + -4124);
    _fa = (uint32_t)(MEM32(eax + 0x1A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D2FB; /* jne: not equal / not zero */

loc_0014D206: ;
    MEM8(ebp + -4264) = 3;
    MEM8(ebp + -4263) = 0;
    MEM16(ebp + -4262) = 0;
    MEM16(ebp + -4260) = 0xFFFF;
    MEM16(ebp + -4258) = 0xFFFF;
    MEM16(ebp + -4256) = 0xFFFF;
    eax = MEM32(0x59CA58);
    ecx = MEM32(eax);
    MEM32(ebp + -4252) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -4248) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -4244) = eax;
    eax = MEM32(ebp + -4124);
    ecx = MEM32(eax + 0x1D4);
    MEM32(ebp + -4236) = ecx;
    ecx = MEM32(eax + 0x1D8);
    MEM32(ebp + -4232) = ecx;
    eax = MEM32(eax + 0x1DC);
    MEM32(ebp + -4228) = eax;
    eax = MEM32(ebp + -4124);
    ecx = MEM32(eax + 0x1E0);
    MEM32(ebp + -4224) = ecx;
    ecx = MEM32(eax + 0x1E4);
    MEM32(ebp + -4220) = ecx;
    eax = MEM32(eax + 0x1E8);
    MEM32(ebp + -4216) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4240) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4124);
    ecx = MEM32(eax + 0x204);
    MEM32(ebp + -4212) = ecx;
    ecx = MEM32(eax + 0x208);
    MEM32(ebp + -4208) = ecx;
    eax = MEM32(eax + 0x20C);
    MEM32(ebp + -4204) = eax;
    eax = MEM32(ebp + -4120);
    ecx = MEM32(eax + 0x34);
    eax = ebp + -4264;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D2FBu); RECOMP_ABI_CALL(0x003876A0u, sub_003876A0); /* call 0x003876A0 */

loc_0014D2FB: ;
    goto loc_0014D2FD;

loc_0014D2FD: ;
    goto loc_0014D2FF;

loc_0014D2FF: ;
    goto loc_0014C8DD;

loc_0014D304: ;
    eax = MEM32(0x8C063C);
    eax = eax + 0x70;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D31Cu); RECOMP_ABI_CALL(0x0014DE30u, sub_0014DE30); /* call 0x0014DE30 */

loc_0014D31C: ;
    eax = MEM32(0x8C063C);
    eax = eax + 0x30;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D336u); RECOMP_ABI_CALL(0x0014DE30u, sub_0014DE30); /* call 0x0014DE30 */

loc_0014D336: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D33Bu); RECOMP_ABI_CALL(0x0014E080u, sub_0014E080); /* call 0x0014E080 */

loc_0014D33B: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x24) = LO16(ecx);
    goto loc_0014D37D;

loc_0014D349: ;
    eax = 0; /* xor self */
    eax = 0x440140;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D371u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014D371: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D37Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014D37D: ;
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D3A3; /* je: equal / zero */

loc_0014D389: ;
    eax = ZX8(MEM8(0x584578));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D3A3; /* je: equal / zero */

loc_0014D395: ;
    eax = 0x584570;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D3A3u); RECOMP_ABI_CALL(0x00100990u, sub_00100990); /* call 0x00100990 */

loc_0014D3A3: ;
    esp = esp + 0x10C4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014D3B0
 * Original: 0x0014D3B0 - 0x0014D622 (626 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D3B0(void)
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
loc_0014D3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xA0)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D3D6u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014D3D6: ;
    MEM32(ebp + -12) = eax;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -40) = 0xFFFFFFFFu;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D3F4u); RECOMP_ABI_CALL(0x00208720u, sub_00208720); /* call 0x00208720 */

loc_0014D3F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D452; /* je: equal / zero */

loc_0014D3F8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D3FDu); RECOMP_ABI_CALL(0x001C4360u, sub_001C4360); /* call 0x001C4360 */

loc_0014D3FD: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014D452; /* jne: not equal / not zero */

loc_0014D403: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014D452; /* jne: not equal / not zero */

loc_0014D40F: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014D452; /* jne: not equal / not zero */

loc_0014D41B: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x4040;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D452; /* je: equal / zero */

loc_0014D428: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0014D452; /* jge: greater or equal (signed >=) */

loc_0014D431: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xBCE378)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xBCE378), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D457; /* je: equal / zero */

loc_0014D43E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D443u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0014D443: ;
    ecx = MEM32(ebp + -16);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx * 4 + 0xBCE378))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0014D457; /* jge: greater or equal (signed >=) */

loc_0014D452: ;
    goto loc_0014D618;

loc_0014D457: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D45Cu); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0014D45C: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    MEM32(eax * 4 + 0xBCE378) = ecx;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D47Eu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D47E: ;
    MEM32(ebp + -36) = eax;
    eax = ebp + -32;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xC;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D49Eu); RECOMP_ABI_CALL(0x002222C0u, sub_002222C0); /* call 0x002222C0 */

loc_0014D49E: ;
    eax = ebp + -32;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D4A9u); RECOMP_ABI_CALL(0x00222310u, sub_00222310); /* call 0x00222310 */

loc_0014D4A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D53B; /* je: equal / zero */

loc_0014D4B2: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D4C5u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D4C5: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -48);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014D4E4; /* jne: not equal / not zero */

loc_0014D4D4: ;
    eax = MEM32(ebp + -48);
    eax = MEM32(eax + 4);
    eax = eax & 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014D4E6; /* jne: not equal / not zero */

loc_0014D4E4: ;
    goto loc_0014D49E;

loc_0014D4E6: ;
    ecx = MEM32(ebp + -36);
    ecx = ecx + 4;
    ecx = ecx + 8;
    eax = MEM32(ebp + -48);
    eax = eax + 4;
    eax = eax + 8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D504u); RECOMP_ABI_CALL(0x0014EA80u, sub_0014EA80); /* call 0x0014EA80 */

loc_0014D504: ;
    MEMF(ebp + -56) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D526; /* je: equal / zero */

loc_0014D517: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014D536; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014D526: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -40) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */

loc_0014D536: ;
    goto loc_0014D49E;

loc_0014D53B: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -40);
    MEM32(ebp + -60) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D5AB; /* je: equal / zero */

loc_0014D589: ;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D59Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D59C: ;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D5A6u); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_0014D5A6: ;
    MEM32(ebp + -100) = eax;
    goto loc_0014D5B6;

loc_0014D5AB: ;
    eax = 0x452F3B;
    MEM32(ebp + -100) = eax;
    goto loc_0014D5B6;

loc_0014D5B6: ;
    ecx = MEM32(ebp + -60);
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    edx = MEM32(ebp + -92);
    esi = MEM32(ebp + -96);
    eax = MEM32(ebp + -100);
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edi = 0x489A09;
    MEM32(esp) = 2;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEMD(esp + 0x10) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm1.d[0]; /* movsd */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D618u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0014D618: ;
    esp = esp + 0xA0;
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
 * sub_0014D630
 * Original: 0x0014D630 - 0x0014DA02 (978 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D630(void)
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

loc_0014D630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xB4));
    esp = esp - 0xB4;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D652u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014D652: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D66Bu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D66B: ;
    MEM8(ebp + -154) = 0;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFBu;
    MEM32(ebp + -168) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(6));
    eax = eax - 6;
    if ((!_cf && eax != 0)) goto loc_0014D9F3; /* ja: above (unsigned >) */

loc_0014D68B: ;
    eax = MEM32(ebp + -168);
    eax = MEM32(eax * 4 + 0x4A39D8);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0014D69Au) goto loc_0014D69A;
    if (_jt == 0x0014D6BEu) goto loc_0014D6BE;
    if (_jt == 0x0014D766u) goto loc_0014D766;
    if (_jt == 0x0014D823u) goto loc_0014D823;
    if (_jt == 0x0014D9F3u) goto loc_0014D9F3;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014D69A: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D6B2u); RECOMP_ABI_CALL(0x0010A110u, sub_0010A110); /* call 0x0010A110 */

loc_0014D6B2: ;
    MEM8(ebp + -154) = 1;
    goto loc_0014D9F3;

loc_0014D6BE: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D6CCu); RECOMP_ABI_CALL(0x003747D0u, sub_003747D0); /* call 0x003747D0 */

loc_0014D6CC: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D6EEu); RECOMP_ABI_CALL(0x00374060u, sub_00374060); /* call 0x00374060 */

loc_0014D6EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D75A; /* je: equal / zero */

loc_0014D6F2: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D708u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D708: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D726u); RECOMP_ABI_CALL(0x001717A0u, sub_001717A0); /* call 0x001717A0 */

loc_0014D726: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014D758; /* jne: not equal / not zero */

loc_0014D732: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 3;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D758u); RECOMP_ABI_CALL(0x00015DE0u, sub_00015DE0); /* call 0x00015DE0 */

loc_0014D758: ;
    goto loc_0014D75A;

loc_0014D75A: ;
    MEM8(ebp + -154) = 1;
    goto loc_0014D9F3;

loc_0014D766: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax + 0x34);
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0x24);
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 0x2A));
    MEM32(ebp + -160) = 0xFFFFFFFFu;
    eax = ebp + -160;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D7A0u); RECOMP_ABI_CALL(0x00376D10u, sub_00376D10); /* call 0x00376D10 */

loc_0014D7A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D7C9; /* je: equal / zero */

loc_0014D7A4: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ebp + -8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D7C7u); RECOMP_ABI_CALL(0x00376E40u, sub_00376E40); /* call 0x00376E40 */

loc_0014D7C7: ;
    goto loc_0014D81E;

loc_0014D7C9: ;
    _fa = (uint32_t)(MEM32(ebp + -160)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -160), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D81C; /* je: equal / zero */

loc_0014D7D2: ;
    eax = MEM32(ebp + -160);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D7E8u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D7E8: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x1A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A4), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D81A; /* je: equal / zero */

loc_0014D7F7: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 0x1A4);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D81Au); RECOMP_ABI_CALL(0x0006D270u, sub_0006D270); /* call 0x0006D270 */

loc_0014D81A: ;
    goto loc_0014D81C;

loc_0014D81C: ;
    goto loc_0014D81E;

loc_0014D81E: ;
    goto loc_0014D9F3;

loc_0014D823: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D839u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D839: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D852u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014D852: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x2DC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D869u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0014D869: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x2E0) = ecx;
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E228)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014D8B9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014D899: ;
    eax = MEM32(ebp + -24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x2C); /* ucomiss */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    MEM8(ebp + -153) = LO8(eax);
    goto loc_0014D9BF;

loc_0014D8B9: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x24);
    eax = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D8CEu); RECOMP_ABI_CALL(0x00226760u, sub_00226760); /* call 0x00226760 */

loc_0014D8CE: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    MEM32(ebp + -136) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = ebp + -76;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D8EFu); RECOMP_ABI_CALL(0x00226760u, sub_00226760); /* call 0x00226760 */

loc_0014D8EF: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -136);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -132);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -136);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + -132);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -144) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -136);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + -132);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x59CA64);
    eax = ebp + -148;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D96Fu); RECOMP_ABI_CALL(0x0014C730u, sub_0014C730); /* call 0x0014C730 */

loc_0014D96F: ;
    eax = MEM32(ebp + -24);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    ecx = ebp + -148;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D98Au); RECOMP_ABI_CALL(0x0014EB60u, sub_0014EB60); /* call 0x0014EB60 */

loc_0014D98A: ;
    MEMF(ebp + -164) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -164)); /* movss */
    MEMF(ebp + -152) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -152)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM8(ebp + -153) = LO8(eax);

loc_0014D9BF: ;
    eax = MEM32(ebp + -24);
    ecx = ZX16(MEM16(eax + 0x424));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x10;
    MEM16(eax + 0x424) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + -153));
    eax = MEM32(ebp + -24);
    MEM8(eax + 0x429) = LO8(ecx);
    eax = MEM32(ebp + -24);
    MEM8(eax + 0x42A) = 0;
    MEM8(ebp + -154) = 1;

loc_0014D9F3: ;
    SET_LO8(eax, MEM8(ebp + -154));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB4)) >> 32) & 1);
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
 * sub_0014DA10
 * Original: 0x0014DA10 - 0x0014DBE7 (471 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DA10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DA10: ;
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
    PUSH32(esp, 0x0014DA2Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014DA2E: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DA47u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014DA47: ;
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -17) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DA53u); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_0014DA53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DA62; /* je: equal / zero */

loc_0014DA57: ;
    SET_LO8(eax, MEM8(ebp + -17));
    MEM8(ebp + -1) = LO8(eax);
    goto loc_0014DBDF;

loc_0014DA62: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    MEM32(ebp + -24) = eax;
    eax = eax - 6;
    if ((eax == 0)) goto loc_0014DA84; /* je: equal / zero */

loc_0014DA71: ;
    goto loc_0014DA73;

loc_0014DA73: ;
    eax = MEM32(ebp + -24);
    eax = eax - 7;
    if ((eax == 0)) goto loc_0014DB4B; /* je: equal / zero */

loc_0014DA7F: ;
    goto loc_0014DBD9;

loc_0014DA84: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DA9Au); RECOMP_ABI_CALL(0x00376720u, sub_00376720); /* call 0x00376720 */

loc_0014DA9A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DB42; /* je: equal / zero */

loc_0014DAA6: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DAC6u); RECOMP_ABI_CALL(0x00384040u, sub_00384040); /* call 0x00384040 */

loc_0014DAC6: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DB42; /* je: equal / zero */

loc_0014DACE: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DAE4u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014DAE4: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DB02u); RECOMP_ABI_CALL(0x00171750u, sub_00171750); /* call 0x00171750 */

loc_0014DB02: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DB34; /* jne: not equal / not zero */

loc_0014DB0E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DB34u); RECOMP_ABI_CALL(0x00015DE0u, sub_00015DE0); /* call 0x00015DE0 */

loc_0014DB34: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DB42u); RECOMP_ABI_CALL(0x00142CF0u, sub_00142CF0); /* call 0x00142CF0 */

loc_0014DB42: ;
    MEM8(ebp + -17) = 1;
    goto loc_0014DBD9;

loc_0014DB4B: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DB6Bu); RECOMP_ABI_CALL(0x00384040u, sub_00384040); /* call 0x00384040 */

loc_0014DB6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DBD7; /* je: equal / zero */

loc_0014DB6F: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DB85u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014DB85: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DBA3u); RECOMP_ABI_CALL(0x00171750u, sub_00171750); /* call 0x00171750 */

loc_0014DBA3: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DBD5; /* jne: not equal / not zero */

loc_0014DBAF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DBD5u); RECOMP_ABI_CALL(0x00015DE0u, sub_00015DE0); /* call 0x00015DE0 */

loc_0014DBD5: ;
    goto loc_0014DBD7;

loc_0014DBD7: ;
    goto loc_0014DBD9;

loc_0014DBD9: ;
    SET_LO8(eax, MEM8(ebp + -17));
    MEM8(ebp + -1) = LO8(eax);

loc_0014DBDF: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014DBF0
 * Original: 0x0014DBF0 - 0x0014DE30 (576 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DBF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DBF0: ;
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
    PUSH32(esp, 0x0014DC11u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014DC11: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DC27u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014DC27: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x65716970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DC3Fu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014DC3F: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(ebp + -16) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0014DC6F; /* jg: greater (signed >) */

loc_0014DC6A: ;
    goto loc_0014DE2B;

loc_0014DC6F: ;
    eax = MEM32(ebp + -12);
    SET_LO16(eax, MEM16(eax + 0x308));
    MEM16(ebp + -14) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DCAA; /* jne: not equal / not zero */

loc_0014DC86: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -16);
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx = ecx + edx;
    MEM16(eax + 0x26) = LO16(ecx);
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DCA5u); RECOMP_ABI_CALL(0x00126CF0u, sub_00126CF0); /* call 0x00126CF0 */

loc_0014DCA5: ;
    goto loc_0014DDA6;

loc_0014DCAA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DCDA; /* jne: not equal / not zero */

loc_0014DCB3: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DCC1u); RECOMP_ABI_CALL(0x002159E0u, sub_002159E0); /* call 0x002159E0 */

loc_0014DCC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DCCA; /* jne: not equal / not zero */

loc_0014DCC5: ;
    goto loc_0014DE2B;

loc_0014DCCA: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DCD5u); RECOMP_ABI_CALL(0x0014A010u, sub_0014A010); /* call 0x0014A010 */

loc_0014DCD5: ;
    goto loc_0014DDA4;

loc_0014DCDA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DD0A; /* jne: not equal / not zero */

loc_0014DCE3: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DCF1u); RECOMP_ABI_CALL(0x00215970u, sub_00215970); /* call 0x00215970 */

loc_0014DCF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DCFA; /* jne: not equal / not zero */

loc_0014DCF5: ;
    goto loc_0014DE2B;

loc_0014DCFA: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DD05u); RECOMP_ABI_CALL(0x0014A100u, sub_0014A100); /* call 0x0014A100 */

loc_0014DD05: ;
    goto loc_0014DDA2;

loc_0014DD0A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(ebp + -24) = eax;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0014DD22; /* je: equal / zero */

loc_0014DD16: ;
    goto loc_0014DD18;

loc_0014DD18: ;
    eax = MEM32(ebp + -24);
    eax = eax - 4;
    if ((eax == 0)) goto loc_0014DD2B; /* je: equal / zero */

loc_0014DD20: ;
    goto loc_0014DD34;

loc_0014DD22: ;
    MEM32(ebp + -20) = 0;
    goto loc_0014DD68;

loc_0014DD2B: ;
    MEM32(ebp + -20) = 1;
    goto loc_0014DD68;

loc_0014DD34: ;
    eax = 0; /* xor self */
    eax = 0x440140;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xACB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DD5Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014DD5C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DD68u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014DD68: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -20);
    MEM32(esp) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -16);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DD83u); RECOMP_ABI_CALL(0x0014BF30u, sub_0014BF30); /* call 0x0014BF30 */

loc_0014DD83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DD8C; /* jne: not equal / not zero */

loc_0014DD87: ;
    goto loc_0014DE2B;

loc_0014DD8C: ;
    eax = MEM32(ebp + -20);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DDA0; /* jne: not equal / not zero */

loc_0014DD95: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DDA0u); RECOMP_ABI_CALL(0x0014A1F0u, sub_0014A1F0); /* call 0x0014A1F0 */

loc_0014DDA0: ;
    goto loc_0014DDA2;

loc_0014DDA2: ;
    goto loc_0014DDA4;

loc_0014DDA4: ;
    goto loc_0014DDA6;

loc_0014DDA6: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DDB9u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014DDB9: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DDD7u); RECOMP_ABI_CALL(0x001717A0u, sub_001717A0); /* call 0x001717A0 */

loc_0014DDD7: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DE09; /* jne: not equal / not zero */

loc_0014DDE3: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE09u); RECOMP_ABI_CALL(0x00015DE0u, sub_00015DE0); /* call 0x00015DE0 */

loc_0014DE09: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DE20; /* je: equal / zero */

loc_0014DE15: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE20u); RECOMP_ABI_CALL(0x001B3CB0u, sub_001B3CB0); /* call 0x001B3CB0 */

loc_0014DE20: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE2Bu); RECOMP_ABI_CALL(0x00225770u, sub_00225770); /* call 0x00225770 */

loc_0014DE2B: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014DE30
 * Original: 0x0014DE30 - 0x0014E07E (590 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DE30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DE30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x54;
    SET_LO8(eax, MEM8(ebp + 0xC));
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE42u); RECOMP_ABI_CALL(0x003326D0u, sub_003326D0); /* call 0x003326D0 */

loc_0014DE42: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE62u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0014DE62: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE67u); RECOMP_ABI_CALL(0x0010AFD0u, sub_0010AFD0); /* call 0x0010AFD0 */

loc_0014DE67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DFB5; /* jne: not equal / not zero */

loc_0014DE6F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE74u); RECOMP_ABI_CALL(0x00222970u, sub_00222970); /* call 0x00222970 */

loc_0014DE74: ;
    MEM16(ebp + -42) = LO16(eax);
    eax = MEM32(0x8BFACC);
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE8Cu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014DE8C: ;
    eax = ebp + -20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DE97u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014DE97: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DF63; /* je: equal / zero */

loc_0014DEA3: ;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DEBA; /* je: equal / zero */

loc_0014DEAC: ;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DEBA; /* jne: not equal / not zero */

loc_0014DEB8: ;
    goto loc_0014DE8C;

loc_0014DEBA: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DF06; /* je: equal / zero */

loc_0014DEC3: ;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DED1u); RECOMP_ABI_CALL(0x00222440u, sub_00222440); /* call 0x00222440 */

loc_0014DED1: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -48);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DEE7u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014DEE7: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DF04; /* je: equal / zero */

loc_0014DEF6: ;
    eax = MEM32(ebp + -28);
    SET_LO16(ecx, MEM16(eax + 0x4C));
    eax = MEM32(ebp + -24);
    MEM16(eax + 0x3C) = LO16(ecx);

loc_0014DF04: ;
    goto loc_0014DF06;

loc_0014DF06: ;
    eax = MEM32(ebp + -24);
    SET_LO16(eax, MEM16(eax + 0x3C));
    MEM16(ebp + -50) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DF5E; /* je: equal / zero */

loc_0014DF1A: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x134);
    SET_LO16(esi, LO16(eax));
    eax = MEM32(ebp + 8);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DF3Fu); RECOMP_ABI_CALL(0x00349490u, sub_00349490); /* call 0x00349490 */

loc_0014DF3F: ;
    edx = MEM32(ebp + -56);
    ecx = eax;
    eax = MEM32(ebp + 8);
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DF5Eu); RECOMP_ABI_CALL(0x001CFF50u, sub_001CFF50); /* call 0x001CFF50 */

loc_0014DF5E: ;
    goto loc_0014DE8C;

loc_0014DF63: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -42);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DFB0; /* je: equal / zero */

loc_0014DF6C: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x134);
    SET_LO16(esi, LO16(eax));
    eax = MEM32(ebp + 8);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -42);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DF91u); RECOMP_ABI_CALL(0x00349490u, sub_00349490); /* call 0x00349490 */

loc_0014DF91: ;
    edx = MEM32(ebp + -60);
    ecx = eax;
    eax = MEM32(ebp + 8);
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DFB0u); RECOMP_ABI_CALL(0x001CFF50u, sub_001CFF50); /* call 0x001CFF50 */

loc_0014DFB0: ;
    goto loc_0014E078;

loc_0014DFB5: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DFC3u); RECOMP_ABI_CALL(0x000F4950u, sub_000F4950); /* call 0x000F4950 */

loc_0014DFC3: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DFCBu); RECOMP_ABI_CALL(0x00332B80u, sub_00332B80); /* call 0x00332B80 */

loc_0014DFCB: ;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E076; /* je: equal / zero */

loc_0014DFD8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DFDDu); RECOMP_ABI_CALL(0x003326D0u, sub_003326D0); /* call 0x003326D0 */

loc_0014DFDD: ;
    eax = eax + 0xE0;
    MEM32(ebp + -64) = eax;
    eax = esp;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DFF2u); RECOMP_ABI_CALL(0x000F4950u, sub_000F4950); /* call 0x000F4950 */

loc_0014DFF2: ;
    ecx = eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014DFFDu); RECOMP_ABI_CALL(0x00332B80u, sub_00332B80); /* call 0x00332B80 */

loc_0014DFFD: ;
    ecx = MEM32(ebp + -64);
    eax = eax & 0x7FFFFFFF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E019u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014E019: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    SET_LO16(eax, MEM16(eax + 8));
    MEM16(ebp + -50) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E074; /* je: equal / zero */

loc_0014E030: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x134);
    SET_LO16(esi, LO16(eax));
    eax = MEM32(ebp + 8);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E055u); RECOMP_ABI_CALL(0x00349490u, sub_00349490); /* call 0x00349490 */

loc_0014E055: ;
    edx = MEM32(ebp + -68);
    ecx = eax;
    eax = MEM32(ebp + 8);
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E074u); RECOMP_ABI_CALL(0x001CFF50u, sub_001CFF50); /* call 0x001CFF50 */

loc_0014E074: ;
    goto loc_0014E076;

loc_0014E076: ;
    goto loc_0014E078;

loc_0014E078: ;
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E080
 * Original: 0x0014E080 - 0x0014E0CD (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E080(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM32(ebp + -4) = 0;
    MEM16(ebp + -6) = 0;

loc_0014E093: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E0C5; /* jge: greater or equal (signed >=) */

loc_0014E09C: ;
    eax = MEM32(0x8C063C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E0B5; /* je: equal / zero */

loc_0014E0AC: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;

loc_0014E0B5: ;
    goto loc_0014E0B7;

loc_0014E0B7: ;
    SET_LO16(eax, MEM16(ebp + -6));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -6) = LO16(eax);
    goto loc_0014E093;

loc_0014E0C5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E0D0
 * Original: 0x0014E0D0 - 0x0014E51E (1102 bytes, 290 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E0D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0014E0D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E101; /* je: equal / zero */

loc_0014E0E2: ;
    eax = ZX8(MEM8(0x584B70));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E101; /* je: equal / zero */

loc_0014E0EE: ;
    eax = 0x584570;
    eax = eax + 0x5F8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E101u); RECOMP_ABI_CALL(0x001006A0u, sub_001006A0); /* call 0x001006A0 */

loc_0014E101: ;
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014E13E; /* jle: less or equal (signed <=) */

loc_0014E10F: ;
    eax = MEM32(0x8C063C);
    SET_LO16(ecx, MEM16(eax + 0x26));
    SET_LO16(ecx, LO16(ecx) + 0xFFFFFFFFu);
    MEM16(eax + 0x26) = LO16(ecx);
    eax = MEM32(0x8C063C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E13C; /* jne: not equal / not zero */

loc_0014E12E: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E13Cu); RECOMP_ABI_CALL(0x00126CF0u, sub_00126CF0); /* call 0x00126CF0 */

loc_0014E13C: ;
    goto loc_0014E13E;

loc_0014E13E: ;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E152u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_0014E152: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E15Du); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_0014E15D: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E445; /* je: equal / zero */

loc_0014E169: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(eax + 0xD0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xD0), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E198; /* jne: not equal / not zero */

loc_0014E175: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC8), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014E193; /* jle: less or equal (signed <=) */

loc_0014E181: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0xC8);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 0xC8) = ecx;

loc_0014E193: ;
    goto loc_0014E29A;

loc_0014E198: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0xC8);
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x5A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E276; /* jl: less (signed <) */

loc_0014E1AE: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E274; /* je: equal / zero */

loc_0014E1BB: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E1D1u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014E1D1: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + 0xB6));
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E272; /* jne: not equal / not zero */

loc_0014E1EA: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E259; /* je: equal / zero */

loc_0014E1F6: ;
    eax = 0x48C665;
    MEM32(esp) = 0x75737472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E20Cu); RECOMP_ABI_CALL(0x000DFE60u, sub_000DFE60); /* call 0x000DFE60 */

loc_0014E20C: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -20);
    SET_LO16(eax, MEM16(eax + 2));
    MEM16(ebp + -52) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E238; /* je: equal / zero */

loc_0014E220: ;
    eax = MEM32(ebp + -48);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xB7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E233u); RECOMP_ABI_CALL(0x0035A470u, sub_0035A470); /* call 0x0035A470 */

loc_0014E233: ;
    MEM32(ebp + -56) = eax;
    goto loc_0014E243;

loc_0014E238: ;
    eax = 0x4A1B86;
    MEM32(ebp + -56) = eax;
    goto loc_0014E243;

loc_0014E243: ;
    SET_LO16(ecx, MEM16(ebp + -52));
    eax = MEM32(ebp + -56);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E259u); RECOMP_ABI_CALL(0x00179C90u, sub_00179C90); /* call 0x00179C90 */

loc_0014E259: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E264u); RECOMP_ABI_CALL(0x0011E350u, sub_0011E350); /* call 0x0011E350 */

loc_0014E264: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E272u); RECOMP_ABI_CALL(0x00371E60u, sub_00371E60); /* call 0x00371E60 */

loc_0014E272: ;
    goto loc_0014E274;

loc_0014E274: ;
    goto loc_0014E298;

loc_0014E276: ;
    eax = MEM32(ebp + -8);
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -40); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E298u); RECOMP_ABI_CALL(0x0011F010u, sub_0011F010); /* call 0x0011F010 */

loc_0014E298: ;
    goto loc_0014E29A;

loc_0014E29A: ;
    eax = MEM32(ebp + -20);
    MEM8(eax + 0xD0) = 0;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E2B8; /* je: equal / zero */

loc_0014E2AD: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E2B8u); RECOMP_ABI_CALL(0x0014E520u, sub_0014E520); /* call 0x0014E520 */

loc_0014E2B8: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E42A; /* je: equal / zero */

loc_0014E2C5: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E2D3u); RECOMP_ABI_CALL(0x00222440u, sub_00222440); /* call 0x00222440 */

loc_0014E2D3: ;
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -44);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E2E9u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014E2E9: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 4);
    eax = eax & 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E428; /* jne: not equal / not zero */

loc_0014E300: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E305u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014E305: ;
    MEM32(ebp + -32) = eax;
    MEM16(ebp + -50) = 0;

loc_0014E30E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    ecx = MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x39C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x39C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E426; /* jge: greater or equal (signed >=) */

loc_0014E321: ;
    ecx = MEM32(ebp + -32);
    ecx = ecx + 0x39C;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E342u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014E342: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(0x5A3904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E413; /* jne: not equal / not zero */

loc_0014E35B: ;
    eax = MEM32(ebp + -36);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x34);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E376u); RECOMP_ABI_CALL(0x00333540u, sub_00333540); /* call 0x00333540 */

loc_0014E376: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E413; /* je: equal / zero */

loc_0014E382: ;
    eax = MEM32(0x8C063C);
    SET_LO8(eax, MEM8(eax + 0x2F));
    _shift_result = RECOMP_SHIFT(LO8(eax), 4, 8, 0, NULL, &_shift_of);
    SET_LO8(eax, _shift_result);
    SET_LO8(eax, RECOMP_SAR(LO8(eax), 4, 8, NULL));
    eax = SX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E3CA; /* je: equal / zero */

loc_0014E398: ;
    eax = MEM32(0x8C063C);
    SET_LO8(eax, MEM8(eax + 0x2F));
    _shift_result = RECOMP_SHIFT(LO8(eax), 4, 8, 0, NULL, &_shift_of);
    SET_LO8(eax, _shift_result);
    SET_LO8(eax, RECOMP_SAR(LO8(eax), 4, 8, NULL));
    eax = SX8(LO8(eax));
    ecx = MEM32(ebp + -20);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E3CA; /* je: equal / zero */

loc_0014E3B4: ;
    eax = 0x46D5FA;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E3CAu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0014E3CA: ;
    eax = MEM32(0x8C063C);
    SET_LO8(ecx, MEM8(eax + 0x2F));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(ecx, LO8(ecx) | 0);
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(ebp + -20);
    SET_LO16(eax, MEM16(eax + 2));
    SET_LO8(edx, LO8(eax));
    eax = MEM32(0x8C063C);
    SET_LO8(ecx, MEM8(eax + 0x2F));
    SET_LO8(edx, LO8(edx) & 0xF);
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax + 0x2F) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebp + -50));
    eax = MEM32(0x8C063C);
    MEM16(eax + 0x2A) = LO16(ecx);
    eax = MEM32(ebp + -36);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E413u); RECOMP_ABI_CALL(0x001C4720u, sub_001C4720); /* call 0x001C4720 */

loc_0014E413: ;
    goto loc_0014E415;

loc_0014E415: ;
    SET_LO16(eax, MEM16(ebp + -50));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -50) = LO16(eax);
    goto loc_0014E30E;

loc_0014E426: ;
    goto loc_0014E428;

loc_0014E428: ;
    goto loc_0014E42A;

loc_0014E42A: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E435u); RECOMP_ABI_CALL(0x0014E5C0u, sub_0014E5C0); /* call 0x0014E5C0 */

loc_0014E435: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E440u); RECOMP_ABI_CALL(0x0014E600u, sub_0014E600); /* call 0x0014E600 */

loc_0014E440: ;
    goto loc_0014E152;

loc_0014E445: ;
    eax = MEM32(0x8C063C);
    SET_LO8(eax, MEM8(eax + 0x2F));
    _shift_result = RECOMP_SHIFT(LO8(eax), 4, 8, 0, NULL, &_shift_of);
    SET_LO8(eax, _shift_result);
    SET_LO8(eax, RECOMP_SAR(LO8(eax), 4, 8, NULL));
    eax = SX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E4B1; /* je: equal / zero */

loc_0014E45B: ;
    eax = MEM32(0x8C063C);
    SET_LO8(edx, MEM8(eax + 0x2F));
    _shift_result = RECOMP_SHIFT(LO8(edx), 4, 8, 1, NULL, &_shift_of);
    SET_LO8(edx, _shift_result);
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(ecx, MEM8(eax + 0x2F));
    SET_LO8(edx, LO8(edx) & 0xF);
    _shift_result = RECOMP_SHIFT(LO8(edx), 4, 8, 0, NULL, &_shift_of);
    SET_LO8(edx, _shift_result);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(0x8C063C);
    SET_LO8(eax, MEM8(eax + 0x2F));
    _shift_result = RECOMP_SHIFT(LO8(eax), 4, 8, 1, NULL, &_shift_of);
    SET_LO8(eax, _shift_result);
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014E4AF; /* jle: less or equal (signed <=) */

loc_0014E48D: ;
    eax = MEM32(0x8C063C);
    SET_LO8(ecx, MEM8(eax + 0x2F));
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    SET_LO8(ecx, LO8(ecx) | 0xF);
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(0x8C063C);
    SET_LO8(ecx, MEM8(eax + 0x2F));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(ecx, LO8(ecx) | 0);
    MEM8(eax + 0x2F) = LO8(ecx);

loc_0014E4AF: ;
    goto loc_0014E4B1;

loc_0014E4B1: ;
    eax = MEM32(0x8C063C);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x28), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E4DC; /* je: equal / zero */

loc_0014E4BC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E4C1u); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_0014E4C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E4DA; /* jne: not equal / not zero */

loc_0014E4C5: ;
    _fa = (uint32_t)(MEM8(0xBCE360)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBCE360), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E4DA; /* jne: not equal / not zero */

loc_0014E4CE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E4D3u); RECOMP_ABI_CALL(0x001C4400u, sub_001C4400); /* call 0x001C4400 */

loc_0014E4D3: ;
    MEM8(0xBCE360) = 1;

loc_0014E4DA: ;
    goto loc_0014E4EE;

loc_0014E4DC: ;
    _fa = (uint32_t)(MEM8(0xBCE360)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBCE360), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E4EC; /* je: equal / zero */

loc_0014E4E5: ;
    MEM8(0xBCE360) = 0;

loc_0014E4EC: ;
    goto loc_0014E4EE;

loc_0014E4EE: ;
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E519; /* je: equal / zero */

loc_0014E4FA: ;
    eax = ZX8(MEM8(0x584B70));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E519; /* je: equal / zero */

loc_0014E506: ;
    eax = 0x584570;
    eax = eax + 0x5F8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E519u); RECOMP_ABI_CALL(0x00100990u, sub_00100990); /* call 0x00100990 */

loc_0014E519: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E520
 * Original: 0x0014E520 - 0x0014E5B1 (145 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E520: ;
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
    PUSH32(esp, 0x0014E53Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014E53E: ;
    MEM32(ebp + -4) = eax;
    MEM16(ebp + -6) = 0;

loc_0014E547: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E5AC; /* jge: greater or equal (signed >=) */

loc_0014E550: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014E59C; /* jle: less or equal (signed <=) */

loc_0014E561: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    SET_LO16(edx, MEM16(eax + ecx * 2 + 0x68));
    SET_LO16(edx, LO16(edx) + 0xFFFFFFFFu);
    MEM16(eax + ecx * 2 + 0x68) = LO16(edx);
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E59A; /* jne: not equal / not zero */

loc_0014E587: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E59Au); RECOMP_ABI_CALL(0x0014EBB0u, sub_0014EBB0); /* call 0x0014EBB0 */

loc_0014E59A: ;
    goto loc_0014E59C;

loc_0014E59C: ;
    goto loc_0014E59E;

loc_0014E59E: ;
    SET_LO16(eax, MEM16(ebp + -6));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -6) = LO16(eax);
    goto loc_0014E547;

loc_0014E5AC: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E5C0
 * Original: 0x0014E5C0 - 0x0014E5F9 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E5C0(void)
{
    uint32_t ebp = g_ebp;

loc_0014E5C0: ;
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
    PUSH32(esp, 0x0014E5DEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014E5DE: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x28) = 0;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E600
 * Original: 0x0014E600 - 0x0014E774 (372 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E600(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0014E600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E61Fu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014E61F: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014E76E; /* je: equal / zero */

loc_0014E62F: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E645u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014E645: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014E76C; /* jne: not equal / not zero */

loc_0014E658: ;
    edx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x44)) >> 32) & 1);
    edx = edx + 0x44;
    ecx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C)) >> 32) & 1);
    ecx = ecx + 0x4C;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    eax = ebp + -80;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0x11F;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E6A5u); RECOMP_ABI_CALL(0x00226A00u, sub_00226A00); /* call 0x00226A00 */

loc_0014E6A5: ;
    MEM16(ebp + -82) = LO16(eax);
    MEM16(ebp + -84) = 0;

loc_0014E6AF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -84);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -82);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014E76A; /* jge: greater or equal (signed >=) */

loc_0014E6BF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -84);
    ecx = MEM32(ebp + eax * 4 + -80);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E6D7u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014E6D7: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x64);
    MEM32(ebp + -88) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    if ((!_cf && eax != 0)) goto loc_0014E757; /* ja: above (unsigned >) */

loc_0014E6E9: ;
    eax = MEM32(ebp + -88);
    eax = MEM32(eax * 4 + 0x4A39F4);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x0014E6F5u) goto loc_0014E6F5;
    if (_jt == 0x0014E70Eu) goto loc_0014E70E;
    if (_jt == 0x0014E727u) goto loc_0014E727;
    if (_jt == 0x0014E740u) goto loc_0014E740;
    if (_jt == 0x0014E757u) goto loc_0014E757;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014E6F5: ;
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -84);
    eax = MEM32(ebp + eax * 4 + -80);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E70Cu); RECOMP_ABI_CALL(0x0014EC10u, sub_0014EC10); /* call 0x0014EC10 */

loc_0014E70C: ;
    goto loc_0014E757;

loc_0014E70E: ;
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -84);
    eax = MEM32(ebp + eax * 4 + -80);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E725u); RECOMP_ABI_CALL(0x0014EC20u, sub_0014EC20); /* call 0x0014EC20 */

loc_0014E725: ;
    goto loc_0014E757;

loc_0014E727: ;
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -84);
    eax = MEM32(ebp + eax * 4 + -80);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E73Eu); RECOMP_ABI_CALL(0x0014EEE0u, sub_0014EEE0); /* call 0x0014EEE0 */

loc_0014E73E: ;
    goto loc_0014E757;

loc_0014E740: ;
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -84);
    eax = MEM32(ebp + eax * 4 + -80);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E757u); RECOMP_ABI_CALL(0x0014F4D0u, sub_0014F4D0); /* call 0x0014F4D0 */

loc_0014E757: ;
    goto loc_0014E759;

loc_0014E759: ;
    SET_LO16(eax, MEM16(ebp + -84));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -84) = LO16(eax);
    goto loc_0014E6AF;

loc_0014E76A: ;
    goto loc_0014E76C;

loc_0014E76C: ;
    goto loc_0014E76E;

loc_0014E76E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x74)) >> 32) & 1);
    esp = esp + 0x74;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E780
 * Original: 0x0014E780 - 0x0014E7B9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E780(void)
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

loc_0014E780: ;
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
 * sub_0014E7C0
 * Original: 0x0014E7C0 - 0x0014E7EB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E7C0(void)
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

loc_0014E7C0: ;
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
    PUSH32(esp, 0x0014E7D5u); RECOMP_ABI_CALL(0x0014E780u, sub_0014E780); /* call 0x0014E780 */

loc_0014E7D5: ;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E7DEu); RECOMP_ABI_CALL(0x0014EA50u, sub_0014EA50); /* call 0x0014EA50 */

loc_0014E7DE: ;
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
 * sub_0014E7F0
 * Original: 0x0014E7F0 - 0x0014E853 (99 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E7F0(void)
{
    uint32_t ebp = g_ebp;

loc_0014E7F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E860
 * Original: 0x0014E860 - 0x0014E884 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E860(void)
{
    uint32_t ebp = g_ebp;

loc_0014E860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E86Eu); RECOMP_ABI_CALL(0x001D4C40u, sub_001D4C40); /* call 0x001D4C40 */

loc_0014E86E: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E87Fu); RECOMP_ABI_CALL(0x001D4F30u, sub_001D4F30); /* call 0x001D4F30 */

loc_0014E87F: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E890
 * Original: 0x0014E890 - 0x0014E8FA (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E890(void)
{
    uint32_t ebp = g_ebp;

loc_0014E890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x14);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014E900
 * Original: 0x0014E900 - 0x0014EA41 (321 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E900(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E921u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014E921: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA3C; /* je: equal / zero */

loc_0014E931: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E936u); RECOMP_ABI_CALL(0x0012D670u, sub_0012D670); /* call 0x0012D670 */

loc_0014E936: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E960; /* je: equal / zero */

loc_0014E93A: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E960u); RECOMP_ABI_CALL(0x0013FDC0u, sub_0013FDC0); /* call 0x0013FDC0 */

loc_0014E960: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x34);
    eax = MEM32(0x8C063C);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    MEM32(eax + ecx * 4 + 0x14) = edx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E981u); RECOMP_ABI_CALL(0x00149050u, sub_00149050); /* call 0x00149050 */

loc_0014E981: ;
    eax = MEM32(0x8C063C);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    eax = MEM32(eax + ecx * 4 + 0x14);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E9A7u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014E9A7: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E9C3u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014E9C3: ;
    ecx = MEM32(ebp + -20);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E9D9u); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_0014E9D9: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x1C8) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E9F4u); RECOMP_ABI_CALL(0x00224140u, sub_00224140); /* call 0x00224140 */

loc_0014E9F4: ;
    eax = MEM32(ebp + -12);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EA09u); RECOMP_ABI_CALL(0x00224870u, sub_00224870); /* call 0x00224870 */

loc_0014EA09: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA24; /* je: equal / zero */

loc_0014EA0F: ;
    eax = MEM32(ebp + -16);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EA24u); RECOMP_ABI_CALL(0x00224870u, sub_00224870); /* call 0x00224870 */

loc_0014EA24: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA33; /* je: equal / zero */

loc_0014EA2A: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x38) = ecx;

loc_0014EA33: ;
    eax = MEM32(0x8C063C);
    MEM8(eax + 0x28) = 0;

loc_0014EA3C: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014EA50
 * Original: 0x0014EA50 - 0x0014EA77 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EA50(void)
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

loc_0014EA50: ;
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
 * sub_0014EA80
 * Original: 0x0014EA80 - 0x0014EAB4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EA80(void)
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

loc_0014EA80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EA9Eu); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_0014EA9E: ;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EAA7u); RECOMP_ABI_CALL(0x0014EA50u, sub_0014EA50); /* call 0x0014EA50 */

loc_0014EAA7: ;
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
 * sub_0014EAC0
 * Original: 0x0014EAC0 - 0x0014EAFE (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EAC0(void)
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

loc_0014EAC0: ;
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
    PUSH32(esp, 0x0014EAE5u); RECOMP_ABI_CALL(0x0014EB00u, sub_0014EB00); /* call 0x0014EB00 */

loc_0014EAE5: ;
    ecx = eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EAF0u); RECOMP_ABI_CALL(0x0014E780u, sub_0014E780); /* call 0x0014E780 */

loc_0014EAF0: ;
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
 * sub_0014EB00
 * Original: 0x0014EB00 - 0x0014EB56 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EB00(void)
{
    uint32_t ebp = g_ebp;

loc_0014EB00: ;
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
 * sub_0014EB60
 * Original: 0x0014EB60 - 0x0014EBAD (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EB60(void)
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

loc_0014EB60: ;
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
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
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
 * sub_0014EBB0
 * Original: 0x0014EBB0 - 0x0014EC10 (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EBB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EBB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EBD2u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014EBD2: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EBEBu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014EBEB: ;
    MEM32(ebp + -8) = eax;
    SET_LO16(eax, MEM16(ebp + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014EC0B; /* jne: not equal / not zero */

loc_0014EBF7: ;
    goto loc_0014EBF9;

loc_0014EBF9: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x1B4);
    ecx = ecx & 0xFFFFFFEFu;
    MEM32(eax + 0x1B4) = ecx;

loc_0014EC0B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014EC10
 * Original: 0x0014EC10 - 0x0014EC1B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EC10(void)
{
    uint32_t ebp = g_ebp;

loc_0014EC10: ;
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
 * sub_0014EC20
 * Original: 0x0014EC20 - 0x0014EEDD (701 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EC20(void)
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

loc_0014EC20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x44;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EC42u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014EC42: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EC58u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014EC58: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax + 0xB6));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EED7; /* jne: not equal / not zero */

loc_0014EC71: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EC76u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_0014EC76: ;
    eax = eax + 0x110;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EC95u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014EC95: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x70); /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ECC0u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014ECC0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ECDDu); RECOMP_ABI_CALL(0x003D7580u, sub_003D7580); /* call 0x003D7580 */

loc_0014ECDD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    MEMD(ebp + -40) = fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014EE93; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014ECF7: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ED05u); RECOMP_ABI_CALL(0x00374F30u, sub_00374F30); /* call 0x00374F30 */

loc_0014ED05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EE91; /* jne: not equal / not zero */

loc_0014ED0D: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ED23u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014ED23: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ED37u); RECOMP_ABI_CALL(0x0014E780u, sub_0014E780); /* call 0x0014E780 */

loc_0014ED37: ;
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA88)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014EE8F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014ED50: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ED63u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014ED63: ;
    eax = eax + 4;
    eax = eax + 0x38;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014ED71u); RECOMP_ABI_CALL(0x0014E780u, sub_0014E780); /* call 0x0014E780 */

loc_0014ED71: ;
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA88)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0014EE8D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014ED8A: ;
    MEM16(ebp + -28) = 0xFFFF;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(ebp + 0xC);
    eax = esp;
    esi = ebp + -28;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EDABu); RECOMP_ABI_CALL(0x0037C770u, sub_0037C770); /* call 0x0037C770 */

loc_0014EDAB: ;
    MEM16(ebp + -26) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -26);
    MEM32(ebp + -56) = eax;
    eax = eax - 1;
    if ((eax == 0)) goto loc_0014EE2C; /* je: equal / zero */

loc_0014EDBB: ;
    goto loc_0014EDBD;

loc_0014EDBD: ;
    eax = MEM32(ebp + -56);
    eax = eax - 2;
    if ((eax != 0)) goto loc_0014EE8B; /* jne: not equal / not zero */

loc_0014EDC9: ;
    goto loc_0014EDCB;

loc_0014EDCB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EE08; /* jne: not equal / not zero */

loc_0014EDD4: ;
    ecx = 0x44B105;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x83C;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EDFCu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014EDFC: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EE08u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014EE08: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 8;
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -28);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EE2Au); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014EE2A: ;
    goto loc_0014EE8B;

loc_0014EE2C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EE69; /* jne: not equal / not zero */

loc_0014EE35: ;
    ecx = 0x44B105;
    eax = 0x440140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x841;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EE5Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014EE5D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EE69u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014EE69: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 9;
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -28);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EE8Bu); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014EE8B: ;
    goto loc_0014EE8D;

loc_0014EE8D: ;
    goto loc_0014EE8F;

loc_0014EE8F: ;
    goto loc_0014EE91;

loc_0014EE91: ;
    goto loc_0014EED5;

loc_0014EE93: ;
    eax = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax + 0x424));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EED3; /* jne: not equal / not zero */

loc_0014EEA5: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x2D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EED3; /* jne: not equal / not zero */

loc_0014EEB1: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xB;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EED3u); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014EED3: ;
    goto loc_0014EED5;

loc_0014EED5: ;
    goto loc_0014EED7;

loc_0014EED7: ;
    esp = esp + 0x44;
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
 * sub_0014EEE0
 * Original: 0x0014EEE0 - 0x0014F4C5 (1509 bytes, 402 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EEE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014EEE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x74)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EF02u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014EF02: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EF1Bu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014EF1B: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EF31u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014EF31: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014EF51; /* jne: not equal / not zero */

loc_0014EF40: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x1B0);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x34) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014EF56; /* jne: not equal / not zero */

loc_0014EF51: ;
    goto loc_0014F4BF;

loc_0014EF56: ;
    MEM16(ebp + -34) = 0;

loc_0014EF5C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0014F066; /* jge: greater or equal (signed >=) */

loc_0014EF69: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -34);
    eax = MEM32(eax + ecx * 4 + 0x2A8);
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F053; /* je: equal / zero */

loc_0014EF84: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EF89u); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_0014EF89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F053; /* jne: not equal / not zero */

loc_0014EF91: ;
    esi = MEM32(ebp + -40);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    eax = ebp + -36;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EFB5u); RECOMP_ABI_CALL(0x001BDEB0u, sub_001BDEB0); /* call 0x001BDEB0 */

loc_0014EFB5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F053; /* je: equal / zero */

loc_0014EFC1: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0014F051; /* jle: less or equal (signed <=) */

loc_0014EFCE: ;
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 2));
    MEM16(ebp + -72) = LO16(eax);
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EFECu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014EFEC: ;
    SET_LO16(ecx, MEM16(ebp + -72));
    eax = MEM32(eax);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -36);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F009u); RECOMP_ABI_CALL(0x00171700u, sub_00171700); /* call 0x00171700 */

loc_0014F009: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F04F; /* jne: not equal / not zero */

loc_0014F015: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F02Eu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F02E: ;
    ecx = MEM32(ebp + -76);
    eax = MEM32(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -36);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F04Fu); RECOMP_ABI_CALL(0x00015DE0u, sub_00015DE0); /* call 0x00015DE0 */

loc_0014F04F: ;
    goto loc_0014F051;

loc_0014F051: ;
    goto loc_0014F066;

loc_0014F053: ;
    goto loc_0014F055;

loc_0014F055: ;
    SET_LO16(eax, MEM16(ebp + -34));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -34) = LO16(eax);
    goto loc_0014EF5C;

loc_0014F066: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F079u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014F079: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F1DB; /* je: equal / zero */

loc_0014F086: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(esp) = 0x65716970;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F09Bu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014F09B: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F127; /* jne: not equal / not zero */

loc_0014F0AD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F0B2u); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_0014F0B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F122; /* jne: not equal / not zero */

loc_0014F0B6: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F0CBu); RECOMP_ABI_CALL(0x00373EE0u, sub_00373EE0); /* call 0x00373EE0 */

loc_0014F0CB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F122; /* je: equal / zero */

loc_0014F0D3: ;
    eax = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(eax + 2));
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F0EEu); RECOMP_ABI_CALL(0x001716B0u, sub_001716B0); /* call 0x001716B0 */

loc_0014F0EE: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F120; /* jne: not equal / not zero */

loc_0014F0FA: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 2;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F120u); RECOMP_ABI_CALL(0x00015DE0u, sub_00015DE0); /* call 0x00015DE0 */

loc_0014F120: ;
    goto loc_0014F122;

loc_0014F122: ;
    goto loc_0014F1D9;

loc_0014F127: ;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F1D7; /* je: equal / zero */

loc_0014F13A: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F148u); RECOMP_ABI_CALL(0x003747A0u, sub_003747A0); /* call 0x003747A0 */

loc_0014F148: ;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F16E; /* jne: not equal / not zero */

loc_0014F151: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F156u); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_0014F156: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F16C; /* jne: not equal / not zero */

loc_0014F15A: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F16Cu); RECOMP_ABI_CALL(0x0014DBF0u, sub_0014DBF0); /* call 0x0014DBF0 */

loc_0014F16C: ;
    goto loc_0014F1D5;

loc_0014F16E: ;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F181u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F181: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(esp) = 0x65716970;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F196u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014F196: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x308);
    ecx = MEM32(ebp + -28);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F1D3; /* je: equal / zero */

loc_0014F1B1: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 5;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F1D3u); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014F1D3: ;
    goto loc_0014F1D5;

loc_0014F1D5: ;
    goto loc_0014F1D7;

loc_0014F1D7: ;
    goto loc_0014F1D9;

loc_0014F1D9: ;
    goto loc_0014F1DB;

loc_0014F1DB: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -68);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F1F4u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014F1F4: ;
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F216; /* je: equal / zero */

loc_0014F1FD: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -68);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F212u); RECOMP_ABI_CALL(0x00374A90u, sub_00374A90); /* call 0x00374A90 */

loc_0014F212: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F21B; /* jne: not equal / not zero */

loc_0014F216: ;
    goto loc_0014F4BF;

loc_0014F21B: ;
    eax = MEM32(ebp + -44);
    eax = MEM32(eax);
    MEM32(esp) = 0x77656170;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F230u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014F230: ;
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x1B8);
    ecx = ecx & 0x800;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -77) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0014F263; /* jne: not equal / not zero */

loc_0014F24C: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x1B8);
    eax = eax & 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -77) = LO8(eax);

loc_0014F263: ;
    SET_LO8(eax, MEM8(ebp + -77));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -69) = LO8(eax);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F28Du); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F28D: ;
    ecx = MEM32(ebp + -84);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F2A3u); RECOMP_ABI_CALL(0x003729E0u, sub_003729E0); /* call 0x003729E0 */

loc_0014F2A3: ;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F2B4u); RECOMP_ABI_CALL(0x00373710u, sub_00373710); /* call 0x00373710 */

loc_0014F2B4: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -64) = eax;
    MEM8(ebp + -70) = 0;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -64), 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_0014F31E; /* jl: less (signed <) */

loc_0014F2C2: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F31E; /* je: equal / zero */

loc_0014F2C8: ;
    eax = MEM32(ebp + -52);
    eax = MEM32(eax + 0x308);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F31E; /* jne: not equal / not zero */

loc_0014F2D9: ;
    eax = MEM32(ebp + -60);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F2ECu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F2EC: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -48);
    eax = MEM32(eax);
    MEM32(esp) = 0x77656170;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F304u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014F304: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -56);
    eax = MEM32(eax + 0x308);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F31C; /* je: equal / zero */

loc_0014F318: ;
    MEM8(ebp + -70) = 1;

loc_0014F31C: ;
    goto loc_0014F31E;

loc_0014F31E: ;
    eax = ZX8(MEM8(ebp + -69));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F33D; /* je: equal / zero */

loc_0014F327: ;
    eax = MEM32(ebp + -52);
    eax = MEM32(eax + 0x308);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F33D; /* je: equal / zero */

loc_0014F338: ;
    goto loc_0014F4BF;

loc_0014F33D: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -68);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F352u); RECOMP_ABI_CALL(0x0014BE60u, sub_0014BE60); /* call 0x0014BE60 */

loc_0014F352: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F41E; /* je: equal / zero */

loc_0014F35A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F35Fu); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_0014F35F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F419; /* jne: not equal / not zero */

loc_0014F367: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -68);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F384u); RECOMP_ABI_CALL(0x00384040u, sub_00384040); /* call 0x00384040 */

loc_0014F384: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F419; /* je: equal / zero */

loc_0014F390: ;
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 2));
    MEM16(ebp + -86) = LO16(eax);
    eax = MEM32(ebp + -68);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F3AEu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F3AE: ;
    SET_LO16(ecx, MEM16(ebp + -86));
    eax = MEM32(eax);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F3C3u); RECOMP_ABI_CALL(0x00171750u, sub_00171750); /* call 0x00171750 */

loc_0014F3C3: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F40B; /* jne: not equal / not zero */

loc_0014F3CF: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -68);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F3E8u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F3E8: ;
    ecx = MEM32(ebp + -92);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F40Bu); RECOMP_ABI_CALL(0x00015DE0u, sub_00015DE0); /* call 0x00015DE0 */

loc_0014F40B: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F419u); RECOMP_ABI_CALL(0x00142CF0u, sub_00142CF0); /* call 0x00142CF0 */

loc_0014F419: ;
    goto loc_0014F4BD;

loc_0014F41E: ;
    _fa = (uint32_t)(MEM8(ebp + -70)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -70), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F4BB; /* jne: not equal / not zero */

loc_0014F428: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + -68);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F43Du); RECOMP_ABI_CALL(0x00373880u, sub_00373880); /* call 0x00373880 */

loc_0014F43D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F4BB; /* je: equal / zero */

loc_0014F445: ;
    eax = MEM32(ebp + -60);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F458u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_0014F458: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -64), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014F497; /* jne: not equal / not zero */

loc_0014F461: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F497; /* je: equal / zero */

loc_0014F467: ;
    eax = MEM32(ebp + -48);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F497; /* je: equal / zero */

loc_0014F473: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -68);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 7;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F495u); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014F495: ;
    goto loc_0014F4B9;

loc_0014F497: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -68);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 6;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F4B9u); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014F4B9: ;
    goto loc_0014F4BB;

loc_0014F4BB: ;
    goto loc_0014F4BD;

loc_0014F4BD: ;
    goto loc_0014F4BF;

loc_0014F4BF: ;
    esp = esp + 0x74;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F4D0
 * Original: 0x0014F4D0 - 0x0014F5D9 (265 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F4D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F4F1u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014F4F1: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F50Au); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F50A: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x380;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F520u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F520: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x34);
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F538u); RECOMP_ABI_CALL(0x0037C0E0u, sub_0037C0E0); /* call 0x0037C0E0 */

loc_0014F538: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x1A4;
    ecx = ecx + 0x48;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x4C;
    edx = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x5C)); /* movss */
    edx = ebp + -24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F56Eu); RECOMP_ABI_CALL(0x001D64B0u, sub_001D64B0); /* call 0x001D64B0 */

loc_0014F56E: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F5D4; /* je: equal / zero */

loc_0014F576: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    eax = eax + 0x1A4;
    eax = eax + 0x48;
    ecx = ebp + -24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F597u); RECOMP_ABI_CALL(0x0010A650u, sub_0010A650); /* call 0x0010A650 */

loc_0014F597: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F5D4; /* je: equal / zero */

loc_0014F59F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F5AAu); RECOMP_ABI_CALL(0x0010A180u, sub_0010A180); /* call 0x0010A180 */

loc_0014F5AA: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F5D4; /* je: equal / zero */

loc_0014F5B2: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F5D4u); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014F5D4: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F5E0
 * Original: 0x0014F5E0 - 0x0014F71E (318 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F5E0(void)
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

loc_0014F5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    MEM8(ebp + -17) = 0;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F60Du); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_0014F60D: ;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F622; /* jne: not equal / not zero */

loc_0014F619: ;
    MEM8(ebp + -17) = 1;
    goto loc_0014F6F4;

loc_0014F622: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F6DD; /* jne: not equal / not zero */

loc_0014F635: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x34);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F64Bu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F64B: ;
    eax = eax + 4;
    eax = eax + 8;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F66Au); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F66A: ;
    eax = eax + 4;
    eax = eax + 8;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F686u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0014F686: ;
    eax = eax + 4;
    eax = eax + 8;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F6A1u); RECOMP_ABI_CALL(0x0014EA80u, sub_0014EA80); /* call 0x0014EA80 */

loc_0014F6A1: ;
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F6C0u); RECOMP_ABI_CALL(0x0014EA80u, sub_0014EA80); /* call 0x0014EA80 */

loc_0014F6C0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -17) = LO8(eax);
    goto loc_0014F6F2;

loc_0014F6DD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014F6F0; /* jle: less or equal (signed <=) */

loc_0014F6EC: ;
    MEM8(ebp + -17) = 1;

loc_0014F6F0: ;
    goto loc_0014F6F2;

loc_0014F6F2: ;
    goto loc_0014F6F4;

loc_0014F6F4: ;
    _fa = (uint32_t)(MEM8(ebp + -17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -17), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F719; /* je: equal / zero */

loc_0014F6FA: ;
    SET_LO16(ecx, MEM16(ebp + 0xC));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x28) = LO16(ecx);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x24) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x2A) = LO16(ecx);

loc_0014F719: ;
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
 * sub_0014F720
 * Original: 0x0014F720 - 0x0014F747 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F720(void)
{
    uint32_t ebp = g_ebp;

loc_0014F720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0x48072A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F734u); RECOMP_ABI_CALL(0x0015AC20u, sub_0015AC20); /* call 0x0015AC20 */

loc_0014F734: ;
    eax = 0x45F37E;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F742u); RECOMP_ABI_CALL(0x0015AC20u, sub_0015AC20); /* call 0x0015AC20 */

loc_0014F742: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F750
 * Original: 0x0014F750 - 0x0014F77B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F750(void)
{
    uint32_t ebp = g_ebp;

loc_0014F750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x58524C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F776u); RECOMP_ABI_CALL(0x0015ACF0u, sub_0015ACF0); /* call 0x0015ACF0 */

loc_0014F776: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F780
 * Original: 0x0014F780 - 0x0014F7A9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F780(void)
{
    uint32_t ebp = g_ebp;

loc_0014F780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x585188;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = 0x31;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F7A4u); RECOMP_ABI_CALL(0x0015ACF0u, sub_0015ACF0); /* call 0x0015ACF0 */

loc_0014F7A4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F7B0
 * Original: 0x0014F7B0 - 0x0014F7F1 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F7B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM16(ebp + -2) = 0;

loc_0014F7BC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014F7EC; /* jge: greater or equal (signed >=) */

loc_0014F7C7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F7D3u); RECOMP_ABI_CALL(0x001506B0u, sub_001506B0); /* call 0x001506B0 */

loc_0014F7D3: ;
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F7DEu); RECOMP_ABI_CALL(0x0015AC20u, sub_0015AC20); /* call 0x0015AC20 */

loc_0014F7DE: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_0014F7BC;

loc_0014F7EC: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F800
 * Original: 0x0014F800 - 0x0014F829 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F800(void)
{
    uint32_t ebp = g_ebp;

loc_0014F800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x49C;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F824u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014F824: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F830
 * Original: 0x0014F830 - 0x0014F8DA (170 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F830(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    MEM16(ebp + -2) = 0;

loc_0014F83C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)(int32_t)SMEM16(0x4A6F84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014F86F; /* jge: greater or equal (signed >=) */

loc_0014F84B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F857u); RECOMP_ABI_CALL(0x001508C0u, sub_001508C0); /* call 0x001508C0 */

loc_0014F857: ;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F861u); RECOMP_ABI_CALL(0x0015AC20u, sub_0015AC20); /* call 0x0015AC20 */

loc_0014F861: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_0014F83C;

loc_0014F86F: ;
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F8D5; /* je: equal / zero */

loc_0014F878: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F87Du); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014F87D: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0x4A8;
    MEM32(ebp + -12) = eax;
    MEM16(ebp + -2) = 0;

loc_0014F891: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014F8D3; /* jge: greater or equal (signed >=) */

loc_0014F89C: ;
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F8B7u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014F8B7: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F8C5u); RECOMP_ABI_CALL(0x0015AC20u, sub_0015AC20); /* call 0x0015AC20 */

loc_0014F8C5: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_0014F891;

loc_0014F8D3: ;
    goto loc_0014F8D5;

loc_0014F8D5: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F8E0
 * Original: 0x0014F8E0 - 0x0014F909 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F8E0(void)
{
    uint32_t ebp = g_ebp;

loc_0014F8E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x42C;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F904u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014F904: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F910
 * Original: 0x0014F910 - 0x0014F939 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F910(void)
{
    uint32_t ebp = g_ebp;

loc_0014F910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x438;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F934u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014F934: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F940
 * Original: 0x0014F940 - 0x0014F969 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F940(void)
{
    uint32_t ebp = g_ebp;

loc_0014F940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x348;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F964u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014F964: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F970
 * Original: 0x0014F970 - 0x0014F999 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F970(void)
{
    uint32_t ebp = g_ebp;

loc_0014F970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x468;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F994u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014F994: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F9A0
 * Original: 0x0014F9A0 - 0x0014F9C9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F9A0(void)
{
    uint32_t ebp = g_ebp;

loc_0014F9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x204;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F9C4u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014F9C4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014F9D0
 * Original: 0x0014F9D0 - 0x0014F9F7 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F9D0(void)
{
    uint32_t ebp = g_ebp;

loc_0014F9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(esp) = 0x360;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014F9F2u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014F9F2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FA00
 * Original: 0x0014FA00 - 0x0014FA27 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA00(void)
{
    uint32_t ebp = g_ebp;

loc_0014FA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(esp) = 0x4E4;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FA22u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014FA22: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FA30
 * Original: 0x0014FA30 - 0x0014FA57 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA30(void)
{
    uint32_t ebp = g_ebp;

loc_0014FA30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(esp) = 0x4F0;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FA52u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014FA52: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FA60
 * Original: 0x0014FA60 - 0x0014FA87 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA60(void)
{
    uint32_t ebp = g_ebp;

loc_0014FA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(esp) = 0x4FC;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FA82u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014FA82: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FA90
 * Original: 0x0014FA90 - 0x0014FAB9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA90(void)
{
    uint32_t ebp = g_ebp;

loc_0014FA90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x36C;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FAB4u); RECOMP_ABI_CALL(0x0015AD40u, sub_0015AD40); /* call 0x0015AD40 */

loc_0014FAB4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FAC0
 * Original: 0x0014FAC0 - 0x0014FB24 (100 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FAC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FAC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(esp) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FAD2u); RECOMP_ABI_CALL(0x001859D0u, sub_001859D0); /* call 0x001859D0 */

loc_0014FAD2: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FB1F; /* je: equal / zero */

loc_0014FADB: ;
    MEM32(esp) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FAE7u); RECOMP_ABI_CALL(0x001859D0u, sub_001859D0); /* call 0x001859D0 */

loc_0014FAE7: ;
    MEM32(esp) = 0x68756467;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FAF7u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014FAF7: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0x120;
    eax = eax + 0x40;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FB1Fu); RECOMP_ABI_CALL(0x0015AD90u, sub_0015AD90); /* call 0x0015AD90 */

loc_0014FB1F: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FB30
 * Original: 0x0014FB30 - 0x0014FB87 (87 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FB30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FB30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FB3Bu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014FB3B: ;
    _fa = (uint32_t)(MEM32(eax + 0x5A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5A0), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FB82; /* je: equal / zero */

loc_0014FB44: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FB49u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014FB49: ;
    eax = MEM32(eax + 0x5A0);
    MEM32(esp) = 0x686D7420;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FB5Fu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0014FB5F: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 0x20;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FB82u); RECOMP_ABI_CALL(0x0015AD90u, sub_0015AD90); /* call 0x0015AD90 */

loc_0014FB82: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FB90
 * Original: 0x0014FB90 - 0x0014FD19 (393 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FB90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FB90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 1;
    MEM16(ebp + -10) = 0;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x4C0;
    MEM32(ebp + -8) = eax;

loc_0014FBB1: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014FCF7; /* jge: greater or equal (signed >=) */

loc_0014FBC0: ;
    ecx = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FBDBu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014FBDB: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 0x4C0;
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -22) = 0;

loc_0014FBEF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014FC41; /* jge: greater or equal (signed >=) */

loc_0014FBFA: ;
    ecx = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FC15u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014FC15: ;
    MEM32(ebp + -28) = eax;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -28);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FC2Au); RECOMP_ABI_CALL(0x003A4210u, sub_003A4210); /* call 0x003A4210 */

loc_0014FC2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FC31; /* jne: not equal / not zero */

loc_0014FC2F: ;
    goto loc_0014FC41;

loc_0014FC31: ;
    goto loc_0014FC33;

loc_0014FC33: ;
    SET_LO16(eax, MEM16(ebp + -22));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -22) = LO16(eax);
    goto loc_0014FBEF;

loc_0014FC41: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FCE4; /* jne: not equal / not zero */

loc_0014FC50: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FC5Bu); RECOMP_ABI_CALL(0x000E00B0u, sub_000E00B0); /* call 0x000E00B0 */

loc_0014FC5B: ;
    MEM16(ebp + -30) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FCDE; /* je: equal / zero */

loc_0014FC68: ;
    ecx = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -30);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FC83u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0014FC83: ;
    MEM32(ebp + -36) = eax;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FC98u); RECOMP_ABI_CALL(0x000FAF90u, sub_000FAF90); /* call 0x000FAF90 */

loc_0014FC98: ;
    ecx = MEM32(ebp + -36);
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FCB0u); RECOMP_ABI_CALL(0x000E0080u, sub_000E0080); /* call 0x000E0080 */

loc_0014FCB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FCD8; /* je: equal / zero */

loc_0014FCB4: ;
    eax = MEM32(ebp + -36);
    edx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FCD6u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0014FCD6: ;
    goto loc_0014FCDC;

loc_0014FCD8: ;
    MEM8(ebp + -1) = 0;

loc_0014FCDC: ;
    goto loc_0014FCE2;

loc_0014FCDE: ;
    MEM8(ebp + -1) = 0;

loc_0014FCE2: ;
    goto loc_0014FCE4;

loc_0014FCE4: ;
    goto loc_0014FCE6;

loc_0014FCE6: ;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_0014FBB1;

loc_0014FCF7: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x49C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD11u); RECOMP_ABI_CALL(0x000E0050u, sub_000E0050); /* call 0x000E0050 */

loc_0014FD11: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FD20
 * Original: 0x0014FD20 - 0x0014FD35 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD20(void)
{
    uint32_t ebp = g_ebp;

loc_0014FD20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD2Bu); RECOMP_ABI_CALL(0x001638B0u, sub_001638B0); /* call 0x001638B0 */

loc_0014FD2B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD30u); RECOMP_ABI_CALL(0x00168660u, sub_00168660); /* call 0x00168660 */

loc_0014FD30: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FD40
 * Original: 0x0014FD40 - 0x0014FDE1 (161 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FD40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0x585248)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x585248), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FD83; /* jne: not equal / not zero */

loc_0014FD4F: ;
    ecx = 0x44DE17;
    eax = 0x44553D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xF5;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD77u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0014FD77: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD83u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0014FD83: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD88u); RECOMP_ABI_CALL(0x001685B0u, sub_001685B0); /* call 0x001685B0 */

loc_0014FD88: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD8Du); RECOMP_ABI_CALL(0x001624C0u, sub_001624C0); /* call 0x001624C0 */

loc_0014FD8D: ;
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FDA0; /* je: equal / zero */

loc_0014FD96: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FD9Bu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014FD9B: ;
    MEM32(ebp + -8) = eax;
    goto loc_0014FDA7;

loc_0014FDA0: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_0014FDA7;

loc_0014FDA7: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FDB2u); RECOMP_ABI_CALL(0x0014FDF0u, sub_0014FDF0); /* call 0x0014FDF0 */

loc_0014FDB2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FDD2; /* je: equal / zero */

loc_0014FDB8: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x474)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x474), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FDD2; /* je: equal / zero */

loc_0014FDC4: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FDD2u); RECOMP_ABI_CALL(0x0014FF10u, sub_0014FF10); /* call 0x0014FF10 */

loc_0014FDD2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FDD7u); RECOMP_ABI_CALL(0x00168670u, sub_00168670); /* call 0x00168670 */

loc_0014FDD7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FDDCu); RECOMP_ABI_CALL(0x00162620u, sub_00162620); /* call 0x00162620 */

loc_0014FDDC: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FDF0
 * Original: 0x0014FDF0 - 0x0014FF0E (286 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FDF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FDF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FE09; /* je: equal / zero */

loc_0014FDFF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FE04u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014FE04: ;
    MEM32(ebp + -8) = eax;
    goto loc_0014FE10;

loc_0014FE09: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_0014FE10;

loc_0014FE10: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FE30; /* je: equal / zero */

loc_0014FE1C: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x474)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5CCAC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x474), 0x5CCAC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FE30; /* jne: not equal / not zero */

loc_0014FE2B: ;
    goto loc_0014FF09;

loc_0014FE30: ;
    eax = 0x47E8D5;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x4A39;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FE4Eu); RECOMP_ABI_CALL(0x001E1390u, sub_001E1390); /* call 0x001E1390 */

loc_0014FE4E: ;
    MEM32(0x8C0640) = eax;
    _fa = (uint32_t)(MEM32(0x8C0640)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C0640), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FEEF; /* je: equal / zero */

loc_0014FE60: ;
    eax = MEM32(0x8C0640);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FE6Du); RECOMP_ABI_CALL(0x001E1740u, sub_001E1740); /* call 0x001E1740 */

loc_0014FE6D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FEE6; /* je: equal / zero */

loc_0014FE73: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x480);
    eax = 0x44553D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FE96u); RECOMP_ABI_CALL(0x000FCD60u, sub_000FCD60); /* call 0x000FCD60 */

loc_0014FE96: ;
    ecx = MEM32(0x8C0640);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x480) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x474) = 0x5CCAC;
    eax = MEM32(ebp + -4);
    eax = eax + 0x488;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FECAu); RECOMP_ABI_CALL(0x000E0080u, sub_000E0080); /* call 0x000E0080 */

loc_0014FECA: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x49C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FEE4u); RECOMP_ABI_CALL(0x000E0050u, sub_000E0050); /* call 0x000E0050 */

loc_0014FEE4: ;
    goto loc_0014FEED;

loc_0014FEE6: ;
    MEM8(0xBCE578) = 1;

loc_0014FEED: ;
    goto loc_0014FF07;

loc_0014FEEF: ;
    eax = 0; /* xor self */
    eax = 0x4876B6;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FF07u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0014FF07: ;
    goto loc_0014FF09;

loc_0014FF09: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0014FF10
 * Original: 0x0014FF10 - 0x00150133 (547 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FF10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0014FF10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(ebp + -1) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FF22u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_0014FF22: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(0x8C0640);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FF32u); RECOMP_ABI_CALL(0x0014FDF0u, sub_0014FDF0); /* call 0x0014FDF0 */

loc_0014FF32: ;
    ecx = MEM32(ebp + -20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x49C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x49C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -22) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0014FF53; /* jne: not equal / not zero */

loc_0014FF43: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x4C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C0), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(ebp + -22) = LO8(eax);

loc_0014FF53: ;
    SET_LO8(eax, MEM8(ebp + -22));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -21) = LO8(eax);
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x480);
    MEM32(0x8C0640) = eax;
    ecx = MEM32(0x8C0640);
    ecx = ecx + 0x38;
    eax = MEM32(0x8C0640);
    MEM32(eax + 0x34) = ecx;
    _fa = (uint32_t)(MEM8(ebp + -21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -21), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0014FFD7; /* jne: not equal / not zero */

loc_0014FF83: ;
    ecx = ebp + -12;
    eax = ebp + -8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FF95u); RECOMP_ABI_CALL(0x0015D150u, sub_0015D150); /* call 0x0015D150 */

loc_0014FF95: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014FFD7; /* je: equal / zero */

loc_0014FF9D: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x488)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x488), 0x400 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0014FFD2; /* jge: greater or equal (signed >=) */

loc_0014FFAC: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x488;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x488);
    eax = eax + 0x400;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FFCFu); RECOMP_ABI_CALL(0x000E0080u, sub_000E0080); /* call 0x000E0080 */

loc_0014FFCF: ;
    MEM8(ebp + -1) = LO8(eax);

loc_0014FFD2: ;
    goto loc_0015011D;

loc_0014FFD7: ;
    _fa = (uint32_t)(MEM8(ebp + -21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -21), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0014FFF7; /* je: equal / zero */

loc_0014FFDD: ;
    eax = 0; /* xor self */
    eax = 0x44DE4B;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014FFF5u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0014FFF5: ;
    goto loc_00150068;

loc_0014FFF7: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00150017; /* jne: not equal / not zero */

loc_0014FFFD: ;
    eax = 0; /* xor self */
    eax = 0x45EFD4;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150015u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_00150015: ;
    goto loc_00150066;

loc_00150017: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0015003E; /* jne: not equal / not zero */

loc_0015001D: ;
    eax = MEM32(ebp + -12);
    ecx = 0; /* xor self */
    ecx = 0x463B55;
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015003Cu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0015003C: ;
    goto loc_00150064;

loc_0015003E: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    edx = 0; /* xor self */
    edx = 0x43EFCC;
    MEM32(esp) = 0;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150064u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_00150064: ;
    goto loc_00150066;

loc_00150066: ;
    goto loc_00150068;

loc_00150068: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015006Du); RECOMP_ABI_CALL(0x001503B0u, sub_001503B0); /* call 0x001503B0 */

loc_0015006D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00150098; /* je: equal / zero */

loc_00150075: ;
    ecx = ebp + -12;
    eax = ebp + -8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150087u); RECOMP_ABI_CALL(0x0015D150u, sub_0015D150); /* call 0x0015D150 */

loc_00150087: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00150098; /* je: equal / zero */

loc_0015008F: ;
    MEM8(ebp + -1) = 1;
    goto loc_0015011B;

loc_00150098: ;
    eax = MEM32(0x8C0640);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500A5u); RECOMP_ABI_CALL(0x001E1770u, sub_001E1770); /* call 0x001E1770 */

loc_001500A5: ;
    eax = MEM32(ebp + -20);
    eax = eax + 0x4A8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500BFu); RECOMP_ABI_CALL(0x000E0050u, sub_000E0050); /* call 0x000E0050 */

loc_001500BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001500FF; /* je: equal / zero */

loc_001500C3: ;
    eax = MEM32(ebp + -20);
    eax = eax + 0x49C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500DDu); RECOMP_ABI_CALL(0x000E0050u, sub_000E0050); /* call 0x000E0050 */

loc_001500DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_001500FF; /* je: equal / zero */

loc_001500E1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500E6u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_001500E6: ;
    eax = eax + 0x488;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500FBu); RECOMP_ABI_CALL(0x000E0080u, sub_000E0080); /* call 0x000E0080 */

loc_001500FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00150117; /* jne: not equal / not zero */

loc_001500FF: ;
    eax = 0; /* xor self */
    eax = 0x489AA5;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150117u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_00150117: ;
    MEM8(ebp + -1) = 0;

loc_0015011B: ;
    goto loc_0015011D;

loc_0015011D: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0015012B; /* je: equal / zero */

loc_00150123: ;
    eax = MEM32(ebp + -16);
    MEM32(0x8C0640) = eax;

loc_0015012B: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150140
 * Original: 0x00150140 - 0x001501AD (109 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150140(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015014Bu); RECOMP_ABI_CALL(0x001501B0u, sub_001501B0); /* call 0x001501B0 */

loc_0015014B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001501A8; /* je: equal / zero */

loc_0015014F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150154u); RECOMP_ABI_CALL(0x001503B0u, sub_001503B0); /* call 0x001503B0 */

loc_00150154: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150159u); RECOMP_ABI_CALL(0x001504E0u, sub_001504E0); /* call 0x001504E0 */

loc_00150159: ;
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015016C; /* je: equal / zero */

loc_00150162: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150167u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150167: ;
    MEM32(ebp + -8) = eax;
    goto loc_00150173;

loc_0015016C: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_00150173;

loc_00150173: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015017Eu); RECOMP_ABI_CALL(0x0014FDF0u, sub_0014FDF0); /* call 0x0014FDF0 */

loc_0015017E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015019E; /* je: equal / zero */

loc_00150184: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x474)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x474), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015019E; /* je: equal / zero */

loc_00150190: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015019Eu); RECOMP_ABI_CALL(0x0014FF10u, sub_0014FF10); /* call 0x0014FF10 */

loc_0015019E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001501A3u); RECOMP_ABI_CALL(0x00168670u, sub_00168670); /* call 0x00168670 */

loc_001501A3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001501A8u); RECOMP_ABI_CALL(0x00162620u, sub_00162620); /* call 0x00162620 */

loc_001501A8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001501B0
 * Original: 0x001501B0 - 0x001503B0 (512 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001501B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_001501B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC98)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM8(ebp + -1) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001501C2u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_001501C2: ;
    eax = eax + 0x4C0;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001501D9u); RECOMP_ABI_CALL(0x000E0050u, sub_000E0050); /* call 0x000E0050 */

loc_001501D9: ;
    eax = ebp + -257;
    MEM32(ebp + -3204) = eax;
    eax = MEM32(0x5A3900);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001501F2u); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_001501F2: ;
    edx = MEM32(ebp + -3204);
    ecx = 0x47BA9A;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015020Eu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0015020E: ;
    eax = ebp + -257;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150224u); RECOMP_ABI_CALL(0x0042A440u, sub_0042A440); /* call 0x0042A440 */

loc_00150224: ;
    ecx = eax;
    ecx = ecx + 1;
    eax = 0x45F376;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015023Bu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0015023B: ;
    ecx = ebp + -525;
    eax = 0x484572;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015025Du); RECOMP_ABI_CALL(0x003547E0u, sub_003547E0); /* call 0x003547E0 */

loc_0015025D: ;
    eax = ebp + -525;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015026Bu); RECOMP_ABI_CALL(0x00356770u, sub_00356770); /* call 0x00356770 */

loc_0015026B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00150280; /* je: equal / zero */

loc_0015026F: ;
    eax = ebp + -525;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015027Du); RECOMP_ABI_CALL(0x0015AA30u, sub_0015AA30); /* call 0x0015AA30 */

loc_0015027D: ;
    MEM8(ebp + -1) = LO8(eax);

loc_00150280: ;
    eax = ebp + -257;
    ecx = ebp + -1049;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001502A0u); RECOMP_ABI_CALL(0x003547E0u, sub_003547E0); /* call 0x003547E0 */

loc_001502A0: ;
    eax = ebp + -3193;
    ecx = 0; /* xor self */
    ecx = ebp + -1049;
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 8;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001502CAu); RECOMP_ABI_CALL(0x00353F90u, sub_00353F90); /* call 0x00353F90 */

loc_001502CA: ;
    MEM16(ebp + -3196) = LO16(eax);
    edx = ebp + -3193;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -3196);
    eax = 0x15ABB0;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x10C;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001502FCu); RECOMP_ABI_CALL(0x00427130u, sub_00427130); /* call 0x00427130 */

loc_001502FC: ;
    MEM16(ebp + -3198) = 0;

loc_00150305: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -3198);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -3196);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_001503A5; /* jge: greater or equal (signed >=) */

loc_0015031B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -3198);
    ecx = ebp + -3193;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    ecx = ecx + eax;
    eax = ebp + -781;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 8;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015034Au); RECOMP_ABI_CALL(0x003544E0u, sub_003544E0); /* call 0x003544E0 */

loc_0015034A: ;
    ecx = ebp + -781;
    eax = 0x462036;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150362u); RECOMP_ABI_CALL(0x000FAA80u, sub_000FAA80); /* call 0x000FAA80 */

loc_00150362: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0015038C; /* jne: not equal / not zero */

loc_00150367: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -3198);
    eax = ebp + -3193;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150384u); RECOMP_ABI_CALL(0x0015AA30u, sub_0015AA30); /* call 0x0015AA30 */

loc_00150384: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0015038C; /* jne: not equal / not zero */

loc_00150388: ;
    MEM8(ebp + -1) = 0;

loc_0015038C: ;
    goto loc_0015038E;

loc_0015038E: ;
    SET_LO16(eax, MEM16(ebp + -3198));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -3198) = LO16(eax);
    goto loc_00150305;

loc_001503A5: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0xC98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001503B0
 * Original: 0x001503B0 - 0x001504DD (301 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001503B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001503B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001503BCu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_001503BC: ;
    MEM32(ebp + -8) = eax;
    MEM8(ebp + -13) = 1;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001503CFu); RECOMP_ABI_CALL(0x0015C3B0u, sub_0015C3B0); /* call 0x0015C3B0 */

loc_001503CF: ;
    MEM16(ebp + -26) = 0;
    eax = MEM32(ebp + -8);
    eax = eax + 0x4C0;
    MEM32(ebp + -12) = eax;

loc_001503E0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -26);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001504B1; /* jge: greater or equal (signed >=) */

loc_001503EF: ;
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -26);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015040Au); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0015040A: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    esi = MEM32(eax + 0x20);
    ecx = MEM32(ebp + -32);
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150435u); RECOMP_ABI_CALL(0x00357040u, sub_00357040); /* call 0x00357040 */

loc_00150435: ;
    edx = eax;
    ecx = ebp + -20;
    eax = ebp + -24;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150451u); RECOMP_ABI_CALL(0x0015CEC0u, sub_0015CEC0); /* call 0x0015CEC0 */

loc_00150451: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001504A0; /* je: equal / zero */

loc_00150457: ;
    ecx = MEM32(ebp + -32);
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150479u); RECOMP_ABI_CALL(0x00357040u, sub_00357040); /* call 0x00357040 */

loc_00150479: ;
    MEM32(ebp + -36) = eax;
    esi = MEM32(ebp + -20);
    edx = MEM32(ebp + -24);
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015049Cu); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_0015049C: ;
    MEM8(ebp + -13) = 0;

loc_001504A0: ;
    SET_LO16(eax, MEM16(ebp + -26));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -26) = LO16(eax);
    goto loc_001503E0;

loc_001504B1: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001504CF; /* je: equal / zero */

loc_001504B7: ;
    eax = 0; /* xor self */
    eax = 0x48F834;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001504CFu); RECOMP_ABI_CALL(0x001C3010u, sub_001C3010); /* call 0x001C3010 */

loc_001504CF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001504D4u); RECOMP_ABI_CALL(0x0015C4C0u, sub_0015C4C0); /* call 0x0015C4C0 */

loc_001504D4: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001504E0
 * Original: 0x001504E0 - 0x00150537 (87 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001504E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001504E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    _fa = (uint32_t)(MEM32(0x8C0640)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C0640), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150528; /* je: equal / zero */

loc_001504EF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001504F4u); RECOMP_ABI_CALL(0x001505B0u, sub_001505B0); /* call 0x001505B0 */

loc_001504F4: ;
    _fa = (uint32_t)(MEM8(0xBCE578)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBCE578), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015051E; /* je: equal / zero */

loc_001504FD: ;
    eax = MEM32(0x8C0640);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015050Au); RECOMP_ABI_CALL(0x001E1470u, sub_001E1470); /* call 0x001E1470 */

loc_0015050A: ;
    eax = MEM32(0x8C0640);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150517u); RECOMP_ABI_CALL(0x001E1410u, sub_001E1410); /* call 0x001E1410 */

loc_00150517: ;
    MEM8(0xBCE578) = 0;

loc_0015051E: ;
    MEM32(0x8C0640) = 0;

loc_00150528: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015052Du); RECOMP_ABI_CALL(0x001638B0u, sub_001638B0); /* call 0x001638B0 */

loc_0015052D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150532u); RECOMP_ABI_CALL(0x001686A0u, sub_001686A0); /* call 0x001686A0 */

loc_00150532: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150540
 * Original: 0x00150540 - 0x001505A6 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150540(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150571; /* je: equal / zero */

loc_00150552: ;
    eax = ZX8(MEM8(0x5858F8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150571; /* je: equal / zero */

loc_0015055E: ;
    eax = 0x585268;
    eax = eax + 0x688;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150571u); RECOMP_ABI_CALL(0x001006A0u, sub_001006A0); /* call 0x001006A0 */

loc_00150571: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150576u); RECOMP_ABI_CALL(0x00164850u, sub_00164850); /* call 0x00164850 */

loc_00150576: ;
    eax = ZX8(MEM8(0xA08CE1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001505A1; /* je: equal / zero */

loc_00150582: ;
    eax = ZX8(MEM8(0x5858F8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001505A1; /* je: equal / zero */

loc_0015058E: ;
    eax = 0x585268;
    eax = eax + 0x688;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001505A1u); RECOMP_ABI_CALL(0x00100990u, sub_00100990); /* call 0x00100990 */

loc_001505A1: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001505B0
 * Original: 0x001505B0 - 0x00150634 (132 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001505B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001505B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0x8C0640);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001505CBu); RECOMP_ABI_CALL(0x001E1AE0u, sub_001E1AE0); /* call 0x001E1AE0 */

loc_001505CB: ;
    MEM32(ebp + -4) = eax;

loc_001505CE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015062F; /* je: equal / zero */

loc_001505D4: ;
    ecx = MEM32(0x8C0640);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001505E9u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_001505E9: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 6));
    eax = ZX8(LO8(eax));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150613; /* jne: not equal / not zero */

loc_001505FE: ;
    ecx = MEM32(0x8C0640);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150613u); RECOMP_ABI_CALL(0x001E1850u, sub_001E1850); /* call 0x001E1850 */

loc_00150613: ;
    goto loc_00150615;

loc_00150615: ;
    ecx = MEM32(0x8C0640);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015062Au); RECOMP_ABI_CALL(0x001E1AE0u, sub_001E1AE0); /* call 0x001E1AE0 */

loc_0015062A: ;
    MEM32(ebp + -4) = eax;
    goto loc_001505CE;

loc_0015062F: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150640
 * Original: 0x00150640 - 0x0015069A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150659; /* je: equal / zero */

loc_0015064F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150654u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150654: ;
    MEM32(ebp + -8) = eax;
    goto loc_00150660;

loc_00150659: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_00150660;

loc_00150660: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015066Bu); RECOMP_ABI_CALL(0x0014FDF0u, sub_0014FDF0); /* call 0x0014FDF0 */

loc_0015066B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015068B; /* je: equal / zero */

loc_00150671: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x474)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x474), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015068B; /* je: equal / zero */

loc_0015067D: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015068Bu); RECOMP_ABI_CALL(0x0014FF10u, sub_0014FF10); /* call 0x0014FF10 */

loc_0015068B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150690u); RECOMP_ABI_CALL(0x00168670u, sub_00168670); /* call 0x00168670 */

loc_00150690: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150695u); RECOMP_ABI_CALL(0x00162620u, sub_00162620); /* call 0x00162620 */

loc_00150695: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001506A0
 * Original: 0x001506A0 - 0x001506AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001506A0(void)
{
    uint32_t ebp = g_ebp;

loc_001506A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    MEM8(0xBCE579) = 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001506B0
 * Original: 0x001506B0 - 0x00150712 (98 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001506B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001506B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001506CE; /* jl: less (signed <) */

loc_001506C3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00150702; /* jl: less (signed <) */

loc_001506CE: ;
    ecx = 0x47B5FC;
    eax = 0x44553D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001506F6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001506F6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150702u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00150702: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax * 4 + 0x585268);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150720
 * Original: 0x00150720 - 0x001507B5 (149 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150720(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001507A6; /* je: equal / zero */

loc_00150732: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150737u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150737: ;
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -4) = 0;

loc_00150740: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x49C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x49C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001507A4; /* jge: greater or equal (signed >=) */

loc_0015074F: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x49C;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150770u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00150770: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150785u); RECOMP_ABI_CALL(0x000FAA80u, sub_000FAA80); /* call 0x000FAA80 */

loc_00150785: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150794; /* jne: not equal / not zero */

loc_0015078A: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_001507AC;

loc_00150794: ;
    goto loc_00150796;

loc_00150796: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_00150740;

loc_001507A4: ;
    goto loc_001507A6;

loc_001507A6: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_001507AC: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001507C0
 * Original: 0x001507C0 - 0x001508BD (253 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001507C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001507C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -4) = 0;

loc_001507CF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(0x4A6F84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00150828; /* jge: greater or equal (signed >=) */

loc_001507DE: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001507F0u); RECOMP_ABI_CALL(0x001508C0u, sub_001508C0); /* call 0x001508C0 */

loc_001507F0: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150801u); RECOMP_ABI_CALL(0x003A4210u, sub_003A4210); /* call 0x003A4210 */

loc_00150801: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150818; /* jne: not equal / not zero */

loc_00150806: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    eax = eax | 0x8000;
    MEM16(ebp + -2) = LO16(eax);
    goto loc_001508B4;

loc_00150818: ;
    goto loc_0015081A;

loc_0015081A: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_001507CF;

loc_00150828: ;
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001508AE; /* je: equal / zero */

loc_00150831: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150836u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150836: ;
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -4) = 0;

loc_0015083F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x4A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x4A8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001508AC; /* jge: greater or equal (signed >=) */

loc_0015084E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150853u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150853: ;
    ecx = eax;
    ecx = ecx + 0x4A8;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150873u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00150873: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150888u); RECOMP_ABI_CALL(0x003A4210u, sub_003A4210); /* call 0x003A4210 */

loc_00150888: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015089C; /* jne: not equal / not zero */

loc_0015088D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    eax = eax & 0xFFFF7FFFu;
    MEM16(ebp + -2) = LO16(eax);
    goto loc_001508B4;

loc_0015089C: ;
    goto loc_0015089E;

loc_0015089E: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_0015083F;

loc_001508AC: ;
    goto loc_001508AE;

loc_001508AE: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_001508B4: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001508C0
 * Original: 0x001508C0 - 0x00150926 (102 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001508C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001508C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001508E2; /* jl: less (signed <) */

loc_001508D3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(0x4A6F84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00150916; /* jl: less (signed <) */

loc_001508E2: ;
    ecx = 0x46A62A;
    eax = 0x44553D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x240;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015090Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0015090A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150916u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00150916: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax * 4 + 0x5873E8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150930
 * Original: 0x00150930 - 0x001509B9 (137 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150930(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001509AA; /* je: equal / zero */

loc_00150942: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150947u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150947: ;
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -4) = 0;

loc_00150950: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x4B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x4B4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001509A8; /* jge: greater or equal (signed >=) */

loc_0015095F: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x4B4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150980u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00150980: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150998; /* jne: not equal / not zero */

loc_0015098E: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_001509B0;

loc_00150998: ;
    goto loc_0015099A;

loc_0015099A: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_00150950;

loc_001509A8: ;
    goto loc_001509AA;

loc_001509AA: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_001509B0: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001509C0
 * Original: 0x001509C0 - 0x00150A2F (111 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001509C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001509C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001509F4; /* je: equal / zero */

loc_001509D8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = eax & 0x7FFF;
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001509EAu); RECOMP_ABI_CALL(0x001508C0u, sub_001508C0); /* call 0x001508C0 */

loc_001509EA: ;
    SET_LO16(eax, MEM16(eax + 4));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00150A26;

loc_001509F4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001509F9u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_001509F9: ;
    ecx = eax;
    ecx = ecx + 0x4A8;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = eax & 0x7FFF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150A1Eu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00150A1E: ;
    SET_LO16(eax, MEM16(eax + 0x20));
    MEM16(ebp + -2) = LO16(eax);

loc_00150A26: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150A30
 * Original: 0x00150A30 - 0x00150A96 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150A30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150A61; /* je: equal / zero */

loc_00150A48: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = eax & 0x7FFF;
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150A5Au); RECOMP_ABI_CALL(0x001508C0u, sub_001508C0); /* call 0x001508C0 */

loc_00150A5A: ;
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    goto loc_00150A8E;

loc_00150A61: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150A66u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150A66: ;
    ecx = eax;
    ecx = ecx + 0x4A8;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = eax & 0x7FFF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150A8Bu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00150A8B: ;
    MEM32(ebp + -4) = eax;

loc_00150A8E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150AA0
 * Original: 0x00150AA0 - 0x00150B05 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150AA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -4) = 0;

loc_00150AAF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00150AF6; /* jge: greater or equal (signed >=) */

loc_00150ABA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    eax = MEM32(eax * 4 + 0x585268);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150AD7u); RECOMP_ABI_CALL(0x003A4210u, sub_003A4210); /* call 0x003A4210 */

loc_00150AD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150AE6; /* jne: not equal / not zero */

loc_00150ADC: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00150AFC;

loc_00150AE6: ;
    goto loc_00150AE8;

loc_00150AE8: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_00150AAF;

loc_00150AF6: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_00150AFC: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150B10
 * Original: 0x00150B10 - 0x00150B79 (105 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150B10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150B10: ;
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
    PUSH32(esp, 0x00150B24u); RECOMP_ABI_CALL(0x00150720u, sub_00150720); /* call 0x00150720 */

loc_00150B24: ;
    MEM16(ebp + -4) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150B6D; /* je: equal / zero */

loc_00150B31: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150B36u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_00150B36: ;
    ecx = eax;
    ecx = ecx + 0x49C;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150B56u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00150B56: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150B67u); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_00150B67: ;
    MEM8(ebp + -1) = 1;
    goto loc_00150B71;

loc_00150B6D: ;
    MEM8(ebp + -1) = 0;

loc_00150B71: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150B80
 * Original: 0x00150B80 - 0x00150C1A (154 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150B80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x818;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150B97u); RECOMP_ABI_CALL(0x00150AA0u, sub_00150AA0); /* call 0x00150AA0 */

loc_00150B97: ;
    MEM16(ebp + -2050) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2050);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150C12; /* je: equal / zero */

loc_00150BAA: ;
    SET_LO16(ecx, MEM16(ebp + -2050));
    eax = ebp + -2048;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150BC6u); RECOMP_ABI_CALL(0x00150C20u, sub_00150C20); /* call 0x00150C20 */

loc_00150BC6: ;
    eax = ebp + -2048;
    ecx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150BDEu); RECOMP_ABI_CALL(0x001C3010u, sub_001C3010); /* call 0x001C3010 */

loc_00150BDE: ;
    SET_LO16(ecx, MEM16(ebp + -2050));
    eax = ebp + -2048;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150BFAu); RECOMP_ABI_CALL(0x00150D30u, sub_00150D30); /* call 0x00150D30 */

loc_00150BFA: ;
    eax = ebp + -2048;
    ecx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150C12u); RECOMP_ABI_CALL(0x001C3010u, sub_001C3010); /* call 0x001C3010 */

loc_00150C12: ;
    esp = esp + 0x818;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150C20
 * Original: 0x00150C20 - 0x00150D23 (259 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150C20: ;
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
    PUSH32(esp, 0x00150C39u); RECOMP_ABI_CALL(0x001506B0u, sub_001506B0); /* call 0x001506B0 */

loc_00150C39: ;
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    ecx = 0x4928F4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150C5Bu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_00150C5B: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150C98; /* je: equal / zero */

loc_00150C64: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150C75u); RECOMP_ABI_CALL(0x000FAEA0u, sub_000FAEA0); /* call 0x000FAEA0 */

loc_00150C75: ;
    edx = MEM32(ebp + -12);
    edx = edx + eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x14);
    ecx = 0x44E0CC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150C96u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_00150C96: ;
    goto loc_00150D09;

loc_00150C98: ;
    MEM16(ebp + -6) = 0;

loc_00150C9E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00150D07; /* jge: greater or equal (signed >=) */

loc_00150CAD: ;
    ecx = MEM32(ebp + 0xC);
    eax = 0x467E4A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150CC2u); RECOMP_ABI_CALL(0x000FA9F0u, sub_000FA9F0); /* call 0x000FA9F0 */

loc_00150CC2: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx * 2 + 0x1A);
    eax = MEM32(eax * 4 + 0x585188);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150CE4u); RECOMP_ABI_CALL(0x000FA9F0u, sub_000FA9F0); /* call 0x000FA9F0 */

loc_00150CE4: ;
    ecx = MEM32(ebp + 0xC);
    eax = 0x453A32;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150CF9u); RECOMP_ABI_CALL(0x000FA9F0u, sub_000FA9F0); /* call 0x000FA9F0 */

loc_00150CF9: ;
    SET_LO16(eax, MEM16(ebp + -6));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -6) = LO16(eax);
    goto loc_00150C9E;

loc_00150D07: ;
    goto loc_00150D09;

loc_00150D09: ;
    ecx = MEM32(ebp + 0xC);
    eax = 0x45EE11;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150D1Eu); RECOMP_ABI_CALL(0x000FA9F0u, sub_000FA9F0); /* call 0x000FA9F0 */

loc_00150D1E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150D30
 * Original: 0x00150D30 - 0x00150D66 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150D30(void)
{
    uint32_t ebp = g_ebp;

loc_00150D30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150D4Fu); RECOMP_ABI_CALL(0x001506B0u, sub_001506B0); /* call 0x001506B0 */

loc_00150D4F: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(eax + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150D61u); RECOMP_ABI_CALL(0x000FAF90u, sub_000FAF90); /* call 0x000FAF90 */

loc_00150D61: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150D70
 * Original: 0x00150D70 - 0x00150E7E (270 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150D70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x818;
    ecx = 0x4482C7;
    eax = 0x48C279;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150D91u); RECOMP_ABI_CALL(0x003A51D0u, sub_003A51D0); /* call 0x003A51D0 */

loc_00150D91: ;
    MEM32(ebp + -2052) = eax;
    MEM16(ebp + -2054) = 0;

loc_00150DA0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2054);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00150E68; /* jge: greater or equal (signed >=) */

loc_00150DB2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2054);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150DC1u); RECOMP_ABI_CALL(0x001506B0u, sub_001506B0); /* call 0x001506B0 */

loc_00150DC1: ;
    SET_LO16(ecx, MEM16(ebp + -2054));
    eax = ebp + -2048;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150DDDu); RECOMP_ABI_CALL(0x00150C20u, sub_00150C20); /* call 0x00150C20 */

loc_00150DDD: ;
    edx = MEM32(ebp + -2052);
    eax = ebp + -2048;
    ecx = 0x4897E0;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150DFFu); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_00150DFF: ;
    eax = ebp + -2048;
    MEM32(ebp + -2060) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2054);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150E1Au); RECOMP_ABI_CALL(0x001506B0u, sub_001506B0); /* call 0x001506B0 */

loc_00150E1A: ;
    ecx = MEM32(ebp + -2060);
    eax = MEM32(eax + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150E2Fu); RECOMP_ABI_CALL(0x000FAF90u, sub_000FAF90); /* call 0x000FAF90 */

loc_00150E2F: ;
    edx = MEM32(ebp + -2052);
    eax = ebp + -2048;
    ecx = 0x494E35;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150E51u); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_00150E51: ;
    SET_LO16(eax, MEM16(ebp + -2054));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2054) = LO16(eax);
    goto loc_00150DA0;

loc_00150E68: ;
    eax = MEM32(ebp + -2052);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150E76u); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_00150E76: ;
    esp = esp + 0x818;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150E80
 * Original: 0x00150E80 - 0x00150FC4 (324 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150E80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00150E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0xBCE57C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBCE57C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150ED0; /* je: equal / zero */

loc_00150E9C: ;
    ecx = 0x475933;
    eax = 0x44553D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x398;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150EC4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00150EC4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150ED0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00150ED0: ;
    SET_LO16(eax, MEM16(ebp + 0x14));
    MEM16(0xBCE580) = LO16(eax);
    MEM16(0xBCE582) = 0;
    eax = MEM32(ebp + 0x10);
    MEM32(0xBCE57C) = eax;
    eax = MEM32(ebp + 8);
    MEM32(0xBCE584) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150F04; /* jne: not equal / not zero */

loc_00150EF9: ;
    eax = 0x452F3B;
    MEM32(0xBCE584) = eax;

loc_00150F04: ;
    MEM16(ebp + -2) = 0;

loc_00150F0A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00150F87; /* jge: greater or equal (signed >=) */

loc_00150F13: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x585EE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x585EE8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150F55; /* jne: not equal / not zero */

loc_00150F21: ;
    ecx = 0x46D680;
    eax = 0x44553D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3A1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150F49u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00150F49: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150F55u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00150F55: ;
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150F77; /* je: equal / zero */

loc_00150F6C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax * 4 + 0x585EE8); PUSH32(esp, 0x00150F77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00150F77: ;
    goto loc_00150F79;

loc_00150F79: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00150F0A;

loc_00150F87: ;
    edx = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(0xBCE582);
    eax = 0x150FD0;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150FAFu); RECOMP_ABI_CALL(0x00427130u, sub_00427130); /* call 0x00427130 */

loc_00150FAF: ;
    MEM32(0xBCE57C) = 0;
    SET_LO16(eax, MEM16(0xBCE582));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00150FD0
 * Original: 0x00150FD0 - 0x00150FF7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150FD0(void)
{
    uint32_t ebp = g_ebp;

loc_00150FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150FF2u); RECOMP_ABI_CALL(0x003A4210u, sub_003A4210); /* call 0x003A4210 */

loc_00150FF2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151000
 * Original: 0x00151000 - 0x00151354 (852 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x844;
    eax = MEM32(ebp + 8);
    MEM8(ebp + -5) = 0;
    ecx = ebp + -1044;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015102Eu); RECOMP_ABI_CALL(0x000FAD10u, sub_000FAD10); /* call 0x000FAD10 */

loc_0015102E: ;
    MEM8(ebp + -21) = 0;
    eax = ebp + -1044;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x3B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151048u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_00151048: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151054; /* je: equal / zero */

loc_0015104D: ;
    MEM8(ebp + -1044) = 0;

loc_00151054: ;
    eax = ebp + -1044;
    MEM32(ebp + -20) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -1044);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151275; /* je: equal / zero */

loc_0015106D: ;
    goto loc_0015106F;

loc_0015106F: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015107Du); RECOMP_ABI_CALL(0x003DAD50u, sub_003DAD50); /* call 0x003DAD50 */

loc_0015107D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015125B; /* jne: not equal / not zero */

loc_00151086: ;
    MEM16(ebp + -2070) = 0;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015109Du); RECOMP_ABI_CALL(0x0015C3B0u, sub_0015C3B0); /* call 0x0015C3B0 */

loc_0015109D: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -1044);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015111C; /* je: equal / zero */

loc_001510A9: ;
    eax = ebp + -1044;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001510BFu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_001510BF: ;
    MEM32(ebp + -2080) = eax;
    _fa = (uint32_t)(MEM32(ebp + -2080)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -2080), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001510D7; /* je: equal / zero */

loc_001510CE: ;
    eax = MEM32(ebp + -2080);
    MEM8(eax) = 0;

loc_001510D7: ;
    eax = ebp + -1044;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001510E5u); RECOMP_ABI_CALL(0x001507C0u, sub_001507C0); /* call 0x001507C0 */

loc_001510E5: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001510FF; /* je: equal / zero */

loc_001510EB: ;
    _fa = (uint32_t)(MEM32(ebp + -2080)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -2080), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001510FD; /* je: equal / zero */

loc_001510F4: ;
    MEM16(ebp + -2070) = 2;

loc_001510FD: ;
    goto loc_00151108;

loc_001510FF: ;
    MEM16(ebp + -2070) = 1;

loc_00151108: ;
    _fa = (uint32_t)(MEM32(ebp + -2080)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -2080), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015111A; /* je: equal / zero */

loc_00151111: ;
    eax = MEM32(ebp + -2080);
    MEM8(eax) = 0x20;

loc_0015111A: ;
    goto loc_0015111C;

loc_0015111C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2070);
    MEM32(ebp + -2088) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151149; /* je: equal / zero */

loc_0015112D: ;
    goto loc_0015112F;

loc_0015112F: ;
    eax = MEM32(ebp + -2088);
    eax = eax - 1;
    if ((eax == 0)) goto loc_0015114E; /* je: equal / zero */

loc_0015113A: ;
    goto loc_0015113C;

loc_0015113C: ;
    eax = MEM32(ebp + -2088);
    eax = eax - 2;
    if ((eax == 0)) goto loc_0015117B; /* je: equal / zero */

loc_00151147: ;
    goto loc_001511A8;

loc_00151149: ;
    goto loc_001511DC;

loc_0015114E: ;
    edx = ebp + -2068;
    eax = ebp + -1044;
    ecx = 0x494E3C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151170u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_00151170: ;
    eax = ebp + -2068;
    MEM32(ebp + 8) = eax;
    goto loc_001511DC;

loc_0015117B: ;
    edx = ebp + -2068;
    eax = ebp + -1044;
    ecx = 0x44B13F;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015119Du); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0015119D: ;
    eax = ebp + -2068;
    MEM32(ebp + 8) = eax;
    goto loc_001511DC;

loc_001511A8: ;
    eax = 0; /* xor self */
    eax = 0x44553D;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x507;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001511D0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_001511D0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001511DCu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_001511DC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001511E7u); RECOMP_ABI_CALL(0x000FAEA0u, sub_000FAEA0); /* call 0x000FAEA0 */

loc_001511E7: ;
    esi = eax;
    edx = MEM32(ebp + 8);
    ecx = ebp + -16;
    eax = ebp + -12;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151206u); RECOMP_ABI_CALL(0x0015C770u, sub_0015C770); /* call 0x0015C770 */

loc_00151206: ;
    MEM32(ebp + -2076) = eax;
    _fa = (uint32_t)(MEM32(ebp + -2076)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -2076), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151229; /* je: equal / zero */

loc_00151215: ;
    MEM8(ebp + -5) = 1;
    eax = MEM32(ebp + -2076);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151227u); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_00151227: ;
    goto loc_00151254;

loc_00151229: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151252; /* je: equal / zero */

loc_0015122F: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151252u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00151252: ;
    goto loc_00151254;

loc_00151254: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151259u); RECOMP_ABI_CALL(0x0015C4C0u, sub_0015C4C0); /* call 0x0015C4C0 */

loc_00151259: ;
    goto loc_00151273;

loc_0015125B: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015106F; /* jne: not equal / not zero */

loc_00151273: ;
    goto loc_00151275;

loc_00151275: ;
    _fa = (uint32_t)(MEM8(0xBCE579)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBCE579), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151348; /* je: equal / zero */

loc_00151282: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151287u); RECOMP_ABI_CALL(0x001501B0u, sub_001501B0); /* call 0x001501B0 */

loc_00151287: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151341; /* je: equal / zero */

loc_0015128F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151294u); RECOMP_ABI_CALL(0x001503B0u, sub_001503B0); /* call 0x001503B0 */

loc_00151294: ;
    _fa = (uint32_t)(MEM32(0x8C0640)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C0640), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001512D6; /* je: equal / zero */

loc_0015129D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001512A2u); RECOMP_ABI_CALL(0x001505B0u, sub_001505B0); /* call 0x001505B0 */

loc_001512A2: ;
    _fa = (uint32_t)(MEM8(0xBCE578)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBCE578), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001512CC; /* je: equal / zero */

loc_001512AB: ;
    eax = MEM32(0x8C0640);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001512B8u); RECOMP_ABI_CALL(0x001E1470u, sub_001E1470); /* call 0x001E1470 */

loc_001512B8: ;
    eax = MEM32(0x8C0640);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001512C5u); RECOMP_ABI_CALL(0x001E1410u, sub_001E1410); /* call 0x001E1410 */

loc_001512C5: ;
    MEM8(0xBCE578) = 0;

loc_001512CC: ;
    MEM32(0x8C0640) = 0;

loc_001512D6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001512DBu); RECOMP_ABI_CALL(0x001638B0u, sub_001638B0); /* call 0x001638B0 */

loc_001512DB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001512E0u); RECOMP_ABI_CALL(0x001686A0u, sub_001686A0); /* call 0x001686A0 */

loc_001512E0: ;
    _fa = (uint32_t)(MEM32(0x5A3900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5A3900), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001512F6; /* je: equal / zero */

loc_001512E9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001512EEu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_001512EE: ;
    MEM32(ebp + -2092) = eax;
    goto loc_00151300;

loc_001512F6: ;
    eax = 0; /* xor self */
    MEM32(ebp + -2092) = eax;
    goto loc_00151300;

loc_00151300: ;
    eax = MEM32(ebp + -2092);
    MEM32(ebp + -2084) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151311u); RECOMP_ABI_CALL(0x0014FDF0u, sub_0014FDF0); /* call 0x0014FDF0 */

loc_00151311: ;
    _fa = (uint32_t)(MEM32(ebp + -2084)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -2084), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151337; /* je: equal / zero */

loc_0015131A: ;
    eax = MEM32(ebp + -2084);
    _fa = (uint32_t)(MEM32(eax + 0x474)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x474), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151337; /* je: equal / zero */

loc_00151329: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151337u); RECOMP_ABI_CALL(0x0014FF10u, sub_0014FF10); /* call 0x0014FF10 */

loc_00151337: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015133Cu); RECOMP_ABI_CALL(0x00168670u, sub_00168670); /* call 0x00168670 */

loc_0015133C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151341u); RECOMP_ABI_CALL(0x00162620u, sub_00162620); /* call 0x00162620 */

loc_00151341: ;
    MEM8(0xBCE579) = 0;

loc_00151348: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0x844;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151360
 * Original: 0x00151360 - 0x00151441 (225 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151360(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001513A5; /* je: equal / zero */

loc_00151381: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151394u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_00151394: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001513A3; /* je: equal / zero */

loc_0015139D: ;
    eax = MEM32(ebp + -12);
    MEM8(eax) = 0;

loc_001513A3: ;
    goto loc_001513A5;

loc_001513A5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151416; /* je: equal / zero */

loc_001513AB: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151416; /* je: equal / zero */

loc_001513B1: ;
    MEM16(ebp + -14) = 1;

loc_001513B7: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001513E1; /* jbe: below or equal (unsigned <=) */

loc_001513BF: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001513D6; /* jne: not equal / not zero */

loc_001513CA: ;
    SET_LO16(eax, MEM16(ebp + -14));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -14) = LO16(eax);

loc_001513D6: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -12) = eax;
    goto loc_001513B7;

loc_001513E1: ;
    esi = MEM32(ebp + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edi = 0x478BBB;
    MEM32(esp) = 2;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151414u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_00151414: ;
    goto loc_0015143A;

loc_00151416: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0x43EFCC;
    MEM32(esp) = 2;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015143Au); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0015143A: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151450
 * Original: 0x00151450 - 0x001514B6 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151450(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151485u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151485: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001514B1; /* je: equal / zero */

loc_0015148E: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015149Cu); RECOMP_ABI_CALL(0x00160B70u, sub_00160B70); /* call 0x00160B70 */

loc_0015149C: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514B1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001514B1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001514C0
 * Original: 0x001514C0 - 0x0015151E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001514C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001514C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001514EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151519; /* je: equal / zero */

loc_001514F7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151504u); RECOMP_ABI_CALL(0x00160B90u, sub_00160B90); /* call 0x00160B90 */

loc_00151504: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151519u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151519: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151520
 * Original: 0x00151520 - 0x0015154F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151520(void)
{
    uint32_t ebp = g_ebp;

loc_00151520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015153Bu); RECOMP_ABI_CALL(0x00160BC0u, sub_00160BC0); /* call 0x00160BC0 */

loc_0015153B: ;
    ecx = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015154Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015154A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151550
 * Original: 0x00151550 - 0x001515BD (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015157Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015157E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001515B8; /* je: equal / zero */

loc_00151587: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001515A3u); RECOMP_ABI_CALL(0x00162070u, sub_00162070); /* call 0x00162070 */

loc_001515A3: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001515B8u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001515B8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001515C0
 * Original: 0x001515C0 - 0x00151633 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001515C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001515C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001515F5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001515F5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015162E; /* je: equal / zero */

loc_001515FE: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151619u); RECOMP_ABI_CALL(0x00333540u, sub_00333540); /* call 0x00333540 */

loc_00151619: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015162Eu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015162E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151640
 * Original: 0x00151640 - 0x001516B3 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151675u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151675: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001516AE; /* je: equal / zero */

loc_0015167E: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151699u); RECOMP_ABI_CALL(0x00161B50u, sub_00161B50); /* call 0x00161B50 */

loc_00151699: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001516AEu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001516AE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001516C0
 * Original: 0x001516C0 - 0x00151733 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001516C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001516C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001516F5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001516F5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015172E; /* je: equal / zero */

loc_001516FE: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151719u); RECOMP_ABI_CALL(0x00161B20u, sub_00161B20); /* call 0x00161B20 */

loc_00151719: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015172Eu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015172E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151740
 * Original: 0x00151740 - 0x001517A9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151740(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015176Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015176E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001517A4; /* je: equal / zero */

loc_00151777: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015178Fu); RECOMP_ABI_CALL(0x00161C10u, sub_00161C10); /* call 0x00161C10 */

loc_0015178F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001517A4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001517A4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001517B0
 * Original: 0x001517B0 - 0x00151819 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001517B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001517B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001517DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001517DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151814; /* je: equal / zero */

loc_001517E7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001517FFu); RECOMP_ABI_CALL(0x00162030u, sub_00162030); /* call 0x00162030 */

loc_001517FF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151814u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151814: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151820
 * Original: 0x00151820 - 0x00151896 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015184Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015184E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151891; /* je: equal / zero */

loc_00151857: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015187Cu); RECOMP_ABI_CALL(0x00161460u, sub_00161460); /* call 0x00161460 */

loc_0015187C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151891u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151891: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001518A0
 * Original: 0x001518A0 - 0x00151912 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001518A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001518A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001518CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001518CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015190D; /* je: equal / zero */

loc_001518D7: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001518F8u); RECOMP_ABI_CALL(0x001614E0u, sub_001614E0); /* call 0x001614E0 */

loc_001518F8: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015190Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015190D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151920
 * Original: 0x00151920 - 0x0015197F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151920(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015194Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015194E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015197A; /* je: equal / zero */

loc_00151957: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151965u); RECOMP_ABI_CALL(0x001610D0u, sub_001610D0); /* call 0x001610D0 */

loc_00151965: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015197Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015197A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151980
 * Original: 0x00151980 - 0x001519DE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151980(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001519AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001519AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001519D9; /* je: equal / zero */

loc_001519B7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001519C4u); RECOMP_ABI_CALL(0x00161160u, sub_00161160); /* call 0x00161160 */

loc_001519C4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001519D9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001519D9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001519E0
 * Original: 0x001519E0 - 0x00151A3F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001519E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001519E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151A0Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151A0E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151A3A; /* je: equal / zero */

loc_00151A17: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151A25u); RECOMP_ABI_CALL(0x00161B90u, sub_00161B90); /* call 0x00161B90 */

loc_00151A25: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151A3Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151A3A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151A40
 * Original: 0x00151A40 - 0x00151A9E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151A40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151A6Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151A6E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151A99; /* je: equal / zero */

loc_00151A77: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151A84u); RECOMP_ABI_CALL(0x001612D0u, sub_001612D0); /* call 0x001612D0 */

loc_00151A84: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151A99u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151A99: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151AA0
 * Original: 0x00151AA0 - 0x00151AFE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151AA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151ACEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151ACE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151AF9; /* je: equal / zero */

loc_00151AD7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151AE4u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_00151AE4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151AF9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151AF9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151B00
 * Original: 0x00151B00 - 0x00151B5E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151B2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151B2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151B59; /* je: equal / zero */

loc_00151B37: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151B44u); RECOMP_ABI_CALL(0x001613C0u, sub_001613C0); /* call 0x001613C0 */

loc_00151B44: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151B59u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151B59: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151B60
 * Original: 0x00151B60 - 0x00151B8F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B60(void)
{
    uint32_t ebp = g_ebp;

loc_00151B60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151B75u); RECOMP_ABI_CALL(0x001611F0u, sub_001611F0); /* call 0x001611F0 */

loc_00151B75: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151B8Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151B8A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151B90
 * Original: 0x00151B90 - 0x00151BF9 (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151BBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151BBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151BF4; /* je: equal / zero */

loc_00151BC7: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151BE5u); RECOMP_ABI_CALL(0x001613F0u, sub_001613F0); /* call 0x001613F0 */

loc_00151BE5: ;
    ecx = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151BF4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151BF4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151C00
 * Original: 0x00151C00 - 0x00151C66 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151C00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151C35u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151C35: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151C61; /* je: equal / zero */

loc_00151C3E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151C4Bu); RECOMP_ABI_CALL(0x00168AB0u, sub_00168AB0); /* call 0x00168AB0 */

loc_00151C4B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151C61u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151C61: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151C70
 * Original: 0x00151C70 - 0x00151CD9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151C70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151C9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151C9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151CD4; /* je: equal / zero */

loc_00151CA7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151CBFu); RECOMP_ABI_CALL(0x001616C0u, sub_001616C0); /* call 0x001616C0 */

loc_00151CBF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151CD4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151CD4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151CE0
 * Original: 0x00151CE0 - 0x00151D52 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151D0Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151D0E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D4D; /* je: equal / zero */

loc_00151D17: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151D38u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_00151D38: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151D4Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151D4D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151D60
 * Original: 0x00151D60 - 0x00151DC9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151D60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151D8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151D8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151DC4; /* je: equal / zero */

loc_00151D97: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151DAFu); RECOMP_ABI_CALL(0x00161860u, sub_00161860); /* call 0x00161860 */

loc_00151DAF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151DC4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151DC4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151DD0
 * Original: 0x00151DD0 - 0x00151E38 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151DD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151DFEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151DFE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151E33; /* je: equal / zero */

loc_00151E07: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151E1Eu); RECOMP_ABI_CALL(0x00161900u, sub_00161900); /* call 0x00161900 */

loc_00151E1E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151E33u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151E33: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151E40
 * Original: 0x00151E40 - 0x00151ECF (143 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151E40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151E75u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151E75: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151ECA; /* je: equal / zero */

loc_00151E7E: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151EB5u); RECOMP_ABI_CALL(0x00160DE0u, sub_00160DE0); /* call 0x00160DE0 */

loc_00151EB5: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151ECAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151ECA: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151ED0
 * Original: 0x00151ED0 - 0x00151F63 (147 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151ED0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151F05u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151F05: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151F5E; /* je: equal / zero */

loc_00151F0E: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax + 4));
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = ecx;
    eax = ZX16(LO16(eax));
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151F49u); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_00151F49: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151F5Eu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151F5E: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151F70
 * Original: 0x00151F70 - 0x00151FCE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151F70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151F9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151F9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151FC9; /* je: equal / zero */

loc_00151FA7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151FB4u); RECOMP_ABI_CALL(0x00161660u, sub_00161660); /* call 0x00161660 */

loc_00151FB4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151FC9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00151FC9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00151FD0
 * Original: 0x00151FD0 - 0x00152046 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151FD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151FFEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00151FFE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152041; /* je: equal / zero */

loc_00152007: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015202Cu); RECOMP_ABI_CALL(0x00161AE0u, sub_00161AE0); /* call 0x00161AE0 */

loc_0015202C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152041u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152041: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152050
 * Original: 0x00152050 - 0x001520B8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152050(void)
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

loc_00152050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015207Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015207E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001520B3; /* je: equal / zero */

loc_00152087: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152094u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_00152094: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001520B3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001520B3: ;
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
 * sub_001520C0
 * Original: 0x001520C0 - 0x001520F1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001520C0(void)
{
    uint32_t ebp = g_ebp;

loc_001520C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM8(0xBCE579) = 1;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001520ECu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001520EC: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152100
 * Original: 0x00152100 - 0x0015212F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152100(void)
{
    uint32_t ebp = g_ebp;

loc_00152100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152115u); RECOMP_ABI_CALL(0x00150D70u, sub_00150D70); /* call 0x00150D70 */

loc_00152115: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015212Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015212A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152130
 * Original: 0x00152130 - 0x0015218E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152130(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015215Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015215E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152189; /* je: equal / zero */

loc_00152167: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152174u); RECOMP_ABI_CALL(0x00150B80u, sub_00150B80); /* call 0x00150B80 */

loc_00152174: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152189u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152189: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152190
 * Original: 0x00152190 - 0x0015221E (142 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152190(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -4) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001521C5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001521C5: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152219; /* je: equal / zero */

loc_001521CE: ;
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax + 4));
    MEM16(ebp + -10) = LO16(eax);
    eax = MEM32(ebp + -8);
    SET_LO16(eax, MEM16(eax));
    MEM16(ebp + -12) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001521E8u); RECOMP_ABI_CALL(0x001D4C40u, sub_001D4C40); /* call 0x001D4C40 */

loc_001521E8: ;
    ecx = eax;
    SET_LO16(eax, MEM16(ebp + -12));
    MEM32(esp) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152203u); RECOMP_ABI_CALL(0x001D4E50u, sub_001D4E50); /* call 0x001D4E50 */

loc_00152203: ;
    MEM16(ebp + -4) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152219u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152219: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152220
 * Original: 0x00152220 - 0x001522C9 (169 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152220(void)
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

loc_00152220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015224Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015224E: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001522C4; /* je: equal / zero */

loc_00152257: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152287u); RECOMP_ABI_CALL(0x001D4C40u, sub_001D4C40); /* call 0x001D4C40 */

loc_00152287: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001522A5u); RECOMP_ABI_CALL(0x001D4EE0u, sub_001D4EE0); /* call 0x001D4EE0 */

loc_001522A5: ;
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001522C4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001522C4: ;
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
 * sub_001522D0
 * Original: 0x001522D0 - 0x00152339 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001522D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001522D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001522FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001522FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152334; /* je: equal / zero */

loc_00152307: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015231Fu); RECOMP_ABI_CALL(0x00336C90u, sub_00336C90); /* call 0x00336C90 */

loc_0015231F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152334u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152334: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152340
 * Original: 0x00152340 - 0x001523A7 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152375u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152375: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001523A2; /* je: equal / zero */

loc_0015237E: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015238Cu); RECOMP_ABI_CALL(0x00336CB0u, sub_00336CB0); /* call 0x00336CB0 */

loc_0015238C: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001523A2u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001523A2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001523B0
 * Original: 0x001523B0 - 0x001523DF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001523B0(void)
{
    uint32_t ebp = g_ebp;

loc_001523B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001523C5u); RECOMP_ABI_CALL(0x00336DE0u, sub_00336DE0); /* call 0x00336DE0 */

loc_001523C5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001523DAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001523DA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001523E0
 * Original: 0x001523E0 - 0x0015240F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001523E0(void)
{
    uint32_t ebp = g_ebp;

loc_001523E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001523F5u); RECOMP_ABI_CALL(0x00336DF0u, sub_00336DF0); /* call 0x00336DF0 */

loc_001523F5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015240Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015240A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152410
 * Original: 0x00152410 - 0x0015246F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152410(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015243Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015243E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015246A; /* je: equal / zero */

loc_00152447: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152455u); RECOMP_ABI_CALL(0x0023A030u, sub_0023A030); /* call 0x0023A030 */

loc_00152455: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015246Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015246A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152470
 * Original: 0x00152470 - 0x001524E0 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152470(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001524A5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001524A5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001524DB; /* je: equal / zero */

loc_001524AE: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001524C6u); RECOMP_ABI_CALL(0x001076D0u, sub_001076D0); /* call 0x001076D0 */

loc_001524C6: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001524DBu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001524DB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001524E0
 * Original: 0x001524E0 - 0x00152550 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001524E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001524E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152515u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152515: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015254B; /* je: equal / zero */

loc_0015251E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152536u); RECOMP_ABI_CALL(0x00107AD0u, sub_00107AD0); /* call 0x00107AD0 */

loc_00152536: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015254Bu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015254B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152550
 * Original: 0x00152550 - 0x001525C0 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152585u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152585: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001525BB; /* je: equal / zero */

loc_0015258E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001525A6u); RECOMP_ABI_CALL(0x00107B00u, sub_00107B00); /* call 0x00107B00 */

loc_001525A6: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001525BBu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001525BB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001525C0
 * Original: 0x001525C0 - 0x0015261E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001525C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001525C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001525EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001525EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152619; /* je: equal / zero */

loc_001525F7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152604u); RECOMP_ABI_CALL(0x00107580u, sub_00107580); /* call 0x00107580 */

loc_00152604: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152619u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152619: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152620
 * Original: 0x00152620 - 0x00152686 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152620(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152655u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152655: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152681; /* je: equal / zero */

loc_0015265E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015266Bu); RECOMP_ABI_CALL(0x00107640u, sub_00107640); /* call 0x00107640 */

loc_0015266B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152681u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152681: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152690
 * Original: 0x00152690 - 0x001526F9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152690(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001526BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001526BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001526F4; /* je: equal / zero */

loc_001526C7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001526DFu); RECOMP_ABI_CALL(0x00216320u, sub_00216320); /* call 0x00216320 */

loc_001526DF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001526F4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001526F4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152700
 * Original: 0x00152700 - 0x00152769 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152700(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015272Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015272E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152764; /* je: equal / zero */

loc_00152737: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015274Fu); RECOMP_ABI_CALL(0x00216390u, sub_00216390); /* call 0x00216390 */

loc_0015274F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152764u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152764: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152770
 * Original: 0x00152770 - 0x0015279F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152770(void)
{
    uint32_t ebp = g_ebp;

loc_00152770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152785u); RECOMP_ABI_CALL(0x00223460u, sub_00223460); /* call 0x00223460 */

loc_00152785: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015279Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015279A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001527A0
 * Original: 0x001527A0 - 0x00152809 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001527A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001527A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001527CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001527CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152804; /* je: equal / zero */

loc_001527D7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001527EFu); RECOMP_ABI_CALL(0x00222EC0u, sub_00222EC0); /* call 0x00222EC0 */

loc_001527EF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152804u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152804: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152810
 * Original: 0x00152810 - 0x00152899 (137 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152810(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015283Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015283E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152894; /* je: equal / zero */

loc_00152847: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015287Fu); RECOMP_ABI_CALL(0x00225700u, sub_00225700); /* call 0x00225700 */

loc_0015287F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152894u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152894: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001528A0
 * Original: 0x001528A0 - 0x0015291E (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001528A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001528A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001528CFu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001528CF: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152918; /* je: equal / zero */

loc_001528D8: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152903u); RECOMP_ABI_CALL(0x0022D290u, sub_0022D290); /* call 0x0022D290 */

loc_00152903: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152918u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152918: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152920
 * Original: 0x00152920 - 0x00152988 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152920(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015294Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015294E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152983; /* je: equal / zero */

loc_00152957: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015296Eu); RECOMP_ABI_CALL(0x0022A0B0u, sub_0022A0B0); /* call 0x0022A0B0 */

loc_0015296E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152983u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152983: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152990
 * Original: 0x00152990 - 0x001529BF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152990(void)
{
    uint32_t ebp = g_ebp;

loc_00152990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001529A5u); RECOMP_ABI_CALL(0x00222760u, sub_00222760); /* call 0x00222760 */

loc_001529A5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001529BAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001529BA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001529C0
 * Original: 0x001529C0 - 0x00152A1E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001529C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001529C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001529EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001529EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152A19; /* je: equal / zero */

loc_001529F7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152A04u); RECOMP_ABI_CALL(0x002162B0u, sub_002162B0); /* call 0x002162B0 */

loc_00152A04: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152A19u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152A19: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152A20
 * Original: 0x00152A20 - 0x00152A7E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152A4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152A4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152A79; /* je: equal / zero */

loc_00152A57: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152A64u); RECOMP_ABI_CALL(0x00216240u, sub_00216240); /* call 0x00216240 */

loc_00152A64: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152A79u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152A79: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152A80
 * Original: 0x00152A80 - 0x00152AE9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152AAEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152AAE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152AE4; /* je: equal / zero */

loc_00152AB7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152ACFu); RECOMP_ABI_CALL(0x00222B80u, sub_00222B80); /* call 0x00222B80 */

loc_00152ACF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152AE4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152AE4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152AF0
 * Original: 0x00152AF0 - 0x00152B4E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152AF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152B1Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152B1E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152B49; /* je: equal / zero */

loc_00152B27: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152B34u); RECOMP_ABI_CALL(0x00161610u, sub_00161610); /* call 0x00161610 */

loc_00152B34: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152B49u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152B49: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152B50
 * Original: 0x00152B50 - 0x00152BAE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152B50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152B7Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152B7E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152BA9; /* je: equal / zero */

loc_00152B87: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152B94u); RECOMP_ABI_CALL(0x00222AE0u, sub_00222AE0); /* call 0x00222AE0 */

loc_00152B94: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152BA9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152BA9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152BB0
 * Original: 0x00152BB0 - 0x00152C0E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152BB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152BDEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152BDE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152C09; /* je: equal / zero */

loc_00152BE7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152BF4u); RECOMP_ABI_CALL(0x002256E0u, sub_002256E0); /* call 0x002256E0 */

loc_00152BF4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152C09u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152C09: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152C10
 * Original: 0x00152C10 - 0x00152C6E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152C10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152C3Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152C3E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152C69; /* je: equal / zero */

loc_00152C47: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152C54u); RECOMP_ABI_CALL(0x00222840u, sub_00222840); /* call 0x00222840 */

loc_00152C54: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152C69u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152C69: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152C70
 * Original: 0x00152C70 - 0x00152CCF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152C70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152C9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152C9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152CCA; /* je: equal / zero */

loc_00152CA7: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152CB5u); RECOMP_ABI_CALL(0x00222880u, sub_00222880); /* call 0x00222880 */

loc_00152CB5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152CCAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152CCA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152CD0
 * Original: 0x00152CD0 - 0x00152CFF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152CD0(void)
{
    uint32_t ebp = g_ebp;

loc_00152CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152CE5u); RECOMP_ABI_CALL(0x00222950u, sub_00222950); /* call 0x00222950 */

loc_00152CE5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152CFAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152CFA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152D00
 * Original: 0x00152D00 - 0x00152D66 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152D00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152D00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152D35u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152D35: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152D61; /* je: equal / zero */

loc_00152D3E: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152D4Cu); RECOMP_ABI_CALL(0x0021A8F0u, sub_0021A8F0); /* call 0x0021A8F0 */

loc_00152D4C: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152D61u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152D61: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152D70
 * Original: 0x00152D70 - 0x00152DD6 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152D70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152DA5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152DA5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152DD1; /* je: equal / zero */

loc_00152DAE: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152DBBu); RECOMP_ABI_CALL(0x0022F200u, sub_0022F200); /* call 0x0022F200 */

loc_00152DBB: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152DD1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152DD1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152DE0
 * Original: 0x00152DE0 - 0x00152E52 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152DE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152E0Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152E0E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152E4D; /* je: equal / zero */

loc_00152E17: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152E38u); RECOMP_ABI_CALL(0x0022F2D0u, sub_0022F2D0); /* call 0x0022F2D0 */

loc_00152E38: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152E4Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152E4D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152E60
 * Original: 0x00152E60 - 0x00152EDF (127 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152E8Fu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152E8F: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152ED9; /* je: equal / zero */

loc_00152E98: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -8);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152EC4u); RECOMP_ABI_CALL(0x0022F460u, sub_0022F460); /* call 0x0022F460 */

loc_00152EC4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152ED9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152ED9: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152EE0
 * Original: 0x00152EE0 - 0x00152F3F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152EE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152F0Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152F0E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152F3A; /* je: equal / zero */

loc_00152F17: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152F25u); RECOMP_ABI_CALL(0x00315170u, sub_00315170); /* call 0x00315170 */

loc_00152F25: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152F3Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152F3A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152F40
 * Original: 0x00152F40 - 0x00152FA9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152F40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152F6Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152F6E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152FA4; /* je: equal / zero */

loc_00152F77: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152F8Fu); RECOMP_ABI_CALL(0x00372C90u, sub_00372C90); /* call 0x00372C90 */

loc_00152F8F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152FA4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00152FA4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00152FB0
 * Original: 0x00152FB0 - 0x0015300E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152FB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152FDEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00152FDE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153009; /* je: equal / zero */

loc_00152FE7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152FF4u); RECOMP_ABI_CALL(0x0037BDB0u, sub_0037BDB0); /* call 0x0037BDB0 */

loc_00152FF4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153009u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153009: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153010
 * Original: 0x00153010 - 0x0015306E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015303Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015303E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153069; /* je: equal / zero */

loc_00153047: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153054u); RECOMP_ABI_CALL(0x0037D000u, sub_0037D000); /* call 0x0037D000 */

loc_00153054: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153069u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153069: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153070
 * Original: 0x00153070 - 0x001530CE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153070(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015309Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015309E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001530C9; /* je: equal / zero */

loc_001530A7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001530B4u); RECOMP_ABI_CALL(0x00371E60u, sub_00371E60); /* call 0x00371E60 */

loc_001530B4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001530C9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001530C9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001530D0
 * Original: 0x001530D0 - 0x0015312E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001530D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001530D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001530FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001530FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153129; /* je: equal / zero */

loc_00153107: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153114u); RECOMP_ABI_CALL(0x00371EA0u, sub_00371EA0); /* call 0x00371EA0 */

loc_00153114: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153129u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153129: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153130
 * Original: 0x00153130 - 0x00153196 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153130(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153165u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153165: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153191; /* je: equal / zero */

loc_0015316E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015317Bu); RECOMP_ABI_CALL(0x00379C50u, sub_00379C50); /* call 0x00379C50 */

loc_0015317B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153191u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153191: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001531A0
 * Original: 0x001531A0 - 0x001531FE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001531A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001531A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001531CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001531CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001531F9; /* je: equal / zero */

loc_001531D7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001531E4u); RECOMP_ABI_CALL(0x00379DD0u, sub_00379DD0); /* call 0x00379DD0 */

loc_001531E4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001531F9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001531F9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153200
 * Original: 0x00153200 - 0x00153295 (149 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -16) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153237u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153237: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015328E; /* je: equal / zero */

loc_00153240: ;
    eax = MEM32(ebp + -12);
    edi = MEM32(eax);
    eax = MEM32(ebp + -12);
    esi = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + -12);
    SET_LO8(ecx, MEM8(eax + 0xC));
    eax = MEM32(ebp + -12);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    ecx = ZX8(LO8(ecx));
    MEM32(esp + 0xC) = ecx;
    eax = ZX16(MEM16(eax + 0x10));
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153279u); RECOMP_ABI_CALL(0x00374480u, sub_00374480); /* call 0x00374480 */

loc_00153279: ;
    MEM8(ebp + -16) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015328Eu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015328E: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001532A0
 * Original: 0x001532A0 - 0x00153326 (134 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001532A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001532A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -12) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001532D6u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001532D6: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153320; /* je: equal / zero */

loc_001532DF: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -8);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    eax = ZX8(MEM8(eax + 0xC));
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015330Bu); RECOMP_ABI_CALL(0x00374550u, sub_00374550); /* call 0x00374550 */

loc_0015330B: ;
    MEM8(ebp + -12) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153320u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153320: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153330
 * Original: 0x00153330 - 0x001533B6 (134 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -12) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153366u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153366: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001533B0; /* je: equal / zero */

loc_0015336F: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -8);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    eax = ZX8(MEM8(eax + 0xC));
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015339Bu); RECOMP_ABI_CALL(0x00371910u, sub_00371910); /* call 0x00371910 */

loc_0015339B: ;
    MEM8(ebp + -12) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001533B0u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001533B0: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001533C0
 * Original: 0x001533C0 - 0x00153425 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001533C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001533C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001533F5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001533F5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153420; /* je: equal / zero */

loc_001533FE: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015340Bu); RECOMP_ABI_CALL(0x00379C00u, sub_00379C00); /* call 0x00379C00 */

loc_0015340B: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153420u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153420: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153430
 * Original: 0x00153430 - 0x00153499 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153430(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015345Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015345E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153494; /* je: equal / zero */

loc_00153467: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015347Fu); RECOMP_ABI_CALL(0x00372B60u, sub_00372B60); /* call 0x00372B60 */

loc_0015347F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153494u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153494: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001534A0
 * Original: 0x001534A0 - 0x00153509 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001534A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001534A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001534CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001534CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153504; /* je: equal / zero */

loc_001534D7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001534EFu); RECOMP_ABI_CALL(0x00379BB0u, sub_00379BB0); /* call 0x00379BB0 */

loc_001534EF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153504u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153504: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153510
 * Original: 0x00153510 - 0x00153579 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153510(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015353Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015353E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153574; /* je: equal / zero */

loc_00153547: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015355Fu); RECOMP_ABI_CALL(0x00372B00u, sub_00372B00); /* call 0x00372B00 */

loc_0015355F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153574u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153574: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153580
 * Original: 0x00153580 - 0x001535F2 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001535AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001535AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001535ED; /* je: equal / zero */

loc_001535B7: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001535D8u); RECOMP_ABI_CALL(0x0037BA30u, sub_0037BA30); /* call 0x0037BA30 */

loc_001535D8: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001535EDu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001535ED: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153600
 * Original: 0x00153600 - 0x00153679 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153600(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153635u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153635: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153674; /* je: equal / zero */

loc_0015363E: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015365Fu); RECOMP_ABI_CALL(0x003730E0u, sub_003730E0); /* call 0x003730E0 */

loc_0015365F: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153674u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153674: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153680
 * Original: 0x00153680 - 0x001536F9 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153680(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001536B5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001536B5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001536F4; /* je: equal / zero */

loc_001536BE: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001536DFu); RECOMP_ABI_CALL(0x00373270u, sub_00373270); /* call 0x00373270 */

loc_001536DF: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001536F4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001536F4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153700
 * Original: 0x00153700 - 0x00153768 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153700(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015372Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015372E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153763; /* je: equal / zero */

loc_00153737: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015374Eu); RECOMP_ABI_CALL(0x003742A0u, sub_003742A0); /* call 0x003742A0 */

loc_0015374E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153763u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153763: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153770
 * Original: 0x00153770 - 0x001537CE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153770(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015379Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015379E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001537C9; /* je: equal / zero */

loc_001537A7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001537B4u); RECOMP_ABI_CALL(0x0037BF50u, sub_0037BF50); /* call 0x0037BF50 */

loc_001537B4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001537C9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001537C9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001537D0
 * Original: 0x001537D0 - 0x0015386E (158 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001537D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001537D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001537FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001537FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153869; /* je: equal / zero */

loc_00153807: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153854u); RECOMP_ABI_CALL(0x00371450u, sub_00371450); /* call 0x00371450 */

loc_00153854: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153869u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153869: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153870
 * Original: 0x00153870 - 0x0015390E (158 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153870(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015389Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015389E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153909; /* je: equal / zero */

loc_001538A7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001538F4u); RECOMP_ABI_CALL(0x003714C0u, sub_003714C0); /* call 0x003714C0 */

loc_001538F4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153909u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153909: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153910
 * Original: 0x00153910 - 0x001539AE (158 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153910(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015393Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015393E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001539A9; /* je: equal / zero */

loc_00153947: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153994u); RECOMP_ABI_CALL(0x00371530u, sub_00371530); /* call 0x00371530 */

loc_00153994: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001539A9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001539A9: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001539B0
 * Original: 0x001539B0 - 0x00153A4E (158 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001539B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001539B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001539DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001539DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153A49; /* je: equal / zero */

loc_001539E7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153A34u); RECOMP_ABI_CALL(0x00371690u, sub_00371690); /* call 0x00371690 */

loc_00153A34: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153A49u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153A49: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153A50
 * Original: 0x00153A50 - 0x00153ACA (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153A85u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153A85: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153AC5; /* je: equal / zero */

loc_00153A8E: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153AAFu); RECOMP_ABI_CALL(0x0037CDD0u, sub_0037CDD0); /* call 0x0037CDD0 */

loc_00153AAF: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153AC5u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153AC5: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153AD0
 * Original: 0x00153AD0 - 0x00153B40 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153AD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153B05u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153B05: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153B3B; /* je: equal / zero */

loc_00153B0E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153B25u); RECOMP_ABI_CALL(0x0037BDE0u, sub_0037BDE0); /* call 0x0037BDE0 */

loc_00153B25: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153B3Bu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153B3B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153B40
 * Original: 0x00153B40 - 0x00153B9E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153B40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153B6Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153B6E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153B99; /* je: equal / zero */

loc_00153B77: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153B84u); RECOMP_ABI_CALL(0x0037D030u, sub_0037D030); /* call 0x0037D030 */

loc_00153B84: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153B99u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153B99: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153BA0
 * Original: 0x00153BA0 - 0x00153C08 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153BA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153BCEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153BCE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153C03; /* je: equal / zero */

loc_00153BD7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153BEEu); RECOMP_ABI_CALL(0x003790F0u, sub_003790F0); /* call 0x003790F0 */

loc_00153BEE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153C03u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153C03: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153C10
 * Original: 0x00153C10 - 0x00153C3F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153C10(void)
{
    uint32_t ebp = g_ebp;

loc_00153C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153C25u); RECOMP_ABI_CALL(0x0037A5E0u, sub_0037A5E0); /* call 0x0037A5E0 */

loc_00153C25: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153C3Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153C3A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153C40
 * Original: 0x00153C40 - 0x00153C9E (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153C40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153C6Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153C6E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153C99; /* je: equal / zero */

loc_00153C77: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153C8Au); RECOMP_ABI_CALL(0x00373020u, sub_00373020); /* call 0x00373020 */

loc_00153C8A: ;
    ecx = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153C99u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153C99: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153CA0
 * Original: 0x00153CA0 - 0x00153CFE (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153CA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153CCEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153CCE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153CF9; /* je: equal / zero */

loc_00153CD7: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153CEAu); RECOMP_ABI_CALL(0x00379360u, sub_00379360); /* call 0x00379360 */

loc_00153CEA: ;
    ecx = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153CF9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153CF9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153D00
 * Original: 0x00153D00 - 0x00153D5E (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153D00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153D00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153D2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153D2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153D59; /* je: equal / zero */

loc_00153D37: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153D4Au); RECOMP_ABI_CALL(0x003793A0u, sub_003793A0); /* call 0x003793A0 */

loc_00153D4A: ;
    ecx = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153D59u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153D59: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153D60
 * Original: 0x00153D60 - 0x00153DC8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153D60(void)
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

loc_00153D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153D8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153D8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153DC3; /* je: equal / zero */

loc_00153D97: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153DA4u); RECOMP_ABI_CALL(0x00371700u, sub_00371700); /* call 0x00371700 */

loc_00153DA4: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153DC3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153DC3: ;
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
 * sub_00153DD0
 * Original: 0x00153DD0 - 0x00153E38 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153DD0(void)
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

loc_00153DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153DFEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153DFE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153E33; /* je: equal / zero */

loc_00153E07: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153E14u); RECOMP_ABI_CALL(0x00371780u, sub_00371780); /* call 0x00371780 */

loc_00153E14: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153E33u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153E33: ;
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
 * sub_00153E40
 * Original: 0x00153E40 - 0x00153EA6 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153E40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153E75u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153E75: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153EA1; /* je: equal / zero */

loc_00153E7E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153E8Bu); RECOMP_ABI_CALL(0x00371800u, sub_00371800); /* call 0x00371800 */

loc_00153E8B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153EA1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153EA1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153EB0
 * Original: 0x00153EB0 - 0x00153F1F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153EB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153EE5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153EE5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153F1A; /* je: equal / zero */

loc_00153EEE: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153F05u); RECOMP_ABI_CALL(0x003719C0u, sub_003719C0); /* call 0x003719C0 */

loc_00153F05: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153F1Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153F1A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153F20
 * Original: 0x00153F20 - 0x00153F8F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153F20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153F55u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153F55: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153F8A; /* je: equal / zero */

loc_00153F5E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153F75u); RECOMP_ABI_CALL(0x00371A00u, sub_00371A00); /* call 0x00371A00 */

loc_00153F75: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153F8Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153F8A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153F90
 * Original: 0x00153F90 - 0x00153FEE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153F90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153FBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00153FBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153FE9; /* je: equal / zero */

loc_00153FC7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153FD4u); RECOMP_ABI_CALL(0x00374220u, sub_00374220); /* call 0x00374220 */

loc_00153FD4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00153FE9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00153FE9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00153FF0
 * Original: 0x00153FF0 - 0x00154059 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153FF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015401Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015401E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154054; /* je: equal / zero */

loc_00154027: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015403Fu); RECOMP_ABI_CALL(0x00371870u, sub_00371870); /* call 0x00371870 */

loc_0015403F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154054u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154054: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154060
 * Original: 0x00154060 - 0x001540C9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154060(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015408Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015408E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001540C4; /* je: equal / zero */

loc_00154097: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001540AFu); RECOMP_ABI_CALL(0x00374320u, sub_00374320); /* call 0x00374320 */

loc_001540AF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001540C4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001540C4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001540D0
 * Original: 0x001540D0 - 0x00154106 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001540D0(void)
{
    uint32_t ebp = g_ebp;

loc_001540D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001540ECu); RECOMP_ABI_CALL(0x00374F90u, sub_00374F90); /* call 0x00374F90 */

loc_001540EC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154101u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154101: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154110
 * Original: 0x00154110 - 0x00154179 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154110(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015413Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015413E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154174; /* je: equal / zero */

loc_00154147: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015415Fu); RECOMP_ABI_CALL(0x00372D60u, sub_00372D60); /* call 0x00372D60 */

loc_0015415F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154174u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154174: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154180
 * Original: 0x00154180 - 0x001541E9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154180(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001541AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001541AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001541E4; /* je: equal / zero */

loc_001541B7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001541CFu); RECOMP_ABI_CALL(0x00372CF0u, sub_00372CF0); /* call 0x00372CF0 */

loc_001541CF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001541E4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001541E4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001541F0
 * Original: 0x001541F0 - 0x00154255 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001541F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001541F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154225u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154225: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154250; /* je: equal / zero */

loc_0015422E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015423Bu); RECOMP_ABI_CALL(0x003798F0u, sub_003798F0); /* call 0x003798F0 */

loc_0015423B: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154250u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154250: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154260
 * Original: 0x00154260 - 0x001542C9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154260(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015428Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015428E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001542C4; /* je: equal / zero */

loc_00154297: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001542AFu); RECOMP_ABI_CALL(0x001099E0u, sub_001099E0); /* call 0x001099E0 */

loc_001542AF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001542C4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001542C4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001542D0
 * Original: 0x001542D0 - 0x00154338 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001542D0(void)
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

loc_001542D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001542FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001542FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154333; /* je: equal / zero */

loc_00154307: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154314u); RECOMP_ABI_CALL(0x00109980u, sub_00109980); /* call 0x00109980 */

loc_00154314: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154333u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154333: ;
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
 * sub_00154340
 * Original: 0x00154340 - 0x001543B6 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015436Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015436E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001543B1; /* je: equal / zero */

loc_00154377: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015439Cu); RECOMP_ABI_CALL(0x0010A330u, sub_0010A330); /* call 0x0010A330 */

loc_0015439C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001543B1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001543B1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001543C0
 * Original: 0x001543C0 - 0x00154445 (133 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001543C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001543C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -8) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001543F5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001543F5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154440; /* je: equal / zero */

loc_001543FE: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015442Bu); RECOMP_ABI_CALL(0x0010A2C0u, sub_0010A2C0); /* call 0x0010A2C0 */

loc_0015442B: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154440u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154440: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154450
 * Original: 0x00154450 - 0x001544B8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154450(void)
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

loc_00154450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015447Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015447E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001544B3; /* je: equal / zero */

loc_00154487: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154494u); RECOMP_ABI_CALL(0x00109920u, sub_00109920); /* call 0x00109920 */

loc_00154494: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001544B3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001544B3: ;
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
 * sub_001544C0
 * Original: 0x001544C0 - 0x00154536 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001544C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001544C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001544EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001544EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154531; /* je: equal / zero */

loc_001544F7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015451Cu); RECOMP_ABI_CALL(0x0010A260u, sub_0010A260); /* call 0x0010A260 */

loc_0015451C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154531u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154531: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

