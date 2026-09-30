/* Generated ELF translation shard 43: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_00412650
 * Original: 0x00412650 - 0x00412688 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412650(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00412650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(0x43DB48);
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041267A; /* je: equal / zero */

loc_0041266A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412675u); RECOMP_ABI_CALL(0x00412690u, sub_00412690); /* call 0x00412690 */

loc_00412675: ;
    MEM32(ebp + -8) = eax;
    goto loc_00412680;

loc_0041267A: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_00412680: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412690
 * Original: 0x00412690 - 0x004126C2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412690(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0x18, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx & 0xFF00;
    eax = eax | ecx;
    ecx = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx & 0xFF0000;
    eax = eax | ecx;
    ecx = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 0x18, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004126D0
 * Original: 0x004126D0 - 0x0041270E (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004126D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004126D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(0x43DB48);
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004126FF; /* je: equal / zero */

loc_004126EB: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004126F7u); RECOMP_ABI_CALL(0x00412710u, sub_00412710); /* call 0x00412710 */

loc_004126F7: ;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -8) = eax;
    goto loc_00412706;

loc_004126FF: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(ebp + -8) = eax;

loc_00412706: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412710
 * Original: 0x00412710 - 0x00412729 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412710(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ZX16(MEM16(ebp + 8));
    ecx = RECOMP_SAR(ecx, 8, 32, NULL);
    eax = eax | ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412730
 * Original: 0x00412730 - 0x004127BD (141 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412730(void)
{
    uint32_t ebp = g_ebp;
    int _cf = 0; /* carry flag */

loc_00412730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    ecx = ZX16(MEM16(ecx + 4));
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    ecx = ZX16(MEM16(ecx + 4));
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -28) = ecx;
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = edx;
    edx = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    esi = MEM32(ebp + 0xC);
    esi = ZX16(MEM16(esi + 6));
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    SET_LO16(ecx, MEM16(ebp + -24));
    eax = MEM32(ebp + 8);
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -22));
    eax = MEM32(ebp + 8);
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -20));
    eax = MEM32(ebp + 8);
    MEM16(eax + 4) = LO16(ecx);
    eax = MEM32(ebp + -24);
    edx = ZX16(MEM16(ebp + -20));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004127C0
 * Original: 0x004127C0 - 0x00412816 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004127C0(void)
{
    uint32_t ebp = g_ebp;
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

loc_004127C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x838D2E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004127DCu); RECOMP_ABI_CALL(0x00412730u, sub_00412730); /* call 0x00412730 */

loc_004127DC: ;
    MEM32(ebp + -20) = eax;
    eax = edx;
    edx = MEM32(ebp + -20);
    ecx = edx;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | 0x3FF00000;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
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
 * sub_00412820
 * Original: 0x00412820 - 0x00412840 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412820(void)
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

loc_00412820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = 0x838D28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412833u); RECOMP_ABI_CALL(0x004127C0u, sub_004127C0); /* call 0x004127C0 */

loc_00412833: ;
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
 * sub_00412840
 * Original: 0x00412840 - 0x0041286B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412840(void)
{
    uint32_t ebp = g_ebp;

loc_00412840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0x838D28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412866u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00412866: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412870
 * Original: 0x00412870 - 0x00412899 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412870(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x838D2E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041288Cu); RECOMP_ABI_CALL(0x00412730u, sub_00412730); /* call 0x00412730 */

loc_0041288C: ;
    ecx = eax;
    eax = edx;
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, ecx, 0xF, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004128A0
 * Original: 0x004128A0 - 0x004128B9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004128A0(void)
{
    uint32_t ebp = g_ebp;

loc_004128A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0x838D28;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004128B4u); RECOMP_ABI_CALL(0x00412870u, sub_00412870); /* call 0x00412870 */

loc_004128B4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004128C0
 * Original: 0x004128C0 - 0x004128E9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004128C0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_004128C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x838D2E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004128DCu); RECOMP_ABI_CALL(0x00412730u, sub_00412730); /* call 0x00412730 */

loc_004128DC: ;
    ecx = eax;
    eax = edx;
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, ecx, 0x10, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004128F0
 * Original: 0x004128F0 - 0x00412909 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004128F0(void)
{
    uint32_t ebp = g_ebp;

loc_004128F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0x838D28;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412904u); RECOMP_ABI_CALL(0x004128C0u, sub_004128C0); /* call 0x004128C0 */

loc_00412904: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412910
 * Original: 0x00412910 - 0x0041292B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412910(void)
{
    uint32_t ebp = g_ebp;

loc_00412910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax--;
    MEM32(0xDFC350) = eax;
    MEM32(0xDFC354) = 0;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412930
 * Original: 0x00412930 - 0x0041297E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412930(void)
{
    uint32_t ebp = g_ebp;
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0xDFC354);
    MEM32(ebp + -8) = eax;
    esi = MEM32(0xDFC350);
    ecx = 0x4C957F2D;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = edx;
    edx = MEM32(ebp + -8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5851F42D);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C957F2D);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(0xDFC350) = ecx;
    MEM32(0xDFC354) = eax;
    eax = MEM32(0xDFC354);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412980
 * Original: 0x00412980 - 0x004129AB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412980(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x41C64E6D);
    eax = eax + 0x3039;
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004129A4u); RECOMP_ABI_CALL(0x004129B0u, sub_004129B0); /* call 0x004129B0 */

loc_004129A4: ;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004129B0
 * Original: 0x004129B0 - 0x004129F5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004129B0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_004129B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0xB, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax ^ MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 7, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x9D2C5680u;
    eax = eax ^ MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0xF, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0xEFC60000u;
    eax = eax ^ MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0x12, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax ^ MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412A00
 * Original: 0x00412A00 - 0x00412A35 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412A00(void)
{
    uint32_t ebp = g_ebp;

loc_00412A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412A17u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00412A17: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412A22u); RECOMP_ABI_CALL(0x00412A40u, sub_00412A40); /* call 0x00412A40 */

loc_00412A22: ;
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412A30u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00412A30: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412A40
 * Original: 0x00412A40 - 0x00412AFF (191 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412A40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00412A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = 0;
    _fa = (uint32_t)(MEM32(0x838D38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838D38), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00412A6E; /* jne: not equal / not zero */

loc_00412A5F: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(0x838D3C);
    MEM32(eax) = ecx;
    goto loc_00412AFA;

loc_00412A6E: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(0x838D38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838D38), 0x1F (32-bit) */
    MEM8(ebp + -17) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00412A89; /* je: equal / zero */

loc_00412A7C: ;
    _fa = (uint32_t)(MEM32(0x838D38)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838D38), 7 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -17) = LO8(eax);

loc_00412A89: ;
    SET_LO8(edx, MEM8(ebp + -17));
    eax = 1;
    ecx = 3;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(0x838D40) = eax;
    MEM32(0xDFC35C) = 0;
    MEM32(ebp + -4) = 0;

loc_00412AB2: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x838D38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x838D38) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00412AEE; /* jge: greater or equal (signed >=) */

loc_00412ABD: ;
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412ACFu); RECOMP_ABI_CALL(0x00412D50u, sub_00412D50); /* call 0x00412D50 */

loc_00412ACF: ;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -16) = eax;
    edx = MEM32(ebp + -12);
    eax = MEM32(0x838D3C);
    ecx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_00412AB2;

loc_00412AEE: ;
    eax = MEM32(0x838D3C);
    ecx = MEM32(eax);
    ecx = ecx | 1;
    MEM32(eax) = ecx;

loc_00412AFA: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412B00
 * Original: 0x00412B00 - 0x00412BCC (204 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412B00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00412B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00412B21; /* jae: above or equal (unsigned >=) */

loc_00412B15: ;
    MEM32(ebp + -4) = 0;
    goto loc_00412BC4;

loc_00412B21: ;
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412B2Fu); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00412B2F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412B34u); RECOMP_ABI_CALL(0x00412D90u, sub_00412D90); /* call 0x00412D90 */

loc_00412B34: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00412B49; /* jae: above or equal (unsigned >=) */

loc_00412B3D: ;
    MEM32(0x838D38) = 0;
    goto loc_00412B95;

loc_00412B49: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00412B5B; /* jae: above or equal (unsigned >=) */

loc_00412B4F: ;
    MEM32(0x838D38) = 7;
    goto loc_00412B93;

loc_00412B5B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x80 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00412B70; /* jae: above or equal (unsigned >=) */

loc_00412B64: ;
    MEM32(0x838D38) = 0xF;
    goto loc_00412B91;

loc_00412B70: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00412B85; /* jae: above or equal (unsigned >=) */

loc_00412B79: ;
    MEM32(0x838D38) = 0x1F;
    goto loc_00412B8F;

loc_00412B85: ;
    MEM32(0x838D38) = 0x3F;

loc_00412B8F: ;
    goto loc_00412B91;

loc_00412B91: ;
    goto loc_00412B93;

loc_00412B93: ;
    goto loc_00412B95;

loc_00412B95: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 4;
    MEM32(0x838D3C) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412BABu); RECOMP_ABI_CALL(0x00412A40u, sub_00412A40); /* call 0x00412A40 */

loc_00412BAB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412BB0u); RECOMP_ABI_CALL(0x00412D90u, sub_00412D90); /* call 0x00412D90 */

loc_00412BB0: ;
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412BBEu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00412BBE: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_00412BC4: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412BD0
 * Original: 0x00412BD0 - 0x00412C10 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412BD0(void)
{
    uint32_t ebp = g_ebp;

loc_00412BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412BE7u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00412BE7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412BECu); RECOMP_ABI_CALL(0x00412D90u, sub_00412D90); /* call 0x00412D90 */

loc_00412BEC: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412BFAu); RECOMP_ABI_CALL(0x00412C10u, sub_00412C10); /* call 0x00412C10 */

loc_00412BFA: ;
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412C08u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00412C08: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412C10
 * Original: 0x00412C10 - 0x00412C5A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412C10(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(0x838D3C) = eax;
    eax = MEM32(0x838D3C);
    eax = MEM32(eax + -4);
    _shift_result = RECOMP_SHIFT(eax, 0x10, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(0x838D38) = eax;
    eax = MEM32(0x838D3C);
    eax = MEM32(eax + -4);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0xFF;
    MEM32(0x838D40) = eax;
    eax = MEM32(0x838D3C);
    eax = MEM32(eax + -4);
    eax = eax & 0xFF;
    MEM32(0xDFC35C) = eax;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412C60
 * Original: 0x00412C60 - 0x00412D21 (193 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412C60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412C74u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00412C74: ;
    _fa = (uint32_t)(MEM32(0x838D38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838D38), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00412C99; /* jne: not equal / not zero */

loc_00412C7D: ;
    eax = MEM32(0x838D3C);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412C8Cu); RECOMP_ABI_CALL(0x00412D30u, sub_00412D30); /* call 0x00412D30 */

loc_00412C8C: ;
    ecx = MEM32(0x838D3C);
    MEM32(ecx) = eax;
    MEM32(ebp + -4) = eax;
    goto loc_00412D0B;

loc_00412C99: ;
    eax = MEM32(0x838D3C);
    ecx = MEM32(0xDFC35C);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(0x838D3C);
    ecx = MEM32(0x838D40);
    edx = edx + MEM32(eax + ecx * 4);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(0x838D3C);
    ecx = MEM32(0x838D40);
    eax = MEM32(eax + ecx * 4);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -4) = eax;
    eax = MEM32(0x838D40);
    eax = eax + 1;
    MEM32(0x838D40) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x838D38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x838D38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00412CEA; /* jne: not equal / not zero */

loc_00412CE0: ;
    MEM32(0x838D40) = 0;

loc_00412CEA: ;
    eax = MEM32(0xDFC35C);
    eax = eax + 1;
    MEM32(0xDFC35C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x838D38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x838D38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00412D09; /* jne: not equal / not zero */

loc_00412CFF: ;
    MEM32(0xDFC35C) = 0;

loc_00412D09: ;
    goto loc_00412D0B;

loc_00412D0B: ;
    eax = 0xDFC358;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412D19u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00412D19: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412D30
 * Original: 0x00412D30 - 0x00412D49 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412D30(void)
{
    uint32_t ebp = g_ebp;

loc_00412D30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)MEM32(ebp + 8) * (int32_t)0x41C64E6D);
    eax = eax + 0x3039;
    eax = eax & 0x7FFFFFFF;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412D50
 * Original: 0x00412D50 - 0x00412D83 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412D50(void)
{
    uint32_t ebp = g_ebp;
    int _cf = 0; /* carry flag */

loc_00412D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = 0x4C957F2D;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5851F42D);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C957F2D);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412D90
 * Original: 0x00412D90 - 0x00412DBE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412D90(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00412D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x838D38);
    _shift_result = RECOMP_SHIFT(ecx, 0x10, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(0x838D40);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    ecx = ecx | MEM32(0xDFC35C);
    eax = MEM32(0x838D3C);
    MEM32(eax + -4) = ecx;
    eax = MEM32(0x838D3C);
    eax = eax + 0xFFFFFFFCu;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412DC0
 * Original: 0x00412DC0 - 0x00412E11 (81 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412DC0(void)
{
    uint32_t ebp = g_ebp;

loc_00412DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = 0xDFC360;
    eax = 0x838D28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412DE9u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00412DE9: ;
    eax = MEM32(ebp + 8);
    ecx = 0x838D28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412E06u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00412E06: ;
    eax = 0xDFC360;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412E20
 * Original: 0x00412E20 - 0x00412E50 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412E20(void)
{
    uint32_t ebp = g_ebp;

loc_00412E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -6) = 0x330E;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -4) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = RECOMP_SAR(eax, 0x10, 32, NULL);
    MEM16(ebp + -2) = LO16(eax);
    eax = ebp + -6;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412E4Bu); RECOMP_ABI_CALL(0x00412DC0u, sub_00412DC0); /* call 0x00412DC0 */

loc_00412E4B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412E50
 * Original: 0x00412E50 - 0x00412EAE (94 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412E50(void)
{
    uint32_t ebp = g_ebp;

loc_00412E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = edi;
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412E9Eu); RECOMP_ABI_CALL(0x00412EB0u, sub_00412EB0); /* call 0x00412EB0 */

loc_00412E9E: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412EA6u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00412EA6: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412EB0
 * Original: 0x00412EB0 - 0x00412F4B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412EB0(void)
{
    uint32_t ebp = g_ebp;

loc_00412EB0: ;
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
    PUSH32(esp, 0x00412F43u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00412F43: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412F50
 * Original: 0x00412F50 - 0x00412FAF (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412F50(void)
{
    uint32_t ebp = g_ebp;

loc_00412F50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x18);
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = edi;
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412FA1u); RECOMP_ABI_CALL(0x00412EB0u, sub_00412EB0); /* call 0x00412EB0 */

loc_00412FA1: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412FB0
 * Original: 0x00412FB0 - 0x00412FE5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412FB0(void)
{
    uint32_t ebp = g_ebp;

loc_00412FB0: ;
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
    PUSH32(esp, 0x00412FD8u); RECOMP_ABI_CALL(0x00412FF0u, sub_00412FF0); /* call 0x00412FF0 */

loc_00412FD8: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00412FE0u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00412FE0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00412FF0
 * Original: 0x00412FF0 - 0x0041308E (158 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00412FF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00412FF0: ;
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
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = edi;
    eax = esp;
    MEM32(ebp + -28) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413041u); RECOMP_ABI_CALL(0x00412EB0u, sub_00412EB0); /* call 0x00412EB0 */

loc_00413041: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00413052; /* jge: greater or equal (signed >=) */

loc_0041304A: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    goto loc_00413083;

loc_00413052: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041307C; /* jae: above or equal (unsigned >=) */

loc_0041305A: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + MEM32(ebp + -20);
    eax = MEM32(ebp + 0xC);
    eax = eax - MEM32(ebp + -20);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041307Cu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0041307C: ;
    MEM32(ebp + -16) = 0;

loc_00413083: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413090
 * Original: 0x00413090 - 0x004130C6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413090(void)
{
    uint32_t ebp = g_ebp;

loc_00413090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004130BBu); RECOMP_ABI_CALL(0x00412FF0u, sub_00412FF0); /* call 0x00412FF0 */

loc_004130BB: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004130D0
 * Original: 0x004130D0 - 0x0041314D (125 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004130D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_004130D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = 0;

loc_004130F0: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00413145; /* jae: above or equal (unsigned >=) */

loc_004130F8: ;
    MEM32(ebp + -8) = 0;

loc_004130FF: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00413138; /* jae: above or equal (unsigned >=) */

loc_00413105: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + -8);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041312B; /* je: equal / zero */

loc_00413122: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;

loc_0041312B: ;
    goto loc_0041312D;

loc_0041312D: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_004130FF;

loc_00413138: ;
    goto loc_0041313A;

loc_0041313A: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_004130F0;

loc_00413145: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413150
 * Original: 0x00413150 - 0x00413188 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413150(void)
{
    uint32_t ebp = g_ebp;

loc_00413150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041317Bu); RECOMP_ABI_CALL(0x00413190u, sub_00413190); /* call 0x00413190 */

loc_0041317B: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413183u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413183: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413190
 * Original: 0x00413190 - 0x0041320F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413190(void)
{
    uint32_t ebp = g_ebp;

loc_00413190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413208u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00413208: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413210
 * Original: 0x00413210 - 0x00413248 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413210(void)
{
    uint32_t ebp = g_ebp;

loc_00413210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041323Bu); RECOMP_ABI_CALL(0x00413190u, sub_00413190); /* call 0x00413190 */

loc_0041323B: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413243u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413243: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413250
 * Original: 0x00413250 - 0x004132BB (107 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413250(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00413250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    edx = 0; /* xor self */
    ecx = ebp + -12;
    eax = esp;
    MEM32(ebp + -16) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413294u); RECOMP_ABI_CALL(0x004132C0u, sub_004132C0); /* call 0x004132C0 */

loc_00413294: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004132A5; /* jne: not equal / not zero */

loc_0041329D: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    goto loc_004132B3;

loc_004132A5: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004132B0u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004132B0: ;
    MEM32(ebp + -4) = eax;

loc_004132B3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004132C0
 * Original: 0x004132C0 - 0x0041335B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004132C0(void)
{
    uint32_t ebp = g_ebp;

loc_004132C0: ;
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
    PUSH32(esp, 0x00413353u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00413353: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413360
 * Original: 0x00413360 - 0x0041337D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413360(void)
{
    uint32_t ebp = g_ebp;

loc_00413360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0xFFFFFFDAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413378u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413378: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413380
 * Original: 0x00413380 - 0x0041339A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413380(void)
{
    uint32_t ebp = g_ebp;

loc_00413380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0xFFFFFFDAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413395u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413395: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004133A0
 * Original: 0x004133A0 - 0x004133EA (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004133A0(void)
{
    uint32_t ebp = g_ebp;

loc_004133A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004133DBu); RECOMP_ABI_CALL(0x004133F0u, sub_004133F0); /* call 0x004133F0 */

loc_004133DB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004133E3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004133E3: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004133F0
 * Original: 0x004133F0 - 0x0041347B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004133F0(void)
{
    uint32_t ebp = g_ebp;

loc_004133F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413473u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00413473: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413480
 * Original: 0x00413480 - 0x0041349D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413480(void)
{
    uint32_t ebp = g_ebp;

loc_00413480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0xFFFFFFDAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413498u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413498: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004134A0
 * Original: 0x004134A0 - 0x004134C0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004134A0(void)
{
    uint32_t ebp = g_ebp;

loc_004134A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0xFFFFFFDAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004134BBu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004134BB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004134C0
 * Original: 0x004134C0 - 0x004134E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004134C0(void)
{
    uint32_t ebp = g_ebp;

loc_004134C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004134DAu); RECOMP_ABI_CALL(0x004134F0u, sub_004134F0); /* call 0x004134F0 */

loc_004134DA: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004134E2u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004134E2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004134F0
 * Original: 0x004134F0 - 0x00413567 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004134F0(void)
{
    uint32_t ebp = g_ebp;

loc_004134F0: ;
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
    PUSH32(esp, 0x00413562u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00413562: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413570
 * Original: 0x00413570 - 0x0041363E (206 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413570(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00413570: ;
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
    eax = MEM32(ebp + 8);
    MEM32(ebp + -36) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004135C6; /* jl: less (signed <) */

loc_0041359C: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0x3E8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = 0x3E8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)edx * (int32_t)0xF4240);
    MEM32(ebp + -16) = eax;
    eax = ebp + -20;
    MEM32(ebp + -40) = eax;
    goto loc_004135CD;

loc_004135C6: ;
    eax = 0; /* xor self */
    MEM32(ebp + -40) = eax;
    goto loc_004135CD;

loc_004135CD: ;
    edx = MEM32(ebp + -32);
    esi = MEM32(ebp + -28);
    edi = MEM32(ebp + -24);
    ebx = MEM32(ebp + -40);
    ecx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 8;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x49;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041362Eu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0041362E: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413636u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413636: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413640
 * Original: 0x00413640 - 0x00413744 (260 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00413640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x7C;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041366B; /* je: equal / zero */

loc_0041365B: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -40) = eax;
    goto loc_00413677;

loc_0041366B: ;
    eax = 0; /* xor self */
    ecx = eax;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -40) = eax;
    goto loc_00413677;

loc_00413677: ;
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + -40);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00413694; /* je: equal / zero */

loc_00413689: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 8);
    MEM32(ebp + -48) = eax;
    goto loc_0041369B;

loc_00413694: ;
    eax = 0; /* xor self */
    MEM32(ebp + -48) = eax;
    goto loc_0041369B;

loc_0041369B: ;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -64) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + -60) = eax;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -56) = ecx;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004136CF; /* je: equal / zero */

loc_004136BB: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -32) = eax;
    eax = ebp + -36;
    MEM32(ebp + -68) = eax;
    goto loc_004136D6;

loc_004136CF: ;
    eax = 0; /* xor self */
    MEM32(ebp + -68) = eax;
    goto loc_004136D6;

loc_004136D6: ;
    edi = MEM32(ebp + -52);
    ebx = MEM32(ebp + -68);
    esi = 0; /* xor self */
    ecx = esi;
    edx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(eax + 0x24) = esi;
    esi = MEM32(ebp + -56);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ebp + -60);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 8;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x49;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413734u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_00413734: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041373Cu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0041373C: ;
    esp = esp + 0x7C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413750
 * Original: 0x00413750 - 0x0041388E (318 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413750(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00413750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x9C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = 0;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -24) = 8;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041379F; /* je: equal / zero */

loc_0041378F: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -60) = ecx;
    MEM32(ebp + -56) = eax;
    goto loc_004137AB;

loc_0041379F: ;
    eax = 0; /* xor self */
    ecx = eax;
    MEM32(ebp + -60) = ecx;
    MEM32(ebp + -56) = eax;
    goto loc_004137AB;

loc_004137AB: ;
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + -56);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004137C8; /* je: equal / zero */

loc_004137BD: ;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax + 8);
    MEM32(ebp + -64) = eax;
    goto loc_004137CF;

loc_004137C8: ;
    eax = 0; /* xor self */
    MEM32(ebp + -64) = eax;
    goto loc_004137CF;

loc_004137CF: ;
    eax = MEM32(ebp + -64);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -96) = eax;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -88) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + -84) = eax;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -80) = ecx;
    ecx = eax;
    MEM32(ebp + -76) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -72) = ecx;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041381A; /* je: equal / zero */

loc_00413806: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -48) = eax;
    eax = ebp + -52;
    MEM32(ebp + -100) = eax;
    goto loc_00413821;

loc_0041381A: ;
    eax = 0; /* xor self */
    MEM32(ebp + -100) = eax;
    goto loc_00413821;

loc_00413821: ;
    ebx = MEM32(ebp + -80);
    ecx = MEM32(ebp + -100);
    edx = 0; /* xor self */
    edi = edx;
    esi = ebp + -32;
    eax = esp;
    MEM32(eax + 0x34) = edi;
    edi = MEM32(ebp + -84);
    MEM32(eax + 0x30) = esi;
    esi = MEM32(ebp + -88);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ebp + -92);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -72);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -76);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -96);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041387Bu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0041387B: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413883u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413883: ;
    esp = esp + 0x9C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413890
 * Original: 0x00413890 - 0x00413ADA (586 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413890(void)
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

loc_00413890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xAC));
    esp = esp - 0xAC;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004138C1; /* je: equal / zero */

