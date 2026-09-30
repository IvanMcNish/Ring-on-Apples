/* Generated ELF translation shard 15: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_00154540
 * Original: 0x00154540 - 0x001545A9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154540(void)
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

loc_00154540: ;
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
    PUSH32(esp, 0x0015456Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015456E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001545A4; /* je: equal / zero */

loc_00154577: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154585u); RECOMP_ABI_CALL(0x0010A000u, sub_0010A000); /* call 0x0010A000 */

loc_00154585: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001545A4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001545A4: ;
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
 * sub_001545B0
 * Original: 0x001545B0 - 0x00154637 (135 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001545B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001545B0: ;
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
    PUSH32(esp, 0x001545E5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001545E5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154632; /* je: equal / zero */

loc_001545EE: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax));
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015461Du); RECOMP_ABI_CALL(0x00109E30u, sub_00109E30); /* call 0x00109E30 */

loc_0015461D: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154632u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154632: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154640
 * Original: 0x00154640 - 0x001546B8 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154640: ;
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
    PUSH32(esp, 0x0015466Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015466E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001546B3; /* je: equal / zero */

loc_00154677: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015469Eu); RECOMP_ABI_CALL(0x00109A50u, sub_00109A50); /* call 0x00109A50 */

loc_0015469E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001546B3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001546B3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001546C0
 * Original: 0x001546C0 - 0x00154729 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001546C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001546C0: ;
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
    PUSH32(esp, 0x001546EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001546EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154724; /* je: equal / zero */

loc_001546F7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015470Fu); RECOMP_ABI_CALL(0x00109FA0u, sub_00109FA0); /* call 0x00109FA0 */