loc_004138B1: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -80) = ecx;
    MEM32(ebp + -76) = eax;
    goto loc_004138CD;

loc_004138C1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx = eax;
    MEM32(ebp + -80) = ecx;
    MEM32(ebp + -76) = eax;
    goto loc_004138CD;

loc_004138CD: ;
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -76);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004138F0; /* je: equal / zero */

loc_004138DF: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -88) = ecx;
    MEM32(ebp + -84) = eax;
    goto loc_004138FC;

loc_004138F0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx = eax;
    MEM32(ebp + -88) = ecx;
    MEM32(ebp + -84) = eax;
    goto loc_004138FC;

loc_004138FC: ;
    ecx = MEM32(ebp + -88);
    eax = MEM32(ebp + -84);
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -44) = 0x7FFFFFFF;
    MEM32(ebp + -48) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00413928; /* js: sign (negative) */

loc_0041391D: ;
    goto loc_0041391F;

loc_0041391F: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_0041393C; /* jns: not sign (positive) */

loc_00413926: ;
    goto loc_00413928;

loc_00413928: ;
    MEM32(esp) = 0xFFFFFFEAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413934u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413934: ;
    MEM32(ebp + -16) = eax;
    goto loc_00413ACC;

loc_0041393C: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0xF4240;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041395Cu); RECOMP_ABI_CALL(0x0043CFF0u, sub_0043CFF0); /* call 0x0043CFF0 */

loc_0041395C: ;
    esi = eax;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x7FFFFFFF;
    ecx = ~ecx;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    {
      _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      eax = _sbb_result;
    } /* sbb */
    if (!(_sbb_sf != _sbb_of)) goto loc_00413998; /* jge: greater or equal (signed >=) */

loc_00413971: ;
    goto loc_00413973;

loc_00413973: ;
    MEM32(ebp + -20) = 0x7FFFFFFF;
    MEM32(ebp + -24) = 0xFFFFFFFFu;
    MEM32(ebp + -28) = 0;
    MEM32(ebp + -32) = 0xF423F;
    MEM32(ebp + -36) = 0x3B9AC9FF;
    goto loc_004139FC;

loc_00413998: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0xF4240;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004139B8u); RECOMP_ABI_CALL(0x0043CFF0u, sub_0043CFF0); /* call 0x0043CFF0 */

loc_004139B8: ;
    esi = eax;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0xF4240;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004139EAu); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_004139EA: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    MEM32(ebp + -36) = eax;

loc_004139FC: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -120) = eax;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -112) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -108) = eax;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -104) = ecx;
    ecx = eax;
    MEM32(ebp + -100) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -96) = ecx;
    MEM32(ebp + -92) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00413A41; /* je: equal / zero */

loc_00413A2D: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -52) = eax;
    eax = ebp + -56;
    MEM32(ebp + -124) = eax;
    goto loc_00413A48;

loc_00413A41: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -124) = eax;
    goto loc_00413A48;

loc_00413A48: ;
    ebx = MEM32(ebp + -104);
    ecx = MEM32(ebp + -124);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(ebp + -68) = 0;
    MEM32(ebp + -72) = 0;
    MEM32(ebp + -60) = 0;
    MEM32(ebp + -64) = 8;
    edi = edx;
    esi = ebp + -72;
    eax = esp;
    MEM32(ebp + -128) = eax;
    MEM32(eax + 0x34) = edi;
    edi = MEM32(ebp + -108);
    MEM32(eax + 0x30) = esi;
    esi = MEM32(ebp + -112);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ebp + -116);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -92);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -96);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -120);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413AC1u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_00413AC1: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413AC9u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413AC9: ;
    MEM32(ebp + -16) = eax;

loc_00413ACC: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xAC)) >> 32) & 1);
    esp = esp + 0xAC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413ADC
 * Original: 0x00413ADC - 0x00413AFC (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413ADC(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00413ADC: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    ebx = MEM32(edx);
    esi = MEM32(edx + 4);
    edi = MEM32(edx + 8);
    ebp = MEM32(edx + 0xC);
    esp = MEM32(edx + 0x10);
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}


/**
 * sub_00413AFC
 * Original: 0x00413AFC - 0x00413B20 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413AFC(void)
{
    uint32_t ebp = g_ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00413AFC: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebp;
    ecx = esp + 4;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp);
    MEM32(eax + 0x14) = ecx;
    eax = 0; /* xor self */
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413B20
 * Original: 0x00413B20 - 0x00413B7A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413B20(void)
{
    uint32_t ebp = g_ebp;

loc_00413B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 8);
    edi = 0; /* xor self */
    edx = edi;
    ecx = 0x507F90;
    esi = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x87;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413B73u); RECOMP_ABI_CALL(0x00413B80u, sub_00413B80); /* call 0x00413B80 */

loc_00413B73: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413B80
 * Original: 0x00413B80 - 0x00413C2B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413B80(void)
{
    uint32_t ebp = g_ebp;

loc_00413B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413C23u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00413C23: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413C30
 * Original: 0x00413C30 - 0x00413C8A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413C30(void)
{
    uint32_t ebp = g_ebp;

loc_00413C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 8);
    edi = 0; /* xor self */
    edx = edi;
    ecx = 0x507F98;
    esi = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x87;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413C83u); RECOMP_ABI_CALL(0x00413B80u, sub_00413B80); /* call 0x00413B80 */

loc_00413C83: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413C90
 * Original: 0x00413C90 - 0x00413CE7 (87 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413C90(void)
{
    uint32_t ebp = g_ebp;

loc_00413C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 2;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x87;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413CE2u); RECOMP_ABI_CALL(0x00413B80u, sub_00413B80); /* call 0x00413B80 */

loc_00413CE2: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413CF0
 * Original: 0x00413CF0 - 0x00413D89 (153 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413CF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00413CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -24;
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x66;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413D2Bu); RECOMP_ABI_CALL(0x00413D90u, sub_00413D90); /* call 0x00413D90 */

loc_00413D2B: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00413D77; /* jne: not equal / not zero */

loc_00413D34: ;
    edx = MEM32(ebp + -24);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebp + -20);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(ebp + -16);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(ebp + -12);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;

loc_00413D77: ;
    eax = MEM32(ebp + -28);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413D82u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413D82: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413D90
 * Original: 0x00413D90 - 0x00413E1B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413D90(void)
{
    uint32_t ebp = g_ebp;

loc_00413D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413E13u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00413E13: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413E20
 * Original: 0x00413E20 - 0x00413E6D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413E20(void)
{
    uint32_t ebp = g_ebp;

loc_00413E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x81;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413E5Eu); RECOMP_ABI_CALL(0x00413E70u, sub_00413E70); /* call 0x00413E70 */

loc_00413E5E: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413E66u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00413E66: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413E70
 * Original: 0x00413E70 - 0x00413EFB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413E70(void)
{
    uint32_t ebp = g_ebp;

loc_00413E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413EF3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00413EF3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413F00
 * Original: 0x00413F00 - 0x00413F45 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413F00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00413F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00413F26; /* jge: greater or equal (signed >=) */

loc_00413F12: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413F17u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00413F17: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00413F3D;

loc_00413F26: ;
    ecx = 0; /* xor self */
    ecx = ecx - MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413F3Au); RECOMP_ABI_CALL(0x00413E20u, sub_00413E20); /* call 0x00413E20 */

loc_00413F3A: ;
    MEM32(ebp + -4) = eax;

loc_00413F3D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413F50
 * Original: 0x00413F50 - 0x00413F75 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413F50(void)
{
    uint32_t ebp = g_ebp;

loc_00413F50: ;
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
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413F70u); RECOMP_ABI_CALL(0x00413F80u, sub_00413F80); /* call 0x00413F80 */

loc_00413F70: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00413F80
 * Original: 0x00413F80 - 0x0041408B (267 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413F80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00413F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0x838DC4;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413FA2u); RECOMP_ABI_CALL(0x0042A510u, sub_0042A510); /* call 0x0042A510 */

loc_00413FA2: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00413FC0; /* jl: less (signed <) */

loc_00413FB0: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413FBBu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00413FBB: ;
    MEM32(ebp + -36) = eax;
    goto loc_00413FC7;

loc_00413FC0: ;
    eax = 0; /* xor self */
    MEM32(ebp + -36) = eax;
    goto loc_00413FC7;

loc_00413FC7: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x84);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x48);
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00413FE7u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00413FE7: ;
    eax = MEM32(eax);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00414000; /* je: equal / zero */

loc_00413FF8: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -44) = eax;
    goto loc_0041400B;

loc_00414000: ;
    eax = 0x452F3B;
    MEM32(ebp + -44) = eax;
    goto loc_0041400B;

loc_0041400B: ;
    edi = MEM32(ebp + -40);
    edx = MEM32(ebp + -44);
    esi = MEM32(ebp + 0xC);
    ecx = 0x452F3B;
    eax = 0x4901B9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = eax; /* cmovne */
    eax = MEM32(ebp + -16);
    esi = 0x483492;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414047u); RECOMP_ABI_CALL(0x0041AA40u, sub_0041AA40); /* call 0x0041AA40 */

loc_00414047: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0041405C; /* jl: less (signed <) */

loc_0041404C: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414057u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00414057: ;
    ecx = MEM32(ebp + -48);
    MEM32(eax) = ecx;

loc_0041405C: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x84) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00414082; /* je: equal / zero */

loc_00414077: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414082u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00414082: ;
    goto loc_00414084;

loc_00414084: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414090
 * Original: 0x00414090 - 0x0041410E (126 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414090(void)
{
    uint32_t ebp = g_ebp;

loc_00414090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0xA0;
    eax = MEM32(ebp + 8);
    eax = esp;
    ecx = ebp + -136;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004140ADu); RECOMP_ABI_CALL(0x00413C30u, sub_00413C30); /* call 0x00413C30 */

loc_004140AD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004140B2u); RECOMP_ABI_CALL(0x004141A0u, sub_004141A0); /* call 0x004141A0 */

loc_004140B2: ;
    ecx = MEM32(eax + 0x18);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 8);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x82;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004140E2u); RECOMP_ABI_CALL(0x00414110u, sub_00414110); /* call 0x00414110 */

loc_004140E2: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004140EAu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004140EA: ;
    MEM32(ebp + -140) = eax;
    eax = ebp + -136;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004140FEu); RECOMP_ABI_CALL(0x00413C90u, sub_00413C90); /* call 0x00413C90 */

loc_004140FE: ;
    eax = MEM32(ebp + -140);
    esp = esp + 0xA0;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414110
 * Original: 0x00414110 - 0x0041419B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414110(void)
{
    uint32_t ebp = g_ebp;

loc_00414110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414193u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00414193: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004141A0
 * Original: 0x004141A0 - 0x004141B0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004141A0(void)
{
    uint32_t ebp = g_ebp;

loc_004141A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004141ABu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_004141AB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004141B0
 * Original: 0x004141B0 - 0x004141B5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004141B0(void)
{
    uint32_t ebp = g_ebp;

loc_004141B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004141C0
 * Original: 0x004141C0 - 0x004141C5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004141C0(void)
{
    uint32_t ebp = g_ebp;

loc_004141C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004141D0
 * Original: 0x004141D0 - 0x0041430D (317 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004141D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004141D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x6C));
    esp = esp - 0x6C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x10)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -40) = eax;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    ecx = ecx + 0x80000000u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00414237; /* jne: not equal / not zero */

loc_00414220: ;
    goto loc_00414222;

loc_00414222: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    ecx = ecx + 0x80000000u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0041424B; /* je: equal / zero */

loc_00414235: ;
    goto loc_00414237;

loc_00414237: ;
    MEM32(esp) = 0xFFFFFFA1u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414243u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00414243: ;
    MEM32(ebp + -16) = eax;
    goto loc_00414302;

loc_0041424B: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -80) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + -24);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -64) = eax;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    edi = ecx;
    esi = ebp + -76;
    ebx = ebp + -56;
    eax = esp;
    MEM32(ebp + -84) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -80);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x67;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004142A2u); RECOMP_ABI_CALL(0x00414310u, sub_00414310); /* call 0x00414310 */

loc_004142A2: ;
    MEM32(ebp + -60) = eax;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004142F4; /* jne: not equal / not zero */

loc_004142AB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004142F4; /* je: equal / zero */

loc_004142B1: ;
    edx = MEM32(ebp + -56);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebp + -52);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(ebp + -48);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(ebp + -44);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;

loc_004142F4: ;
    eax = MEM32(ebp + -60);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004142FFu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004142FF: ;
    MEM32(ebp + -16) = eax;

loc_00414302: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x6C)) >> 32) & 1);
    esp = esp + 0x6C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414310
 * Original: 0x00414310 - 0x004143AB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414310(void)
{
    uint32_t ebp = g_ebp;

loc_00414310: ;
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
    PUSH32(esp, 0x004143A3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004143A3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004143B0
 * Original: 0x004143B0 - 0x004143DB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004143B0(void)
{
    uint32_t ebp = g_ebp;

loc_004143B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0xDFC368;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004143D6u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_004143D6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004143E0
 * Original: 0x004143E0 - 0x00414626 (582 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004143E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_004143E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x8C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00414544; /* je: equal / zero */

loc_004143FF: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004144E4; /* jbe: below or equal (unsigned <=) */

loc_0041440D: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 1;
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = 0xDFC368;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -68) = eax;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 1;
    ecx = ecx & 0x1F;
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + -68);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414443u); RECOMP_ABI_CALL(0x00414630u, sub_00414630); /* call 0x00414630 */

loc_00414443: ;
    _fa = (uint32_t)(MEM8(0xDFBFF5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xDFBFF5), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004144B9; /* jne: not equal / not zero */

loc_0041444C: ;
    _fa = (uint32_t)(MEM32(0xDFC370)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFC370), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004144B9; /* jne: not equal / not zero */

loc_00414455: ;
    MEM32(ebp + -60) = 0;
    MEM32(ebp + -56) = 3;
    edx = 0; /* xor self */
    ecx = ebp + -60;
    eax = esp;
    MEM32(ebp + -72) = eax;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x87;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004144AFu); RECOMP_ABI_CALL(0x00414660u, sub_00414660); /* call 0x00414660 */

loc_004144AF: ;
    MEM32(0xDFC370) = 1;

loc_004144B9: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x84);
    eax = eax & 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004144E2; /* jne: not equal / not zero */

loc_004144CC: ;
    eax = 0xDFC374;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004144E2u); RECOMP_ABI_CALL(0x00414710u, sub_00414710); /* call 0x00414710 */

loc_004144E2: ;
    goto loc_004144E4;

loc_004144E4: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x84);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = eax | 0x4000000;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x84);
    edx = edx & 4;
    eax = 0x4141B0;
    ecx = 0x4141C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -24) = eax;
    ecx = ebp + -32;
    ecx = ecx + 0xC;
    eax = MEM32(ebp + 0xC);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414544u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00414544: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -80) = eax;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041455E; /* je: equal / zero */

loc_00414556: ;
    eax = ebp + -32;
    MEM32(ebp + -84) = eax;
    goto loc_00414565;

loc_0041455E: ;
    eax = 0; /* xor self */
    MEM32(ebp + -84) = eax;
    goto loc_00414565;

loc_00414565: ;
    eax = MEM32(ebp + -84);
    ecx = 0; /* xor self */
    MEM32(ebp + -92) = ecx;
    MEM32(ebp + -88) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041457E; /* je: equal / zero */

loc_00414576: ;
    eax = ebp + -52;
    MEM32(ebp + -96) = eax;
    goto loc_00414585;

loc_0041457E: ;
    eax = 0; /* xor self */
    MEM32(ebp + -96) = eax;
    goto loc_00414585;

loc_00414585: ;
    edx = MEM32(ebp + -76);
    esi = MEM32(ebp + -88);
    edi = MEM32(ebp + -92);
    ebx = MEM32(ebp + -96);
    ecx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -100) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -80);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x86;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004145CDu); RECOMP_ABI_CALL(0x00414660u, sub_00414660); /* call 0x00414660 */

loc_004145CD: ;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00414610; /* je: equal / zero */

loc_004145D6: ;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -64), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00414610; /* jne: not equal / not zero */

loc_004145DC: ;
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x84) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 4;
    eax = ebp + -52;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414610u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00414610: ;
    eax = MEM32(ebp + -64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041461Bu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0041461B: ;
    esp = esp + 0x8C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414630
 * Original: 0x00414630 - 0x00414653 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414630(void)
{
    uint32_t ebp = g_ebp;

loc_00414630: ;
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
    PUSH32(esp, 0x0041464Eu); RECOMP_ABI_CALL(0x004147E0u, sub_004147E0); /* call 0x004147E0 */

loc_0041464E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414660
 * Original: 0x00414660 - 0x0041470B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414660(void)
{
    uint32_t ebp = g_ebp;

loc_00414660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414703u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00414703: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414710
 * Original: 0x00414710 - 0x00414728 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414710(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    { uint32_t _old = RECOMP_ATOMIC_OR32(XBOX_PTR(esp), 0);
      uint32_t _new = _old | (uint32_t)(0);
      _fa = _new; _fb = 0; _fas = (int32_t)_new; _fbs = 0; } /* lock or */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414730
 * Original: 0x00414730 - 0x004147D1 (161 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414730(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00414755; /* jb: below (unsigned <) */

loc_0041474A: ;
    eax = MEM32(ebp + 8);
    eax = eax - 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00414769; /* jb: below (unsigned <) */

loc_00414755: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041475Au); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0041475A: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_004147C9;

loc_00414769: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00414788; /* jne: not equal / not zero */

loc_0041476F: ;
    eax = ebp + -12;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041477Au); RECOMP_ABI_CALL(0x00413B20u, sub_00413B20); /* call 0x00413B20 */

loc_0041477A: ;
    eax = 0xDFBE4C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414788u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00414788: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004147A1u); RECOMP_ABI_CALL(0x004143E0u, sub_004143E0); /* call 0x004143E0 */

loc_004147A1: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004147C3; /* jne: not equal / not zero */

loc_004147AA: ;
    eax = 0xDFBE4C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004147B8u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_004147B8: ;
    eax = ebp + -12;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004147C3u); RECOMP_ABI_CALL(0x00413C90u, sub_00413C90); /* call 0x00413C90 */

loc_004147C3: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;

loc_004147C9: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004147E0
 * Original: 0x004147E0 - 0x004147F4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004147E0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004147E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    { uint32_t _old = RECOMP_ATOMIC_OR32(XBOX_PTR(eax), ecx);
      uint32_t _new = _old | (uint32_t)(ecx);
      _fa = _new; _fb = 0; _fas = (int32_t)_new; _fbs = 0; } /* lock or */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414800
 * Original: 0x00414800 - 0x00414868 (104 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414800(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00414800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax - 1;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00414826; /* jae: above or equal (unsigned >=) */

loc_0041481B: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041483A; /* jae: above or equal (unsigned >=) */

loc_00414826: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041482Bu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0041482B: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00414860;

loc_0041483A: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    edx = edx | MEM32(eax + ecx * 4);
    MEM32(eax + ecx * 4) = edx;
    MEM32(ebp + -4) = 0;

loc_00414860: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414870
 * Original: 0x00414870 - 0x00414915 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414870(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004148D6; /* je: equal / zero */

loc_00414884: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004148B2; /* jne: not equal / not zero */

loc_00414892: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x800 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004148B2; /* jae: above or equal (unsigned >=) */

loc_0041489E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004148A3u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_004148A3: ;
    MEM32(eax) = 0xC;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_0041490B;

loc_004148B2: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004148D4; /* je: equal / zero */

loc_004148C0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004148C5u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_004148C5: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_0041490B;

loc_004148D4: ;
    goto loc_004148D6;

loc_004148D6: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414900u); RECOMP_ABI_CALL(0x00414920u, sub_00414920); /* call 0x00414920 */

loc_00414900: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414908u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00414908: ;
    MEM32(ebp + -12) = eax;

loc_0041490B: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414920
 * Original: 0x00414920 - 0x004149AB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414920(void)
{
    uint32_t ebp = g_ebp;

loc_00414920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004149A3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004149A3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004149B0
 * Original: 0x004149B0 - 0x00414A0B (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004149B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004149B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = eax;

loc_004149D8: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00414A04; /* jae: above or equal (unsigned >=) */

loc_004149DE: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -4);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    edx = edx & MEM32(eax + ecx * 4);
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_004149D8;

loc_00414A04: ;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414A10
 * Original: 0x00414A10 - 0x00414A7B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414A10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00414A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax - 1;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00414A36; /* jae: above or equal (unsigned >=) */

loc_00414A2B: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00414A4A; /* jae: above or equal (unsigned >=) */

loc_00414A36: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414A3Bu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00414A3B: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00414A73;

loc_00414A4A: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    edx = edx ^ 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    edx = edx & MEM32(eax + ecx * 4);
    MEM32(eax + ecx * 4) = edx;
    MEM32(ebp + -4) = 0;

loc_00414A73: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414A80
 * Original: 0x00414A80 - 0x00414A9D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414A80(void)
{
    uint32_t ebp = g_ebp;

loc_00414A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414AA0
 * Original: 0x00414AA0 - 0x00414ABD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414AA0(void)
{
    uint32_t ebp = g_ebp;

loc_00414AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0x7FFFFFFF;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0xFFFFFFFCu;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414AC0
 * Original: 0x00414AC0 - 0x00414B2B (107 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414AC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 8);
    eax = ebp + -132;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414ADAu); RECOMP_ABI_CALL(0x00414A80u, sub_00414A80); /* call 0x00414A80 */

loc_00414ADA: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -132;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414AEFu); RECOMP_ABI_CALL(0x00414800u, sub_00414800); /* call 0x00414800 */

loc_00414AEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00414AFD; /* jge: greater or equal (signed >=) */

loc_00414AF4: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00414B20;

loc_00414AFD: ;
    eax = 0; /* xor self */
    eax = ebp + -132;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414B1Du); RECOMP_ABI_CALL(0x00414F20u, sub_00414F20); /* call 0x00414F20 */

loc_00414B1D: ;
    MEM32(ebp + -4) = eax;

loc_00414B20: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414B30
 * Original: 0x00414B30 - 0x00414B86 (86 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414B30(void)
{
    uint32_t ebp = g_ebp;

loc_00414B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 8);
    eax = ebp + -140;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414B4Du); RECOMP_ABI_CALL(0x00414A80u, sub_00414A80); /* call 0x00414A80 */

loc_00414B4D: ;
    eax = 1;
    MEM32(ebp + -140) = eax;
    MEM32(ebp + -8) = 0;
    ecx = MEM32(ebp + 8);
    eax = ebp + -140;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414B7Eu); RECOMP_ABI_CALL(0x00414730u, sub_00414730); /* call 0x00414730 */

loc_00414B7E: ;
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414B90
 * Original: 0x00414B90 - 0x00414C03 (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414B90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    eax = ebp + -140;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414BBEu); RECOMP_ABI_CALL(0x00414730u, sub_00414730); /* call 0x00414730 */

loc_00414BBE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00414BD1; /* je: equal / zero */

loc_00414BC4: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0xEFFFFFFFu;
    MEM32(ebp + -8) = eax;
    goto loc_00414BDC;

loc_00414BD1: ;
    eax = MEM32(ebp + -8);
    eax = eax | 0x10000000;
    MEM32(ebp + -8) = eax;

loc_00414BDC: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -140;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414BFBu); RECOMP_ABI_CALL(0x00414730u, sub_00414730); /* call 0x00414730 */

loc_00414BFB: ;
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414C10
 * Original: 0x00414C10 - 0x00414C57 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414C10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;

loc_00414C20: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00414C48; /* jae: above or equal (unsigned >=) */

loc_00414C26: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00414C3B; /* je: equal / zero */

loc_00414C32: ;
    MEM32(ebp + -4) = 0;
    goto loc_00414C4F;

loc_00414C3B: ;
    goto loc_00414C3D;

loc_00414C3D: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_00414C20;

loc_00414C48: ;
    MEM32(ebp + -4) = 1;

loc_00414C4F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414C60
 * Original: 0x00414C60 - 0x00414CBE (94 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414C60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00414C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax - 1;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00414C84; /* jb: below (unsigned <) */

loc_00414C7B: ;
    MEM32(ebp + -4) = 0;
    goto loc_00414CB6;

loc_00414C84: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;

loc_00414CB6: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414CC0
 * Original: 0x00414CC0 - 0x00414CDE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414CC0(void)
{
    uint32_t ebp = g_ebp;

loc_00414CC0: ;
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
    PUSH32(esp, 0x00414CDEu); RECOMP_ABI_CALL(0x00413ADCu, sub_00413ADC); /* call 0x00413ADC */

}


/**
 * sub_00414CE0
 * Original: 0x00414CE0 - 0x00414D8D (173 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x148;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -312, xmm0); /* movaps */
    XMM_STORE(ebp + -172, xmm0); /* movups */
    XMM_STORE(ebp + -184, xmm0); /* movaps */
    XMM_STORE(ebp + -200, xmm0); /* movaps */
    XMM_STORE(ebp + -216, xmm0); /* movaps */
    XMM_STORE(ebp + -232, xmm0); /* movaps */
    XMM_STORE(ebp + -248, xmm0); /* movaps */
    XMM_STORE(ebp + -264, xmm0); /* movaps */
    XMM_STORE(ebp + -280, xmm0); /* movaps */
    XMM_STORE(ebp + -296, xmm0); /* movaps */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -296) = eax;
    MEM32(ebp + -164) = 0x10000000;
    edx = MEM32(ebp + 8);
    ecx = ebp + -296;
    eax = ebp + -144;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414D6Au); RECOMP_ABI_CALL(0x00414730u, sub_00414730); /* call 0x00414730 */

loc_00414D6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00414D79; /* jge: greater or equal (signed >=) */

loc_00414D6F: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    goto loc_00414D82;

loc_00414D79: ;
    eax = MEM32(ebp + -144);
    MEM32(ebp + -4) = eax;

loc_00414D82: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x148;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414D90
 * Original: 0x00414D90 - 0x00414DEB (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414D90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = eax;

loc_00414DB8: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00414DE4; /* jae: above or equal (unsigned >=) */

loc_00414DBE: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -4);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    edx = edx | MEM32(eax + ecx * 4);
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_00414DB8;

loc_00414DE4: ;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414DF0
 * Original: 0x00414DF0 - 0x00414E3E (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414DF0(void)
{
    uint32_t ebp = g_ebp;

loc_00414DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    eax = ebp + -128;
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414E19u); RECOMP_ABI_CALL(0x00414F20u, sub_00414F20); /* call 0x00414F20 */

loc_00414E19: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414E2Bu); RECOMP_ABI_CALL(0x00414A10u, sub_00414A10); /* call 0x00414A10 */

loc_00414E2B: ;
    eax = ebp + -128;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414E36u); RECOMP_ABI_CALL(0x00415470u, sub_00415470); /* call 0x00415470 */

loc_00414E36: ;
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414E40
 * Original: 0x00414E40 - 0x00414E83 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414E40(void)
{
    uint32_t ebp = g_ebp;

loc_00414E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 8;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414E76u); RECOMP_ABI_CALL(0x00414E90u, sub_00414E90); /* call 0x00414E90 */

loc_00414E76: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414E7Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00414E7E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414E90
 * Original: 0x00414E90 - 0x00414F1B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414E90(void)
{
    uint32_t ebp = g_ebp;

loc_00414E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414F13u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00414F13: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414F20
 * Original: 0x00414F20 - 0x00414F78 (88 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414F20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00414F20: ;
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
    PUSH32(esp, 0x00414F48u); RECOMP_ABI_CALL(0x00431640u, sub_00431640); /* call 0x00431640 */

loc_00414F48: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00414F59; /* jne: not equal / not zero */

loc_00414F51: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_00414F70;

loc_00414F59: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414F64u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00414F64: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_00414F70: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00414F80
 * Original: 0x00414F80 - 0x00415064 (228 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414F80(void)
{
    uint32_t ebp = g_ebp;

loc_00414F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x12C;
    eax = ebp + 0x10;
    MEM32(ebp + -280) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = esp;
    ebx = ebp + -140;
    MEM32(eax) = ebx;
    MEM32(eax + 8) = 0x80;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414FB8u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00414FB8: ;
    eax = MEM32(ebp + -280);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -140) = ecx;
    MEM32(ebp + -132) = 0xFFFFFFFFu;
    eax = MEM32(eax);
    MEM32(ebp + -120) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414FDBu); RECOMP_ABI_CALL(0x0043AA40u, sub_0043AA40); /* call 0x0043AA40 */

loc_00414FDB: ;
    MEM32(ebp + -124) = eax;
    eax = esp;
    ecx = ebp + -268;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414FEDu); RECOMP_ABI_CALL(0x00413C30u, sub_00413C30); /* call 0x00413C30 */

loc_00414FED: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00414FF2u); RECOMP_ABI_CALL(0x0043A840u, sub_0043A840); /* call 0x0043A840 */

loc_00414FF2: ;
    MEM32(ebp + -128) = eax;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -276) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ecx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -276);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x8A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415037u); RECOMP_ABI_CALL(0x00415070u, sub_00415070); /* call 0x00415070 */

loc_00415037: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041503Fu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0041503F: ;
    MEM32(ebp + -272) = eax;
    eax = ebp + -268;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415053u); RECOMP_ABI_CALL(0x00413C90u, sub_00413C90); /* call 0x00413C90 */

loc_00415053: ;
    eax = MEM32(ebp + -272);
    esp = esp + 0x12C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415070
 * Original: 0x00415070 - 0x0041510B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415070(void)
{
    uint32_t ebp = g_ebp;

loc_00415070: ;
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
    PUSH32(esp, 0x00415103u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00415103: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415110
 * Original: 0x00415110 - 0x0041517B (107 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415110(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00415110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 8);
    eax = ebp + -132;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041512Au); RECOMP_ABI_CALL(0x00414A80u, sub_00414A80); /* call 0x00414A80 */

loc_0041512A: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -132;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041513Fu); RECOMP_ABI_CALL(0x00414800u, sub_00414800); /* call 0x00414800 */

loc_0041513F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041514D; /* jge: greater or equal (signed >=) */

loc_00415144: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00415170;

loc_0041514D: ;
    eax = ebp + -132;
    ecx = 0; /* xor self */
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041516Du); RECOMP_ABI_CALL(0x00414F20u, sub_00414F20); /* call 0x00414F20 */

loc_0041516D: ;
    MEM32(ebp + -4) = eax;

loc_00415170: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415180
 * Original: 0x00415180 - 0x0041518A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415180(void)
{
    uint32_t ebp = g_ebp;

loc_00415180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x40;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415190
 * Original: 0x00415190 - 0x0041519A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415190(void)
{
    uint32_t ebp = g_ebp;

loc_00415190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x23;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004151A0
 * Original: 0x004151A0 - 0x0041531F (383 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004151A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004151A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x238;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + -412;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004151BDu); RECOMP_ABI_CALL(0x00414A80u, sub_00414A80); /* call 0x00414A80 */

loc_004151BD: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -412;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004151D2u); RECOMP_ABI_CALL(0x00414800u, sub_00414800); /* call 0x00414800 */

loc_004151D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004151E4; /* jge: greater or equal (signed >=) */

loc_004151D7: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    goto loc_00415314;

loc_004151E4: ;
    eax = 2;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00415258; /* jne: not equal / not zero */

loc_004151EE: ;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    eax = ebp + -284;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041520Du); RECOMP_ABI_CALL(0x00414730u, sub_00414730); /* call 0x00414730 */

loc_0041520D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041521F; /* jge: greater or equal (signed >=) */

loc_00415212: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    goto loc_00415314;

loc_0041521F: ;
    eax = 0; /* xor self */
    ecx = ebp + -412;
    eax = ebp + -540;
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415241u); RECOMP_ABI_CALL(0x00414F20u, sub_00414F20); /* call 0x00414F20 */

loc_00415241: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00415253; /* jge: greater or equal (signed >=) */

loc_00415246: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    goto loc_00415314;

loc_00415253: ;
    goto loc_004152D8;

loc_00415258: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -144) = eax;
    MEM32(ebp + -12) = 0;
    eax = ebp + -144;
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415279u); RECOMP_ABI_CALL(0x00414A80u, sub_00414A80); /* call 0x00414A80 */

loc_00415279: ;
    edx = MEM32(ebp + 8);
    ecx = ebp + -144;
    eax = ebp + -284;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415298u); RECOMP_ABI_CALL(0x00414730u, sub_00414730); /* call 0x00414730 */

loc_00415298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004152A7; /* jge: greater or equal (signed >=) */

loc_0041529D: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    goto loc_00415314;

loc_004152A7: ;
    ecx = ebp + -412;
    eax = ebp + -540;
    MEM32(esp) = 1;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004152C7u); RECOMP_ABI_CALL(0x00414F20u, sub_00414F20); /* call 0x00414F20 */

loc_004152C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004152D6; /* jge: greater or equal (signed >=) */

loc_004152CC: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    goto loc_00415314;

loc_004152D6: ;
    goto loc_004152D8;

loc_004152D8: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -540;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004152EDu); RECOMP_ABI_CALL(0x00414C60u, sub_00414C60); /* call 0x00414C60 */

loc_004152ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004152FF; /* je: equal / zero */

loc_004152F2: ;
    eax = 2;
    MEM32(ebp + -544) = eax;
    goto loc_0041530B;

loc_004152FF: ;
    eax = MEM32(ebp + -284);
    MEM32(ebp + -544) = eax;

loc_0041530B: ;
    eax = MEM32(ebp + -544);
    MEM32(ebp + -4) = eax;

loc_00415314: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x238;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415320
 * Original: 0x00415320 - 0x004153BB (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415320(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00415320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x1C;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00415345; /* je: equal / zero */

loc_0041533D: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -16) = eax;
    goto loc_0041534C;

loc_00415345: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_0041534C;

loc_0041534C: ;
    eax = MEM32(ebp + -16);
    ecx = 0; /* xor self */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00415364; /* je: equal / zero */

loc_0041535D: ;
    eax = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    goto loc_0041536A;

loc_00415364: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = eax;

loc_0041536A: ;
    ecx = MEM32(ebp + -20);
    edx = MEM32(ebp + -24);
    esi = MEM32(ebp + -28);
    edi = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 2;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x87;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004153B1u); RECOMP_ABI_CALL(0x004153C0u, sub_004153C0); /* call 0x004153C0 */

loc_004153B1: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004153C0
 * Original: 0x004153C0 - 0x0041546B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004153C0(void)
{
    uint32_t ebp = g_ebp;

loc_004153C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415463u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00415463: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415470
 * Original: 0x00415470 - 0x004154EB (123 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415470(void)
{
    uint32_t ebp = g_ebp;

loc_00415470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 8;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x85;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004154DEu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_004154DE: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004154E6u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004154E6: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004154F0
 * Original: 0x004154F0 - 0x00415531 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004154F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_004154F0: ;
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

loc_004154FF: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415518u); RECOMP_ABI_CALL(0x00415540u, sub_00415540); /* call 0x00415540 */

loc_00415518: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFCu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004154FF; /* je: equal / zero */

loc_00415521: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041552Cu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0041552C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415540
 * Original: 0x00415540 - 0x004155BF (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415540(void)
{
    uint32_t ebp = g_ebp;

loc_00415540: ;
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
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    ebx = MEM32(ebp + 0x10);
    ecx = edx;
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x89;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004155B7u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_004155B7: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004155C0
 * Original: 0x004155C0 - 0x00415619 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004155C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004155C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -132;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004155EEu); RECOMP_ABI_CALL(0x004154F0u, sub_004154F0); /* call 0x004154F0 */

loc_004155EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004155FC; /* jge: greater or equal (signed >=) */

loc_004155F3: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0041560E;

loc_004155FC: ;
    ecx = MEM32(ebp + -132);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0041560E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415620
 * Original: 0x00415620 - 0x0041564D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415620(void)
{
    uint32_t ebp = g_ebp;

loc_00415620: ;
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
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415648u); RECOMP_ABI_CALL(0x004154F0u, sub_004154F0); /* call 0x004154F0 */

loc_00415648: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415650
 * Original: 0x00415650 - 0x0041568B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415650(void)
{
    uint32_t ebp = g_ebp;

loc_00415650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x10;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    eax = esp;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415684u); RECOMP_ABI_CALL(0x00416C40u, sub_00416C40); /* call 0x00416C40 */

loc_00415684: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415690
 * Original: 0x00415690 - 0x004156D6 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415690(void)
{
    uint32_t ebp = g_ebp;

loc_00415690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    edi = MEM32(eax);
    ebx = MEM32(eax + 4);
    eax = esp;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004156CEu); RECOMP_ABI_CALL(0x00416D60u, sub_00416D60); /* call 0x00416D60 */

loc_004156CE: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004156E0
 * Original: 0x004156E0 - 0x00415735 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004156E0(void)
{
    uint32_t ebp = g_ebp;

loc_004156E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    eax = esp;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x35;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415726u); RECOMP_ABI_CALL(0x00415740u, sub_00415740); /* call 0x00415740 */

loc_00415726: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041572Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0041572E: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415740
 * Original: 0x00415740 - 0x004157DB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415740(void)
{
    uint32_t ebp = g_ebp;

loc_00415740: ;
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
    PUSH32(esp, 0x004157D3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004157D3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004157E0
 * Original: 0x004157E0 - 0x004158CE (238 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004157E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004157E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x50;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041581Bu); RECOMP_ABI_CALL(0x004158D0u, sub_004158D0); /* call 0x004158D0 */

loc_0041581B: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFF7u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00415859; /* jne: not equal / not zero */

loc_00415824: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415854u); RECOMP_ABI_CALL(0x004158D0u, sub_004158D0); /* call 0x004158D0 */

loc_00415854: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00415869; /* jge: greater or equal (signed >=) */

loc_00415859: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415864u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415864: ;
    MEM32(ebp + -12) = eax;
    goto loc_004158C4;

loc_00415869: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -43;
    MEM32(ebp + -52) = ecx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041587Eu); RECOMP_ABI_CALL(0x003E0BD0u, sub_003E0BD0); /* call 0x003E0BD0 */

loc_0041587E: ;
    ecx = MEM32(ebp + -52);
    edi = 0; /* xor self */
    edx = edi;
    esi = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(ebp + -48) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x35;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004158B9u); RECOMP_ABI_CALL(0x00415960u, sub_00415960); /* call 0x00415960 */

loc_004158B9: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004158C1u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004158C1: ;
    MEM32(ebp + -12) = eax;

loc_004158C4: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x50;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004158D0
 * Original: 0x004158D0 - 0x0041595B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004158D0(void)
{
    uint32_t ebp = g_ebp;

loc_004158D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415953u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00415953: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415960
 * Original: 0x00415960 - 0x004159FB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415960(void)
{
    uint32_t ebp = g_ebp;

loc_00415960: ;
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
    PUSH32(esp, 0x004159F3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004159F3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415A00
 * Original: 0x00415A00 - 0x00415CD7 (727 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00415A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x10C;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00415A76; /* jne: not equal / not zero */

loc_00415A1E: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -200) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = edi;
    eax = esp;
    MEM32(ebp + -204) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -200);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x35;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415A66u); RECOMP_ABI_CALL(0x00415CE0u, sub_00415CE0); /* call 0x00415CE0 */

loc_00415A66: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415A6Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415A6E: ;
    MEM32(ebp + -16) = eax;
    goto loc_00415CC9;

loc_00415A76: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -208) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    eax = edi;
    MEM32(ebp + -212) = eax;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -216) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -220) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -216);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -212);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -208);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x1C4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415AE2u); RECOMP_ABI_CALL(0x00415D80u, sub_00415D80); /* call 0x00415D80 */