loc_0015470F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154724u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154724: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154730
 * Original: 0x00154730 - 0x00154799 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154730(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154730: ;
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
    PUSH32(esp, 0x0015475Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015475E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154794; /* je: equal / zero */

loc_00154767: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015477Fu); RECOMP_ABI_CALL(0x0010A0B0u, sub_0010A0B0); /* call 0x0010A0B0 */

loc_0015477F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154794u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154794: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001547A0
 * Original: 0x001547A0 - 0x0015480A (106 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001547A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001547A0: ;
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
    PUSH32(esp, 0x001547CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001547CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154805; /* je: equal / zero */

loc_001547D7: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001547F0u); RECOMP_ABI_CALL(0x0010A040u, sub_0010A040); /* call 0x0010A040 */

loc_001547F0: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154805u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154805: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154810
 * Original: 0x00154810 - 0x0015483F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154810(void)
{
    uint32_t ebp = g_ebp;

loc_00154810: ;
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
    PUSH32(esp, 0x00154825u); RECOMP_ABI_CALL(0x0023A090u, sub_0023A090); /* call 0x0023A090 */

loc_00154825: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015483Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015483A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154840
 * Original: 0x00154840 - 0x0015486F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154840(void)
{
    uint32_t ebp = g_ebp;

loc_00154840: ;
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
    PUSH32(esp, 0x00154855u); RECOMP_ABI_CALL(0x001263A0u, sub_001263A0); /* call 0x001263A0 */

loc_00154855: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015486Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015486A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154870
 * Original: 0x00154870 - 0x0015489F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154870(void)
{
    uint32_t ebp = g_ebp;

loc_00154870: ;
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
    PUSH32(esp, 0x00154885u); RECOMP_ABI_CALL(0x00125FA0u, sub_00125FA0); /* call 0x00125FA0 */

loc_00154885: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015489Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015489A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001548A0
 * Original: 0x001548A0 - 0x001548CF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001548A0(void)
{
    uint32_t ebp = g_ebp;

loc_001548A0: ;
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
    PUSH32(esp, 0x001548B5u); RECOMP_ABI_CALL(0x00126410u, sub_00126410); /* call 0x00126410 */

loc_001548B5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001548CAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001548CA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001548D0
 * Original: 0x001548D0 - 0x001548FF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001548D0(void)
{
    uint32_t ebp = g_ebp;

loc_001548D0: ;
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
    PUSH32(esp, 0x001548E5u); RECOMP_ABI_CALL(0x00125DA0u, sub_00125DA0); /* call 0x00125DA0 */

loc_001548E5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001548FAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001548FA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154900
 * Original: 0x00154900 - 0x0015492F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154900(void)
{
    uint32_t ebp = g_ebp;

loc_00154900: ;
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
    PUSH32(esp, 0x00154915u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00154915: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015492Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015492A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154930
 * Original: 0x00154930 - 0x0015498F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154930(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154930: ;
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
    PUSH32(esp, 0x0015495Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015495E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015498A; /* je: equal / zero */

loc_00154967: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154975u); RECOMP_ABI_CALL(0x00125CD0u, sub_00125CD0); /* call 0x00125CD0 */

loc_00154975: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015498Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015498A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154990
 * Original: 0x00154990 - 0x001549BF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154990(void)
{
    uint32_t ebp = g_ebp;

loc_00154990: ;
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
    PUSH32(esp, 0x001549A5u); RECOMP_ABI_CALL(0x00125BC0u, sub_00125BC0); /* call 0x00125BC0 */

loc_001549A5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001549BAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001549BA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001549C0
 * Original: 0x001549C0 - 0x00154A1E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001549C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001549C0: ;
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
    PUSH32(esp, 0x001549EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001549EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A19; /* je: equal / zero */

loc_001549F7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A04u); RECOMP_ABI_CALL(0x00094300u, sub_00094300); /* call 0x00094300 */

loc_00154A04: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A19u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154A19: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154A20
 * Original: 0x00154A20 - 0x00154A7E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154A20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154A20: ;
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
    PUSH32(esp, 0x00154A4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154A4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A79; /* je: equal / zero */

loc_00154A57: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A64u); RECOMP_ABI_CALL(0x00094450u, sub_00094450); /* call 0x00094450 */

loc_00154A64: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A79u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154A79: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154A80
 * Original: 0x00154A80 - 0x00154AE8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154A80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154A80: ;
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
    PUSH32(esp, 0x00154AAEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154AAE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154AE3; /* je: equal / zero */

loc_00154AB7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154ACEu); RECOMP_ABI_CALL(0x00090130u, sub_00090130); /* call 0x00090130 */

loc_00154ACE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154AE3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154AE3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154AF0
 * Original: 0x00154AF0 - 0x00154B58 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154AF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154AF0: ;
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
    PUSH32(esp, 0x00154B1Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154B1E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154B53; /* je: equal / zero */

loc_00154B27: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154B3Eu); RECOMP_ABI_CALL(0x00093C50u, sub_00093C50); /* call 0x00093C50 */

loc_00154B3E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154B53u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154B53: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154B60
 * Original: 0x00154B60 - 0x00154BBE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154B60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154B60: ;
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
    PUSH32(esp, 0x00154B8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154B8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154BB9; /* je: equal / zero */

loc_00154B97: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154BA4u); RECOMP_ABI_CALL(0x00090DB0u, sub_00090DB0); /* call 0x00090DB0 */

loc_00154BA4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154BB9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154BB9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154BC0
 * Original: 0x00154BC0 - 0x00154C1E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154BC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154BC0: ;
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
    PUSH32(esp, 0x00154BEEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154BEE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154C19; /* je: equal / zero */

loc_00154BF7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154C04u); RECOMP_ABI_CALL(0x00095210u, sub_00095210); /* call 0x00095210 */

loc_00154C04: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154C19u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154C19: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154C20
 * Original: 0x00154C20 - 0x00154C7E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154C20: ;
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
    PUSH32(esp, 0x00154C4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154C4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154C79; /* je: equal / zero */

loc_00154C57: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154C64u); RECOMP_ABI_CALL(0x00090E90u, sub_00090E90); /* call 0x00090E90 */

loc_00154C64: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154C79u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154C79: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154C80
 * Original: 0x00154C80 - 0x00154CDE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154C80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154C80: ;
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
    PUSH32(esp, 0x00154CAEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154CAE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154CD9; /* je: equal / zero */

loc_00154CB7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154CC4u); RECOMP_ABI_CALL(0x00090F90u, sub_00090F90); /* call 0x00090F90 */

loc_00154CC4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154CD9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154CD9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154CE0
 * Original: 0x00154CE0 - 0x00154D3E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154CE0: ;
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
    PUSH32(esp, 0x00154D0Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154D0E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154D39; /* je: equal / zero */

loc_00154D17: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D24u); RECOMP_ABI_CALL(0x000950D0u, sub_000950D0); /* call 0x000950D0 */

loc_00154D24: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D39u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154D39: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154D40
 * Original: 0x00154D40 - 0x00154D6F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154D40(void)
{
    uint32_t ebp = g_ebp;

loc_00154D40: ;
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
    PUSH32(esp, 0x00154D55u); RECOMP_ABI_CALL(0x00092D60u, sub_00092D60); /* call 0x00092D60 */

loc_00154D55: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D6Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154D6A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154D70
 * Original: 0x00154D70 - 0x00154DCE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154D70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154D70: ;
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
    PUSH32(esp, 0x00154D9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154D9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154DC9; /* je: equal / zero */

loc_00154DA7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DB4u); RECOMP_ABI_CALL(0x00092DC0u, sub_00092DC0); /* call 0x00092DC0 */

loc_00154DB4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DC9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154DC9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154DD0
 * Original: 0x00154DD0 - 0x00154DFF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154DD0(void)
{
    uint32_t ebp = g_ebp;

loc_00154DD0: ;
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
    PUSH32(esp, 0x00154DE5u); RECOMP_ABI_CALL(0x000900A0u, sub_000900A0); /* call 0x000900A0 */

loc_00154DE5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DFAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154DFA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154E00
 * Original: 0x00154E00 - 0x00154E5E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154E00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154E00: ;
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
    PUSH32(esp, 0x00154E2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154E2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154E59; /* je: equal / zero */

loc_00154E37: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154E44u); RECOMP_ABI_CALL(0x00092FC0u, sub_00092FC0); /* call 0x00092FC0 */

loc_00154E44: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154E59u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154E59: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154E60
 * Original: 0x00154E60 - 0x00154EC9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154E60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154E60: ;
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
    PUSH32(esp, 0x00154E8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154E8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154EC4; /* je: equal / zero */

loc_00154E97: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154EAFu); RECOMP_ABI_CALL(0x000906D0u, sub_000906D0); /* call 0x000906D0 */

loc_00154EAF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154EC4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154EC4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154ED0
 * Original: 0x00154ED0 - 0x00154F39 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154ED0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154ED0: ;
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
    PUSH32(esp, 0x00154EFEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154EFE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F34; /* je: equal / zero */

loc_00154F07: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154F1Fu); RECOMP_ABI_CALL(0x00090790u, sub_00090790); /* call 0x00090790 */

loc_00154F1F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154F34u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154F34: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154F40
 * Original: 0x00154F40 - 0x00154FA9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154F40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154F40: ;
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
    PUSH32(esp, 0x00154F6Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154F6E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154FA4; /* je: equal / zero */

loc_00154F77: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154F8Fu); RECOMP_ABI_CALL(0x00090850u, sub_00090850); /* call 0x00090850 */

loc_00154F8F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154FA4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00154FA4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00154FB0
 * Original: 0x00154FB0 - 0x00155018 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154FB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154FB0: ;
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
    PUSH32(esp, 0x00154FDEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00154FDE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155013; /* je: equal / zero */

loc_00154FE7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154FFEu); RECOMP_ABI_CALL(0x00094080u, sub_00094080); /* call 0x00094080 */

loc_00154FFE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155013u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155013: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155020
 * Original: 0x00155020 - 0x0015507E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155020(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155020: ;
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
    PUSH32(esp, 0x0015504Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015504E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155079; /* je: equal / zero */

loc_00155057: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155064u); RECOMP_ABI_CALL(0x00094650u, sub_00094650); /* call 0x00094650 */

loc_00155064: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155079u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155079: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155080
 * Original: 0x00155080 - 0x001550E8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155080(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155080: ;
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
    PUSH32(esp, 0x001550AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001550AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001550E3; /* je: equal / zero */

loc_001550B7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001550CEu); RECOMP_ABI_CALL(0x00090560u, sub_00090560); /* call 0x00090560 */

loc_001550CE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001550E3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001550E3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001550F0
 * Original: 0x001550F0 - 0x0015514E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001550F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001550F0: ;
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
    PUSH32(esp, 0x0015511Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015511E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155149; /* je: equal / zero */

loc_00155127: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155134u); RECOMP_ABI_CALL(0x0008F8C0u, sub_0008F8C0); /* call 0x0008F8C0 */

loc_00155134: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155149u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155149: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155150
 * Original: 0x00155150 - 0x001551AE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155150(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155150: ;
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
    PUSH32(esp, 0x0015517Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015517E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001551A9; /* je: equal / zero */

loc_00155187: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155194u); RECOMP_ABI_CALL(0x0008F9A0u, sub_0008F9A0); /* call 0x0008F9A0 */

loc_00155194: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001551A9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001551A9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001551B0
 * Original: 0x001551B0 - 0x0015520E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001551B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001551B0: ;
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
    PUSH32(esp, 0x001551DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001551DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155209; /* je: equal / zero */

loc_001551E7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001551F4u); RECOMP_ABI_CALL(0x0008F140u, sub_0008F140); /* call 0x0008F140 */

loc_001551F4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155209u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155209: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155210
 * Original: 0x00155210 - 0x0015526E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155210(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155210: ;
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
    PUSH32(esp, 0x0015523Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015523E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155269; /* je: equal / zero */

loc_00155247: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155254u); RECOMP_ABI_CALL(0x0008F220u, sub_0008F220); /* call 0x0008F220 */

loc_00155254: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155269u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155269: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155270
 * Original: 0x00155270 - 0x001552CE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155270(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155270: ;
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
    PUSH32(esp, 0x0015529Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015529E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001552C9; /* je: equal / zero */

loc_001552A7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001552B4u); RECOMP_ABI_CALL(0x0008F040u, sub_0008F040); /* call 0x0008F040 */

loc_001552B4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001552C9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001552C9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001552D0
 * Original: 0x001552D0 - 0x0015532E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001552D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001552D0: ;
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
    PUSH32(esp, 0x001552FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001552FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155329; /* je: equal / zero */

loc_00155307: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155314u); RECOMP_ABI_CALL(0x0008F060u, sub_0008F060); /* call 0x0008F060 */

loc_00155314: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155329u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155329: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155330
 * Original: 0x00155330 - 0x00155399 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155330: ;
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
    PUSH32(esp, 0x0015535Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015535E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155394; /* je: equal / zero */

loc_00155367: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015537Fu); RECOMP_ABI_CALL(0x0008F300u, sub_0008F300); /* call 0x0008F300 */

loc_0015537F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155394u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155394: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001553A0
 * Original: 0x001553A0 - 0x00155408 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001553A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001553A0: ;
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
    PUSH32(esp, 0x001553CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001553CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155403; /* je: equal / zero */

loc_001553D7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001553EEu); RECOMP_ABI_CALL(0x00091710u, sub_00091710); /* call 0x00091710 */

loc_001553EE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155403u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155403: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155410
 * Original: 0x00155410 - 0x00155482 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155410(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155410: ;
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
    PUSH32(esp, 0x0015543Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015543E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015547D; /* je: equal / zero */

loc_00155447: ;
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
    PUSH32(esp, 0x00155468u); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_00155468: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015547Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015547D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155490
 * Original: 0x00155490 - 0x001554F8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155490(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155490: ;
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
    PUSH32(esp, 0x001554BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001554BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001554F3; /* je: equal / zero */

loc_001554C7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001554DEu); RECOMP_ABI_CALL(0x000920E0u, sub_000920E0); /* call 0x000920E0 */

loc_001554DE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001554F3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001554F3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155500
 * Original: 0x00155500 - 0x0015556D (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155500(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155500: ;
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
    PUSH32(esp, 0x0015552Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015552E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155568; /* je: equal / zero */

loc_00155537: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155553u); RECOMP_ABI_CALL(0x00093530u, sub_00093530); /* call 0x00093530 */

loc_00155553: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155568u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155568: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155570
 * Original: 0x00155570 - 0x001555DD (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155570(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155570: ;
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
    PUSH32(esp, 0x0015559Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015559E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001555D8; /* je: equal / zero */

loc_001555A7: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001555C3u); RECOMP_ABI_CALL(0x000925B0u, sub_000925B0); /* call 0x000925B0 */

loc_001555C3: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001555D8u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001555D8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001555E0
 * Original: 0x001555E0 - 0x00155646 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001555E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001555E0: ;
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
    PUSH32(esp, 0x00155615u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155615: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155641; /* je: equal / zero */

loc_0015561E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015562Bu); RECOMP_ABI_CALL(0x00091520u, sub_00091520); /* call 0x00091520 */

loc_0015562B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155641u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155641: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155650
 * Original: 0x00155650 - 0x001556B8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155650(void)
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

loc_00155650: ;
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
    PUSH32(esp, 0x0015567Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015567E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001556B3; /* je: equal / zero */

loc_00155687: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155694u); RECOMP_ABI_CALL(0x00091560u, sub_00091560); /* call 0x00091560 */

loc_00155694: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001556B3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001556B3: ;
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
 * sub_001556C0
 * Original: 0x001556C0 - 0x00155728 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001556C0(void)
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

loc_001556C0: ;
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
    PUSH32(esp, 0x001556EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001556EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155723; /* je: equal / zero */

loc_001556F7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155704u); RECOMP_ABI_CALL(0x000915D0u, sub_000915D0); /* call 0x000915D0 */

loc_00155704: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155723u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155723: ;
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
 * sub_00155730
 * Original: 0x00155730 - 0x00155796 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155730(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155730: ;
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
    PUSH32(esp, 0x00155765u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155765: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155791; /* je: equal / zero */

loc_0015576E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015577Bu); RECOMP_ABI_CALL(0x00091020u, sub_00091020); /* call 0x00091020 */

loc_0015577B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155791u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155791: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001557A0
 * Original: 0x001557A0 - 0x00155806 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001557A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001557A0: ;
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
    PUSH32(esp, 0x001557D5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001557D5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155801; /* je: equal / zero */

loc_001557DE: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001557EBu); RECOMP_ABI_CALL(0x000914E0u, sub_000914E0); /* call 0x000914E0 */

loc_001557EB: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155801u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155801: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155810
 * Original: 0x00155810 - 0x0015586E (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155810(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155810: ;
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
    PUSH32(esp, 0x0015583Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015583E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155869; /* je: equal / zero */

loc_00155847: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015585Au); RECOMP_ABI_CALL(0x0008EF10u, sub_0008EF10); /* call 0x0008EF10 */

loc_0015585A: ;
    ecx = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155869u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155869: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155870
 * Original: 0x00155870 - 0x001558E2 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155870(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155870: ;
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
    PUSH32(esp, 0x0015589Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015589E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001558DD; /* je: equal / zero */

loc_001558A7: ;
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
    PUSH32(esp, 0x001558C8u); RECOMP_ABI_CALL(0x00092910u, sub_00092910); /* call 0x00092910 */

loc_001558C8: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001558DDu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001558DD: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001558F0
 * Original: 0x001558F0 - 0x00155962 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001558F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001558F0: ;
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
    PUSH32(esp, 0x0015591Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015591E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015595D; /* je: equal / zero */

loc_00155927: ;
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
    PUSH32(esp, 0x00155948u); RECOMP_ABI_CALL(0x00092CA0u, sub_00092CA0); /* call 0x00092CA0 */

loc_00155948: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015595Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015595D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155970
 * Original: 0x00155970 - 0x001559D6 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155970(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155970: ;
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
    PUSH32(esp, 0x001559A5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001559A5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001559D1; /* je: equal / zero */

loc_001559AE: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001559BBu); RECOMP_ABI_CALL(0x00091690u, sub_00091690); /* call 0x00091690 */

loc_001559BB: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001559D1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001559D1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001559E0
 * Original: 0x001559E0 - 0x00155A3E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001559E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001559E0: ;
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
    PUSH32(esp, 0x00155A0Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155A0E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155A39; /* je: equal / zero */

loc_00155A17: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155A24u); RECOMP_ABI_CALL(0x00094570u, sub_00094570); /* call 0x00094570 */

loc_00155A24: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155A39u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155A39: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155A40
 * Original: 0x00155A40 - 0x00155AA9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155A40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155A40: ;
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
    PUSH32(esp, 0x00155A6Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155A6E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155AA4; /* je: equal / zero */

loc_00155A77: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155A8Fu); RECOMP_ABI_CALL(0x0008F5D0u, sub_0008F5D0); /* call 0x0008F5D0 */

loc_00155A8F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155AA4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155AA4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155AB0
 * Original: 0x00155AB0 - 0x00155B19 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155AB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155AB0: ;
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
    PUSH32(esp, 0x00155ADEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155ADE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155B14; /* je: equal / zero */

loc_00155AE7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155AFFu); RECOMP_ABI_CALL(0x00093970u, sub_00093970); /* call 0x00093970 */

loc_00155AFF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155B14u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155B14: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155B20
 * Original: 0x00155B20 - 0x00155B89 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155B20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155B20: ;
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
    PUSH32(esp, 0x00155B4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155B4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155B84; /* je: equal / zero */

loc_00155B57: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155B6Fu); RECOMP_ABI_CALL(0x00094B80u, sub_00094B80); /* call 0x00094B80 */

loc_00155B6F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155B84u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155B84: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155B90
 * Original: 0x00155B90 - 0x00155BF9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155B90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155B90: ;
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
    PUSH32(esp, 0x00155BBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155BBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155BF4; /* je: equal / zero */

loc_00155BC7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155BDFu); RECOMP_ABI_CALL(0x00094C60u, sub_00094C60); /* call 0x00094C60 */

loc_00155BDF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155BF4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155BF4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155C00
 * Original: 0x00155C00 - 0x00155C5E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155C00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155C00: ;
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
    PUSH32(esp, 0x00155C2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155C2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155C59; /* je: equal / zero */

loc_00155C37: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155C44u); RECOMP_ABI_CALL(0x00094F80u, sub_00094F80); /* call 0x00094F80 */

loc_00155C44: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155C59u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155C59: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155C60
 * Original: 0x00155C60 - 0x00155CBE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155C60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155C60: ;
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
    PUSH32(esp, 0x00155C8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155C8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155CB9; /* je: equal / zero */

loc_00155C97: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155CA4u); RECOMP_ABI_CALL(0x00094D40u, sub_00094D40); /* call 0x00094D40 */

loc_00155CA4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155CB9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155CB9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155CC0
 * Original: 0x00155CC0 - 0x00155D1E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155CC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155CC0: ;
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
    PUSH32(esp, 0x00155CEEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155CEE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155D19; /* je: equal / zero */

loc_00155CF7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155D04u); RECOMP_ABI_CALL(0x000936E0u, sub_000936E0); /* call 0x000936E0 */

loc_00155D04: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155D19u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155D19: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155D20
 * Original: 0x00155D20 - 0x00155D7E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155D20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155D20: ;
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
    PUSH32(esp, 0x00155D4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155D4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155D79; /* je: equal / zero */

loc_00155D57: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155D64u); RECOMP_ABI_CALL(0x00094A00u, sub_00094A00); /* call 0x00094A00 */

loc_00155D64: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155D79u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155D79: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155D80
 * Original: 0x00155D80 - 0x00155DE8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155D80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155D80: ;
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
    PUSH32(esp, 0x00155DAEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155DAE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155DE3; /* je: equal / zero */

loc_00155DB7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155DCEu); RECOMP_ABI_CALL(0x00093DF0u, sub_00093DF0); /* call 0x00093DF0 */

loc_00155DCE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155DE3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155DE3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155DF0
 * Original: 0x00155DF0 - 0x00155E4E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155DF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155DF0: ;
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
    PUSH32(esp, 0x00155E1Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155E1E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155E49; /* je: equal / zero */

loc_00155E27: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E34u); RECOMP_ABI_CALL(0x00094AC0u, sub_00094AC0); /* call 0x00094AC0 */

loc_00155E34: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E49u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155E49: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155E50
 * Original: 0x00155E50 - 0x00155EB9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155E50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155E50: ;
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
    PUSH32(esp, 0x00155E7Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155E7E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155EB4; /* je: equal / zero */

loc_00155E87: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E9Fu); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00155E9F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155EB4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155EB4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155EC0
 * Original: 0x00155EC0 - 0x00155F29 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155EC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155EC0: ;
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
    PUSH32(esp, 0x00155EEEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155EEE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155F24; /* je: equal / zero */

loc_00155EF7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F0Fu); RECOMP_ABI_CALL(0x00094910u, sub_00094910); /* call 0x00094910 */

loc_00155F0F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F24u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155F24: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155F30
 * Original: 0x00155F30 - 0x00155F8E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155F30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155F30: ;
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
    PUSH32(esp, 0x00155F5Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155F5E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155F89; /* je: equal / zero */

loc_00155F67: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F74u); RECOMP_ABI_CALL(0x00095020u, sub_00095020); /* call 0x00095020 */

loc_00155F74: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F89u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155F89: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155F90
 * Original: 0x00155F90 - 0x00155FEE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155F90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155F90: ;
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
    PUSH32(esp, 0x00155FBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00155FBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155FE9; /* je: equal / zero */

loc_00155FC7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155FD4u); RECOMP_ABI_CALL(0x00095480u, sub_00095480); /* call 0x00095480 */

loc_00155FD4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155FE9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00155FE9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00155FF0
 * Original: 0x00155FF0 - 0x00156056 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155FF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155FF0: ;
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
    PUSH32(esp, 0x00156025u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156025: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156051; /* je: equal / zero */

loc_0015602E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015603Bu); RECOMP_ABI_CALL(0x00095520u, sub_00095520); /* call 0x00095520 */

loc_0015603B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156051u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156051: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156060
 * Original: 0x00156060 - 0x001560C5 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156060(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156060: ;
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
    PUSH32(esp, 0x00156095u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156095: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001560C0; /* je: equal / zero */

loc_0015609E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001560ABu); RECOMP_ABI_CALL(0x00091620u, sub_00091620); /* call 0x00091620 */

loc_001560AB: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001560C0u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001560C0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001560D0
 * Original: 0x001560D0 - 0x00156139 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001560D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001560D0: ;
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
    PUSH32(esp, 0x001560FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001560FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156134; /* je: equal / zero */

loc_00156107: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015611Fu); RECOMP_ABI_CALL(0x0008FF90u, sub_0008FF90); /* call 0x0008FF90 */

loc_0015611F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156134u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156134: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156140
 * Original: 0x00156140 - 0x001561A9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156140(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156140: ;
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
    PUSH32(esp, 0x0015616Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015616E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001561A4; /* je: equal / zero */

loc_00156177: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015618Fu); RECOMP_ABI_CALL(0x00093B20u, sub_00093B20); /* call 0x00093B20 */

loc_0015618F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001561A4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001561A4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001561B0
 * Original: 0x001561B0 - 0x00156219 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001561B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001561B0: ;
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
    PUSH32(esp, 0x001561DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001561DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156214; /* je: equal / zero */

loc_001561E7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001561FFu); RECOMP_ABI_CALL(0x00093F10u, sub_00093F10); /* call 0x00093F10 */

loc_001561FF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156214u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156214: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156220
 * Original: 0x00156220 - 0x00156289 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156220(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156220: ;
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
    PUSH32(esp, 0x0015624Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015624E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156284; /* je: equal / zero */

loc_00156257: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015626Fu); RECOMP_ABI_CALL(0x00094740u, sub_00094740); /* call 0x00094740 */

loc_0015626F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156284u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156284: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156290
 * Original: 0x00156290 - 0x001562F9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156290(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156290: ;
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
    PUSH32(esp, 0x001562BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001562BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001562F4; /* je: equal / zero */

loc_001562C7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001562DFu); RECOMP_ABI_CALL(0x0008F500u, sub_0008F500); /* call 0x0008F500 */

loc_001562DF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001562F4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001562F4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156300
 * Original: 0x00156300 - 0x00156366 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156300(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156300: ;
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
    PUSH32(esp, 0x00156335u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156335: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156361; /* je: equal / zero */

loc_0015633E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015634Bu); RECOMP_ABI_CALL(0x00092E00u, sub_00092E00); /* call 0x00092E00 */

loc_0015634B: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156361u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156361: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156370
 * Original: 0x00156370 - 0x0015639F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156370(void)
{
    uint32_t ebp = g_ebp;

loc_00156370: ;
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
    PUSH32(esp, 0x00156385u); RECOMP_ABI_CALL(0x0008EFF0u, sub_0008EFF0); /* call 0x0008EFF0 */

loc_00156385: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015639Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015639A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001563A0
 * Original: 0x001563A0 - 0x00156408 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001563A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001563A0: ;
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
    PUSH32(esp, 0x001563CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001563CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156403; /* je: equal / zero */

loc_001563D7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001563EEu); RECOMP_ABI_CALL(0x000931B0u, sub_000931B0); /* call 0x000931B0 */

loc_001563EE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156403u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156403: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156410
 * Original: 0x00156410 - 0x00156486 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156410(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156410: ;
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
    PUSH32(esp, 0x0015643Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015643E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156481; /* je: equal / zero */

loc_00156447: ;
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
    PUSH32(esp, 0x0015646Cu); RECOMP_ABI_CALL(0x00090A20u, sub_00090A20); /* call 0x00090A20 */

loc_0015646C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156481u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156481: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156490
 * Original: 0x00156490 - 0x001564F9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156490(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156490: ;
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
    PUSH32(esp, 0x001564BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001564BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001564F4; /* je: equal / zero */

loc_001564C7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001564DFu); RECOMP_ABI_CALL(0x00090A90u, sub_00090A90); /* call 0x00090A90 */

loc_001564DF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001564F4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001564F4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156500
 * Original: 0x00156500 - 0x00156569 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156500(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156500: ;
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
    PUSH32(esp, 0x0015652Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015652E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156564; /* je: equal / zero */

loc_00156537: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015654Fu); RECOMP_ABI_CALL(0x00090B10u, sub_00090B10); /* call 0x00090B10 */

loc_0015654F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156564u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156564: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156570
 * Original: 0x00156570 - 0x001565D8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156570(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156570: ;
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
    PUSH32(esp, 0x0015659Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015659E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001565D3; /* je: equal / zero */

loc_001565A7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001565BEu); RECOMP_ABI_CALL(0x00090B90u, sub_00090B90); /* call 0x00090B90 */

loc_001565BE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001565D3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001565D3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001565E0
 * Original: 0x001565E0 - 0x0015663E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001565E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001565E0: ;
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
    PUSH32(esp, 0x0015660Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015660E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156639; /* je: equal / zero */

loc_00156617: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156624u); RECOMP_ABI_CALL(0x00090CA0u, sub_00090CA0); /* call 0x00090CA0 */

loc_00156624: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156639u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156639: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156640
 * Original: 0x00156640 - 0x001566A8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156640: ;
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
    PUSH32(esp, 0x0015666Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015666E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001566A3; /* je: equal / zero */

loc_00156677: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015668Eu); RECOMP_ABI_CALL(0x00095350u, sub_00095350); /* call 0x00095350 */

loc_0015668E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001566A3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001566A3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001566B0
 * Original: 0x001566B0 - 0x0015670E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001566B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001566B0: ;
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
    PUSH32(esp, 0x001566DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001566DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156709; /* je: equal / zero */

loc_001566E7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001566F4u); RECOMP_ABI_CALL(0x000928A0u, sub_000928A0); /* call 0x000928A0 */

loc_001566F4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156709u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156709: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156710
 * Original: 0x00156710 - 0x00156779 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156710: ;
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
    PUSH32(esp, 0x0015673Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015673E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156774; /* je: equal / zero */

loc_00156747: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015675Fu); RECOMP_ABI_CALL(0x0008FB30u, sub_0008FB30); /* call 0x0008FB30 */

loc_0015675F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156774u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156774: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156780
 * Original: 0x00156780 - 0x001567DE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156780(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156780: ;
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
    PUSH32(esp, 0x001567AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001567AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001567D9; /* je: equal / zero */

loc_001567B7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001567C4u); RECOMP_ABI_CALL(0x0008FA90u, sub_0008FA90); /* call 0x0008FA90 */

loc_001567C4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001567D9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001567D9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001567E0
 * Original: 0x001567E0 - 0x0015683E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001567E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001567E0: ;
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
    PUSH32(esp, 0x0015680Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015680E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156839; /* je: equal / zero */

loc_00156817: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156824u); RECOMP_ABI_CALL(0x0008FC30u, sub_0008FC30); /* call 0x0008FC30 */

loc_00156824: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156839u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156839: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156840
 * Original: 0x00156840 - 0x001568A8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156840(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156840: ;
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
    PUSH32(esp, 0x0015686Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015686E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001568A3; /* je: equal / zero */

loc_00156877: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015688Eu); RECOMP_ABI_CALL(0x0008FDA0u, sub_0008FDA0); /* call 0x0008FDA0 */

loc_0015688E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568A3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001568A3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001568B0
 * Original: 0x001568B0 - 0x00156918 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001568B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001568B0: ;
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
    PUSH32(esp, 0x001568DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001568DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156913; /* je: equal / zero */

loc_001568E7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568FEu); RECOMP_ABI_CALL(0x0008FE70u, sub_0008FE70); /* call 0x0008FE70 */

loc_001568FE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156913u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156913: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156920
 * Original: 0x00156920 - 0x00156996 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156920(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156920: ;
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
    PUSH32(esp, 0x0015694Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015694E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156991; /* je: equal / zero */

loc_00156957: ;
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
    PUSH32(esp, 0x0015697Cu); RECOMP_ABI_CALL(0x0008FCD0u, sub_0008FCD0); /* call 0x0008FCD0 */

loc_0015697C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156991u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156991: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001569A0
 * Original: 0x001569A0 - 0x00156A06 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001569A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001569A0: ;
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
    PUSH32(esp, 0x001569D5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001569D5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A01; /* je: equal / zero */

loc_001569DE: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001569ECu); RECOMP_ABI_CALL(0x000926B0u, sub_000926B0); /* call 0x000926B0 */

loc_001569EC: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A01u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156A01: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156A10
 * Original: 0x00156A10 - 0x00156A6F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156A10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156A10: ;
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
    PUSH32(esp, 0x00156A3Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156A3E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A6A; /* je: equal / zero */

loc_00156A47: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A55u); RECOMP_ABI_CALL(0x00092760u, sub_00092760); /* call 0x00092760 */

loc_00156A55: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A6Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156A6A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156A70
 * Original: 0x00156A70 - 0x00156ACF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156A70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156A70: ;
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
    PUSH32(esp, 0x00156A9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156A9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156ACA; /* je: equal / zero */

loc_00156AA7: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156AB5u); RECOMP_ABI_CALL(0x00092800u, sub_00092800); /* call 0x00092800 */

loc_00156AB5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156ACAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156ACA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156AD0
 * Original: 0x00156AD0 - 0x00156B37 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156AD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156AD0: ;
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
    PUSH32(esp, 0x00156B05u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156B05: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156B32; /* je: equal / zero */

loc_00156B0E: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B1Cu); RECOMP_ABI_CALL(0x0008F000u, sub_0008F000); /* call 0x0008F000 */

loc_00156B1C: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B32u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156B32: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156B40
 * Original: 0x00156B40 - 0x00156BA7 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156B40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156B40: ;
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
    PUSH32(esp, 0x00156B75u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156B75: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156BA2; /* je: equal / zero */

loc_00156B7E: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B8Cu); RECOMP_ABI_CALL(0x0008F020u, sub_0008F020); /* call 0x0008F020 */

loc_00156B8C: ;
    MEM16(ebp + -8) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BA2u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156BA2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156BB0
 * Original: 0x00156BB0 - 0x00156C18 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156BB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156BB0: ;
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
    PUSH32(esp, 0x00156BDEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156BDE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156C13; /* je: equal / zero */

loc_00156BE7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BFEu); RECOMP_ABI_CALL(0x000941F0u, sub_000941F0); /* call 0x000941F0 */

loc_00156BFE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156C13u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156C13: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156C20
 * Original: 0x00156C20 - 0x00156C89 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156C20: ;
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
    PUSH32(esp, 0x00156C4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156C4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156C84; /* je: equal / zero */

loc_00156C57: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156C6Fu); RECOMP_ABI_CALL(0x0008F410u, sub_0008F410); /* call 0x0008F410 */

loc_00156C6F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156C84u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156C84: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156C90
 * Original: 0x00156C90 - 0x00156CF9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156C90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156C90: ;
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
    PUSH32(esp, 0x00156CBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156CBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156CF4; /* je: equal / zero */

loc_00156CC7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156CDFu); RECOMP_ABI_CALL(0x000953F0u, sub_000953F0); /* call 0x000953F0 */

loc_00156CDF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156CF4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156CF4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156D00
 * Original: 0x00156D00 - 0x00156D69 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156D00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156D00: ;
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
    PUSH32(esp, 0x00156D2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156D2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156D64; /* je: equal / zero */

loc_00156D37: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156D4Fu); RECOMP_ABI_CALL(0x0008F6E0u, sub_0008F6E0); /* call 0x0008F6E0 */

loc_00156D4F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156D64u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156D64: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156D70
 * Original: 0x00156D70 - 0x00156DD9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156D70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156D70: ;
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
    PUSH32(esp, 0x00156D9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156D9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156DD4; /* je: equal / zero */

loc_00156DA7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156DBFu); RECOMP_ABI_CALL(0x0008F7D0u, sub_0008F7D0); /* call 0x0008F7D0 */

loc_00156DBF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156DD4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156DD4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156DE0
 * Original: 0x00156DE0 - 0x00156E54 (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156DE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156DE0: ;
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
    PUSH32(esp, 0x00156E15u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156E15: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156E4F; /* je: equal / zero */

loc_00156E1E: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156E3Au); RECOMP_ABI_CALL(0x00092630u, sub_00092630); /* call 0x00092630 */

loc_00156E3A: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156E4Fu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156E4F: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156E60
 * Original: 0x00156E60 - 0x00156EBF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156E60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156E60: ;
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
    PUSH32(esp, 0x00156E8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156E8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156EBA; /* je: equal / zero */

loc_00156E97: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156EA5u); RECOMP_ABI_CALL(0x000ED780u, sub_000ED780); /* call 0x000ED780 */

loc_00156EA5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156EBAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156EBA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156EC0
 * Original: 0x00156EC0 - 0x00156F2D (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156EC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156EC0: ;
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
    PUSH32(esp, 0x00156EEEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156EEE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156F28; /* je: equal / zero */

loc_00156EF7: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156F13u); RECOMP_ABI_CALL(0x000EB0D0u, sub_000EB0D0); /* call 0x000EB0D0 */

loc_00156F13: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156F28u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156F28: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156F30
 * Original: 0x00156F30 - 0x00156FAA (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156F30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156F30: ;
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
    PUSH32(esp, 0x00156F5Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156F5E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156FA5; /* je: equal / zero */

loc_00156F67: ;
    eax = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(eax));
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    edx = ZX16(LO16(edx));
    MEM32(esp) = edx;
    ecx = ZX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156F90u); RECOMP_ABI_CALL(0x000EAFB0u, sub_000EAFB0); /* call 0x000EAFB0 */

loc_00156F90: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FA5u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00156FA5: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00156FB0
 * Original: 0x00156FB0 - 0x00157018 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156FB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156FB0: ;
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
    PUSH32(esp, 0x00156FDEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00156FDE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157013; /* je: equal / zero */

loc_00156FE7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FFEu); RECOMP_ABI_CALL(0x000EADB0u, sub_000EADB0); /* call 0x000EADB0 */

loc_00156FFE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157013u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157013: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157020
 * Original: 0x00157020 - 0x0015707E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157020(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157020: ;
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
    PUSH32(esp, 0x0015704Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015704E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157079; /* je: equal / zero */

loc_00157057: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157064u); RECOMP_ABI_CALL(0x000EAEC0u, sub_000EAEC0); /* call 0x000EAEC0 */

loc_00157064: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157079u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157079: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157080
 * Original: 0x00157080 - 0x001570DE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157080(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157080: ;
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
    PUSH32(esp, 0x001570AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001570AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001570D9; /* je: equal / zero */

loc_001570B7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001570C4u); RECOMP_ABI_CALL(0x000EAF10u, sub_000EAF10); /* call 0x000EAF10 */

loc_001570C4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001570D9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001570D9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001570E0
 * Original: 0x001570E0 - 0x00157117 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001570E0(void)
{
    uint32_t ebp = g_ebp;

loc_001570E0: ;
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
    PUSH32(esp, 0x001570FCu); RECOMP_ABI_CALL(0x000EB280u, sub_000EB280); /* call 0x000EB280 */

loc_001570FC: ;
    MEM16(ebp + -4) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157112u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157112: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157120
 * Original: 0x00157120 - 0x0015714F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157120(void)
{
    uint32_t ebp = g_ebp;

loc_00157120: ;
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
    PUSH32(esp, 0x00157135u); RECOMP_ABI_CALL(0x000ED430u, sub_000ED430); /* call 0x000ED430 */

loc_00157135: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015714Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015714A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157150
 * Original: 0x00157150 - 0x0015717F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157150(void)
{
    uint32_t ebp = g_ebp;

loc_00157150: ;
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
    PUSH32(esp, 0x00157165u); RECOMP_ABI_CALL(0x000ED2D0u, sub_000ED2D0); /* call 0x000ED2D0 */

loc_00157165: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015717Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015717A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157180
 * Original: 0x00157180 - 0x001571E2 (98 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157180(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157180: ;
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
    PUSH32(esp, 0x001571AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001571AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001571DD; /* je: equal / zero */

loc_001571B7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001571C8u); RECOMP_ABI_CALL(0x00140BA0u, sub_00140BA0); /* call 0x00140BA0 */

loc_001571C8: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001571DDu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001571DD: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001571F0
 * Original: 0x001571F0 - 0x0015721F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001571F0(void)
{
    uint32_t ebp = g_ebp;

loc_001571F0: ;
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
    PUSH32(esp, 0x0015720Bu); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0015720B: ;
    ecx = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015721Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015721A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157220
 * Original: 0x00157220 - 0x0015727E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157220(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157220: ;
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
    PUSH32(esp, 0x0015724Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015724E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157279; /* je: equal / zero */

loc_00157257: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157264u); RECOMP_ABI_CALL(0x00127990u, sub_00127990); /* call 0x00127990 */

loc_00157264: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157279u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157279: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157280
 * Original: 0x00157280 - 0x001572B7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157280(void)
{
    uint32_t ebp = g_ebp;

loc_00157280: ;
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
    PUSH32(esp, 0x0015729Cu); RECOMP_ABI_CALL(0x00126D50u, sub_00126D50); /* call 0x00126D50 */

loc_0015729C: ;
    MEM16(ebp + -4) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001572B2u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001572B2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001572C0
 * Original: 0x001572C0 - 0x001572F7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001572C0(void)
{
    uint32_t ebp = g_ebp;

loc_001572C0: ;
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
    PUSH32(esp, 0x001572DCu); RECOMP_ABI_CALL(0x00126D40u, sub_00126D40); /* call 0x00126D40 */

loc_001572DC: ;
    MEM16(ebp + -4) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001572F2u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001572F2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157300
 * Original: 0x00157300 - 0x0015732F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157300(void)
{
    uint32_t ebp = g_ebp;

loc_00157300: ;
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
    PUSH32(esp, 0x00157315u); RECOMP_ABI_CALL(0x001C4450u, sub_001C4450); /* call 0x001C4450 */

loc_00157315: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015732Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015732A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157330
 * Original: 0x00157330 - 0x0015738E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157330: ;
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
    PUSH32(esp, 0x0015735Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015735E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157389; /* je: equal / zero */

loc_00157367: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157374u); RECOMP_ABI_CALL(0x001C5B10u, sub_001C5B10); /* call 0x001C5B10 */

loc_00157374: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157389u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157389: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157390
 * Original: 0x00157390 - 0x001573EE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157390(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157390: ;
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
    PUSH32(esp, 0x001573BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001573BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573E9; /* je: equal / zero */

loc_001573C7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001573D4u); RECOMP_ABI_CALL(0x001C5500u, sub_001C5500); /* call 0x001C5500 */

loc_001573D4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001573E9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001573E9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001573F0
 * Original: 0x001573F0 - 0x0015744F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001573F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001573F0: ;
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
    PUSH32(esp, 0x0015741Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015741E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015744A; /* je: equal / zero */

loc_00157427: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157435u); RECOMP_ABI_CALL(0x001C5550u, sub_001C5550); /* call 0x001C5550 */

loc_00157435: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015744Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015744A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157450
 * Original: 0x00157450 - 0x001574AE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157450(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157450: ;
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
    PUSH32(esp, 0x0015747Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015747E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574A9; /* je: equal / zero */

loc_00157487: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157494u); RECOMP_ABI_CALL(0x003A34D0u, sub_003A34D0); /* call 0x003A34D0 */

loc_00157494: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001574A9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001574A9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001574B0
 * Original: 0x001574B0 - 0x0015750F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001574B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001574B0: ;
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
    PUSH32(esp, 0x001574DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001574DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015750A; /* je: equal / zero */

loc_001574E7: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001574F5u); RECOMP_ABI_CALL(0x00333970u, sub_00333970); /* call 0x00333970 */

loc_001574F5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015750Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015750A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157510
 * Original: 0x00157510 - 0x00157547 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157510(void)
{
    uint32_t ebp = g_ebp;

loc_00157510: ;
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
    PUSH32(esp, 0x0015752Cu); RECOMP_ABI_CALL(0x00332B70u, sub_00332B70); /* call 0x00332B70 */

loc_0015752C: ;
    MEM16(ebp + -4) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157542u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157542: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157550
 * Original: 0x00157550 - 0x0015757F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157550(void)
{
    uint32_t ebp = g_ebp;

loc_00157550: ;
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
    PUSH32(esp, 0x00157565u); RECOMP_ABI_CALL(0x001C5820u, sub_001C5820); /* call 0x001C5820 */

loc_00157565: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015757Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015757A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157580
 * Original: 0x00157580 - 0x001575AF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157580(void)
{
    uint32_t ebp = g_ebp;

loc_00157580: ;
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
    PUSH32(esp, 0x00157595u); RECOMP_ABI_CALL(0x001C4E20u, sub_001C4E20); /* call 0x001C4E20 */

loc_00157595: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001575AAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001575AA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001575B0
 * Original: 0x001575B0 - 0x001575DF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001575B0(void)
{
    uint32_t ebp = g_ebp;

loc_001575B0: ;
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
    PUSH32(esp, 0x001575C5u); RECOMP_ABI_CALL(0x000E8CA0u, sub_000E8CA0); /* call 0x000E8CA0 */

loc_001575C5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001575DAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001575DA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001575E0
 * Original: 0x001575E0 - 0x0015760F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001575E0(void)
{
    uint32_t ebp = g_ebp;

loc_001575E0: ;
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
    PUSH32(esp, 0x001575F5u); RECOMP_ABI_CALL(0x000E79C0u, sub_000E79C0); /* call 0x000E79C0 */

loc_001575F5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015760Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015760A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157610
 * Original: 0x00157610 - 0x0015763F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157610(void)
{
    uint32_t ebp = g_ebp;

loc_00157610: ;
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
    PUSH32(esp, 0x00157625u); RECOMP_ABI_CALL(0x000FC850u, sub_000FC850); /* call 0x000FC850 */

loc_00157625: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015763Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015763A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157640
 * Original: 0x00157640 - 0x0015766F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157640(void)
{
    uint32_t ebp = g_ebp;

loc_00157640: ;
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
    PUSH32(esp, 0x00157655u); RECOMP_ABI_CALL(0x000FC380u, sub_000FC380); /* call 0x000FC380 */

loc_00157655: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015766Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015766A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157670
 * Original: 0x00157670 - 0x001576CE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157670(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157670: ;
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
    PUSH32(esp, 0x0015769Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015769E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576A7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001576B4u); RECOMP_ABI_CALL(0x000FC130u, sub_000FC130); /* call 0x000FC130 */

loc_001576B4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001576C9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001576C9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001576D0
 * Original: 0x001576D0 - 0x001576FA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001576D0(void)
{
    uint32_t ebp = g_ebp;

loc_001576D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001576F5u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001576F5: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157700
 * Original: 0x00157700 - 0x0015772F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157700(void)
{
    uint32_t ebp = g_ebp;

loc_00157700: ;
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
    PUSH32(esp, 0x00157715u); RECOMP_ABI_CALL(0x000FFEE0u, sub_000FFEE0); /* call 0x000FFEE0 */

loc_00157715: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015772Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015772A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157730
 * Original: 0x00157730 - 0x0015778E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157730(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157730: ;
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
    PUSH32(esp, 0x0015775Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015775E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157789; /* je: equal / zero */

loc_00157767: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157774u); RECOMP_ABI_CALL(0x000FE370u, sub_000FE370); /* call 0x000FE370 */

loc_00157774: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157789u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157789: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157790
 * Original: 0x00157790 - 0x001577EE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157790(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157790: ;
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
    PUSH32(esp, 0x001577BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001577BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001577E9; /* je: equal / zero */

loc_001577C7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001577D4u); RECOMP_ABI_CALL(0x000FFBF0u, sub_000FFBF0); /* call 0x000FFBF0 */

loc_001577D4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001577E9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001577E9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001577F0
 * Original: 0x001577F0 - 0x0015784E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001577F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001577F0: ;
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
    PUSH32(esp, 0x0015781Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015781E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157849; /* je: equal / zero */

loc_00157827: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157834u); RECOMP_ABI_CALL(0x000FFCF0u, sub_000FFCF0); /* call 0x000FFCF0 */

loc_00157834: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157849u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157849: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157850
 * Original: 0x00157850 - 0x001578AE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157850(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157850: ;
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
    PUSH32(esp, 0x0015787Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015787E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001578A9; /* je: equal / zero */

loc_00157887: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157894u); RECOMP_ABI_CALL(0x00188050u, sub_00188050); /* call 0x00188050 */

loc_00157894: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001578A9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001578A9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001578B0
 * Original: 0x001578B0 - 0x0015790F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001578B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001578B0: ;
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
    PUSH32(esp, 0x001578DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001578DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015790A; /* je: equal / zero */

loc_001578E7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001578F5u); RECOMP_ABI_CALL(0x0034E940u, sub_0034E940); /* call 0x0034E940 */

loc_001578F5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015790Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015790A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157910
 * Original: 0x00157910 - 0x0015793A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157910(void)
{
    uint32_t ebp = g_ebp;

loc_00157910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157935u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157935: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157940
 * Original: 0x00157940 - 0x0015796A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157940(void)
{
    uint32_t ebp = g_ebp;

loc_00157940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157965u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157965: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157970
 * Original: 0x00157970 - 0x0015799A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157970(void)
{
    uint32_t ebp = g_ebp;

loc_00157970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157995u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157995: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001579A0
 * Original: 0x001579A0 - 0x001579FF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001579A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001579A0: ;
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
    PUSH32(esp, 0x001579CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001579CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001579FA; /* je: equal / zero */

loc_001579D7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001579E5u); RECOMP_ABI_CALL(0x0006C910u, sub_0006C910); /* call 0x0006C910 */

loc_001579E5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001579FAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001579FA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157A00
 * Original: 0x00157A00 - 0x00157A5F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157A00: ;
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
    PUSH32(esp, 0x00157A2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157A2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157A5A; /* je: equal / zero */

loc_00157A37: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157A45u); RECOMP_ABI_CALL(0x0006C970u, sub_0006C970); /* call 0x0006C970 */

loc_00157A45: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157A5Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157A5A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157A60
 * Original: 0x00157A60 - 0x00157ABF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157A60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157A60: ;
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
    PUSH32(esp, 0x00157A8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157A8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157ABA; /* je: equal / zero */

loc_00157A97: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157AA5u); RECOMP_ABI_CALL(0x0006C9D0u, sub_0006C9D0); /* call 0x0006C9D0 */

loc_00157AA5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157ABAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157ABA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157AC0
 * Original: 0x00157AC0 - 0x00157AEF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157AC0(void)
{
    uint32_t ebp = g_ebp;

loc_00157AC0: ;
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
    PUSH32(esp, 0x00157AD5u); RECOMP_ABI_CALL(0x0008D830u, sub_0008D830); /* call 0x0008D830 */

loc_00157AD5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157AEAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157AEA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157AF0
 * Original: 0x00157AF0 - 0x00157B1F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157AF0(void)
{
    uint32_t ebp = g_ebp;

loc_00157AF0: ;
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
    PUSH32(esp, 0x00157B05u); RECOMP_ABI_CALL(0x000892D0u, sub_000892D0); /* call 0x000892D0 */

loc_00157B05: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B1Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157B1A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157B20
 * Original: 0x00157B20 - 0x00157B88 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157B20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157B20: ;
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
    PUSH32(esp, 0x00157B4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157B4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157B83; /* je: equal / zero */

loc_00157B57: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B6Eu); RECOMP_ABI_CALL(0x00089CD0u, sub_00089CD0); /* call 0x00089CD0 */

loc_00157B6E: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B83u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157B83: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157B90
 * Original: 0x00157B90 - 0x00157BEE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157B90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157B90: ;
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
    PUSH32(esp, 0x00157BBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157BBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157BE9; /* je: equal / zero */

loc_00157BC7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157BD4u); RECOMP_ABI_CALL(0x0008B400u, sub_0008B400); /* call 0x0008B400 */

loc_00157BD4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157BE9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157BE9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157BF0
 * Original: 0x00157BF0 - 0x00157C4E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157BF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157BF0: ;
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
    PUSH32(esp, 0x00157C1Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157C1E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157C49; /* je: equal / zero */

loc_00157C27: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157C34u); RECOMP_ABI_CALL(0x00089F60u, sub_00089F60); /* call 0x00089F60 */

loc_00157C34: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157C49u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157C49: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157C50
 * Original: 0x00157C50 - 0x00157CAE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157C50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157C50: ;
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
    PUSH32(esp, 0x00157C7Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157C7E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157CA9; /* je: equal / zero */

loc_00157C87: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157C94u); RECOMP_ABI_CALL(0x00089E10u, sub_00089E10); /* call 0x00089E10 */

loc_00157C94: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157CA9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157CA9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157CB0
 * Original: 0x00157CB0 - 0x00157D5D (173 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157CB0: ;
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
    PUSH32(esp, 0x00157CDEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157CDE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157D58; /* je: equal / zero */

loc_00157CE7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = MEM32(ebp + -4);
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157D43u); RECOMP_ABI_CALL(0x0011E3B0u, sub_0011E3B0); /* call 0x0011E3B0 */

loc_00157D43: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157D58u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157D58: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157D60
 * Original: 0x00157D60 - 0x00157E0D (173 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157D60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157D60: ;
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
    PUSH32(esp, 0x00157D8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157D8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157E08; /* je: equal / zero */

loc_00157D97: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = MEM32(ebp + -4);
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157DF3u); RECOMP_ABI_CALL(0x0011E440u, sub_0011E440); /* call 0x0011E440 */

loc_00157DF3: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157E08u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157E08: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157E10
 * Original: 0x00157E10 - 0x00157E3F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157E10(void)
{
    uint32_t ebp = g_ebp;

loc_00157E10: ;
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
    PUSH32(esp, 0x00157E25u); RECOMP_ABI_CALL(0x00103CD0u, sub_00103CD0); /* call 0x00103CD0 */

loc_00157E25: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157E3Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157E3A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157E40
 * Original: 0x00157E40 - 0x00157E6F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157E40(void)
{
    uint32_t ebp = g_ebp;

loc_00157E40: ;
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
    PUSH32(esp, 0x00157E55u); RECOMP_ABI_CALL(0x00103DC0u, sub_00103DC0); /* call 0x00103DC0 */

loc_00157E55: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157E6Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157E6A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157E70
 * Original: 0x00157E70 - 0x00157E9F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157E70(void)
{
    uint32_t ebp = g_ebp;

loc_00157E70: ;
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
    PUSH32(esp, 0x00157E85u); RECOMP_ABI_CALL(0x00103C90u, sub_00103C90); /* call 0x00103C90 */

loc_00157E85: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157E9Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157E9A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157EA0
 * Original: 0x00157EA0 - 0x00157ECF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157EA0(void)
{
    uint32_t ebp = g_ebp;

loc_00157EA0: ;
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
    PUSH32(esp, 0x00157EB5u); RECOMP_ABI_CALL(0x00103CA0u, sub_00103CA0); /* call 0x00103CA0 */

loc_00157EB5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157ECAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157ECA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157ED0
 * Original: 0x00157ED0 - 0x00157F2F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157ED0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157ED0: ;
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
    PUSH32(esp, 0x00157EFEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157EFE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157F2A; /* je: equal / zero */

loc_00157F07: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157F15u); RECOMP_ABI_CALL(0x00103D30u, sub_00103D30); /* call 0x00103D30 */

loc_00157F15: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157F2Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157F2A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157F30
 * Original: 0x00157F30 - 0x00157F8F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157F30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157F30: ;
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
    PUSH32(esp, 0x00157F5Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157F5E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157F8A; /* je: equal / zero */

loc_00157F67: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157F75u); RECOMP_ABI_CALL(0x00104A20u, sub_00104A20); /* call 0x00104A20 */

loc_00157F75: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157F8Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00157F8A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00157F90
 * Original: 0x00157F90 - 0x00158008 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157F90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157F90: ;
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
    PUSH32(esp, 0x00157FBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00157FBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158003; /* je: equal / zero */

loc_00157FC7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157FEEu); RECOMP_ABI_CALL(0x00103E40u, sub_00103E40); /* call 0x00103E40 */

loc_00157FEE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158003u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158003: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158010
 * Original: 0x00158010 - 0x0015806F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158010: ;
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
    PUSH32(esp, 0x0015803Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015803E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015806A; /* je: equal / zero */

loc_00158047: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158055u); RECOMP_ABI_CALL(0x00103D90u, sub_00103D90); /* call 0x00103D90 */

loc_00158055: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015806Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015806A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158070
 * Original: 0x00158070 - 0x0015809F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158070(void)
{
    uint32_t ebp = g_ebp;

loc_00158070: ;
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
    PUSH32(esp, 0x00158085u); RECOMP_ABI_CALL(0x0016CE30u, sub_0016CE30); /* call 0x0016CE30 */

loc_00158085: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015809Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015809A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001580A0
 * Original: 0x001580A0 - 0x001580CF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001580A0(void)
{
    uint32_t ebp = g_ebp;

loc_001580A0: ;
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
    PUSH32(esp, 0x001580B5u); RECOMP_ABI_CALL(0x001C43E0u, sub_001C43E0); /* call 0x001C43E0 */

loc_001580B5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001580CAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001580CA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001580D0
 * Original: 0x001580D0 - 0x001580FF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001580D0(void)
{
    uint32_t ebp = g_ebp;

loc_001580D0: ;
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
    PUSH32(esp, 0x001580E5u); RECOMP_ABI_CALL(0x001C4400u, sub_001C4400); /* call 0x001C4400 */

loc_001580E5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001580FAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001580FA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158100
 * Original: 0x00158100 - 0x00158136 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158100(void)
{
    uint32_t ebp = g_ebp;

loc_00158100: ;
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
    PUSH32(esp, 0x0015811Cu); RECOMP_ABI_CALL(0x00126EA0u, sub_00126EA0); /* call 0x00126EA0 */

loc_0015811C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158131u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158131: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158140
 * Original: 0x00158140 - 0x00158176 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158140(void)
{
    uint32_t ebp = g_ebp;

loc_00158140: ;
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
    PUSH32(esp, 0x0015815Cu); RECOMP_ABI_CALL(0x00126E40u, sub_00126E40); /* call 0x00126E40 */

loc_0015815C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158171u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158171: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158180
 * Original: 0x00158180 - 0x001581B6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158180(void)
{
    uint32_t ebp = g_ebp;

loc_00158180: ;
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
    PUSH32(esp, 0x0015819Cu); RECOMP_ABI_CALL(0x00127030u, sub_00127030); /* call 0x00127030 */

loc_0015819C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001581B1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001581B1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001581C0
 * Original: 0x001581C0 - 0x001581F6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001581C0(void)
{
    uint32_t ebp = g_ebp;

loc_001581C0: ;
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
    PUSH32(esp, 0x001581DCu); RECOMP_ABI_CALL(0x00127070u, sub_00127070); /* call 0x00127070 */

loc_001581DC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001581F1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001581F1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158200
 * Original: 0x00158200 - 0x0015822F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158200(void)
{
    uint32_t ebp = g_ebp;

loc_00158200: ;
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
    PUSH32(esp, 0x00158215u); RECOMP_ABI_CALL(0x001C5580u, sub_001C5580); /* call 0x001C5580 */

loc_00158215: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015822Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015822A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158230
 * Original: 0x00158230 - 0x0015825F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158230(void)
{
    uint32_t ebp = g_ebp;

loc_00158230: ;
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
    PUSH32(esp, 0x00158245u); RECOMP_ABI_CALL(0x001C43D0u, sub_001C43D0); /* call 0x001C43D0 */

loc_00158245: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015825Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015825A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158260
 * Original: 0x00158260 - 0x0015828F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158260(void)
{
    uint32_t ebp = g_ebp;

loc_00158260: ;
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
    PUSH32(esp, 0x00158275u); RECOMP_ABI_CALL(0x001C55D0u, sub_001C55D0); /* call 0x001C55D0 */

loc_00158275: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015828Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015828A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158290
 * Original: 0x00158290 - 0x001582BF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158290(void)
{
    uint32_t ebp = g_ebp;

loc_00158290: ;
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
    PUSH32(esp, 0x001582A5u); RECOMP_ABI_CALL(0x001C44D0u, sub_001C44D0); /* call 0x001C44D0 */

loc_001582A5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001582BAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001582BA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001582C0
 * Original: 0x001582C0 - 0x001582F6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001582C0(void)
{
    uint32_t ebp = g_ebp;

loc_001582C0: ;
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
    PUSH32(esp, 0x001582DCu); RECOMP_ABI_CALL(0x001C43C0u, sub_001C43C0); /* call 0x001C43C0 */

loc_001582DC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001582F1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001582F1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158300
 * Original: 0x00158300 - 0x0015832F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158300(void)
{
    uint32_t ebp = g_ebp;

loc_00158300: ;
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
    PUSH32(esp, 0x00158315u); RECOMP_ABI_CALL(0x001C4480u, sub_001C4480); /* call 0x001C4480 */

loc_00158315: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015832Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015832A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158330
 * Original: 0x00158330 - 0x00158366 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158330(void)
{
    uint32_t ebp = g_ebp;

loc_00158330: ;
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
    PUSH32(esp, 0x0015834Cu); RECOMP_ABI_CALL(0x003285D0u, sub_003285D0); /* call 0x003285D0 */

loc_0015834C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158361u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158361: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158370
 * Original: 0x00158370 - 0x0015839F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158370(void)
{
    uint32_t ebp = g_ebp;

loc_00158370: ;
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
    PUSH32(esp, 0x00158385u); RECOMP_ABI_CALL(0x001C4510u, sub_001C4510); /* call 0x001C4510 */

loc_00158385: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015839Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015839A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001583A0
 * Original: 0x001583A0 - 0x001583FE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001583A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001583A0: ;
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
    PUSH32(esp, 0x001583CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001583CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001583F9; /* je: equal / zero */

loc_001583D7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001583E4u); RECOMP_ABI_CALL(0x001C4540u, sub_001C4540); /* call 0x001C4540 */

loc_001583E4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001583F9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001583F9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158400
 * Original: 0x00158400 - 0x0015842F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158400(void)
{
    uint32_t ebp = g_ebp;

loc_00158400: ;
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
    PUSH32(esp, 0x00158415u); RECOMP_ABI_CALL(0x001C45C0u, sub_001C45C0); /* call 0x001C45C0 */

loc_00158415: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015842Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015842A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158430
 * Original: 0x00158430 - 0x0015845F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158430(void)
{
    uint32_t ebp = g_ebp;

loc_00158430: ;
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
    PUSH32(esp, 0x00158445u); RECOMP_ABI_CALL(0x001C45F0u, sub_001C45F0); /* call 0x001C45F0 */

loc_00158445: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015845Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015845A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158460
 * Original: 0x00158460 - 0x001584BE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158460(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158460: ;
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
    PUSH32(esp, 0x0015848Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015848E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001584B9; /* je: equal / zero */

loc_00158497: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001584A4u); RECOMP_ABI_CALL(0x001C4620u, sub_001C4620); /* call 0x001C4620 */

loc_001584A4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001584B9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001584B9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001584C0
 * Original: 0x001584C0 - 0x0015851E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001584C0: ;
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
    PUSH32(esp, 0x001584EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001584EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158519; /* je: equal / zero */

loc_001584F7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158504u); RECOMP_ABI_CALL(0x001C46A0u, sub_001C46A0); /* call 0x001C46A0 */

loc_00158504: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158519u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158519: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158520
 * Original: 0x00158520 - 0x0015857F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158520: ;
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
    PUSH32(esp, 0x0015854Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015854E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015857A; /* je: equal / zero */

loc_00158557: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158565u); RECOMP_ABI_CALL(0x001C5620u, sub_001C5620); /* call 0x001C5620 */

loc_00158565: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015857Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015857A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158580
 * Original: 0x00158580 - 0x00158600 (128 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158580: ;
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
    PUSH32(esp, 0x001585AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001585AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001585FB; /* je: equal / zero */

loc_001585B7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001585E6u); RECOMP_ABI_CALL(0x00338190u, sub_00338190); /* call 0x00338190 */

loc_001585E6: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001585FBu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001585FB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158600
 * Original: 0x00158600 - 0x0015865E (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158600(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158600: ;
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
    PUSH32(esp, 0x0015862Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015862E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158659; /* je: equal / zero */

loc_00158637: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015864Au); RECOMP_ABI_CALL(0x003383C0u, sub_003383C0); /* call 0x003383C0 */

loc_0015864A: ;
    ecx = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158659u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158659: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158660
 * Original: 0x00158660 - 0x001586BE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158660: ;
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
    PUSH32(esp, 0x0015868Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015868E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001586B9; /* je: equal / zero */

loc_00158697: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001586A4u); RECOMP_ABI_CALL(0x00338440u, sub_00338440); /* call 0x00338440 */

loc_001586A4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001586B9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001586B9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001586C0
 * Original: 0x001586C0 - 0x0015871E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001586C0: ;
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
    PUSH32(esp, 0x001586EEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001586EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158719; /* je: equal / zero */

loc_001586F7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158704u); RECOMP_ABI_CALL(0x003384B0u, sub_003384B0); /* call 0x003384B0 */

loc_00158704: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158719u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158719: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158720
 * Original: 0x00158720 - 0x001587A0 (128 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158720(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158720: ;
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
    PUSH32(esp, 0x0015874Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015874E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015879B; /* je: equal / zero */

loc_00158757: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158786u); RECOMP_ABI_CALL(0x00338810u, sub_00338810); /* call 0x00338810 */

loc_00158786: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015879Bu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015879B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001587A0
 * Original: 0x001587A0 - 0x001587FE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001587A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001587A0: ;
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
    PUSH32(esp, 0x001587CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001587CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001587F9; /* je: equal / zero */

loc_001587D7: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001587E4u); RECOMP_ABI_CALL(0x00338750u, sub_00338750); /* call 0x00338750 */

loc_001587E4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001587F9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001587F9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158800
 * Original: 0x00158800 - 0x00158876 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158800(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158800: ;
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
    PUSH32(esp, 0x0015882Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015882E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158871; /* je: equal / zero */

loc_00158837: ;
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
    PUSH32(esp, 0x0015885Cu); RECOMP_ABI_CALL(0x003385E0u, sub_003385E0); /* call 0x003385E0 */

loc_0015885C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158871u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158871: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158880
 * Original: 0x00158880 - 0x001588E9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158880(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158880: ;
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
    PUSH32(esp, 0x001588AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001588AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001588E4; /* je: equal / zero */

loc_001588B7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001588CFu); RECOMP_ABI_CALL(0x00338690u, sub_00338690); /* call 0x00338690 */

loc_001588CF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001588E4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001588E4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001588F0
 * Original: 0x001588F0 - 0x00158959 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001588F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001588F0: ;
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
    PUSH32(esp, 0x0015891Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015891E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158954; /* je: equal / zero */

loc_00158927: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015893Fu); RECOMP_ABI_CALL(0x0033A140u, sub_0033A140); /* call 0x0033A140 */

loc_0015893F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158954u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158954: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158960
 * Original: 0x00158960 - 0x001589FE (158 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158960: ;
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
    PUSH32(esp, 0x0015898Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015898E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001589F9; /* je: equal / zero */

loc_00158997: ;
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
    PUSH32(esp, 0x001589E4u); RECOMP_ABI_CALL(0x0033A1D0u, sub_0033A1D0); /* call 0x0033A1D0 */

loc_001589E4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001589F9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001589F9: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158A00
 * Original: 0x00158A00 - 0x00158A76 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158A00: ;
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
    PUSH32(esp, 0x00158A2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00158A2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158A71; /* je: equal / zero */

loc_00158A37: ;
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
    PUSH32(esp, 0x00158A5Cu); RECOMP_ABI_CALL(0x0033A3A0u, sub_0033A3A0); /* call 0x0033A3A0 */

loc_00158A5C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158A71u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158A71: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158A80
 * Original: 0x00158A80 - 0x00158ADF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158A80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158A80: ;
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
    PUSH32(esp, 0x00158AAEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00158AAE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158ADA; /* je: equal / zero */

loc_00158AB7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158AC5u); RECOMP_ABI_CALL(0x0033F8B0u, sub_0033F8B0); /* call 0x0033F8B0 */

loc_00158AC5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158ADAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158ADA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158AE0
 * Original: 0x00158AE0 - 0x00158B69 (137 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158AE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158AE0: ;
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
    PUSH32(esp, 0x00158B0Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00158B0E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158B64; /* je: equal / zero */

loc_00158B17: ;
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
    PUSH32(esp, 0x00158B4Fu); RECOMP_ABI_CALL(0x0033A4A0u, sub_0033A4A0); /* call 0x0033A4A0 */

loc_00158B4F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158B64u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158B64: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158B70
 * Original: 0x00158B70 - 0x00158BD9 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158B70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158B70: ;
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
    PUSH32(esp, 0x00158B9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00158B9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158BD4; /* je: equal / zero */

loc_00158BA7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX8(MEM8(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158BBFu); RECOMP_ABI_CALL(0x00388990u, sub_00388990); /* call 0x00388990 */

loc_00158BBF: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158BD4u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158BD4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158BE0
 * Original: 0x00158BE0 - 0x00158C0F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158BE0(void)
{
    uint32_t ebp = g_ebp;

loc_00158BE0: ;
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
    PUSH32(esp, 0x00158BF5u); RECOMP_ABI_CALL(0x00142CB0u, sub_00142CB0); /* call 0x00142CB0 */

loc_00158BF5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158C0Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158C0A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158C10
 * Original: 0x00158C10 - 0x00158C6F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158C10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158C10: ;
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
    PUSH32(esp, 0x00158C3Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00158C3E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158C6A; /* je: equal / zero */

loc_00158C47: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158C55u); RECOMP_ABI_CALL(0x00149270u, sub_00149270); /* call 0x00149270 */

loc_00158C55: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158C6Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158C6A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158C70
 * Original: 0x00158C70 - 0x00158CD6 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158C70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158C70: ;
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
    PUSH32(esp, 0x00158CA5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00158CA5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158CD1; /* je: equal / zero */

loc_00158CAE: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158CBCu); RECOMP_ABI_CALL(0x00141A80u, sub_00141A80); /* call 0x00141A80 */

loc_00158CBC: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158CD1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158CD1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158CE0
 * Original: 0x00158CE0 - 0x00158D0F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158CE0(void)
{
    uint32_t ebp = g_ebp;

loc_00158CE0: ;
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
    PUSH32(esp, 0x00158CF5u); RECOMP_ABI_CALL(0x00143310u, sub_00143310); /* call 0x00143310 */

loc_00158CF5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D0Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158D0A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158D10
 * Original: 0x00158D10 - 0x00158D46 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D10(void)
{
    uint32_t ebp = g_ebp;

loc_00158D10: ;
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
    PUSH32(esp, 0x00158D2Cu); RECOMP_ABI_CALL(0x00143400u, sub_00143400); /* call 0x00143400 */

loc_00158D2C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D41u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158D41: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158D50
 * Original: 0x00158D50 - 0x00158D86 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D50(void)
{
    uint32_t ebp = g_ebp;

loc_00158D50: ;
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
    PUSH32(esp, 0x00158D6Cu); RECOMP_ABI_CALL(0x00143420u, sub_00143420); /* call 0x00143420 */

loc_00158D6C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D81u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158D81: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158D90
 * Original: 0x00158D90 - 0x00158DC6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D90(void)
{
    uint32_t ebp = g_ebp;

loc_00158D90: ;
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
    PUSH32(esp, 0x00158DACu); RECOMP_ABI_CALL(0x00143440u, sub_00143440); /* call 0x00143440 */

loc_00158DAC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158DC1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158DC1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158DD0
 * Original: 0x00158DD0 - 0x00158E06 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158DD0(void)
{
    uint32_t ebp = g_ebp;

loc_00158DD0: ;
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
    PUSH32(esp, 0x00158DECu); RECOMP_ABI_CALL(0x00143460u, sub_00143460); /* call 0x00143460 */

loc_00158DEC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158E01u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158E01: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158E10
 * Original: 0x00158E10 - 0x00158E46 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158E10(void)
{
    uint32_t ebp = g_ebp;

loc_00158E10: ;
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
    PUSH32(esp, 0x00158E2Cu); RECOMP_ABI_CALL(0x001433C0u, sub_001433C0); /* call 0x001433C0 */

loc_00158E2C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158E41u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158E41: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158E50
 * Original: 0x00158E50 - 0x00158E86 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158E50(void)
{
    uint32_t ebp = g_ebp;

loc_00158E50: ;
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
    PUSH32(esp, 0x00158E6Cu); RECOMP_ABI_CALL(0x00143340u, sub_00143340); /* call 0x00143340 */

loc_00158E6C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158E81u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158E81: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158E90
 * Original: 0x00158E90 - 0x00158EC6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158E90(void)
{
    uint32_t ebp = g_ebp;

loc_00158E90: ;
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
    PUSH32(esp, 0x00158EACu); RECOMP_ABI_CALL(0x00143380u, sub_00143380); /* call 0x00143380 */

loc_00158EAC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158EC1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158EC1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158ED0
 * Original: 0x00158ED0 - 0x00158F06 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158ED0(void)
{
    uint32_t ebp = g_ebp;

loc_00158ED0: ;
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
    PUSH32(esp, 0x00158EECu); RECOMP_ABI_CALL(0x001434C0u, sub_001434C0); /* call 0x001434C0 */

loc_00158EEC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F01u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158F01: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158F10
 * Original: 0x00158F10 - 0x00158F46 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158F10(void)
{
    uint32_t ebp = g_ebp;

loc_00158F10: ;
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
    PUSH32(esp, 0x00158F2Cu); RECOMP_ABI_CALL(0x001434E0u, sub_001434E0); /* call 0x001434E0 */

loc_00158F2C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F41u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158F41: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158F50
 * Original: 0x00158F50 - 0x00158F86 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158F50(void)
{
    uint32_t ebp = g_ebp;

loc_00158F50: ;
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
    PUSH32(esp, 0x00158F6Cu); RECOMP_ABI_CALL(0x00143480u, sub_00143480); /* call 0x00143480 */

loc_00158F6C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F81u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158F81: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158F90
 * Original: 0x00158F90 - 0x00158FC6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158F90(void)
{
    uint32_t ebp = g_ebp;

loc_00158F90: ;
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
    PUSH32(esp, 0x00158FACu); RECOMP_ABI_CALL(0x001434A0u, sub_001434A0); /* call 0x001434A0 */

loc_00158FAC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158FC1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00158FC1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00158FD0
 * Original: 0x00158FD0 - 0x00159006 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158FD0(void)
{
    uint32_t ebp = g_ebp;

loc_00158FD0: ;
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
    PUSH32(esp, 0x00158FECu); RECOMP_ABI_CALL(0x00143530u, sub_00143530); /* call 0x00143530 */

loc_00158FEC: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159001u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159001: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159010
 * Original: 0x00159010 - 0x00159046 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159010(void)
{
    uint32_t ebp = g_ebp;

loc_00159010: ;
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
    PUSH32(esp, 0x0015902Cu); RECOMP_ABI_CALL(0x00143500u, sub_00143500); /* call 0x00143500 */

loc_0015902C: ;
    MEM8(ebp + -4) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159041u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159041: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159050
 * Original: 0x00159050 - 0x001590C7 (119 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159050(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159050: ;
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
    PUSH32(esp, 0x0015907Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015907E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001590C2; /* je: equal / zero */

loc_00159087: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax);
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(ebp + -4);
    MEM32(esp) = edx;
    ecx = ZX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    eax = ZX8(MEM8(eax + 8));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001590ADu); RECOMP_ABI_CALL(0x0014C280u, sub_0014C280); /* call 0x0014C280 */

loc_001590AD: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001590C2u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001590C2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001590D0
 * Original: 0x001590D0 - 0x0015913D (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001590D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001590D0: ;
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
    PUSH32(esp, 0x001590FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001590FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159138; /* je: equal / zero */

loc_00159107: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159123u); RECOMP_ABI_CALL(0x0014AFA0u, sub_0014AFA0); /* call 0x0014AFA0 */

loc_00159123: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159138u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159138: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159140
 * Original: 0x00159140 - 0x001591A6 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159140(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159140: ;
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
    PUSH32(esp, 0x00159175u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159175: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001591A1; /* je: equal / zero */

loc_0015917E: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015918Cu); RECOMP_ABI_CALL(0x00171560u, sub_00171560); /* call 0x00171560 */

loc_0015918C: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001591A1u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001591A1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001591B0
 * Original: 0x001591B0 - 0x00159216 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001591B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001591B0: ;
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
    PUSH32(esp, 0x001591E5u); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001591E5: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159211; /* je: equal / zero */

loc_001591EE: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001591FCu); RECOMP_ABI_CALL(0x00171580u, sub_00171580); /* call 0x00171580 */

loc_001591FC: ;
    MEM8(ebp + -8) = LO8(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159211u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159211: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159220
 * Original: 0x00159220 - 0x0015927F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159220(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159220: ;
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
    PUSH32(esp, 0x0015924Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015924E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015927A; /* je: equal / zero */

loc_00159257: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159265u); RECOMP_ABI_CALL(0x00178D20u, sub_00178D20); /* call 0x00178D20 */

loc_00159265: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015927Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015927A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159280
 * Original: 0x00159280 - 0x001592AF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159280(void)
{
    uint32_t ebp = g_ebp;

loc_00159280: ;
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
    PUSH32(esp, 0x00159295u); RECOMP_ABI_CALL(0x00178D80u, sub_00178D80); /* call 0x00178D80 */

loc_00159295: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001592AAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001592AA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001592B0
 * Original: 0x001592B0 - 0x00159342 (146 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001592B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001592B0: ;
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
    PUSH32(esp, 0x001592DEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001592DE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015933D; /* je: equal / zero */

loc_001592E7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax + 8));
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    edx = ZX16(LO16(edx));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = ZX16(LO16(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159328u); RECOMP_ABI_CALL(0x0017C430u, sub_0017C430); /* call 0x0017C430 */

loc_00159328: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015933Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015933D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159350
 * Original: 0x00159350 - 0x001593DE (142 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159350(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159350: ;
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
    PUSH32(esp, 0x0015937Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015937E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001593D9; /* je: equal / zero */

loc_00159387: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    edx = ZX16(LO16(edx));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001593C4u); RECOMP_ABI_CALL(0x0017C4A0u, sub_0017C4A0); /* call 0x0017C4A0 */

loc_001593C4: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001593D9u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001593D9: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001593E0
 * Original: 0x001593E0 - 0x00159476 (150 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001593E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001593E0: ;
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
    PUSH32(esp, 0x0015940Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015940E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159471; /* je: equal / zero */

loc_00159417: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(eax));
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax + 8));
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    edx = ZX16(LO16(edx));
    MEM32(esp) = edx;
    ecx = ZX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    eax = ZX16(LO16(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015945Cu); RECOMP_ABI_CALL(0x0017C030u, sub_0017C030); /* call 0x0017C030 */

loc_0015945C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159471u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159471: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159480
 * Original: 0x00159480 - 0x00159512 (146 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159480: ;
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
    PUSH32(esp, 0x001594AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001594AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015950D; /* je: equal / zero */

loc_001594B7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(eax));
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    edx = ZX16(LO16(edx));
    MEM32(esp) = edx;
    ecx = ZX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594F8u); RECOMP_ABI_CALL(0x0017C090u, sub_0017C090); /* call 0x0017C090 */

loc_001594F8: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015950Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015950D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159520
 * Original: 0x00159520 - 0x00159589 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159520: ;
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
    PUSH32(esp, 0x0015954Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015954E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159584; /* je: equal / zero */

loc_00159557: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015956Fu); RECOMP_ABI_CALL(0x0017C500u, sub_0017C500); /* call 0x0017C500 */

loc_0015956F: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159584u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159584: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159590
 * Original: 0x00159590 - 0x001595F8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159590: ;
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
    PUSH32(esp, 0x001595BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001595BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001595F3; /* je: equal / zero */

loc_001595C7: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595DEu); RECOMP_ABI_CALL(0x0017C550u, sub_0017C550); /* call 0x0017C550 */

loc_001595DE: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595F3u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001595F3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159600
 * Original: 0x00159600 - 0x0015966D (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159600(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159600: ;
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
    PUSH32(esp, 0x0015962Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015962E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159668; /* je: equal / zero */

loc_00159637: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159653u); RECOMP_ABI_CALL(0x0017C340u, sub_0017C340); /* call 0x0017C340 */

loc_00159653: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159668u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159668: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159670
 * Original: 0x00159670 - 0x001596DC (108 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159670(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159670: ;
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
    PUSH32(esp, 0x0015969Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015969E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001596D7; /* je: equal / zero */

loc_001596A7: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596C2u); RECOMP_ABI_CALL(0x0017C400u, sub_0017C400); /* call 0x0017C400 */

loc_001596C2: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596D7u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001596D7: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001596E0
 * Original: 0x001596E0 - 0x0015970F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001596E0(void)
{
    uint32_t ebp = g_ebp;

loc_001596E0: ;
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
    PUSH32(esp, 0x001596F5u); RECOMP_ABI_CALL(0x00193760u, sub_00193760); /* call 0x00193760 */

loc_001596F5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015970Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015970A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159710
 * Original: 0x00159710 - 0x0015976F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159710: ;
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
    PUSH32(esp, 0x0015973Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015973E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015976A; /* je: equal / zero */

loc_00159747: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159755u); RECOMP_ABI_CALL(0x000FD620u, sub_000FD620); /* call 0x000FD620 */

loc_00159755: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015976Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015976A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159770
 * Original: 0x00159770 - 0x0015979F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159770(void)
{
    uint32_t ebp = g_ebp;

loc_00159770: ;
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
    PUSH32(esp, 0x00159785u); RECOMP_ABI_CALL(0x0034AA60u, sub_0034AA60); /* call 0x0034AA60 */

loc_00159785: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015979Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015979A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_001597A0
 * Original: 0x001597A0 - 0x00159842 (162 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001597A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001597A0: ;
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
    PUSH32(esp, 0x001597CEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001597CE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015983D; /* je: equal / zero */

loc_001597D7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159828u); RECOMP_ABI_CALL(0x0011E7C0u, sub_0011E7C0); /* call 0x0011E7C0 */

loc_00159828: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015983Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015983D: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159850
 * Original: 0x00159850 - 0x001598F2 (162 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159850(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159850: ;
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
    PUSH32(esp, 0x0015987Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015987E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001598ED; /* je: equal / zero */

loc_00159887: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001598D8u); RECOMP_ABI_CALL(0x0011E290u, sub_0011E290); /* call 0x0011E290 */

loc_001598D8: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001598EDu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_001598ED: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159900
 * Original: 0x00159900 - 0x00159982 (130 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159900(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159900: ;
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
    PUSH32(esp, 0x0015992Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015992E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015997D; /* je: equal / zero */

loc_00159937: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159968u); RECOMP_ABI_CALL(0x0011E320u, sub_0011E320); /* call 0x0011E320 */

loc_00159968: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015997Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015997D: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159990
 * Original: 0x00159990 - 0x00159A12 (130 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159990(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159990: ;
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
    PUSH32(esp, 0x001599BEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_001599BE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159A0D; /* je: equal / zero */

loc_001599C7: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001599F8u); RECOMP_ABI_CALL(0x0011E810u, sub_0011E810); /* call 0x0011E810 */

loc_001599F8: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159A0Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159A0D: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159A20
 * Original: 0x00159A20 - 0x00159A82 (98 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159A20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159A20: ;
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
    PUSH32(esp, 0x00159A4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159A4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159A7D; /* je: equal / zero */

loc_00159A57: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159A68u); RECOMP_ABI_CALL(0x0011E8E0u, sub_0011E8E0); /* call 0x0011E8E0 */

loc_00159A68: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159A7Du); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159A7D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159A90
 * Original: 0x00159A90 - 0x00159AEF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159A90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159A90: ;
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
    PUSH32(esp, 0x00159ABEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159ABE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AEA; /* je: equal / zero */

loc_00159AC7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159AD5u); RECOMP_ABI_CALL(0x0017E2B0u, sub_0017E2B0); /* call 0x0017E2B0 */

loc_00159AD5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159AEAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159AEA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159AF0
 * Original: 0x00159AF0 - 0x00159B4F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159AF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159AF0: ;
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
    PUSH32(esp, 0x00159B1Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159B1E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159B4A; /* je: equal / zero */

loc_00159B27: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B35u); RECOMP_ABI_CALL(0x0017E2F0u, sub_0017E2F0); /* call 0x0017E2F0 */

loc_00159B35: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B4Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159B4A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159B50
 * Original: 0x00159B50 - 0x00159BAF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159B50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159B50: ;
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
    PUSH32(esp, 0x00159B7Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159B7E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159BAA; /* je: equal / zero */

loc_00159B87: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B95u); RECOMP_ABI_CALL(0x0017E330u, sub_0017E330); /* call 0x0017E330 */

loc_00159B95: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BAAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159BAA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159BB0
 * Original: 0x00159BB0 - 0x00159C0F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159BB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159BB0: ;
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
    PUSH32(esp, 0x00159BDEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159BDE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159C0A; /* je: equal / zero */

loc_00159BE7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BF5u); RECOMP_ABI_CALL(0x0017E370u, sub_0017E370); /* call 0x0017E370 */

loc_00159BF5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C0Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159C0A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159C10
 * Original: 0x00159C10 - 0x00159C6F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159C10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159C10: ;
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
    PUSH32(esp, 0x00159C3Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159C3E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159C6A; /* je: equal / zero */

loc_00159C47: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C55u); RECOMP_ABI_CALL(0x0017E3B0u, sub_0017E3B0); /* call 0x0017E3B0 */

loc_00159C55: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C6Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159C6A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159C70
 * Original: 0x00159C70 - 0x00159CCF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159C70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159C70: ;
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
    PUSH32(esp, 0x00159C9Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159C9E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159CCA; /* je: equal / zero */

loc_00159CA7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159CB5u); RECOMP_ABI_CALL(0x0017E3F0u, sub_0017E3F0); /* call 0x0017E3F0 */

loc_00159CB5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159CCAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159CCA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159CD0
 * Original: 0x00159CD0 - 0x00159D2F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159CD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159CD0: ;
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
    PUSH32(esp, 0x00159CFEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159CFE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D2A; /* je: equal / zero */

loc_00159D07: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159D15u); RECOMP_ABI_CALL(0x00180FC0u, sub_00180FC0); /* call 0x00180FC0 */

loc_00159D15: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159D2Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159D2A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159D30
 * Original: 0x00159D30 - 0x00159D5F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159D30(void)
{
    uint32_t ebp = g_ebp;

loc_00159D30: ;
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
    PUSH32(esp, 0x00159D45u); RECOMP_ABI_CALL(0x00179B90u, sub_00179B90); /* call 0x00179B90 */

loc_00159D45: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159D5Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159D5A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159D60
 * Original: 0x00159D60 - 0x00159DBF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159D60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159D60: ;
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
    PUSH32(esp, 0x00159D8Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159D8E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159DBA; /* je: equal / zero */

loc_00159D97: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159DA5u); RECOMP_ABI_CALL(0x00178CA0u, sub_00178CA0); /* call 0x00178CA0 */

loc_00159DA5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159DBAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159DBA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159DC0
 * Original: 0x00159DC0 - 0x00159E1F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159DC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159DC0: ;
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
    PUSH32(esp, 0x00159DEEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159DEE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159E1A; /* je: equal / zero */

loc_00159DF7: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159E05u); RECOMP_ABI_CALL(0x00178DD0u, sub_00178DD0); /* call 0x00178DD0 */

loc_00159E05: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159E1Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159E1A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159E20
 * Original: 0x00159E20 - 0x00159E8D (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159E20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159E20: ;
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
    PUSH32(esp, 0x00159E4Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159E4E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159E88; /* je: equal / zero */

loc_00159E57: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159E73u); RECOMP_ABI_CALL(0x00178ED0u, sub_00178ED0); /* call 0x00178ED0 */

loc_00159E73: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159E88u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159E88: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159E90
 * Original: 0x00159E90 - 0x00159EFD (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159E90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159E90: ;
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
    PUSH32(esp, 0x00159EBEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159EBE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159EF8; /* je: equal / zero */

loc_00159EC7: ;
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 4));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159EE3u); RECOMP_ABI_CALL(0x00178F80u, sub_00178F80); /* call 0x00178F80 */

loc_00159EE3: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159EF8u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159EF8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159F00
 * Original: 0x00159F00 - 0x00159F7B (123 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159F00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159F00: ;
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
    PUSH32(esp, 0x00159F2Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159F2E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159F76; /* je: equal / zero */

loc_00159F37: ;
    eax = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(eax));
    eax = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(ebp + -4);
    edx = SX16(LO16(edx));
    MEM32(esp) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159F61u); RECOMP_ABI_CALL(0x00178FB0u, sub_00178FB0); /* call 0x00178FB0 */

loc_00159F61: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159F76u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159F76: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159F80
 * Original: 0x00159F80 - 0x00159FDF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159F80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159F80: ;
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
    PUSH32(esp, 0x00159FAEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_00159FAE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159FDA; /* je: equal / zero */

loc_00159FB7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159FC5u); RECOMP_ABI_CALL(0x00179030u, sub_00179030); /* call 0x00179030 */

loc_00159FC5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159FDAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_00159FDA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00159FE0
 * Original: 0x00159FE0 - 0x0015A03F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159FE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159FE0: ;
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
    PUSH32(esp, 0x0015A00Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015A00E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A03A; /* je: equal / zero */

loc_0015A017: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A025u); RECOMP_ABI_CALL(0x00179050u, sub_00179050); /* call 0x00179050 */

loc_0015A025: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A03Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A03A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0015A040
 * Original: 0x0015A040 - 0x0015A077 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A040(void)
{
    uint32_t ebp = g_ebp;

loc_0015A040: ;
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
    PUSH32(esp, 0x0015A05Cu); RECOMP_ABI_CALL(0x001790D0u, sub_001790D0); /* call 0x001790D0 */

loc_0015A05C: ;
    MEM16(ebp + -4) = LO16(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A072u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A072: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0015A080
 * Original: 0x0015A080 - 0x0015A0DF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A080(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A080: ;
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
    PUSH32(esp, 0x0015A0AEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015A0AE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A0DA; /* je: equal / zero */

loc_0015A0B7: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A0C5u); RECOMP_ABI_CALL(0x00179150u, sub_00179150); /* call 0x00179150 */

loc_0015A0C5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A0DAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A0DA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0015A0E0
 * Original: 0x0015A0E0 - 0x0015A13F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A0E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A0E0: ;
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
    PUSH32(esp, 0x0015A10Eu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015A10E: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A13A; /* je: equal / zero */

loc_0015A117: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A125u); RECOMP_ABI_CALL(0x00179190u, sub_00179190); /* call 0x00179190 */

loc_0015A125: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A13Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A13A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0015A140
 * Original: 0x0015A140 - 0x0015A16F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A140(void)
{
    uint32_t ebp = g_ebp;

loc_0015A140: ;
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
    PUSH32(esp, 0x0015A155u); RECOMP_ABI_CALL(0x001791D0u, sub_001791D0); /* call 0x001791D0 */

loc_0015A155: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A16Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A16A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0015A170
 * Original: 0x0015A170 - 0x0015A19F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A170(void)
{
    uint32_t ebp = g_ebp;

loc_0015A170: ;
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
    PUSH32(esp, 0x0015A185u); RECOMP_ABI_CALL(0x002582C0u, sub_002582C0); /* call 0x002582C0 */

loc_0015A185: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A19Au); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A19A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0015A1A0
 * Original: 0x0015A1A0 - 0x0015A1CF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A1A0(void)
{
    uint32_t ebp = g_ebp;

loc_0015A1A0: ;
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
    PUSH32(esp, 0x0015A1B5u); RECOMP_ABI_CALL(0x0025C8B0u, sub_0025C8B0); /* call 0x0025C8B0 */

loc_0015A1B5: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A1CAu); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A1CA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0015A1D0
 * Original: 0x0015A1D0 - 0x0015A296 (198 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A1D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A1D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
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
    PUSH32(esp, 0x0015A1FEu); RECOMP_ABI_CALL(0x00165250u, sub_00165250); /* call 0x00165250 */

loc_0015A1FE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A291; /* je: equal / zero */

loc_0015A20B: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm2.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A27Cu); RECOMP_ABI_CALL(0x002C8C80u, sub_002C8C80); /* call 0x002C8C80 */

loc_0015A27C: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015A291u); RECOMP_ABI_CALL(0x00164C80u, sub_00164C80); /* call 0x00164C80 */

loc_0015A291: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