loc_00415AE2: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00415AFE; /* je: equal / zero */

loc_00415AEB: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415AF6u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415AF6: ;
    MEM32(ebp + -16) = eax;
    goto loc_00415CC9;

loc_00415AFE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00415B1B; /* je: equal / zero */

loc_00415B07: ;
    MEM32(esp) = 0xFFFFFFEAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415B13u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415B13: ;
    MEM32(ebp + -16) = eax;
    goto loc_00415CC9;

loc_00415B1B: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x14);
    ecx = ebp + -164;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415B3Eu); RECOMP_ABI_CALL(0x00415F10u, sub_00415F10); /* call 0x00415F10 */

loc_00415B3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00415B4F; /* je: equal / zero */

loc_00415B43: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_00415CC9;

loc_00415B4F: ;
    eax = MEM32(ebp + -148);
    eax = eax & 0xF000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00415B75; /* jne: not equal / not zero */

loc_00415B61: ;
    MEM32(esp) = 0xFFFFFFA1u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415B6Du); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415B6D: ;
    MEM32(ebp + -16) = eax;
    goto loc_00415CC9;

loc_00415B75: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -224) = eax;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x2A0100;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415BB6u); RECOMP_ABI_CALL(0x00415CE0u, sub_00415CE0); /* call 0x00415CE0 */

loc_00415BB6: ;
    MEM32(ebp + -168) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00415BF4; /* jge: greater or equal (signed >=) */

loc_00415BC1: ;
    _fa = (uint32_t)(MEM32(ebp + -168)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -168), 0xFFFFFFD8u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00415BDE; /* jne: not equal / not zero */

loc_00415BCA: ;
    MEM32(esp) = 0xFFFFFFA1u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415BD6u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415BD6: ;
    MEM32(ebp + -16) = eax;
    goto loc_00415CC9;

loc_00415BDE: ;
    eax = MEM32(ebp + -168);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415BECu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415BEC: ;
    MEM32(ebp + -16) = eax;
    goto loc_00415CC9;

loc_00415BF4: ;
    ecx = ebp + -195;
    eax = MEM32(ebp + -168);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415C0Cu); RECOMP_ABI_CALL(0x003E0BD0u, sub_003E0BD0); /* call 0x003E0BD0 */

loc_00415C0C: ;
    ecx = ebp + -195;
    eax = ebp + -164;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415C24u); RECOMP_ABI_CALL(0x00416E90u, sub_00416E90); /* call 0x00416E90 */

loc_00415C24: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00415C9E; /* jne: not equal / not zero */

loc_00415C2D: ;
    eax = MEM32(ebp + -148);
    eax = eax & 0xF000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00415C50; /* jne: not equal / not zero */

loc_00415C3F: ;
    MEM32(esp) = 0xFFFFFFA1u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415C4Bu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415C4B: ;
    MEM32(ebp + -20) = eax;
    goto loc_00415C9C;

loc_00415C50: ;
    edi = 0; /* xor self */
    edx = edi;
    ecx = ebp + -195;
    esi = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + -228) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x35;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415C91u); RECOMP_ABI_CALL(0x00415CE0u, sub_00415CE0); /* call 0x00415CE0 */

loc_00415C91: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415C99u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415C99: ;
    MEM32(ebp + -20) = eax;

loc_00415C9C: ;
    goto loc_00415C9E;

loc_00415C9E: ;
    ecx = MEM32(ebp + -168);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415CC3u); RECOMP_ABI_CALL(0x00415E30u, sub_00415E30); /* call 0x00415E30 */

loc_00415CC3: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;

loc_00415CC9: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x10C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415CE0
 * Original: 0x00415CE0 - 0x00415D7B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415CE0(void)
{
    uint32_t ebp = g_ebp;

loc_00415CE0: ;
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
    PUSH32(esp, 0x00415D73u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00415D73: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415D80
 * Original: 0x00415D80 - 0x00415E2B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415D80(void)
{
    uint32_t ebp = g_ebp;

loc_00415D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415E23u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00415E23: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415E30
 * Original: 0x00415E30 - 0x00415EAF (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415E30(void)
{
    uint32_t ebp = g_ebp;

loc_00415E30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415EA8u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00415EA8: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415EB0
 * Original: 0x00415EB0 - 0x00415F02 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415EB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00415EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00415ED3; /* jge: greater or equal (signed >=) */

loc_00415EC2: ;
    MEM32(esp) = 0xFFFFFFF7u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415ECEu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415ECE: ;
    MEM32(ebp + -4) = eax;
    goto loc_00415EFA;

loc_00415ED3: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = 0x452F3B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x1000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415EF7u); RECOMP_ABI_CALL(0x00415F10u, sub_00415F10); /* call 0x00415F10 */

loc_00415EF7: ;
    MEM32(ebp + -4) = eax;

loc_00415EFA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415F10
 * Original: 0x00415F10 - 0x00415F96 (134 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415F10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00415F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
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
    PUSH32(esp, 0x00415F43u); RECOMP_ABI_CALL(0x00415FA0u, sub_00415FA0); /* call 0x00415FA0 */

loc_00415F43: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00415F5C; /* je: equal / zero */

loc_00415F4C: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415F57u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415F57: ;
    MEM32(ebp + -8) = eax;
    goto loc_00415F8D;

loc_00415F5C: ;
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
    PUSH32(esp, 0x00415F7Cu); RECOMP_ABI_CALL(0x00416270u, sub_00416270); /* call 0x00416270 */

loc_00415F7C: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00415F8Au); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00415F8A: ;
    MEM32(ebp + -8) = eax;

loc_00415F8D: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00415FA0
 * Original: 0x00415FA0 - 0x00416266 (710 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415FA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00415FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1DC;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ebp + 0x15));
    SET_LO8(eax, LO8(eax) | 8);
    MEM8(ebp + 0x15) = LO8(eax);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -424) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x14);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -428) = eax;
    ecx = edi;
    eax = ebp + -272;
    MEM32(ebp + -432) = eax;
    eax = esp;
    MEM32(ebp + -436) = eax;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -432);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -428);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -424);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0x7FF;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x123;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041603Fu); RECOMP_ABI_CALL(0x00416600u, sub_00416600); /* call 0x00416600 */

loc_0041603F: ;
    MEM32(ebp + -276) = eax;
    _fa = (uint32_t)(MEM32(ebp + -276)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -276), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041605C; /* je: equal / zero */

loc_0041604E: ;
    eax = MEM32(ebp + -276);
    MEM32(ebp + -16) = eax;
    goto loc_00416258;

loc_0041605C: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -440) = eax;
    eax = MEM32(ebp + -136);
    edx = MEM32(ebp + -132);
    ecx = eax;
    ecx = ecx & 0xFFFFF000u;
    eax = eax & 0xFFF;
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ebx = edx;
    _shift_result = RECOMP_SHIFT(ebx, 0x14, 32, 1, NULL, &_shift_of);
    ebx = _shift_result;
    ecx = ecx | ebx;
    ebx = edx;
    ebx = ebx & 0xFFF00;
    _shift_result = RECOMP_SHIFT(ebx, 0xC, 32, 0, NULL, &_shift_of);
    ebx = _shift_result;
    eax = eax | ebx;
    edx = ZX8(LO8(edx));
    eax = eax | edx;
    MEM32(ebp + -416) = ecx;
    MEM32(ebp + -420) = eax;
    MEM32(ebp + -412) = 0;
    MEM32(ebp + -408) = 0;
    eax = ZX16(MEM16(ebp + -244));
    MEM32(ebp + -404) = eax;
    eax = MEM32(ebp + -256);
    MEM32(ebp + -400) = eax;
    eax = MEM32(ebp + -252);
    MEM32(ebp + -396) = eax;
    eax = MEM32(ebp + -248);
    MEM32(ebp + -392) = eax;
    eax = MEM32(ebp + -144);
    ebx = MEM32(ebp + -140);
    edx = eax;
    edx = edx & 0xFFFFF000u;
    eax = eax & 0xFFF;
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ebx;
    _shift_result = RECOMP_SHIFT(ecx, 0x14, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    edx = edx | ecx;
    ecx = ebx;
    ecx = ecx & 0xFFF00;
    _shift_result = RECOMP_SHIFT(ecx, 0xC, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + -440);
    esi = ZX8(LO8(ebx));
    eax = eax | esi;
    MEM32(ebp + -384) = edx;
    MEM32(ebp + -388) = eax;
    MEM32(ebp + -380) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -232)); /* movsd */
    MEMD(ebp + -376) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -268);
    MEM32(ebp + -368) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -224)); /* movsd */
    MEMD(ebp + -364) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -208);
    MEM32(ebp + -356) = eax;
    eax = MEM32(ebp + -200);
    MEM32(ebp + -352) = eax;
    eax = MEM32(ebp + -160);
    MEM32(ebp + -348) = eax;
    eax = MEM32(ebp + -152);
    MEM32(ebp + -344) = eax;
    eax = MEM32(ebp + -176);
    MEM32(ebp + -340) = eax;
    eax = MEM32(ebp + -168);
    MEM32(ebp + -336) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    MEMD(ebp + -332) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -208)); /* movsd */
    MEMD(ebp + -324) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -200);
    MEM32(ebp + -316) = eax;
    MEM32(ebp + -312) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(ebp + -308) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -152);
    MEM32(ebp + -300) = eax;
    MEM32(ebp + -296) = 0;
    eax = ebp + -292;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    MEMD(ebp + -292) = xmm0.d[0]; /* movsd */
    edx = MEM32(ebp + -168);
    MEM32(ebp + -284) = edx;
    eax = eax + 0xC;
    MEM32(eax) = 0;
    eax = ebp + -420;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416251u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00416251: ;
    MEM32(ebp + -16) = 0;

loc_00416258: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x1DC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416270
 * Original: 0x00416270 - 0x004165F2 (898 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416270(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00416270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x16C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0x1000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00416404; /* jne: not equal / not zero */

loc_00416295: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_00416404; /* jl: less (signed <) */

loc_0041629F: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00416404; /* jne: not equal / not zero */

loc_004162AB: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -116;
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004162D8u); RECOMP_ABI_CALL(0x004166C0u, sub_004166C0); /* call 0x004166C0 */

loc_004162D8: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFF7u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00416402; /* jne: not equal / not zero */

loc_004162E5: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416315u); RECOMP_ABI_CALL(0x004166C0u, sub_004166C0); /* call 0x004166C0 */

loc_00416315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_00416402; /* jl: less (signed <) */

loc_0041631E: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -292) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    eax = edi;
    MEM32(ebp + -296) = eax;
    ebx = ebp + -116;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -300) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -304) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -300);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -296);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -292);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x4F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041638Au); RECOMP_ABI_CALL(0x00416750u, sub_00416750); /* call 0x00416750 */

loc_0041638A: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFEAu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00416400; /* jne: not equal / not zero */

loc_00416393: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -143;
    MEM32(ebp + -312) = ecx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004163AEu); RECOMP_ABI_CALL(0x003E0BD0u, sub_003E0BD0); /* call 0x003E0BD0 */

loc_004163AE: ;
    ecx = MEM32(ebp + -312);
    edx = 0; /* xor self */
    edi = edx;
    esi = ebp + -116;
    eax = esp;
    MEM32(ebp + -308) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x4F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004163FDu); RECOMP_ABI_CALL(0x00416750u, sub_00416750); /* call 0x00416750 */

loc_004163FD: ;
    MEM32(ebp + -20) = eax;

loc_00416400: ;
    goto loc_00416402;

loc_00416402: ;
    goto loc_00416473;

loc_00416404: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -316) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    eax = edi;
    MEM32(ebp + -320) = eax;
    ebx = ebp + -116;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -324) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -328) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -324);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -320);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -316);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x4F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416470u); RECOMP_ABI_CALL(0x00416750u, sub_00416750); /* call 0x00416750 */

loc_00416470: ;
    MEM32(ebp + -20) = eax;

loc_00416473: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00416484; /* je: equal / zero */

loc_00416479: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    goto loc_004165E4;

loc_00416484: ;
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -116)); /* movsd */
    MEMD(ebp + -288) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -280) = 0;
    MEM32(ebp + -276) = 0;
    eax = MEM32(ebp + -100);
    MEM32(ebp + -272) = eax;
    eax = MEM32(ebp + -96);
    MEM32(ebp + -268) = eax;
    eax = MEM32(ebp + -92);
    MEM32(ebp + -264) = eax;
    eax = MEM32(ebp + -88);
    MEM32(ebp + -260) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -84)); /* movsd */
    MEMD(ebp + -256) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -248) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(ebp + -244) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -64);
    MEM32(ebp + -236) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -60)); /* movsd */
    MEMD(ebp + -232) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -52);
    MEM32(ebp + -224) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -220) = eax;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -216) = eax;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -212) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -208) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -204) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -28)); /* movsd */
    MEMD(ebp + -200) = xmm0.d[0]; /* movsd */
    edx = MEM32(ebp + -52);
    eax = edx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -192) = edx;
    MEM32(ebp + -188) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -184) = eax;
    MEM32(ebp + -180) = 0;
    edx = MEM32(ebp + -44);
    eax = edx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -176) = edx;
    MEM32(ebp + -172) = eax;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -168) = eax;
    MEM32(ebp + -164) = 0;
    eax = ebp + -160;
    esi = MEM32(ebp + -36);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    MEM32(ebp + -160) = esi;
    MEM32(ebp + -156) = edx;
    edx = MEM32(ebp + -32);
    MEM32(ebp + -152) = edx;
    eax = eax + 0xC;
    MEM32(eax) = 0;
    eax = ebp + -288;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004165DDu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_004165DD: ;
    MEM32(ebp + -16) = 0;

loc_004165E4: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x16C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416600
 * Original: 0x00416600 - 0x004166BB (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416600(void)
{
    uint32_t ebp = g_ebp;

loc_00416600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
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
    ecx = MEM32(ebp + 0x34);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004166B3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004166B3: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004166C0
 * Original: 0x004166C0 - 0x0041674B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004166C0(void)
{
    uint32_t ebp = g_ebp;

loc_004166C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416743u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00416743: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416750
 * Original: 0x00416750 - 0x004167FB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416750(void)
{
    uint32_t ebp = g_ebp;

loc_00416750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004167F3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004167F3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416800
 * Original: 0x00416800 - 0x00416835 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416800(void)
{
    uint32_t ebp = g_ebp;

loc_00416800: ;
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
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416830u); RECOMP_ABI_CALL(0x00417310u, sub_00417310); /* call 0x00417310 */

loc_00416830: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416840
 * Original: 0x00416840 - 0x0041692B (235 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416840(void)
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

loc_00416840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004168DB; /* je: equal / zero */

loc_0041685A: ;
    MEM32(ebp + -44) = 0;

loc_00416861: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004168D9; /* jge: greater or equal (signed >=) */

loc_00416867: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    ecx = MEM32(eax + edx + 8);
    eax = MEM32(eax + edx + 0xC);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0xF4240));
    ecx = ecx - 0xF4240;
    {
      _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      eax = _sbb_result;
    } /* sbb */
    if (_cf) goto loc_00416899; /* jb: below (unsigned <) */

loc_00416883: ;
    goto loc_00416885;

loc_00416885: ;
    MEM32(esp) = 0xFFFFFFEAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416891u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00416891: ;
    MEM32(ebp + -8) = eax;
    goto loc_00416922;

loc_00416899: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ecx + eax)); /* movsd */
    MEMD(ebp + eax + -40) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(eax + ecx + 8);
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = MEM32(ebp + -44);
    eax = ebp + -40;
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -44) = eax;
    goto loc_00416861;

loc_004168D9: ;
    goto loc_004168DB;

loc_004168DB: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004168F5; /* je: equal / zero */

loc_004168ED: ;
    eax = ebp + -40;
    MEM32(ebp + -56) = eax;
    goto loc_004168FC;

loc_004168F5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -56) = eax;
    goto loc_004168FC;

loc_004168FC: ;
    ecx = MEM32(ebp + -48);
    edx = MEM32(ebp + -52);
    eax = MEM32(ebp + -56);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041691Fu); RECOMP_ABI_CALL(0x00417310u, sub_00417310); /* call 0x00417310 */

loc_0041691F: ;
    MEM32(ebp + -8) = eax;

loc_00416922: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416930
 * Original: 0x00416930 - 0x00416963 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416930(void)
{
    uint32_t ebp = g_ebp;

loc_00416930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = 0xFFFFFF9Cu;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041695Eu); RECOMP_ABI_CALL(0x00415A00u, sub_00415A00); /* call 0x00415A00 */

loc_0041695E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416970
 * Original: 0x00416970 - 0x004169A3 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416970(void)
{
    uint32_t ebp = g_ebp;

loc_00416970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = 0xFFFFFF9Cu;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041699Eu); RECOMP_ABI_CALL(0x00415F10u, sub_00415F10); /* call 0x00415F10 */

loc_0041699E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004169B0
 * Original: 0x004169B0 - 0x00416A05 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004169B0(void)
{
    uint32_t ebp = g_ebp;

loc_004169B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    eax = esp;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x22;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004169F6u); RECOMP_ABI_CALL(0x00416A10u, sub_00416A10); /* call 0x00416A10 */

loc_004169F6: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004169FEu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004169FE: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416A10
 * Original: 0x00416A10 - 0x00416AAB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416A10(void)
{
    uint32_t ebp = g_ebp;

loc_00416A10: ;
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
    PUSH32(esp, 0x00416AA3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00416AA3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416AB0
 * Original: 0x00416AB0 - 0x00416B0E (94 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416AB0(void)
{
    uint32_t ebp = g_ebp;

loc_00416AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = edi;
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x22;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416AFEu); RECOMP_ABI_CALL(0x00416B10u, sub_00416B10); /* call 0x00416B10 */

loc_00416AFE: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416B06u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00416B06: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416B10
 * Original: 0x00416B10 - 0x00416BAB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416B10(void)
{
    uint32_t ebp = g_ebp;

loc_00416B10: ;
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
    PUSH32(esp, 0x00416BA3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00416BA3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416BB0
 * Original: 0x00416BB0 - 0x00416BE7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416BB0(void)
{
    uint32_t ebp = g_ebp;

loc_00416BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    edx = edx | 0x1000;
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416BE2u); RECOMP_ABI_CALL(0x00416C40u, sub_00416C40); /* call 0x00416C40 */

loc_00416BE2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416BF0
 * Original: 0x00416BF0 - 0x00416C32 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416BF0(void)
{
    uint32_t ebp = g_ebp;

loc_00416BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    esi = esi | 0x1000;
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416C2Cu); RECOMP_ABI_CALL(0x00416D60u, sub_00416D60); /* call 0x00416D60 */

loc_00416C2C: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416C40
 * Original: 0x00416C40 - 0x00416CAF (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416C40(void)
{
    uint32_t ebp = g_ebp;

loc_00416C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    ebx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416C9Fu); RECOMP_ABI_CALL(0x00416CB0u, sub_00416CB0); /* call 0x00416CB0 */

loc_00416C9F: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416CA7u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00416CA7: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416CB0
 * Original: 0x00416CB0 - 0x00416D5B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416CB0(void)
{
    uint32_t ebp = g_ebp;

loc_00416CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416D53u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00416D53: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416D60
 * Original: 0x00416D60 - 0x00416DE0 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416D60(void)
{
    uint32_t ebp = g_ebp;

loc_00416D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -28) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    MEM32(ebp + -32) = edi;
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -24);
    MEM32(ebp + -36) = eax;
    ecx = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416DD0u); RECOMP_ABI_CALL(0x00416DE0u, sub_00416DE0); /* call 0x00416DE0 */

loc_00416DD0: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416DD8u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00416DD8: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416DE0
 * Original: 0x00416DE0 - 0x00416E8B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416DE0(void)
{
    uint32_t ebp = g_ebp;

loc_00416DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416E83u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00416E83: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416E90
 * Original: 0x00416E90 - 0x00416EC5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416E90(void)
{
    uint32_t ebp = g_ebp;

loc_00416E90: ;
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
    MEM32(esp) = 0xFFFFFF9Cu;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416EC0u); RECOMP_ABI_CALL(0x00415F10u, sub_00415F10); /* call 0x00415F10 */

loc_00416EC0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416ED0
 * Original: 0x00416ED0 - 0x00416F6B (155 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416ED0(void)
{
    uint32_t ebp = g_ebp;

loc_00416ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x80;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    XMM_STORE(ebp + -56, xmm0); /* movaps */
    XMM_STORE(ebp + -72, xmm0); /* movaps */
    XMM_STORE(ebp + -88, xmm0); /* movaps */
    XMM_STORE(ebp + -104, xmm0); /* movaps */
    MEM32(ebp + -24) = 0;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x50) = ecx;
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -104); /* movaps */
    xmm1 = XMM_MEM(ebp + -88); /* movaps */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x2B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416F59u); RECOMP_ABI_CALL(0x004171C0u, sub_004171C0); /* call 0x004171C0 */

loc_00416F59: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416F61u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00416F61: ;
    esp = esp + 0x80;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00416F70
 * Original: 0x00416F70 - 0x0041700E (158 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416F70(void)
{
    uint32_t ebp = g_ebp;

loc_00416F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x80;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    XMM_STORE(ebp + -56, xmm0); /* movaps */
    XMM_STORE(ebp + -72, xmm0); /* movaps */
    XMM_STORE(ebp + -88, xmm0); /* movaps */
    XMM_STORE(ebp + -104, xmm0); /* movaps */
    MEM32(ebp + -24) = 0;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x50) = ecx;
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -104); /* movaps */
    xmm1 = XMM_MEM(ebp + -88); /* movaps */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00416FFCu); RECOMP_ABI_CALL(0x004171C0u, sub_004171C0); /* call 0x004171C0 */

loc_00416FFC: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417004u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00417004: ;
    esp = esp + 0x80;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417010
 * Original: 0x00417010 - 0x0041705D (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041702Eu); RECOMP_ABI_CALL(0x00416ED0u, sub_00416ED0); /* call 0x00416ED0 */

loc_0041702E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041703C; /* jge: greater or equal (signed >=) */

loc_00417033: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00417055;

loc_0041703C: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041704Eu); RECOMP_ABI_CALL(0x00417060u, sub_00417060); /* call 0x00417060 */

loc_0041704E: ;
    MEM32(ebp + -4) = 0;

loc_00417055: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x68;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417060
 * Original: 0x00417060 - 0x00417166 (262 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417060(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x78;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -24, xmm0); /* movaps */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    XMM_STORE(ebp + -56, xmm0); /* movaps */
    XMM_STORE(ebp + -72, xmm0); /* movaps */
    XMM_STORE(ebp + -88, xmm0); /* movaps */
    XMM_STORE(ebp + -104, xmm0); /* movaps */
    eax = ebp + -104;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004170A1u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_004170A1: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004170C0; /* je: equal / zero */

loc_004170B5: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x3C);
    MEM32(ebp + -108) = eax;
    goto loc_004170C9;

loc_004170C0: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    MEM32(ebp + -108) = eax;

loc_004170C9: ;
    ecx = MEM32(ebp + -108);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 8)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x10)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x10) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x18)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x18) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x20)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x20) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x28)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x28) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x28)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x30) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x38) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x40) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x38);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x44) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x48) = ecx;
    esp = esp + 0x78;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417170
 * Original: 0x00417170 - 0x004171BD (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417170(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041718Eu); RECOMP_ABI_CALL(0x00416F70u, sub_00416F70); /* call 0x00416F70 */

loc_0041718E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041719C; /* jge: greater or equal (signed >=) */

loc_00417193: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_004171B5;

loc_0041719C: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004171AEu); RECOMP_ABI_CALL(0x00417060u, sub_00417060); /* call 0x00417060 */

loc_004171AE: ;
    MEM32(ebp + -4) = 0;

loc_004171B5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x68;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004171C0
 * Original: 0x004171C0 - 0x0041724B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004171C0(void)
{
    uint32_t ebp = g_ebp;

loc_004171C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417243u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00417243: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417250
 * Original: 0x00417250 - 0x00417285 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417250(void)
{
    uint32_t ebp = g_ebp;

loc_00417250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xA6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417278u); RECOMP_ABI_CALL(0x00417290u, sub_00417290); /* call 0x00417290 */

loc_00417278: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417280u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00417280: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417290
 * Original: 0x00417290 - 0x0041730F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417290(void)
{
    uint32_t ebp = g_ebp;

loc_00417290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417308u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00417308: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417310
 * Original: 0x00417310 - 0x004173B4 (164 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417310(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041734A; /* je: equal / zero */

loc_0041732B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041734A; /* jne: not equal / not zero */

loc_00417337: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041734A; /* jne: not equal / not zero */

loc_00417343: ;
    MEM32(ebp + 0x10) = 0;

loc_0041734A: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -20) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    eax = edi;
    MEM32(ebp + -24) = eax;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -28) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041739Eu); RECOMP_ABI_CALL(0x004173C0u, sub_004173C0); /* call 0x004173C0 */

loc_0041739E: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004173ACu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004173AC: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004173C0
 * Original: 0x004173C0 - 0x0041746B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004173C0(void)
{
    uint32_t ebp = g_ebp;

loc_004173C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417463u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00417463: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417470
 * Original: 0x00417470 - 0x0041748C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417470(void)
{
    uint32_t ebp = g_ebp;

loc_00417470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00417487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00417487: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417490
 * Original: 0x00417490 - 0x00417722 (658 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417490(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 0x49764A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004174B6u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_004174B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004174D2; /* jne: not equal / not zero */

loc_004174BB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004174C0u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_004174C0: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -12) = 0;
    goto loc_00417718;

loc_004174D2: ;
    MEM32(esp) = 0x490;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004174DEu); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_004174DE: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004174F2; /* jne: not equal / not zero */

loc_004174E6: ;
    MEM32(ebp + -12) = 0;
    goto loc_00417718;

loc_004174F2: ;
    eax = MEM32(ebp + -16);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041750Fu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0041750F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x2B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417522u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_00417522: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00417542; /* jne: not equal / not zero */

loc_00417527: ;
    eax = MEM32(ebp + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 4;
    eax = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x72 (32-bit) */
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax = MEM32(ebp + -16);
    MEM32(eax) = ecx;

loc_00417542: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x65;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417555u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_00417555: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041759B; /* je: equal / zero */

loc_0041755A: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -32) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 1;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 2;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041759Bu); RECOMP_ABI_CALL(0x00417730u, sub_00417730); /* call 0x00417730 */

loc_0041759B: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041763E; /* jne: not equal / not zero */

loc_004175AA: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 3;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004175DAu); RECOMP_ABI_CALL(0x004177D0u, sub_004177D0); /* call 0x004177D0 */

loc_004175DA: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = eax & 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00417631; /* jne: not equal / not zero */

loc_004175EA: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = MEM32(ebp + -28);
    esi = edi;
    esi = esi | 0x400;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -36) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 4;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417631u); RECOMP_ABI_CALL(0x00417730u, sub_00417730); /* call 0x00417730 */

loc_00417631: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax);
    ecx = ecx | 0x80;
    MEM32(eax) = ecx;

loc_0041763E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x88;
    ecx = ecx + 8;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x30) = 0x400;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004176C7; /* jne: not equal / not zero */

loc_0041767A: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -24;
    eax = esp;
    MEM32(ebp + -40) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x5413;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004176B8u); RECOMP_ABI_CALL(0x00417730u, sub_00417730); /* call 0x00417730 */

loc_004176B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004176C7; /* jne: not equal / not zero */

loc_004176BD: ;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x50) = 0xA;

loc_004176C7: ;
    eax = MEM32(ebp + -16);
    ecx = 0x418270;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -16);
    ecx = 0x4184F0;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -16);
    ecx = 0x4184A0;
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + -16);
    ecx = 0x4180A0;
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM8(0xDFBFF5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xDFBFF5), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041770A; /* jne: not equal / not zero */

loc_00417700: ;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x4C) = 0xFFFFFFFFu;

loc_0041770A: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417715u); RECOMP_ABI_CALL(0x0041CD50u, sub_0041CD50); /* call 0x0041CD50 */

loc_00417715: ;
    MEM32(ebp + -12) = eax;

loc_00417718: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417730
 * Original: 0x00417730 - 0x004177CB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417730(void)
{
    uint32_t ebp = g_ebp;

loc_00417730: ;
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
    PUSH32(esp, 0x004177C3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004177C3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004177D0
 * Original: 0x004177D0 - 0x0041785B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004177D0(void)
{
    uint32_t ebp = g_ebp;

loc_004177D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
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
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417853u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00417853: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417860
 * Original: 0x00417860 - 0x00417935 (213 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417860(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x2B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041787Cu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_0041787C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041788A; /* je: equal / zero */

loc_00417881: ;
    MEM32(ebp + -4) = 2;
    goto loc_004178A7;

loc_0041788A: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041789E; /* jne: not equal / not zero */

loc_00417895: ;
    MEM32(ebp + -4) = 0;
    goto loc_004178A5;

loc_0041789E: ;
    MEM32(ebp + -4) = 1;

loc_004178A5: ;
    goto loc_004178A7;

loc_004178A7: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004178BAu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_004178BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004178CA; /* je: equal / zero */

loc_004178BF: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x80;
    MEM32(ebp + -4) = eax;

loc_004178CA: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x65;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004178DDu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_004178DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004178ED; /* je: equal / zero */

loc_004178E2: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x80000;
    MEM32(ebp + -4) = eax;

loc_004178ED: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00417901; /* je: equal / zero */

loc_004178F8: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x40;
    MEM32(ebp + -4) = eax;

loc_00417901: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x77 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00417917; /* jne: not equal / not zero */

loc_0041790C: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x200;
    MEM32(ebp + -4) = eax;

loc_00417917: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041792D; /* jne: not equal / not zero */

loc_00417922: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x400;
    MEM32(ebp + -4) = eax;

loc_0041792D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417940
 * Original: 0x00417940 - 0x00417A70 (304 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417940(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00417940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x38)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x88;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041796Cu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0041796C: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -8) = eax;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x88000;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004179AAu); RECOMP_ABI_CALL(0x00417A70u, sub_00417A70); /* call 0x00417A70 */

loc_004179AA: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004179B2u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004179B2: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004179CF; /* jge: greater or equal (signed >=) */

loc_004179C3: ;
    MEM32(ebp + -4) = 0;
    goto loc_00417A68;

loc_004179CF: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x3C);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -12) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 1;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 2;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417A13u); RECOMP_ABI_CALL(0x00417A70u, sub_00417A70); /* call 0x00417A70 */

loc_00417A13: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 9;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 8;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + 0x14);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = 0x418270;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = 0x4184A0;
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = 0x4180A0;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x4C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;

loc_00417A68: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417A70
 * Original: 0x00417A70 - 0x00417B0B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417A70(void)
{
    uint32_t ebp = g_ebp;

loc_00417A70: ;
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
    PUSH32(esp, 0x00417B03u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00417B03: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417B10
 * Original: 0x00417B10 - 0x00417C11 (257 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417B10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417B27u); RECOMP_ABI_CALL(0x00417C20u, sub_00417C20); /* call 0x00417C20 */

loc_00417B27: ;
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00417B46; /* jne: not equal / not zero */

loc_00417B3A: ;
    MEM32(ebp + -4) = 0;
    goto loc_00417C09;

loc_00417B46: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x4C;
    eax = MEM32(ebp + -12);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417B65u); RECOMP_ABI_CALL(0x00417C30u, sub_00417C30); /* call 0x00417C30 */

loc_00417B65: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00417B7A; /* jne: not equal / not zero */

loc_00417B6E: ;
    MEM32(ebp + -4) = 1;
    goto loc_00417C09;

loc_00417B7A: ;
    goto loc_00417B7C;

loc_00417B7C: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x4C;
    eax = MEM32(ebp + -12);
    eax = eax | 0x40000000;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417BA0u); RECOMP_ABI_CALL(0x00417C30u, sub_00417C30); /* call 0x00417C30 */

loc_00417BA0: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00417C02; /* je: equal / zero */

loc_00417BA8: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00417BDB; /* jne: not equal / not zero */

loc_00417BB5: ;
    edx = MEM32(ebp + 8);
    edx = edx + 0x4C;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -8);
    eax = eax | 0x40000000;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417BD6u); RECOMP_ABI_CALL(0x00417C30u, sub_00417C30); /* call 0x00417C30 */

loc_00417BD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00417BFD; /* jne: not equal / not zero */

loc_00417BDB: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x4C;
    eax = MEM32(ebp + -8);
    eax = eax | 0x40000000;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417BFDu); RECOMP_ABI_CALL(0x00417C60u, sub_00417C60); /* call 0x00417C60 */

loc_00417BFD: ;
    goto loc_00417B7C;

loc_00417C02: ;
    MEM32(ebp + -4) = 1;

loc_00417C09: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417C20
 * Original: 0x00417C20 - 0x00417C30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417C20(void)
{
    uint32_t ebp = g_ebp;

loc_00417C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417C2Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_00417C2B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417C30
 * Original: 0x00417C30 - 0x00417C51 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417C30(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417C30: ;
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
 * sub_00417C60
 * Original: 0x00417C60 - 0x00417D3D (221 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417C60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417C60: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00417C7F; /* je: equal / zero */

loc_00417C78: ;
    MEM32(ebp + 0x10) = 0x80;

loc_00417C7F: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0x10);
    edi = esi;
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
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417CD1u); RECOMP_ABI_CALL(0x00417E90u, sub_00417E90); /* call 0x00417E90 */

loc_00417CD1: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00417D32; /* jne: not equal / not zero */

loc_00417CDD: ;
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
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417D29u); RECOMP_ABI_CALL(0x00417E90u, sub_00417E90); /* call 0x00417E90 */

loc_00417D29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_00417D32: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417D40
 * Original: 0x00417D40 - 0x00417D8E (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x4C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417D61u); RECOMP_ABI_CALL(0x00417D90u, sub_00417D90); /* call 0x00417D90 */

loc_00417D61: ;
    eax = eax & 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00417D89; /* je: equal / zero */

loc_00417D6B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x4C;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417D89u); RECOMP_ABI_CALL(0x00417DB0u, sub_00417DB0); /* call 0x00417DB0 */

loc_00417D89: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417D90
 * Original: 0x00417D90 - 0x00417DA9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417D90(void)
{
    uint32_t ebp = g_ebp;

loc_00417D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = _tmp; }
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417DB0
 * Original: 0x00417DB0 - 0x00417E81 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417DB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417DB0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00417DCF; /* je: equal / zero */

loc_00417DC8: ;
    MEM32(ebp + 0x10) = 0x80;

loc_00417DCF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00417DDC; /* jge: greater or equal (signed >=) */

loc_00417DD5: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_00417DDC: ;
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
    PUSH32(esp, 0x00417E23u); RECOMP_ABI_CALL(0x00417F40u, sub_00417F40); /* call 0x00417F40 */

loc_00417E23: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00417E76; /* jne: not equal / not zero */

loc_00417E2F: ;
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
    PUSH32(esp, 0x00417E6Du); RECOMP_ABI_CALL(0x00417F40u, sub_00417F40); /* call 0x00417F40 */

loc_00417E6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_00417E76: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417E90
 * Original: 0x00417E90 - 0x00417F3B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417E90(void)
{
    uint32_t ebp = g_ebp;

loc_00417E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00417F33u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00417F33: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417F40
 * Original: 0x00417F40 - 0x00417FDB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417F40(void)
{
    uint32_t ebp = g_ebp;

loc_00417F40: ;
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
    PUSH32(esp, 0x00417FD3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00417FD3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00417FE0
 * Original: 0x00417FE0 - 0x00418085 (165 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417FE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00417FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM8(ebp + -9) = LO8(eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00418015; /* jne: not equal / not zero */

loc_00417FFC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418007u); RECOMP_ABI_CALL(0x00418930u, sub_00418930); /* call 0x00418930 */

loc_00418007: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418015; /* je: equal / zero */

loc_0041800C: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_0041807C;

loc_00418015: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041804A; /* je: equal / zero */

loc_00418023: ;
    eax = ZX8(MEM8(ebp + -9));
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041804A; /* je: equal / zero */

loc_0041802F: ;
    SET_LO8(eax, MEM8(ebp + -9));
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x14);
    esi = ecx;
    esi = esi + 1;
    MEM32(edx + 0x14) = esi;
    MEM8(ecx) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    goto loc_0041807C;

loc_0041804A: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    edx = MEM32(ebp + 8);
    ecx = ebp + -9;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 1;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00418067u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00418067: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418075; /* je: equal / zero */

loc_0041806C: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_0041807C;

loc_00418075: ;
    eax = ZX8(MEM8(ebp + -9));
    MEM32(ebp + -8) = eax;

loc_0041807C: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418090
 * Original: 0x00418090 - 0x0041809B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418090(void)
{
    uint32_t ebp = g_ebp;

loc_00418090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004180A0
 * Original: 0x004180A0 - 0x004180E6 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004180A0(void)
{
    uint32_t ebp = g_ebp;

loc_004180A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x3C);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004180B8u); RECOMP_ABI_CALL(0x00418090u, sub_00418090); /* call 0x00418090 */

loc_004180B8: ;
    ecx = eax;
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004180D9u); RECOMP_ABI_CALL(0x004180F0u, sub_004180F0); /* call 0x004180F0 */

loc_004180D9: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004180E1u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004180E1: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004180F0
 * Original: 0x004180F0 - 0x0041816F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004180F0(void)
{
    uint32_t ebp = g_ebp;

loc_004180F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418168u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00418168: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418170
 * Original: 0x00418170 - 0x004181C8 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418170(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041817Bu); RECOMP_ABI_CALL(0x0041CD10u, sub_0041CD10); /* call 0x0041CD10 */

loc_0041817B: ;
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;

loc_00418180: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041819C; /* je: equal / zero */

loc_00418186: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418191u); RECOMP_ABI_CALL(0x004181D0u, sub_004181D0); /* call 0x004181D0 */

loc_00418191: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x38);
    MEM32(ebp + -4) = eax;
    goto loc_00418180;

loc_0041819C: ;
    eax = MEM32(0x838ED8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004181A9u); RECOMP_ABI_CALL(0x004181D0u, sub_004181D0); /* call 0x004181D0 */

loc_004181A9: ;
    eax = MEM32(0x838F64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004181B6u); RECOMP_ABI_CALL(0x004181D0u, sub_004181D0); /* call 0x004181D0 */

loc_004181B6: ;
    eax = MEM32(0x838E4C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004181C3u); RECOMP_ABI_CALL(0x004181D0u, sub_004181D0); /* call 0x004181D0 */

loc_004181C3: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004181D0
 * Original: 0x004181D0 - 0x00418266 (150 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004181D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004181D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004181E3; /* jne: not equal / not zero */

loc_004181E1: ;
    goto loc_0041825F;

loc_004181E3: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004181FB; /* jl: less (signed <) */

loc_004181EE: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004181F9u); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_004181F9: ;
    goto loc_004181FD;

loc_004181FB: ;
    goto loc_004181FD;

loc_004181FD: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041822B; /* je: equal / zero */

loc_0041820B: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0041822Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0041822B: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041825F; /* je: equal / zero */

loc_00418239: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x28);
    esi = MEM32(edx + 4);
    ecx = MEM32(edx + 8);
    esi = esi - ecx;
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ecx = esp;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 4) = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 0xC) = 1;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0041825Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0041825F: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418270
 * Original: 0x00418270 - 0x004183F4 (388 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418270(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00418270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x4C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x30);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041830C; /* je: equal / zero */

loc_004182BE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x3C);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -32;
    eax = esp;
    MEM32(ebp + -44) = eax;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 2;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x41;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004182FFu); RECOMP_ABI_CALL(0x00418400u, sub_00418400); /* call 0x00418400 */

loc_004182FF: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418307u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00418307: ;
    MEM32(ebp + -40) = eax;
    goto loc_00418359;

loc_0041830C: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x3C);
    MEM32(ebp + -48) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = MEM32(ebp + -24);
    ebx = MEM32(ebp + -20);
    ecx = edi;
    eax = esp;
    MEM32(ebp + -52) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -48);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x3F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041834Eu); RECOMP_ABI_CALL(0x00418400u, sub_00418400); /* call 0x00418400 */

loc_0041834E: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418356u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00418356: ;
    MEM32(ebp + -40) = eax;

loc_00418359: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00418388; /* jg: greater (signed >) */

loc_00418365: ;
    edx = MEM32(ebp + -36);
    ecx = 0x10;
    eax = 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) ecx = eax; /* cmovne */
    eax = MEM32(ebp + 8);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    MEM32(ebp + -16) = 0;
    goto loc_004183E9;

loc_00418388: ;
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_A(_fa, _fb)) goto loc_00418398; /* ja: above (unsigned >) */

loc_00418390: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -16) = eax;
    goto loc_004183E9;

loc_00418398: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -36);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    ecx = ecx + MEM32(ebp + -36);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004183E3; /* je: equal / zero */

loc_004183C7: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx + 4) = edx;
    SET_LO8(edx, MEM8(eax));
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM8(eax + ecx) = LO8(edx);

loc_004183E3: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = eax;

loc_004183E9: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418400
 * Original: 0x00418400 - 0x0041849B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418400(void)
{
    uint32_t ebp = g_ebp;

loc_00418400: ;
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
    PUSH32(esp, 0x00418493u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00418493: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004184A0
 * Original: 0x004184A0 - 0x004184E2 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004184A0(void)
{
    uint32_t ebp = g_ebp;

loc_004184A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ebp + -16);
    esi = MEM32(ebp + -12);
    edi = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004184DBu); RECOMP_ABI_CALL(0x0043AFF0u, sub_0043AFF0); /* call 0x0043AFF0 */

loc_004184DB: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004184F0
 * Original: 0x004184F0 - 0x0041867B (395 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004184F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004184F0: ;
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
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = eax - ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    eax = ebp + -32;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -36);
    eax = eax + MEM32(ecx + 0xC);
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -44) = 2;

loc_00418544: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x3C);
    MEM32(ebp + -52) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + -36);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + -44);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -56) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -52);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x42;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418589u); RECOMP_ABI_CALL(0x00418680u, sub_00418680); /* call 0x00418680 */

loc_00418589: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418591u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00418591: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004185CB; /* jne: not equal / not zero */

loc_0041859C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 0x30);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = eax;
    goto loc_00418670;

loc_004185CB: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041861A; /* jge: greater or equal (signed >=) */

loc_004185D1: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00418606; /* jne: not equal / not zero */

loc_004185FF: ;
    eax = 0; /* xor self */
    MEM32(ebp + -60) = eax;
    goto loc_00418612;

loc_00418606: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -36);
    eax = eax - MEM32(ecx + 4);
    MEM32(ebp + -60) = eax;

loc_00418612: ;
    eax = MEM32(ebp + -60);
    MEM32(ebp + -16) = eax;
    goto loc_00418670;

loc_0041861A: ;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + -40);
    eax = eax - ecx;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00418650; /* jbe: below or equal (unsigned <=) */

loc_00418630: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -48);
    eax = eax - ecx;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -36);
    eax = eax + 8;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -44);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -44) = eax;

loc_00418650: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(eax);
    ecx = ecx + MEM32(ebp + -48);
    eax = MEM32(ebp + -36);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + -48);
    eax = MEM32(ebp + -36);
    ecx = MEM32(eax + 4);
    ecx = ecx - edx;
    MEM32(eax + 4) = ecx;
    goto loc_00418544;

loc_00418670: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418680
 * Original: 0x00418680 - 0x0041871B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418680(void)
{
    uint32_t ebp = g_ebp;

loc_00418680: ;
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
    PUSH32(esp, 0x00418713u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00418713: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418720
 * Original: 0x00418720 - 0x004187BA (154 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418720(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0x4184F0;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041879A; /* jne: not equal / not zero */

loc_0041874A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x3C);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -16;
    eax = esp;
    MEM32(ebp + -20) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x5413;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041878Bu); RECOMP_ABI_CALL(0x004187C0u, sub_004187C0); /* call 0x004187C0 */

loc_0041878B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041879A; /* je: equal / zero */

loc_00418790: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x50) = 0xFFFFFFFFu;

loc_0041879A: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004187B3u); RECOMP_ABI_CALL(0x004184F0u, sub_004184F0); /* call 0x004184F0 */

loc_004187B3: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004187C0
 * Original: 0x004187C0 - 0x0041885B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004187C0(void)
{
    uint32_t ebp = g_ebp;

loc_004187C0: ;
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
    PUSH32(esp, 0x00418853u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00418853: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418860
 * Original: 0x00418860 - 0x0041891F (191 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418860(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x48);
    ecx = ecx - 1;
    eax = MEM32(ebp + 8);
    ecx = ecx | MEM32(eax + 0x48);
    MEM32(eax + 0x48) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004188A9; /* je: equal / zero */

loc_00418889: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x004188A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_004188A9: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004188E7; /* je: equal / zero */

loc_004188D4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00418917;

loc_004188E7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 0x30);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    edx = edx & 0x10;
    eax = 0; /* xor self */
    ecx = 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -4) = eax;

loc_00418917: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418920
 * Original: 0x00418920 - 0x00418930 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418920(void)
{
    uint32_t ebp = g_ebp;

loc_00418920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041892Bu); RECOMP_ABI_CALL(0x00418170u, sub_00418170); /* call 0x00418170 */

loc_0041892B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418930
 * Original: 0x00418930 - 0x004189B0 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418930(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x48);
    ecx = ecx - 1;
    eax = MEM32(ebp + 8);
    ecx = ecx | MEM32(eax + 0x48);
    MEM32(eax + 0x48) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418969; /* je: equal / zero */

loc_00418956: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_004189A8;

loc_00418969: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 0x30);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    MEM32(ebp + -4) = 0;

loc_004189A8: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004189B0
 * Original: 0x004189B0 - 0x004189C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004189B0(void)
{
    uint32_t ebp = g_ebp;

loc_004189B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004189BBu); RECOMP_ABI_CALL(0x00418170u, sub_00418170); /* call 0x00418170 */

loc_004189BB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004189C0
 * Original: 0x004189C0 - 0x00418A13 (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004189C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004189C0: ;
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
    PUSH32(esp, 0x004189D4u); RECOMP_ABI_CALL(0x00418860u, sub_00418860); /* call 0x00418860 */

loc_004189D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00418A04; /* jne: not equal / not zero */

loc_004189D9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    edx = MEM32(ebp + 8);
    ecx = ebp + -5;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 1;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x004189F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_004189F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00418A04; /* jne: not equal / not zero */

loc_004189FB: ;
    eax = ZX8(MEM8(ebp + -5));
    MEM32(ebp + -4) = eax;
    goto loc_00418A0B;

loc_00418A04: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_00418A0B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418A20
 * Original: 0x00418A20 - 0x00418A57 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418A20(void)
{
    uint32_t ebp = g_ebp;

loc_00418A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418A4Bu); RECOMP_ABI_CALL(0x0041F5C0u, sub_0041F5C0); /* call 0x0041F5C0 */

loc_00418A4B: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418A60
 * Original: 0x00418A60 - 0x00418AB3 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418A60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00418A84; /* jl: less (signed <) */

loc_00418A74: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418A7Fu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00418A7F: ;
    MEM32(ebp + -8) = eax;
    goto loc_00418A8B;

loc_00418A84: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_00418A8B;

loc_00418A8B: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFCFu;
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418AAC; /* je: equal / zero */

loc_00418AA1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418AACu); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00418AAC: ;
    goto loc_00418AAE;

loc_00418AAE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418AC0
 * Original: 0x00418AC0 - 0x00418AF7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418AC0(void)
{
    uint32_t ebp = g_ebp;

loc_00418AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418AEBu); RECOMP_ABI_CALL(0x0041F660u, sub_0041F660); /* call 0x0041F660 */

loc_00418AEB: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418B00
 * Original: 0x00418B00 - 0x00418B19 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418B00(void)
{
    uint32_t ebp = g_ebp;

loc_00418B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418B14u); RECOMP_ABI_CALL(0x00418F60u, sub_00418F60); /* call 0x00418F60 */

loc_00418B14: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418B20
 * Original: 0x00418B20 - 0x00418B2D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418B20(void)
{
    uint32_t ebp = g_ebp;

loc_00418B20: ;
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
 * sub_00418B30
 * Original: 0x00418B30 - 0x00418B63 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418B30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 4;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00418B56; /* jne: not equal / not zero */

loc_00418B49: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_00418B56: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418B70
 * Original: 0x00418B70 - 0x00418BA3 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418B70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 8;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00418B96; /* jne: not equal / not zero */

loc_00418B89: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_00418B96: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418BB0
 * Original: 0x00418BB0 - 0x00418BCD (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418BB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 4;
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
 * sub_00418BD0
 * Original: 0x00418BD0 - 0x00418BED (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418BD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 8;
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
 * sub_00418BF0
 * Original: 0x00418BF0 - 0x00418C07 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418BF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418C10
 * Original: 0x00418C10 - 0x00418C1E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418C10(void)
{
    uint32_t ebp = g_ebp;

loc_00418C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x30);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418C20
 * Original: 0x00418C20 - 0x00418C52 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418C43; /* je: equal / zero */

loc_00418C30: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = eax - ecx;
    MEM32(ebp + -4) = eax;
    goto loc_00418C4A;

loc_00418C43: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_00418C4A;

loc_00418C4A: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418C60
 * Original: 0x00418C60 - 0x00418C9C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418C60(void)
{
    uint32_t ebp = g_ebp;

loc_00418C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418CA0
 * Original: 0x00418CA0 - 0x00418CD2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418CA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418CC3; /* je: equal / zero */

loc_00418CB0: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    eax = eax - ecx;
    MEM32(ebp + -4) = eax;
    goto loc_00418CCA;

loc_00418CC3: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_00418CCA;

loc_00418CCA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418CE0
 * Original: 0x00418CE0 - 0x00418D25 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00418CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00418D01; /* jne: not equal / not zero */

loc_00418CF8: ;
    MEM32(ebp + -4) = 0;
    goto loc_00418D1D;

loc_00418D01: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;

loc_00418D1D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418D30
 * Original: 0x00418D30 - 0x00418D47 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418D30(void)
{
    uint32_t ebp = g_ebp;

loc_00418D30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 4);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418D50
 * Original: 0x00418D50 - 0x00418D62 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418D50(void)
{
    uint32_t ebp = g_ebp;

loc_00418D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418D70
 * Original: 0x00418D70 - 0x00418D78 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418D70(void)
{
    uint32_t ebp = g_ebp;

loc_00418D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418D80
 * Original: 0x00418D80 - 0x00418E7F (255 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418D80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00418DA4; /* jl: less (signed <) */

loc_00418D94: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418D9Fu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00418D9F: ;
    MEM32(ebp + -20) = eax;
    goto loc_00418DAB;

loc_00418DA4: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_00418DAB;

loc_00418DAB: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418DBCu); RECOMP_ABI_CALL(0x00418F60u, sub_00418F60); /* call 0x00418F60 */

loc_00418DBC: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00418DCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00418DCD: ;
    eax = eax | MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418DE4; /* je: equal / zero */

loc_00418DD9: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418DE4u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00418DE4: ;
    goto loc_00418DE6;

loc_00418DE6: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418DFB; /* je: equal / zero */

loc_00418DF3: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_00418E77;

loc_00418DFB: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418E06u); RECOMP_ABI_CALL(0x0041BB10u, sub_0041BB10); /* call 0x0041BB10 */

loc_00418E06: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418E0Bu); RECOMP_ABI_CALL(0x0041CD10u, sub_0041CD10); /* call 0x0041CD10 */

loc_00418E0B: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418E26; /* je: equal / zero */

loc_00418E17: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x38);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x34);
    MEM32(eax + 0x38) = ecx;

loc_00418E26: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x38), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418E3E; /* je: equal / zero */

loc_00418E2F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x38);
    MEM32(eax + 0x34) = ecx;

loc_00418E3E: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00418E53; /* jne: not equal / not zero */

loc_00418E48: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x38);
    eax = MEM32(ebp + -16);
    MEM32(eax) = ecx;

loc_00418E53: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418E58u); RECOMP_ABI_CALL(0x0041CD30u, sub_0041CD30); /* call 0x0041CD30 */

loc_00418E58: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x60);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418E66u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00418E66: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418E71u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_00418E71: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_00418E77: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418E80
 * Original: 0x00418E80 - 0x00418EE6 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418E80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00418EA4; /* jl: less (signed <) */

loc_00418E94: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418E9Fu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00418E9F: ;
    MEM32(ebp + -12) = eax;
    goto loc_00418EAB;

loc_00418EA4: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_00418EAB;

loc_00418EAB: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418EDC; /* je: equal / zero */

loc_00418ED1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418EDCu); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00418EDC: ;
    goto loc_00418EDE;

loc_00418EDE: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418EF0
 * Original: 0x00418EF0 - 0x00418F56 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418EF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00418F14; /* jl: less (signed <) */

loc_00418F04: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418F0Fu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00418F0F: ;
    MEM32(ebp + -12) = eax;
    goto loc_00418F1B;

loc_00418F14: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_00418F1B;

loc_00418F1B: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418F4C; /* je: equal / zero */

loc_00418F41: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418F4Cu); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00418F4C: ;
    goto loc_00418F4E;

loc_00418F4E: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00418F60
 * Original: 0x00418F60 - 0x0041914B (491 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418F60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00418F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041903F; /* jne: not equal / not zero */

loc_00418F75: ;
    MEM32(ebp + -16) = 0;
    eax = MEM32(0x838F64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418F99; /* je: equal / zero */

loc_00418F86: ;
    eax = MEM32(0x838F64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418F93u); RECOMP_ABI_CALL(0x00418F60u, sub_00418F60); /* call 0x00418F60 */

loc_00418F93: ;
    eax = eax | MEM32(ebp + -16);
    MEM32(ebp + -16) = eax;

loc_00418F99: ;
    eax = MEM32(0x838E4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00418FB6; /* je: equal / zero */

loc_00418FA3: ;
    eax = MEM32(0x838E4C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418FB0u); RECOMP_ABI_CALL(0x00418F60u, sub_00418F60); /* call 0x00418F60 */

loc_00418FB0: ;
    eax = eax | MEM32(ebp + -16);
    MEM32(ebp + -16) = eax;

loc_00418FB6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418FBBu); RECOMP_ABI_CALL(0x0041CD10u, sub_0041CD10); /* call 0x0041CD10 */

loc_00418FBB: ;
    eax = MEM32(eax);
    MEM32(ebp + 8) = eax;

loc_00418FC0: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041902F; /* je: equal / zero */

loc_00418FC6: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00418FE1; /* jl: less (signed <) */

loc_00418FD1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00418FDCu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00418FDC: ;
    MEM32(ebp + -28) = eax;
    goto loc_00418FE8;

loc_00418FE1: ;
    eax = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    goto loc_00418FE8;

loc_00418FE8: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041900D; /* je: equal / zero */

loc_00418FFC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419007u); RECOMP_ABI_CALL(0x00418F60u, sub_00418F60); /* call 0x00418F60 */

loc_00419007: ;
    eax = eax | MEM32(ebp + -16);
    MEM32(ebp + -16) = eax;

loc_0041900D: ;
    goto loc_0041900F;

loc_0041900F: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419020; /* je: equal / zero */

loc_00419015: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419020u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00419020: ;
    goto loc_00419022;

loc_00419022: ;
    goto loc_00419024;

loc_00419024: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x38);
    MEM32(ebp + 8) = eax;
    goto loc_00418FC0;

loc_0041902F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419034u); RECOMP_ABI_CALL(0x0041CD30u, sub_0041CD30); /* call 0x0041CD30 */

loc_00419034: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_00419141;

loc_0041903F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0041905A; /* jl: less (signed <) */

loc_0041904A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419055u); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00419055: ;
    MEM32(ebp + -32) = eax;
    goto loc_00419061;

loc_0041905A: ;
    eax = 0; /* xor self */
    MEM32(ebp + -32) = eax;
    goto loc_00419061;

loc_00419061: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004190C1; /* je: equal / zero */

loc_00419075: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00419095u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00419095: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004190BF; /* jne: not equal / not zero */

loc_0041909E: ;
    goto loc_004190A0;

loc_004190A0: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004190B1; /* je: equal / zero */

loc_004190A6: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004190B1u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_004190B1: ;
    goto loc_004190B3;

loc_004190B3: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_00419141;

loc_004190BF: ;
    goto loc_004190C1;

loc_004190C1: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004190F5; /* je: equal / zero */

loc_004190CF: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x28);
    esi = MEM32(edx + 4);
    ecx = MEM32(edx + 8);
    esi = esi - ecx;
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ecx = esp;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 4) = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 0xC) = 1;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x004190F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_004190F5: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419138; /* je: equal / zero */

loc_0041912D: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419138u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00419138: ;
    goto loc_0041913A;

loc_0041913A: ;
    MEM32(ebp + -12) = 0;

loc_00419141: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419150
 * Original: 0x00419150 - 0x00419169 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419150(void)
{
    uint32_t ebp = g_ebp;

loc_00419150: ;
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
    PUSH32(esp, 0x00419164u); RECOMP_ABI_CALL(0x00419170u, sub_00419170); /* call 0x00419170 */

loc_00419164: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419170
 * Original: 0x00419170 - 0x004191F8 (136 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419170(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004191A8; /* jl: less (signed <) */

loc_00419188: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004191E2; /* je: equal / zero */

loc_0041918E: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0xBFFFFFFFu;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041919Eu); RECOMP_ABI_CALL(0x00419200u, sub_00419200); /* call 0x00419200 */

loc_0041919E: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004191E2; /* jne: not equal / not zero */

loc_004191A8: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004191CC; /* je: equal / zero */

loc_004191B6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx + 4) = edx;
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -16) = eax;
    goto loc_004191DA;

loc_004191CC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004191D7u); RECOMP_ABI_CALL(0x004189C0u, sub_004189C0); /* call 0x004189C0 */

loc_004191D7: ;
    MEM32(ebp + -16) = eax;

loc_004191DA: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    goto loc_004191F0;

loc_004191E2: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004191EDu); RECOMP_ABI_CALL(0x00419210u, sub_00419210); /* call 0x00419210 */

loc_004191ED: ;
    MEM32(ebp + -4) = eax;

loc_004191F0: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419200
 * Original: 0x00419200 - 0x00419210 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419200(void)
{
    uint32_t ebp = g_ebp;

loc_00419200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041920Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0041920B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419210
 * Original: 0x00419210 - 0x004192C9 (185 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419210(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x4C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x3FFFFFFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419239u); RECOMP_ABI_CALL(0x004192D0u, sub_004192D0); /* call 0x004192D0 */

loc_00419239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419249; /* je: equal / zero */

loc_0041923E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419249u); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00419249: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041926D; /* je: equal / zero */

loc_00419257: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx + 4) = edx;
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -8) = eax;
    goto loc_0041927B;

loc_0041926D: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419278u); RECOMP_ABI_CALL(0x004189C0u, sub_004189C0); /* call 0x004189C0 */

loc_00419278: ;
    MEM32(ebp + -8) = eax;

loc_0041927B: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 0x4C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419299u); RECOMP_ABI_CALL(0x00419300u, sub_00419300); /* call 0x00419300 */

loc_00419299: ;
    eax = eax & 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004192C1; /* je: equal / zero */

loc_004192A3: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x4C;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004192C1u); RECOMP_ABI_CALL(0x00419320u, sub_00419320); /* call 0x00419320 */

loc_004192C1: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004192D0
 * Original: 0x004192D0 - 0x004192F1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004192D0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004192D0: ;
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
 * sub_00419300
 * Original: 0x00419300 - 0x00419319 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419300(void)
{
    uint32_t ebp = g_ebp;

loc_00419300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = _tmp; }
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419320
 * Original: 0x00419320 - 0x004193F1 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419320(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419320: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0041933F; /* je: equal / zero */

loc_00419338: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0041933F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041934C; /* jge: greater or equal (signed >=) */

loc_00419345: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0041934C: ;
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
    PUSH32(esp, 0x00419393u); RECOMP_ABI_CALL(0x00419400u, sub_00419400); /* call 0x00419400 */

loc_00419393: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_004193E6; /* jne: not equal / not zero */

loc_0041939F: ;
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
    PUSH32(esp, 0x004193DDu); RECOMP_ABI_CALL(0x00419400u, sub_00419400); /* call 0x00419400 */

loc_004193DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_004193E6: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419400
 * Original: 0x00419400 - 0x0041949B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419400(void)
{
    uint32_t ebp = g_ebp;

loc_00419400: ;
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
    PUSH32(esp, 0x00419493u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00419493: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004194A0
 * Original: 0x004194A0 - 0x004195DA (314 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004194A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_004194A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004194CE; /* jl: less (signed <) */

loc_004194BE: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004194C9u); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_004194C9: ;
    MEM32(ebp + -24) = eax;
    goto loc_004194D5;

loc_004194CE: ;
    eax = 0; /* xor self */
    MEM32(ebp + -24) = eax;
    goto loc_004194D5;

loc_004194D5: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004194FF; /* je: equal / zero */

loc_004194E9: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx + 4) = edx;
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -28) = eax;
    goto loc_0041950D;

loc_004194FF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041950Au); RECOMP_ABI_CALL(0x004189C0u, sub_004189C0); /* call 0x004189C0 */

loc_0041950A: ;
    MEM32(ebp + -28) = eax;

loc_0041950D: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041951Fu); RECOMP_ABI_CALL(0x0041F330u, sub_0041F330); /* call 0x0041F330 */

loc_0041951F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041957F; /* je: equal / zero */

loc_00419528: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419550u); RECOMP_ABI_CALL(0x00427EC0u, sub_00427EC0); /* call 0x00427EC0 */

loc_00419550: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041957F; /* je: equal / zero */

loc_00419558: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 1;
    MEM32(ebp + -8) = ecx;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    goto loc_004195BD;

loc_0041957F: ;
    edx = MEM32(ebp + 8);
    edx = edx + 0x60;
    MEM32(ebp + -20) = 0;
    ecx = ebp + -20;
    eax = MEM32(ebp + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004195A2u); RECOMP_ABI_CALL(0x0041CB40u, sub_0041CB40); /* call 0x0041CB40 */

loc_004195A2: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_004195BB; /* jle: less or equal (signed <=) */

loc_004195AA: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x60);
    MEM32(ebp + -4) = eax;

loc_004195BB: ;
    goto loc_004195BD;

loc_004195BD: ;
    goto loc_004195BF;

loc_004195BF: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004195D0; /* je: equal / zero */

loc_004195C5: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004195D0u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_004195D0: ;
    goto loc_004195D2;

loc_004195D2: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004195E0
 * Original: 0x004195E0 - 0x0041962B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004195E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004195E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004195F8u); RECOMP_ABI_CALL(0x0041B9E0u, sub_0041B9E0); /* call 0x0041B9E0 */

loc_004195F8: ;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00419610; /* jns: not sign (positive) */

loc_00419605: ;
    goto loc_00419607;

loc_00419607: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00419623;

loc_00419610: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -4) = 0;

loc_00419623: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419630
 * Original: 0x00419630 - 0x00419858 (552 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419630(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00419660; /* jl: less (signed <) */

loc_00419650: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041965Bu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_0041965B: ;
    MEM32(ebp + -28) = eax;
    goto loc_00419667;

loc_00419660: ;
    eax = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    goto loc_00419667;

loc_00419667: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004196BB; /* jg: greater (signed >) */

loc_00419673: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x48);
    ecx = ecx - 1;
    eax = MEM32(ebp + 0x10);
    ecx = ecx | MEM32(eax + 0x48);
    MEM32(eax + 0x48) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419696; /* je: equal / zero */

loc_0041968B: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419696u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00419696: ;
    goto loc_00419698;

loc_00419698: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004196AA; /* jge: greater or equal (signed >=) */

loc_0041969E: ;
    MEM32(ebp + -4) = 0;
    goto loc_00419850;

loc_004196AA: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 0;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_00419850;

loc_004196BB: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = eax;

loc_004196C4: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419829; /* je: equal / zero */

loc_004196CE: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004197A6; /* je: equal / zero */

loc_004196E0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 8);
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx + 4);
    eax = eax - edx;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419708u); RECOMP_ABI_CALL(0x00427EC0u, sub_00427EC0); /* call 0x00427EC0 */

loc_00419708: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419724; /* je: equal / zero */

loc_00419711: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + 4);
    eax = eax - ecx;
    eax = eax + 1;
    MEM32(ebp + -32) = eax;
    goto loc_00419735;

loc_00419724: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + 4);
    eax = eax - ecx;
    MEM32(ebp + -32) = eax;

loc_00419735: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041974B; /* jae: above or equal (unsigned >=) */

loc_00419743: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -36) = eax;
    goto loc_00419751;

loc_0041974B: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -36) = eax;

loc_00419751: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -16) = eax;
    edx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -16);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419773u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00419773: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0x10);
    ecx = ecx + MEM32(eax + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -16);
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0xC);
    eax = eax - ecx;
    MEM32(ebp + 0xC) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041979F; /* jne: not equal / not zero */

loc_00419799: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004197A4; /* jne: not equal / not zero */

loc_0041979F: ;
    goto loc_00419829;

loc_004197A4: ;
    goto loc_004197A6;

loc_004197A6: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004197CA; /* je: equal / zero */

loc_004197B4: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx + 4) = edx;
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -40) = eax;
    goto loc_004197D8;

loc_004197CA: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004197D5u); RECOMP_ABI_CALL(0x004189C0u, sub_004189C0); /* call 0x004189C0 */

loc_004197D5: ;
    MEM32(ebp + -40) = eax;

loc_004197D8: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00419801; /* jge: greater or equal (signed >=) */

loc_004197E3: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004197F8; /* je: equal / zero */

loc_004197EB: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004197FF; /* jne: not equal / not zero */

loc_004197F8: ;
    MEM32(ebp + 8) = 0;

loc_004197FF: ;
    goto loc_00419829;

loc_00419801: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -8) = edx;
    MEM8(ecx) = LO8(eax);
    eax = SX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419824; /* jne: not equal / not zero */

loc_00419822: ;
    goto loc_00419829;

loc_00419824: ;
    goto loc_004196C4;

loc_00419829: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419835; /* je: equal / zero */

loc_0041982F: ;
    eax = MEM32(ebp + -8);
    MEM8(eax) = 0;

loc_00419835: ;
    goto loc_00419837;

loc_00419837: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419848; /* je: equal / zero */

loc_0041983D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419848u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00419848: ;
    goto loc_0041984A;

loc_0041984A: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_00419850: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419860
 * Original: 0x00419860 - 0x004198C6 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419860(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041986Eu); RECOMP_ABI_CALL(0x004198D0u, sub_004198D0); /* call 0x004198D0 */

loc_0041986E: ;
    eax = eax + 0x60;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00419898; /* jg: greater (signed >) */

loc_00419885: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419898u); RECOMP_ABI_CALL(0x0041BD30u, sub_0041BD30); /* call 0x0041BD30 */

loc_00419898: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x84);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004198B1u); RECOMP_ABI_CALL(0x004198E0u, sub_004198E0); /* call 0x004198E0 */

loc_004198B1: ;
    MEM16(ebp + -10) = LO16(eax);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = ZX16(MEM16(ebp + -10));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004198D0
 * Original: 0x004198D0 - 0x004198E0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004198D0(void)
{
    uint32_t ebp = g_ebp;

loc_004198D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004198DBu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_004198DB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004198E0
 * Original: 0x004198E0 - 0x00419A55 (373 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004198E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004198E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419956; /* je: equal / zero */

loc_004198F7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 4);
    eax = eax - edx;
    edx = ebp + -6;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041991Eu); RECOMP_ABI_CALL(0x00411170u, sub_00411170); /* call 0x00411170 */

loc_0041991E: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00419954; /* jb: below (unsigned <) */

loc_0041992C: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = ecx + eax;
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 4);
    MEM32(eax + 4) = ecx;
    eax = ZX16(MEM16(ebp + -6));
    MEM32(ebp + -4) = eax;
    goto loc_00419A4D;

loc_00419954: ;
    goto loc_00419956;

loc_00419956: ;
    eax = ebp + -24;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419973u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00419973: ;
    MEM32(ebp + -32) = 1;

loc_0041997A: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041999E; /* je: equal / zero */

loc_00419988: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx + 4) = edx;
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -36) = eax;
    goto loc_004199AC;

loc_0041999E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004199A9u); RECOMP_ABI_CALL(0x004189C0u, sub_004189C0); /* call 0x004189C0 */

loc_004199A9: ;
    MEM32(ebp + -36) = eax;

loc_004199AC: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -25) = LO8(eax);
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004199DF; /* jge: greater or equal (signed >=) */

loc_004199BB: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004199D6; /* jne: not equal / not zero */

loc_004199C1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004199D0u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_004199D0: ;
    MEM32(eax) = 0x54;

loc_004199D6: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00419A4D;

loc_004199DF: ;
    edx = ebp + -6;
    ecx = ebp + -25;
    eax = ebp + -24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419A00u); RECOMP_ABI_CALL(0x00410700u, sub_00410700); /* call 0x00410700 */

loc_00419A00: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419A35; /* jne: not equal / not zero */

loc_00419A09: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419A2C; /* jne: not equal / not zero */

loc_00419A0F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    ecx = ZX8(MEM8(ebp + -25));
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419A2Cu); RECOMP_ABI_CALL(0x0041F330u, sub_0041F330); /* call 0x0041F330 */

loc_00419A2C: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00419A4D;

loc_00419A35: ;
    MEM32(ebp + -32) = 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041997A; /* je: equal / zero */

loc_00419A46: ;
    eax = ZX16(MEM16(ebp + -6));
    MEM32(ebp + -4) = eax;

loc_00419A4D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419A60
 * Original: 0x00419A60 - 0x00419ABA (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419A60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00419A84; /* jl: less (signed <) */

loc_00419A74: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419A7Fu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00419A7F: ;
    MEM32(ebp + -12) = eax;
    goto loc_00419A8B;

loc_00419A84: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_00419A8B;

loc_00419A8B: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419A9Cu); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_00419A9C: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419AB0; /* je: equal / zero */

loc_00419AA5: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419AB0u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00419AB0: ;
    goto loc_00419AB2;

loc_00419AB2: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419AC0
 * Original: 0x00419AC0 - 0x00419BB0 (240 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419AC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419AF0; /* jne: not equal / not zero */

loc_00419AE5: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_00419BA8;

loc_00419AF0: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00419B0B; /* jl: less (signed <) */

loc_00419AFB: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419B06u); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00419B06: ;
    MEM32(ebp + -20) = eax;
    goto loc_00419B12;

loc_00419B0B: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_00419B12;

loc_00419B12: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -12) = eax;

loc_00419B18: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419B5D; /* je: equal / zero */

loc_00419B1E: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419B29u); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_00419B29: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419B34; /* jne: not equal / not zero */

loc_00419B32: ;
    goto loc_00419B5D;

loc_00419B34: ;
    eax = MEM32(ebp + -16);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -8);
    edx = eax;
    edx = edx + 2;
    MEM32(ebp + -8) = edx;
    MEM16(eax) = LO16(ecx);
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419B50; /* jne: not equal / not zero */

loc_00419B4E: ;
    goto loc_00419B5D;

loc_00419B50: ;
    goto loc_00419B52;

loc_00419B52: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = eax;
    goto loc_00419B18;

loc_00419B5D: ;
    eax = MEM32(ebp + -8);
    MEM16(eax) = 0;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419B78; /* je: equal / zero */

loc_00419B72: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_00419B78: ;
    goto loc_00419B7A;

loc_00419B7A: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419B8B; /* je: equal / zero */

loc_00419B80: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419B8Bu); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00419B8B: ;
    goto loc_00419B8D;

loc_00419B8D: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419B9C; /* jne: not equal / not zero */

loc_00419B95: ;
    eax = 0; /* xor self */
    MEM32(ebp + -24) = eax;
    goto loc_00419BA2;

loc_00419B9C: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;

loc_00419BA2: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -4) = eax;

loc_00419BA8: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419BB0
 * Original: 0x00419BB0 - 0x00419C25 (117 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419BB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00419BD4; /* jl: less (signed <) */

loc_00419BC4: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419BCFu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00419BCF: ;
    MEM32(ebp + -16) = eax;
    goto loc_00419BDB;

loc_00419BD4: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_00419BDB;

loc_00419BDB: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x3C);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419BFB; /* je: equal / zero */

loc_00419BF0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419BFBu); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_00419BFB: ;
    goto loc_00419BFD;

loc_00419BFD: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00419C17; /* jge: greater or equal (signed >=) */

loc_00419C03: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419C08u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00419C08: ;
    MEM32(eax) = 9;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_00419C1D;

loc_00419C17: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;

loc_00419C1D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419C30
 * Original: 0x00419C30 - 0x00419C75 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419C30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419C30: ;
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
    PUSH32(esp, 0x00419C44u); RECOMP_ABI_CALL(0x0041BBE0u, sub_0041BBE0); /* call 0x0041BBE0 */

loc_00419C44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419C4B; /* jne: not equal / not zero */

loc_00419C49: ;
    goto loc_00419C70;

loc_00419C4B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419C56u); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_00419C56: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419C61u); RECOMP_ABI_CALL(0x00419C80u, sub_00419C80); /* call 0x00419C80 */

loc_00419C61: ;
    ecx = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419C70u); RECOMP_ABI_CALL(0x0041BB80u, sub_0041BB80); /* call 0x0041BB80 */

loc_00419C70: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419C80
 * Original: 0x00419C80 - 0x00419C90 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419C80(void)
{
    uint32_t ebp = g_ebp;

loc_00419C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419C8Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_00419C8B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419C90
 * Original: 0x00419C90 - 0x00419EE2 (594 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419C90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x2B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419CB2u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_00419CB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 0x49764A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419CDCu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_00419CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419CF8; /* jne: not equal / not zero */

loc_00419CE1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419CE6u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00419CE6: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0;
    goto loc_00419EDA;

loc_00419CF8: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419D1E; /* jne: not equal / not zero */

loc_00419CFE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00419D1E; /* jbe: below or equal (unsigned <=) */

loc_00419D07: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419D0Cu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00419D0C: ;
    MEM32(eax) = 0xC;
    MEM32(ebp + -4) = 0;
    goto loc_00419EDA;

loc_00419D1E: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419D2B; /* je: equal / zero */

loc_00419D24: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_00419D31;

loc_00419D2B: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = eax;

loc_00419D31: ;
    eax = MEM32(ebp + -16);
    eax = eax + 0x4A4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419D41u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_00419D41: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419D56; /* jne: not equal / not zero */

loc_00419D4A: ;
    MEM32(ebp + -4) = 0;
    goto loc_00419EDA;

loc_00419D56: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x9C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419D73u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00419D73: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x88;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x54) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x3C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0x9C;
    ecx = ecx + 8;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x30) = 0x400;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419DDF; /* jne: not equal / not zero */

loc_00419DB8: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x4A4;
    MEM32(ebp + 8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419DDFu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00419DDF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x94) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x90) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x98) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419E27; /* jne: not equal / not zero */

loc_00419E0C: ;
    eax = MEM32(ebp + 0x10);
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 4;
    eax = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x72 (32-bit) */
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;

loc_00419E27: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419E40; /* jne: not equal / not zero */

loc_00419E32: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x8C) = ecx;
    goto loc_00419E89;

loc_00419E40: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419E73; /* jne: not equal / not zero */

loc_00419E4B: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419E5Du); RECOMP_ABI_CALL(0x000FA460u, sub_000FA460); /* call 0x000FA460 */

loc_00419E5D: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x88) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x8C) = ecx;
    goto loc_00419E87;

loc_00419E73: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00419E85; /* je: equal / zero */

loc_00419E79: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x94);
    MEM8(eax) = 0;

loc_00419E85: ;
    goto loc_00419E87;

loc_00419E87: ;
    goto loc_00419E89;

loc_00419E89: ;
    eax = MEM32(ebp + -8);
    ecx = 0x419EF0;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -8);
    ecx = 0x419FE0;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -8);
    ecx = 0x41A120;
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + -8);
    ecx = 0x41A1F0;
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM8(0xDFBFF5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xDFBFF5), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00419ECC; /* jne: not equal / not zero */

loc_00419EC2: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x4C) = 0xFFFFFFFFu;

loc_00419ECC: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419ED7u); RECOMP_ABI_CALL(0x0041CD50u, sub_0041CD50); /* call 0x0041CD50 */

loc_00419ED7: ;
    MEM32(ebp + -4) = eax;

loc_00419EDA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419EF0
 * Original: 0x00419EF0 - 0x00419FDD (237 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419EF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00419EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -4);
    eax = eax - MEM32(ecx);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00419F2A; /* jbe: below or equal (unsigned <=) */

loc_00419F23: ;
    MEM32(ebp + -8) = 0;

loc_00419F2A: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00419F42; /* jbe: below or equal (unsigned <=) */

loc_00419F32: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x10;
    MEM32(eax) = ecx;

loc_00419F42: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -4);
    ecx = ecx + MEM32(eax);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419F63u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00419F63: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -4);
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -8);
    eax = eax - ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x30) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00419F8C; /* jbe: below or equal (unsigned <=) */

loc_00419F83: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x30);
    MEM32(ebp + -8) = eax;

loc_00419F8C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    ecx = ecx + MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -4);
    ecx = ecx + MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00419FCBu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00419FCB: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00419FE0
 * Original: 0x00419FE0 - 0x0041A118 (312 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419FE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00419FE0: ;
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
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x1C);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041A04A; /* je: equal / zero */

loc_0041A00F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ebp + -16);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A037u); RECOMP_ABI_CALL(0x00419FE0u, sub_00419FE0); /* call 0x00419FE0 */

loc_0041A037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0041A048; /* jae: above or equal (unsigned >=) */

loc_0041A03C: ;
    MEM32(ebp + -4) = 0;
    goto loc_0041A110;

loc_0041A048: ;
    goto loc_0041A04A;

loc_0041A04A: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0x61 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0041A05E; /* jne: not equal / not zero */

loc_0041A053: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;

loc_0041A05E: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0041A07A; /* jbe: below or equal (unsigned <=) */

loc_0041A074: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0x10) = eax;

loc_0041A07A: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -8);
    edx = edx + MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A09Bu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0041A09B: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -8);
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0041A10A; /* jbe: below or equal (unsigned <=) */

loc_0041A0B2: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0041A0DD; /* jae: above or equal (unsigned >=) */

loc_0041A0CB: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx + 4);
    MEM8(eax + ecx) = 0;
    goto loc_0041A108;

loc_0041A0DD: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041A106; /* je: equal / zero */

loc_0041A0EA: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041A106; /* je: equal / zero */

loc_0041A0F3: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx + 8);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM8(eax + ecx) = 0;

loc_0041A106: ;
    goto loc_0041A108;

loc_0041A108: ;
    goto loc_0041A10A;

loc_0041A10A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;

loc_0041A110: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A120
 * Original: 0x0041A120 - 0x0041A1E2 (194 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A120(void)
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

loc_0041A120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0041A165; /* jbe: below or equal (unsigned <=) */

loc_0041A148: ;
    goto loc_0041A14A;

loc_0041A14A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A14Fu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0041A14F: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_0041A1D6;

loc_0041A165: ;
    MEM32(ebp + -44) = 0;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 4);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + eax * 4 + -44);
    MEM32(ebp + -28) = eax;
    edx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    esi = MEM32(ebp + -28);
    _cf = (int)((esi) != 0);
    esi = (0u - (uint32_t)(esi));
    ecx = esi;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
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
    if ((_sbb_sf != _sbb_of)) goto loc_0041A1BD; /* jl: less (signed <) */

loc_0041A19D: ;
    goto loc_0041A19F;

loc_0041A19F: ;
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -32);
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + -28);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = edx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
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
    if (!(_sbb_sf != _sbb_of)) goto loc_0041A1BF; /* jge: greater or equal (signed >=) */

loc_0041A1BB: ;
    goto loc_0041A1BD;

loc_0041A1BD: ;
    goto loc_0041A14A;

loc_0041A1BF: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -24);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = MEM32(ebp + -32);
    MEM32(ecx) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = 0;

loc_0041A1D6: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A1F0
 * Original: 0x0041A1F0 - 0x0041A1FA (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A1F0(void)
{
    uint32_t ebp = g_ebp;

loc_0041A1F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A200
 * Original: 0x0041A200 - 0x0041A364 (356 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041A200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 0x49764A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A226u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_0041A226: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041A242; /* jne: not equal / not zero */

loc_0041A22B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A230u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0041A230: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -12) = 0;
    goto loc_0041A35A;

loc_0041A242: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A24Eu); RECOMP_ABI_CALL(0x00417860u, sub_00417860); /* call 0x00417860 */

loc_0041A24E: ;
    MEM32(ebp + -24) = eax;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    edi = MEM32(ebp + -24);
    esi = edi;
    esi = esi | 0x8000;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -28) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0x1B6;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A2A3u); RECOMP_ABI_CALL(0x0041A370u, sub_0041A370); /* call 0x0041A370 */

loc_0041A2A3: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A2ABu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0041A2AB: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041A2C0; /* jge: greater or equal (signed >=) */

loc_0041A2B4: ;
    MEM32(ebp + -12) = 0;
    goto loc_0041A35A;

loc_0041A2C0: ;
    eax = MEM32(ebp + -24);
    eax = eax & 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041A30E; /* je: equal / zero */

loc_0041A2CD: ;
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -32) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 1;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 2;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A30Eu); RECOMP_ABI_CALL(0x0041A420u, sub_0041A420); /* call 0x0041A420 */

loc_0041A30E: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A320u); RECOMP_ABI_CALL(0x00417490u, sub_00417490); /* call 0x00417490 */

loc_0041A320: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041A331; /* je: equal / zero */

loc_0041A329: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_0041A35A;

loc_0041A331: ;
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A353u); RECOMP_ABI_CALL(0x0041A4C0u, sub_0041A4C0); /* call 0x0041A4C0 */

loc_0041A353: ;
    MEM32(ebp + -12) = 0;

loc_0041A35A: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A370
 * Original: 0x0041A370 - 0x0041A41B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A370(void)
{
    uint32_t ebp = g_ebp;

loc_0041A370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
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
    ecx = MEM32(ebp + 0x2C);
    eax = esp;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A413u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0041A413: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A420
 * Original: 0x0041A420 - 0x0041A4BB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A420(void)
{
    uint32_t ebp = g_ebp;

loc_0041A420: ;
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
    PUSH32(esp, 0x0041A4B3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0041A4B3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A4C0
 * Original: 0x0041A4C0 - 0x0041A53F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A4C0(void)
{
    uint32_t ebp = g_ebp;

loc_0041A4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    eax = esp;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A538u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0041A538: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A540
 * Original: 0x0041A540 - 0x0041A6C4 (388 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A540(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041A540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 0x49764A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A57Eu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_0041A57E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041A59A; /* jne: not equal / not zero */

loc_0041A583: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A588u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0041A588: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -12) = 0;
    goto loc_0041A6BA;

loc_0041A59A: ;
    MEM32(esp) = 0x4A4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A5A6u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_0041A5A6: ;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041A5BA; /* jne: not equal / not zero */

loc_0041A5AE: ;
    MEM32(ebp + -12) = 0;
    goto loc_0041A6BA;

loc_0041A5BA: ;
    eax = MEM32(ebp + -32);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A5D7u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0041A5D7: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x2B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A5EAu); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_0041A5EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041A60A; /* jne: not equal / not zero */

loc_0041A5EF: ;
    eax = MEM32(ebp + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 4;
    eax = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x72 (32-bit) */
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax = MEM32(ebp + -32);
    MEM32(eax) = ecx;

loc_0041A60A: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -32);
    MEM32(eax + 0x88) = ecx;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x8C) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x90) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x94) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x98) = ecx;
    eax = MEM32(ebp + -32);
    MEM32(eax + 0x3C) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -32);
    ecx = ecx + 0x88;
    eax = MEM32(ebp + -32);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(ebp + -32);
    ecx = ecx + 0x9C;
    ecx = ecx + 8;
    eax = MEM32(ebp + -32);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + -32);
    MEM32(eax + 0x30) = 0x400;
    eax = MEM32(ebp + -32);
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -32);
    ecx = 0x41A6D0;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -32);
    ecx = 0x41A850;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -32);
    ecx = 0x41A940;
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + -32);
    ecx = 0x41AA00;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A6B7u); RECOMP_ABI_CALL(0x0041CD50u, sub_0041CD50); /* call 0x0041CD50 */

loc_0041A6B7: ;
    MEM32(ebp + -12) = eax;

loc_0041A6BA: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A6D0
 * Original: 0x0041A6D0 - 0x0041A84E (382 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A6D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0041A6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x24)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 0;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0041A729; /* jne: not equal / not zero */

loc_0041A724: ;
    goto loc_0041A813;

loc_0041A729: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041A76F; /* je: equal / zero */

loc_0041A72F: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -12);
    esi = MEM32(ecx);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -28);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0041A74Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0041A74D: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0041A75B; /* jg: greater (signed >) */

loc_0041A756: ;
    goto loc_0041A813;

loc_0041A75B: ;
    eax = MEM32(ebp + -16);
    eax = eax + MEM32(ebp + -24);
    MEM32(ebp + -24) = eax;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -20) = eax;

loc_0041A76F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0041A795; /* je: equal / zero */

loc_0041A778: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0041A7A0; /* jbe: below or equal (unsigned <=) */

loc_0041A795: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -8) = eax;
    goto loc_0041A845;

loc_0041A7A0: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -12);
    esi = MEM32(ecx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x30);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0041A7D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0041A7D0: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0041A7DB; /* jg: greater (signed >) */

loc_0041A7D9: ;
    goto loc_0041A813;

loc_0041A7DB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx + 4) = edx;
    SET_LO8(edx, MEM8(eax));
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -24) = esi;
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(ebp + -24);
    MEM32(ebp + -8) = eax;
    goto loc_0041A845;

loc_0041A813: ;
    edx = MEM32(ebp + -16);
    ecx = 0x20;
    eax = 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax = MEM32(ebp + 8);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -8) = eax;

loc_0041A845: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A850
 * Original: 0x0041A850 - 0x0041A933 (227 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A850(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041A850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = eax - ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041A88E; /* jne: not equal / not zero */

loc_0041A883: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -8) = eax;
    goto loc_0041A92A;

loc_0041A88E: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041A8CC; /* je: equal / zero */

loc_0041A894: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ebp + -20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A8BCu); RECOMP_ABI_CALL(0x0041A850u, sub_0041A850); /* call 0x0041A850 */

loc_0041A8BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041A8CA; /* jae: above or equal (unsigned >=) */

loc_0041A8C1: ;
    MEM32(ebp + -8) = 0;
    goto loc_0041A92A;

loc_0041A8CA: ;
    goto loc_0041A8CC;

loc_0041A8CC: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -12);
    esi = MEM32(ecx);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0041A8EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0041A8EA: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041A924; /* jge: greater or equal (signed >=) */

loc_0041A8F3: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    MEM32(ebp + -8) = 0;
    goto loc_0041A92A;

loc_0041A924: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;

loc_0041A92A: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041A940
 * Original: 0x0041A940 - 0x0041A9F4 (180 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041A940(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041A940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0041A983; /* jbe: below or equal (unsigned <=) */

loc_0041A968: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A96Du); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0041A96D: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_0041A9E8;

loc_0041A983: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041A9A7; /* jne: not equal / not zero */

loc_0041A98C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041A991u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0041A991: ;
    MEM32(eax) = 0x5F;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_0041A9E8;

loc_0041A9A7: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -28);
    esi = MEM32(ecx);
    ecx = MEM32(ebp + 0x14);
    edx = ebp + -24;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0041A9C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0041A9C5: ;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041A9DE; /* jge: greater or equal (signed >=) */

loc_0041A9CE: ;
    ecx = MEM32(ebp + -32);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = eax;
    goto loc_0041A9E8;

loc_0041A9DE: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */

loc_0041A9E8: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + -8);
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AA00
 * Original: 0x0041AA00 - 0x0041AA3F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AA00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041AA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041AA30; /* je: equal / zero */

loc_0041AA1B: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0041AA2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0041AA2B: ;
    MEM32(ebp + -4) = eax;
    goto loc_0041AA37;

loc_0041AA30: ;
    MEM32(ebp + -4) = 0;

loc_0041AA37: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AA40
 * Original: 0x0041AA40 - 0x0041AA77 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AA40(void)
{
    uint32_t ebp = g_ebp;

loc_0041AA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AA6Bu); RECOMP_ABI_CALL(0x0041F6F0u, sub_0041F6F0); /* call 0x0041F6F0 */

loc_0041AA6B: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AA80
 * Original: 0x0041AA80 - 0x0041AAA3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AA80(void)
{
    uint32_t ebp = g_ebp;

loc_0041AA80: ;
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
    PUSH32(esp, 0x0041AA9Eu); RECOMP_ABI_CALL(0x0041AAB0u, sub_0041AAB0); /* call 0x0041AAB0 */

loc_0041AA9E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AAB0
 * Original: 0x0041AAB0 - 0x0041AB61 (177 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AAB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041AAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x4C);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0041AAEC; /* jl: less (signed <) */

loc_0041AACC: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041AB43; /* je: equal / zero */

loc_0041AAD2: ;
    eax = MEM32(ebp + -12);
    eax = eax & 0xBFFFFFFFu;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AAE2u); RECOMP_ABI_CALL(0x0041AB70u, sub_0041AB70); /* call 0x0041AB70 */

loc_0041AAE2: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041AB43; /* jne: not equal / not zero */

loc_0041AAEC: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(LO8(eax));
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041AB23; /* je: equal / zero */

loc_0041AAFA: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041AB23; /* je: equal / zero */

loc_0041AB08: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 0x14);
    esi = ecx;
    esi = esi + 1;
    MEM32(edx + 0x14) = esi;
    MEM8(ecx) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -20) = eax;
    goto loc_0041AB3B;

loc_0041AB23: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AB38u); RECOMP_ABI_CALL(0x00417FE0u, sub_00417FE0); /* call 0x00417FE0 */

loc_0041AB38: ;
    MEM32(ebp + -20) = eax;

loc_0041AB3B: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    goto loc_0041AB58;

loc_0041AB43: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AB55u); RECOMP_ABI_CALL(0x0041AB80u, sub_0041AB80); /* call 0x0041AB80 */

loc_0041AB55: ;
    MEM32(ebp + -8) = eax;

loc_0041AB58: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AB70
 * Original: 0x0041AB70 - 0x0041AB80 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AB70(void)
{
    uint32_t ebp = g_ebp;

loc_0041AB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AB7Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0041AB7B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AB80
 * Original: 0x0041AB80 - 0x0041AC5B (219 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AB80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041AB80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x4C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x3FFFFFFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041ABADu); RECOMP_ABI_CALL(0x0041AC60u, sub_0041AC60); /* call 0x0041AC60 */

loc_0041ABAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041ABBD; /* je: equal / zero */

loc_0041ABB2: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041ABBDu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_0041ABBD: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(LO8(eax));
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041ABF4; /* je: equal / zero */

loc_0041ABCB: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041ABF4; /* je: equal / zero */

loc_0041ABD9: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 0x14);
    esi = ecx;
    esi = esi + 1;
    MEM32(edx + 0x14) = esi;
    MEM8(ecx) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    goto loc_0041AC0C;

loc_0041ABF4: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AC09u); RECOMP_ABI_CALL(0x00417FE0u, sub_00417FE0); /* call 0x00417FE0 */

loc_0041AC09: ;
    MEM32(ebp + -8) = eax;

loc_0041AC0C: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x4C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AC2Au); RECOMP_ABI_CALL(0x0041AC90u, sub_0041AC90); /* call 0x0041AC90 */

loc_0041AC2A: ;
    eax = eax & 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041AC52; /* je: equal / zero */

loc_0041AC34: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x4C;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AC52u); RECOMP_ABI_CALL(0x0041ACB0u, sub_0041ACB0); /* call 0x0041ACB0 */

loc_0041AC52: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AC60
 * Original: 0x0041AC60 - 0x0041AC81 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AC60(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041AC60: ;
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
 * sub_0041AC90
 * Original: 0x0041AC90 - 0x0041ACA9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AC90(void)
{
    uint32_t ebp = g_ebp;

loc_0041AC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = _tmp; }
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041ACB0
 * Original: 0x0041ACB0 - 0x0041AD81 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041ACB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041ACB0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0041ACCF; /* je: equal / zero */

loc_0041ACC8: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0041ACCF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041ACDC; /* jge: greater or equal (signed >=) */

loc_0041ACD5: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0041ACDC: ;
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
    PUSH32(esp, 0x0041AD23u); RECOMP_ABI_CALL(0x0041AD90u, sub_0041AD90); /* call 0x0041AD90 */

loc_0041AD23: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0041AD76; /* jne: not equal / not zero */

loc_0041AD2F: ;
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
    PUSH32(esp, 0x0041AD6Du); RECOMP_ABI_CALL(0x0041AD90u, sub_0041AD90); /* call 0x0041AD90 */

loc_0041AD6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0041AD76: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AD90
 * Original: 0x0041AD90 - 0x0041AE2B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AD90(void)
{
    uint32_t ebp = g_ebp;

loc_0041AD90: ;
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
    PUSH32(esp, 0x0041AE23u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0041AE23: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AE30
 * Original: 0x0041AE30 - 0x0041AE7E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AE30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041AE30: ;
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
    PUSH32(esp, 0x0041AE47u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_0041AE47: ;
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AE6Bu); RECOMP_ABI_CALL(0x0041BFA0u, sub_0041BFA0); /* call 0x0041BFA0 */

loc_0041AE6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    eax = eax - 1;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041AE80
 * Original: 0x0041AE80 - 0x0041AFFE (382 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AE80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041AE80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AE93u); RECOMP_ABI_CALL(0x0041B000u, sub_0041B000); /* call 0x0041B000 */

loc_0041AE93: ;
    eax = eax + 0x60;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0041AEBD; /* jg: greater (signed >) */

loc_0041AEAA: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AEBDu); RECOMP_ABI_CALL(0x0041BD30u, sub_0041BD30); /* call 0x0041BD30 */

loc_0041AEBD: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x84);
    eax = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0041AED3; /* jne: not equal / not zero */

loc_0041AED1: ;
    goto loc_0041AEE6;

loc_0041AED3: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AEDFu); RECOMP_ABI_CALL(0x003DAB10u, sub_003DAB10); /* call 0x003DAB10 */

loc_0041AEDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041AEF1; /* jne: not equal / not zero */

loc_0041AEE4: ;
    goto loc_0041AF4F;

loc_0041AEE6: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041AF4F; /* jae: above or equal (unsigned >=) */

loc_0041AEF1: ;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX8(LO8(eax));
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041AF2A; /* je: equal / zero */

loc_0041AF00: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041AF2A; /* je: equal / zero */

loc_0041AF0E: ;
    SET_LO16(eax, MEM16(ebp + 8));
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 0x14);
    esi = ecx;
    esi = esi + 1;
    MEM32(edx + 0x14) = esi;
    MEM8(ecx) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -24) = eax;
    goto loc_0041AF43;

loc_0041AF2A: ;
    ecx = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AF40u); RECOMP_ABI_CALL(0x00417FE0u, sub_00417FE0); /* call 0x00417FE0 */

loc_0041AF40: ;
    MEM32(ebp + -24) = eax;

loc_0041AF43: ;
    eax = MEM32(ebp + -24);
    MEM16(ebp + 8) = LO16(eax);
    goto loc_0041AFD9;

loc_0041AF4F: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x14);
    eax = eax + 4;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041AF95; /* jae: above or equal (unsigned >=) */

loc_0041AF60: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x14);
    MEM32(esp) = eax;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AF76u); RECOMP_ABI_CALL(0x00411A40u, sub_00411A40); /* call 0x00411A40 */

loc_0041AF76: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0041AF87; /* jge: greater or equal (signed >=) */

loc_0041AF7F: ;
    MEM16(ebp + 8) = 0xFFFF;
    goto loc_0041AF93;

loc_0041AF87: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);
    ecx = ecx + MEM32(eax + 0x14);
    MEM32(eax + 0x14) = ecx;

loc_0041AF93: ;
    goto loc_0041AFD7;

loc_0041AF95: ;
    eax = ebp + -8;
    MEM32(esp) = eax;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AFA8u); RECOMP_ABI_CALL(0x00411A40u, sub_00411A40); /* call 0x00411A40 */

loc_0041AFA8: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0041AFCF; /* jl: less (signed <) */

loc_0041AFB1: ;
    edx = ebp + -8;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041AFCAu); RECOMP_ABI_CALL(0x0041BE50u, sub_0041BE50); /* call 0x0041BE50 */

loc_0041AFCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041AFD5; /* jae: above or equal (unsigned >=) */

loc_0041AFCF: ;
    MEM16(ebp + 8) = 0xFFFF;

loc_0041AFD5: ;
    goto loc_0041AFD7;

loc_0041AFD7: ;
    goto loc_0041AFD9;

loc_0041AFD9: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0041AFEC; /* jne: not equal / not zero */

loc_0041AFE2: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;

loc_0041AFEC: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    eax = ZX16(MEM16(ebp + 8));
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041B000
 * Original: 0x0041B000 - 0x0041B010 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B000(void)
{
    uint32_t ebp = g_ebp;

loc_0041B000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B00Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0041B00B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041B010
 * Original: 0x0041B010 - 0x0041B07B (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041B010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0041B038; /* jl: less (signed <) */

loc_0041B028: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B033u); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_0041B033: ;
    MEM32(ebp + -8) = eax;
    goto loc_0041B03F;

loc_0041B038: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_0041B03F;

loc_0041B03F: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B05Bu); RECOMP_ABI_CALL(0x0041AE80u, sub_0041AE80); /* call 0x0041AE80 */

loc_0041B05B: ;
    MEM16(ebp + 8) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041B070; /* je: equal / zero */

loc_0041B065: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B070u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_0041B070: ;
    goto loc_0041B072;

loc_0041B072: ;
    eax = ZX16(MEM16(ebp + 8));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0041B080
 * Original: 0x0041B080 - 0x0041B1F8 (376 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B080(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0041B080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x438;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -1032) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B09Eu); RECOMP_ABI_CALL(0x0041B200u, sub_0041B200); /* call 0x0041B200 */

loc_0041B09E: ;
    eax = eax + 0x60;
    MEM32(ebp + -1036) = eax;
    eax = MEM32(ebp + -1036);
    eax = MEM32(eax);
    MEM32(ebp + -1040) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0041B0D3; /* jl: less (signed <) */

loc_0041B0C0: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B0CBu); RECOMP_ABI_CALL(0x00417B10u, sub_00417B10); /* call 0x00417B10 */

loc_0041B0CB: ;
    MEM32(ebp + -1048) = eax;
    goto loc_0041B0DD;

loc_0041B0D3: ;
    eax = 0; /* xor self */
    MEM32(ebp + -1048) = eax;
    goto loc_0041B0DD;

loc_0041B0DD: ;
    eax = MEM32(ebp + -1048);
    MEM32(ebp + -1044) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B0FCu); RECOMP_ABI_CALL(0x0041BD30u, sub_0041BD30); /* call 0x0041BD30 */

loc_0041B0FC: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x84);
    eax = MEM32(ebp + -1036);
    MEM32(eax) = ecx;

loc_0041B10D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM8(ebp + -1049) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0041B157; /* je: equal / zero */

loc_0041B11B: ;
    ecx = ebp + -1028;
    eax = ebp + 8;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B142u); RECOMP_ABI_CALL(0x00411700u, sub_00411700); /* call 0x00411700 */

loc_0041B142: ;
    MEM32(ebp + -1032) = eax;
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    MEM8(ebp + -1049) = LO8(eax);

loc_0041B157: ;
    SET_LO8(eax, MEM8(ebp + -1049));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0041B163; /* jne: not equal / not zero */

loc_0041B161: ;
    goto loc_0041B1BE;

loc_0041B163: ;
    edx = ebp + -1028;
    ecx = MEM32(ebp + -1032);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B182u); RECOMP_ABI_CALL(0x0041BE50u, sub_0041BE50); /* call 0x0041BE50 */

loc_0041B182: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -1032)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -1032) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0041B1B9; /* jae: above or equal (unsigned >=) */

loc_0041B18A: ;
    goto loc_0041B18C;

loc_0041B18C: ;
    _fa = (uint32_t)(MEM32(ebp + -1044)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1044), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041B1A0; /* je: equal / zero */

loc_0041B195: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B1A0u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_0041B1A0: ;
    goto loc_0041B1A2;

loc_0041B1A2: ;
    ecx = MEM32(ebp + -1040);
    eax = MEM32(ebp + -1036);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0041B1ED;

loc_0041B1B9: ;
    goto loc_0041B10D;

loc_0041B1BE: ;
    goto loc_0041B1C0;

loc_0041B1C0: ;
    _fa = (uint32_t)(MEM32(ebp + -1044)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1044), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0041B1D4; /* je: equal / zero */

loc_0041B1C9: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0041B1D4u); RECOMP_ABI_CALL(0x00417D40u, sub_00417D40); /* call 0x00417D40 */

loc_0041B1D4: ;
    goto loc_0041B1D6;

loc_0041B1D6: ;
    ecx = MEM32(ebp + -1040);
    eax = MEM32(ebp + -1036);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -1032);
    MEM32(ebp + -4) = eax;

loc_0041B1ED: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x438;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

