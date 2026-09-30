/* Generated ELF translation shard 27: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_0024F3C0
 * Original: 0x0024F3C0 - 0x0024F42E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F3C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0024F3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xC); /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F3EEu); RECOMP_ABI_CALL(0x0024F360u, sub_0024F360); /* call 0x0024F360 */

loc_0024F3EE: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F421; /* je: equal / zero */

loc_0024F3FB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43DF60)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    MEM8(ebp + -5) = LO8(eax);

loc_0024F421: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0024F430
 * Original: 0x0024F430 - 0x0024F486 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F430(void)
{
    uint32_t ebp = g_ebp;

loc_0024F430: ;
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
 * sub_0024F490
 * Original: 0x0024F490 - 0x0024F4B7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F490(void)
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

loc_0024F490: ;
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
 * sub_0024F4C0
 * Original: 0x0024F4C0 - 0x0024F505 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F4C0(void)
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

loc_0024F4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F4E3u); RECOMP_ABI_CALL(0x0024F510u, sub_0024F510); /* call 0x0024F510 */

loc_0024F4E3: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) ? 1 : 0); /* setae */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
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
 * sub_0024F510
 * Original: 0x0024F510 - 0x0024F54E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F510(void)
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

loc_0024F510: ;
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
    PUSH32(esp, 0x0024F535u); RECOMP_ABI_CALL(0x0024F430u, sub_0024F430); /* call 0x0024F430 */

loc_0024F535: ;
    ecx = eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F540u); RECOMP_ABI_CALL(0x0024F260u, sub_0024F260); /* call 0x0024F260 */

loc_0024F540: ;
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
 * sub_0024F550
 * Original: 0x0024F550 - 0x0024F62B (219 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F550(void)
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

loc_0024F550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0024F5C9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024F574: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0024F590; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024F583: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0024F619;

loc_0024F590: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0024F5AA; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_0024F59B: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0024F619;

loc_0024F5AA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xC); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0xC); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0024F619;

loc_0024F5C9: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0024F5E7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024F5D8: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0024F619;

loc_0024F5E7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0024F5FC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0xC)) */

loc_0024F5F2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0024F619;

loc_0024F5FC: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0024F619: ;
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
 * sub_0024F630
 * Original: 0x0024F630 - 0x0024F768 (312 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F630(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x44;
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM16(ebp + -6) = 0;

loc_0024F655: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024F729; /* jge: greater or equal (signed >=) */

loc_0024F668: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F689u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0024F689: ;
    MEM32(ebp + -16) = eax;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x38;
    eax = ebp + -28;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F6ABu); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_0024F6AB: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x18); /* addss */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x1C);
    edx = ebp + -28;
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0xFF;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F718u); RECOMP_ABI_CALL(0x002449C0u, sub_002449C0); /* call 0x002449C0 */

loc_0024F718: ;
    SET_LO16(eax, MEM16(ebp + -6));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -6) = LO16(eax);
    goto loc_0024F655;

loc_0024F729: ;
    eax = MEM32(ebp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -29) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0024F75A; /* jne: not equal / not zero */

loc_0024F739: ;
    eax = MEM32(ebp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -29) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0024F75A; /* jne: not equal / not zero */

loc_0024F74A: ;
    eax = MEM32(ebp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -29) = LO8(eax);

loc_0024F75A: ;
    SET_LO8(eax, MEM8(ebp + -29));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x44;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0024F770
 * Original: 0x0024F770 - 0x0024F91A (426 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F770(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F78Eu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0024F78E: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(esp) = 0x6F626A65;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F7A6u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0024F7A6: ;
    MEM32(ebp + -8) = eax;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0xC;
    eax = ebp + -20;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F7CBu); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_0024F7CB: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 8;
    ecx = ecx + 4;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    eax = eax + 4;
    eax = eax + 0x18;
    edx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    edx = ebp + -20;
    MEM32(esp) = 1;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F809u); RECOMP_ABI_CALL(0x00320E10u, sub_00320E10); /* call 0x00320E10 */

loc_0024F809: ;
    MEM16(ebp + -22) = 0;

loc_0024F80F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024F915; /* jge: greater or equal (signed >=) */

loc_0024F822: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F843u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0024F843: ;
    MEM32(ebp + -28) = eax;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x38;
    eax = ebp + -40;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F865u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_0024F865: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x44;
    eax = ebp + -52;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F884u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_0024F884: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x50;
    eax = ebp + -64;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F8A3u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_0024F8A3: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(0x5823E4);
    ecx = ebp + -40;
    MEM32(esp) = 1;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F8CDu); RECOMP_ABI_CALL(0x0031F220u, sub_0031F220); /* call 0x0031F220 */

loc_0024F8CD: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x68); /* mulss */
    edx = ebp + -40;
    ecx = ebp + -52;
    eax = ebp + -64;
    MEM32(esp) = 1;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F904u); RECOMP_ABI_CALL(0x00320E10u, sub_00320E10); /* call 0x00320E10 */

loc_0024F904: ;
    SET_LO16(eax, MEM16(ebp + -22));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -22) = LO16(eax);
    goto loc_0024F80F;

loc_0024F915: ;
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0024F920
 * Original: 0x0024F920 - 0x0024FABC (412 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F920(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F93Fu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0024F93F: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = 0x6F626A65;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F957u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0024F957: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FAB0; /* je: equal / zero */

loc_0024F96A: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F98Bu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0024F98B: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    eax = eax + 4;
    eax = eax + 0x24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F9BEu); RECOMP_ABI_CALL(0x00226450u, sub_00226450); /* call 0x00226450 */

loc_0024F9BE: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 8;
    ecx = ecx + 4;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    eax = eax + 4;
    eax = eax + 0x18;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024F9E6u); RECOMP_ABI_CALL(0x002264F0u, sub_002264F0); /* call 0x002264F0 */

loc_0024F9E6: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    edx = edx + 4;
    edx = edx + 0x18;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 8;
    ecx = ecx + 4;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    eax = eax + 4;
    eax = eax + 0xC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FA17u); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_0024FA17: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm2 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm1 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -24;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FA7Cu); RECOMP_ABI_CALL(0x0024FB80u, sub_0024FB80); /* call 0x0024FB80 */

loc_0024FA7C: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 8;
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FA95u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_0024FA95: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x38) = ecx;
    MEM8(ebp + -1) = 1;
    goto loc_0024FAB4;

loc_0024FAB0: ;
    MEM8(ebp + -1) = 0;

loc_0024FAB4: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0024FAC0
 * Original: 0x0024FAC0 - 0x0024FB74 (180 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FAC0(void)
{
    uint32_t ebp = g_ebp;

loc_0024FAC0: ;
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
 * sub_0024FB80
 * Original: 0x0024FB80 - 0x0024FBC0 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FB80(void)
{
    uint32_t ebp = g_ebp;

loc_0024FB80: ;
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
 * sub_0024FBC0
 * Original: 0x0024FBC0 - 0x0024FC74 (180 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FBC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0024FBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -16;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FBE8u); RECOMP_ABI_CALL(0x001D2550u, sub_001D2550); /* call 0x001D2550 */

loc_0024FBE8: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -22) = 0;

loc_0024FBF7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0024FC68; /* jge: greater or equal (signed >=) */

loc_0024FC03: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FC21u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0024FC21: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = eax + 0x38;
    ecx = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x68)); /* movss */
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FC47u); RECOMP_ABI_CALL(0x0024FC80u, sub_0024FC80); /* call 0x0024FC80 */

loc_0024FC47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0024FC51; /* je: equal / zero */

loc_0024FC4B: ;
    MEM8(ebp + -1) = 1;
    goto loc_0024FC6C;

loc_0024FC51: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    SET_LO16(eax, MEM16(ebp + -22));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -22) = LO16(eax);
    goto loc_0024FBF7;

loc_0024FC68: ;
    MEM8(ebp + -1) = 0;

loc_0024FC6C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0024FC80
 * Original: 0x0024FC80 - 0x0024FCC5 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FC80(void)
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

loc_0024FC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FCA3u); RECOMP_ABI_CALL(0x00254E50u, sub_00254E50); /* call 0x00254E50 */

loc_0024FCA3: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) ? 1 : 0); /* setae */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
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
 * sub_0024FCD0
 * Original: 0x0024FCD0 - 0x0024FE66 (406 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FCD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0024FCD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x60;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -9) = 0;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x43DA2C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FD13u); RECOMP_ABI_CALL(0x001D2550u, sub_001D2550); /* call 0x001D2550 */

loc_0024FD13: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + 0x10);
    eax = ebp + -36;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FD2Fu); RECOMP_ABI_CALL(0x001D28C0u, sub_001D28C0); /* call 0x001D28C0 */

loc_0024FD2F: ;
    MEM16(ebp + -50) = 0;

loc_0024FD35: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024FE34; /* jge: greater or equal (signed >=) */

loc_0024FD48: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FD69u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0024FD69: ;
    MEM32(ebp + -56) = eax;
    edi = MEM32(ebp + -56);
    edi = edi + 0x38;
    eax = MEM32(ebp + -56);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    esi = ebp + -24;
    edx = ebp + -36;
    ecx = ebp + -60;
    eax = ebp + -48;
    MEM32(esp) = edi;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FDA4u); RECOMP_ABI_CALL(0x001DD260u, sub_001DD260); /* call 0x001DD260 */

loc_0024FDA4: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FE21; /* je: equal / zero */

loc_0024FDAC: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -60); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0024FE21; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -60)) */

loc_0024FDB9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -24); /* addss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -20); /* addss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -16); /* addss */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x14);
    edx = edx + 4;
    ecx = ebp + -72;
    eax = ebp + -48;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FE1Du); RECOMP_ABI_CALL(0x0024FE70u, sub_0024FE70); /* call 0x0024FE70 */

loc_0024FE1D: ;
    MEM8(ebp + -9) = 1;

loc_0024FE21: ;
    goto loc_0024FE23;

loc_0024FE23: ;
    SET_LO16(eax, MEM16(ebp + -50));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -50) = LO16(eax);
    goto loc_0024FD35;

loc_0024FE34: ;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -9), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FE5C; /* je: equal / zero */

loc_0024FE3A: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + 4;
    eax = MEM32(ebp + 0x14);
    eax = eax + 4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FE5Cu); RECOMP_ABI_CALL(0x001D2A00u, sub_001D2A00); /* call 0x001D2A00 */

loc_0024FE5C: ;
    SET_LO8(eax, MEM8(ebp + -9));
    esp = esp + 0x60;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0024FE70
 * Original: 0x0024FE70 - 0x0024FEBF (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FE70(void)
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

loc_0024FE70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FEA7u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_0024FEA7: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
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
 * sub_0024FEC0
 * Original: 0x0024FEC0 - 0x00251165 (4773 bytes, 1143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FEC0(void)
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

loc_0024FEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x1D4;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FEEEu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0024FEEE: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F40); /* mulss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = xmm0.u[0]; /* movd */
    ecx = ecx ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(ecx); /* movd to xmm */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -16); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FF4Au); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_0024FF4A: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FF6Au); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_0024FF6A: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)MEM32(eax + 0x74) * (int32_t)0x130);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FF8Du); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0024FF8D: ;
    MEM16(ebp + -18) = 0;

loc_0024FF93: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025115C; /* jge: greater or equal (signed >=) */

loc_0024FFA3: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FFC1u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0024FFC1: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x130);
    eax = eax + ecx;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = 0;
    MEM32(ebp + -36) = 0;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025002C; /* je: equal / zero */

loc_0024FFF0: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025002C; /* je: equal / zero */

loc_0024FFF6: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0x68;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250017u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00250017: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x60);
    eax = eax + ecx;
    MEM32(ebp + -36) = eax;

loc_0025002C: ;
    eax = MEM32(ebp + -28);
    MEM32(eax) = 0;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -24);
    ecx = ecx + 0x38;
    eax = MEM32(ebp + -28);
    eax = eax + 4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250057u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_00250057: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002500BC; /* je: equal / zero */

loc_0025005D: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -36);
    ecx = ecx + 0x2C;
    eax = ebp + -100;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025007Cu); RECOMP_ABI_CALL(0x001D2180u, sub_001D2180); /* call 0x001D2180 */

loc_0025007C: ;
    ecx = MEM32(ebp + -24);
    ecx = ecx + 0x44;
    eax = MEM32(ebp + -28);
    eax = eax + 0x10;
    edx = ebp + -100;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025009Bu); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_0025009B: ;
    ecx = MEM32(ebp + -24);
    ecx = ecx + 0x50;
    eax = MEM32(ebp + -28);
    eax = eax + 0x28;
    edx = ebp + -100;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002500BAu); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_002500BA: ;
    goto loc_00250100;

loc_002500BC: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -24);
    ecx = ecx + 0x44;
    eax = MEM32(ebp + -28);
    eax = eax + 0x10;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002500DEu); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_002500DE: ;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -24);
    ecx = ecx + 0x50;
    eax = MEM32(ebp + -28);
    eax = eax + 0x28;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250100u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_00250100: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x34;
    eax = MEM32(ebp + -28);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250118u); RECOMP_ABI_CALL(0x00333290u, sub_00333290); /* call 0x00333290 */

loc_00250118: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 8;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 4;
    eax = MEM32(ebp + -28);
    eax = eax + 0x3C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025013Du); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_0025013D: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x38;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x3C;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250162u); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_00250162: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x14;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x48;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250187u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00250187: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002501A2u); RECOMP_ABI_CALL(0x00251270u, sub_00251270); /* call 0x00251270 */

loc_002501A2: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x34;
    eax = MEM32(ebp + -28);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002501BAu); RECOMP_ABI_CALL(0x00332FE0u, sub_00332FE0); /* call 0x00332FE0 */

loc_002501BA: ;
    MEMF(ebp + -352) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -352)); /* movss */
    eax = MEM32(ebp + -28);
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250707; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002501E4: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x70);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002501F3u); RECOMP_ABI_CALL(0x003328A0u, sub_003328A0); /* call 0x003328A0 */

loc_002501F3: ;
    MEM32(ebp + -104) = eax;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(ebp + -108) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(ebp + -112) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(ebp + -120) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(ebp + -124) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250270; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025024A: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(0x43D874)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00250270; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0025025B: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -108); /* mulss */
    MEMF(ebp + -108) = xmm0.f[0]; /* movss */

loc_00250270: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250298; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00250283: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -112); /* mulss */
    MEMF(ebp + -112) = xmm0.f[0]; /* movss */

loc_00250298: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002502C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002502AB: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -116); /* mulss */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */

loc_002502C0: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002502E8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002502D3: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -120); /* mulss */
    MEMF(ebp + -120) = xmm0.f[0]; /* movss */

loc_002502E8: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250310; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002502FB: ;
    eax = MEM32(ebp + -104);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -124); /* mulss */
    MEMF(ebp + -124) = xmm0.f[0]; /* movss */

loc_00250310: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x48;
    eax = MEM32(ebp + -28);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250328u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00250328: ;
    MEMF(ebp + -356) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -356)); /* movss */
    MEMF(ebp + -128) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x5A1F40)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + -120); /* divss */
    eax = MEM32(ebp + -28);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x74); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -128)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + -124); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -28);
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x60;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    eax = MEM32(ebp + -28);
    eax = eax + 0x84;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002503A0u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002503A0: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x60;
    xmm0 = XMM_SCALAR(MEMF(ebp + -128)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -28);
    eax = eax + 0x54;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002503D0u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002503D0: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x54;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x48;
    eax = MEM32(ebp + -28);
    eax = eax + 0x54;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002503F2u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002503F2: ;
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -108); /* mulss */
    MEMF(ebp + -132) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x54;
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    eax = MEM32(ebp + -28);
    eax = eax + 0x90;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025043Cu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_0025043C: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002506B8; /* je: equal / zero */

loc_00250446: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002506B8; /* je: equal / zero */

loc_00250458: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025046E; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00250467: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025046E; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00250469: ;
    goto loc_002506B8;

loc_0025046E: ;
    eax = MEM32(ebp + -28);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250496u); RECOMP_ABI_CALL(0x0024F550u, sub_0024F550); /* call 0x0024F550 */

loc_00250496: ;
    MEMF(ebp + -364) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -364)); /* movss */
    MEMF(ebp + -136) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x28;
    eax = MEM32(ebp + -28);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002504C4u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002504C4: ;
    MEMF(ebp + -360) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -360)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002504EA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002504DA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -416) = xmm0.f[0]; /* movss */
    goto loc_0025056D;

loc_002504EA: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x28;
    eax = MEM32(ebp + -28);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250502u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00250502: ;
    MEMF(ebp + -368) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -368)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025052F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025051D: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -420) = xmm0.f[0]; /* movss */
    goto loc_0025055D;

loc_0025052F: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x28;
    eax = MEM32(ebp + -28);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250547u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00250547: ;
    MEMF(ebp + -372) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -372)); /* movss */
    MEMF(ebp + -420) = xmm0.f[0]; /* movss */

loc_0025055D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -420)); /* movss */
    MEMF(ebp + -416) = xmm0.f[0]; /* movss */

loc_0025056D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -416)); /* movss */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -140)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -140); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -136); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -136); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -132); /* mulss */
    MEMF(ebp + -144) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002505DCu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002505DC: ;
    eax = MEM32(ebp + -28);
    eax = eax + 0x60;
    MEM32(ebp + -424) = eax;
    eax = MEM32(ebp + -28);
    eax = eax + 0x60;
    ecx = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002505FDu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002505FD: ;
    ecx = MEM32(ebp + -424);
    MEMF(ebp + -376) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -376)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -156;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250636u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250636: ;
    eax = ebp + -156;
    ecx = ebp + -48;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025064Fu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_0025064F: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x54;
    eax = MEM32(ebp + -28);
    eax = eax + 0x54;
    ecx = ebp + -156;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250671u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00250671: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -144)); /* movss */
    eax = ebp + -156;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250691u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250691: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x90;
    eax = MEM32(ebp + -28);
    eax = eax + 0x90;
    ecx = ebp + -156;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002506B8u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002506B8: ;
    eax = MEM32(ebp + -24);
    SET_LO16(esi, MEM16(eax + 0x5C));
    eax = MEM32(ebp + -24);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    edx = MEM32(ebp + -28);
    edx = edx + 0x90;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x28;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250707u); RECOMP_ABI_CALL(0x00251550u, sub_00251550); /* call 0x00251550 */

loc_00250707: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250A65; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025071B: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    eax = MEM32(ebp + -12);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x3C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025073E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x3C)) */

loc_0025072C: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -428) = xmm0.f[0]; /* movss */
    goto loc_00250756;

loc_0025073E: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x3C); /* divss */
    MEMF(ebp + -428) = xmm0.f[0]; /* movss */

loc_00250756: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -428)); /* movss */
    MEMF(ebp + -160) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x38); /* mulss */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025080B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025079B: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025080B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002507AB: ;
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(ebp + -24);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x34); /* divss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -160); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -16); /* mulss */
    eax = MEM32(ebp + -28);
    MEMF(eax + 0xB4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    eax = eax + 0xB8;
    ecx = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025080Bu); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_0025080B: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002508AB; /* je: equal / zero */

loc_00250815: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002508AB; /* je: equal / zero */

loc_00250827: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025083B; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00250837: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025083B; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00250839: ;
    goto loc_002508AB;

loc_0025083B: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025086Bu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_0025086B: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x48;
    eax = ebp + -48;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250884u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00250884: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -164)); /* movss */
    eax = MEM32(ebp + -28);
    eax = eax + 0xC4;
    ecx = ebp + -48;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002508A9u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002508A9: ;
    goto loc_002508D3;

loc_002508AB: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x48;
    xmm0 = XMM_SCALAR(MEMF(ebp + -164)); /* movss */
    eax = MEM32(ebp + -28);
    eax = eax + 0xC4;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002508D3u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002508D3: ;
    eax = MEM32(ebp + -24);
    SET_LO16(esi, MEM16(eax + 0x5C));
    eax = MEM32(ebp + -24);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    edx = MEM32(ebp + -28);
    edx = edx + 0xC4;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x28;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250922u); RECOMP_ABI_CALL(0x00251550u, sub_00251550); /* call 0x00251550 */

loc_00250922: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250A63; /* je: equal / zero */

loc_0025092C: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250A63; /* je: equal / zero */

loc_0025093E: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00250955; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0025094E: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00250955; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00250950: ;
    goto loc_00250A63;

loc_00250955: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025096Du); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_0025096D: ;
    MEMF(ebp + -380) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -380)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002509B3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00250983: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025099Bu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_0025099B: ;
    MEMF(ebp + -388) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -388)); /* movss */
    MEMF(ebp + -432) = xmm0.f[0]; /* movss */
    goto loc_002509EE;

loc_002509B3: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002509CBu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002509CB: ;
    MEMF(ebp + -384) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -384)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -432) = xmm0.f[0]; /* movss */

loc_002509EE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -432)); /* movss */
    eax = MEM32(ebp + -36);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -160); /* mulss */
    MEMF(ebp + -168) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + -168)); /* movss */
    eax = ebp + -180;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250A3Cu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250A3C: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -28);
    eax = eax + 0x10C;
    ecx = ebp + -180;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250A63u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00250A63: ;
    goto loc_00250A65;

loc_00250A65: ;
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    MEMF(ebp + -184) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250B2A; /* je: equal / zero */

loc_00250A94: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250B2A; /* je: equal / zero */

loc_00250AA6: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00250ABA; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00250AB6: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00250ABA; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00250AB8: ;
    goto loc_00250B2A;

loc_00250ABA: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250AEAu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250AEA: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x48;
    eax = ebp + -48;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250B03u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00250B03: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -184)); /* movss */
    eax = MEM32(ebp + -28);
    eax = eax + 0xE8;
    ecx = ebp + -48;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250B28u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250B28: ;
    goto loc_00250B52;

loc_00250B2A: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x48;
    xmm0 = XMM_SCALAR(MEMF(ebp + -184)); /* movss */
    eax = MEM32(ebp + -28);
    eax = eax + 0xE8;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250B52u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250B52: ;
    eax = MEM32(ebp + -24);
    SET_LO16(esi, MEM16(eax + 0x5C));
    eax = MEM32(ebp + -24);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    edx = MEM32(ebp + -28);
    edx = edx + 0xE8;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x28;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250BA1u); RECOMP_ABI_CALL(0x00251550u, sub_00251550); /* call 0x00251550 */

loc_00250BA1: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250CDA; /* je: equal / zero */

loc_00250BAB: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250CDA; /* je: equal / zero */

loc_00250BBD: ;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00250BD4; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00250BCD: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00250BD4; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00250BCF: ;
    goto loc_00250CDA;

loc_00250BD4: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250BECu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00250BEC: ;
    MEMF(ebp + -392) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -392)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00250C32; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00250C02: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250C1Au); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00250C1A: ;
    MEMF(ebp + -400) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -400)); /* movss */
    MEMF(ebp + -436) = xmm0.f[0]; /* movss */
    goto loc_00250C6D;

loc_00250C32: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250C4Au); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00250C4A: ;
    MEMF(ebp + -396) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -396)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -436) = xmm0.f[0]; /* movss */

loc_00250C6D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -436)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(ebp + -36);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    MEMF(ebp + -188) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + -188)); /* movss */
    eax = ebp + -200;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250CB3u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250CB3: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -28);
    eax = eax + 0x10C;
    ecx = ebp + -200;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250CDAu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00250CDA: ;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250CE8u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_00250CE8: ;
    MEMF(ebp + -404) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -404)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D774)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250D0F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00250D03: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax);
    ecx = ecx | 1;
    MEM32(eax) = ecx;
    goto loc_00250D19;

loc_00250D0F: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax) = ecx;

loc_00250D19: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250D35; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00250D29: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax);
    ecx = ecx | 2;
    MEM32(eax) = ecx;
    goto loc_00250D3F;

loc_00250D35: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax) = ecx;

loc_00250D3F: ;
    eax = MEM32(ebp + -28);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00250D5B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00250D4F: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax);
    ecx = ecx | 8;
    MEM32(eax) = ecx;
    goto loc_00250D65;

loc_00250D5B: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax) = ecx;

loc_00250D65: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251014; /* je: equal / zero */

loc_00250D6F: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250DD2; /* je: equal / zero */

loc_00250D7D: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -36);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = ebp + -212;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250DABu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250DAB: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -28);
    eax = eax + 0x10C;
    ecx = ebp + -212;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250DD2u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00250DD2: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax + 0x20);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251012; /* je: equal / zero */

loc_00250DE4: ;
    eax = MEM32(ebp + -24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + -32);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x2C); /* addss */
    MEMF(ebp + -216) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax + 4);
    MEM32(ebp + -228) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -224) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -220) = eax;
    ecx = MEM32(0x59CA70);
    xmm0 = XMM_SCALAR(MEMF(ebp + -216)); /* movss */
    eax = ebp + -240;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250E40u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250E40: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    esi = ebp + -228;
    edx = ebp + -240;
    eax = ebp + -320;
    MEM32(esp) = 0xC0A0;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250E73u); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_00250E73: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251010; /* je: equal / zero */

loc_00250E7B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -216)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -300); /* mulss */
    eax = MEM32(ebp + -24);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x68); /* subss */
    MEMF(ebp + -324) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    eax = MEM32(ebp + -32);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + -32);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250EC9u); RECOMP_ABI_CALL(0x0024F550u, sub_0024F550); /* call 0x0024F550 */

loc_00250EC9: ;
    MEMF(ebp + -408) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -408)); /* movss */
    MEMF(ebp + -328) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -324); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00250EFD; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + -324)) */

loc_00250EEB: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -440) = xmm0.f[0]; /* movss */
    goto loc_00250F21;

loc_00250EFD: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -324)); /* movss */
    eax = MEM32(ebp + -32);
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0x2C); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -440) = xmm0.f[0]; /* movss */

loc_00250F21: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -440)); /* movss */
    MEMF(ebp + -332) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -332)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -332); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F40); /* mulss */
    MEMF(ebp + -444) = xmm0.f[0]; /* movss */
    ecx = ebp + -320;
    ecx = ecx + 0x24;
    eax = MEM32(ebp + -28);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250F6Cu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00250F6C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -444)); /* movss */
    MEMF(ebp + -412) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -412)); /* movss */
    eax = MEM32(ebp + -32);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + -36);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    eax = MEM32(ebp + -32);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -328); /* mulss */
    MEMF(ebp + -336) = xmm0.f[0]; /* movss */
    ecx = ebp + -320;
    ecx = ecx + 0x24;
    xmm0 = XMM_SCALAR(MEMF(ebp + -336)); /* movss */
    eax = ebp + -348;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250FDFu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00250FDF: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -28);
    eax = eax + 0x10C;
    ecx = ebp + -348;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251006u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00251006: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax);
    ecx = ecx | 0x10;
    MEM32(eax) = ecx;

loc_00251010: ;
    goto loc_00251012;

loc_00251012: ;
    goto loc_00251014;

loc_00251014: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x84;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x90;
    eax = MEM32(ebp + -28);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025103Eu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_0025103E: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0xB8;
    eax = MEM32(ebp + -28);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251068u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00251068: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0xC4;
    eax = MEM32(ebp + -28);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251092u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00251092: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0xE8;
    eax = MEM32(ebp + -28);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002510BCu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002510BC: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x10C;
    eax = MEM32(ebp + -28);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002510E6u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002510E6: ;
    edx = MEM32(ebp + -28);
    edx = edx + 0x3C;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x118;
    eax = MEM32(ebp + -28);
    eax = eax + 0x124;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025110Du); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_0025110D: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x118;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025112Cu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_0025112C: ;
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x124;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025114Bu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_0025114B: ;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -18) = LO16(eax);
    goto loc_0024FF93;

loc_0025115C: ;
    esp = esp + 0x1D4;
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
 * sub_00251170
 * Original: 0x00251170 - 0x002511B0 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251170(void)
{
    uint32_t ebp = g_ebp;

loc_00251170: ;
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
 * sub_002511B0
 * Original: 0x002511B0 - 0x00251206 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002511B0(void)
{
    uint32_t ebp = g_ebp;

loc_002511B0: ;
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
 * sub_00251210
 * Original: 0x00251210 - 0x00251266 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251210(void)
{
    uint32_t ebp = g_ebp;

loc_00251210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00251270
 * Original: 0x00251270 - 0x002514A3 (563 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251270(void)
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

loc_00251270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xAC58;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0x5A1F50);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(0x5A1F54);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(0x5A1F58);
    MEM32(eax + 0x68) = ecx;
    ecx = MEM32(0x5A1F5C);
    MEM32(eax + 0x6C) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM16(eax + 0x70) = 0xFFFF;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    MEMF(ebp + -44092) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + 0x60;
    eax = MEM32(ebp + 0xC);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002512DAu); RECOMP_ABI_CALL(0x00254E90u, sub_00254E90); /* call 0x00254E90 */

loc_002512DA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44092)); /* movss */
    MEMF(ebp + -44088) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -44088)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0xC);
    edx = edx + 4;
    eax = MEM32(ebp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    ecx = MEM32(ebp + 8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = ebp + -44040;
    MEM32(esp) = 0xC0A0;
    MEM32(esp + 4) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251348u); RECOMP_ABI_CALL(0x0024C2F0u, sub_0024C2F0); /* call 0x0024C2F0 */

loc_00251348: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251443; /* je: equal / zero */

loc_00251354: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + 4;
    edx = ebp + -44040;
    eax = ebp + -44084;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251376u); RECOMP_ABI_CALL(0x002461B0u, sub_002461B0); /* call 0x002461B0 */

loc_00251376: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251443; /* je: equal / zero */

loc_00251382: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -44068);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(ebp + -44064);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(ebp + -44060);
    MEM32(eax + 0x68) = ecx;
    ecx = MEM32(ebp + -44056);
    MEM32(eax + 0x6C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44084)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -44052);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -44042);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002513D2u); RECOMP_ABI_CALL(0x00254ED0u, sub_00254ED0); /* call 0x00254ED0 */

loc_002513D2: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0xC);
    MEM16(eax + 0x70) = LO16(ecx);
    eax = ZX8(MEM8(ebp + -44044));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251414; /* jne: not equal / not zero */

loc_002513EB: ;
    _fa = (uint32_t)(MEM32(ebp + -44052)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44052), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251420; /* je: equal / zero */

loc_002513F4: ;
    eax = MEM32(ebp + -44052);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251402u); RECOMP_ABI_CALL(0x00254FA0u, sub_00254FA0); /* call 0x00254FA0 */

loc_00251402: ;
    ecx = SX16(LO16(eax));
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251420; /* jne: not equal / not zero */

loc_00251414: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    ecx = ecx | 4;
    MEM32(eax) = ecx;
    goto loc_0025142A;

loc_00251420: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax) = ecx;

loc_0025142A: ;
    _fa = (uint32_t)(MEM32(ebp + -44052)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44052), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251441; /* je: equal / zero */

loc_00251433: ;
    eax = MEM32(ebp + -44052);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251441u); RECOMP_ABI_CALL(0x00215C20u, sub_00215C20); /* call 0x00215C20 */

loc_00251441: ;
    goto loc_00251443;

loc_00251443: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025149B; /* je: equal / zero */

loc_0025144F: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251467; /* jl: less (signed <) */

loc_0025145B: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025149B; /* jl: less (signed <) */

loc_00251467: ;
    ecx = 0x446A5C;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x152;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025148Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025148F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025149Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025149B: ;
    esp = esp + 0xAC58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_002514B0
 * Original: 0x002514B0 - 0x002514FD (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514B0(void)
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

loc_002514B0: ;
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
 * sub_00251500
 * Original: 0x00251500 - 0x00251550 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251500(void)
{
    uint32_t ebp = g_ebp;

loc_00251500: ;
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
 * sub_00251550
 * Original: 0x00251550 - 0x0025170E (446 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002515B6; /* jne: not equal / not zero */

loc_00251577: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x18;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002515B1u); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_002515B1: ;
    goto loc_00251708;

loc_002515B6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(ebp + -20) = eax;
    eax = eax - 1;
    if ((eax == 0)) goto loc_002515DB; /* je: equal / zero */

loc_002515C2: ;
    goto loc_002515C4;

loc_002515C4: ;
    eax = MEM32(ebp + -20);
    eax = eax - 2;
    if ((eax == 0)) goto loc_00251606; /* je: equal / zero */

loc_002515CC: ;
    goto loc_002515CE;

loc_002515CE: ;
    eax = MEM32(ebp + -20);
    eax = eax - 3;
    if ((eax == 0)) goto loc_00251647; /* je: equal / zero */

loc_002515D6: ;
    goto loc_0025166F;

loc_002515DB: ;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + 0xC;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x18;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251601u); RECOMP_ABI_CALL(0x001D5CA0u, sub_001D5CA0); /* call 0x001D5CA0 */

loc_00251601: ;
    goto loc_002516A3;

loc_00251606: ;
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    eax = ebp + -16;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025161Fu); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_0025161F: ;
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + 0xC;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x18;
    edx = ebp + -16;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251645u); RECOMP_ABI_CALL(0x001D5CA0u, sub_001D5CA0); /* call 0x001D5CA0 */

loc_00251645: ;
    goto loc_002516A3;

loc_00251647: ;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + 0xC;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x18;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025166Du); RECOMP_ABI_CALL(0x001D5CA0u, sub_001D5CA0); /* call 0x001D5CA0 */

loc_0025166D: ;
    goto loc_002516A3;

loc_0025166F: ;
    eax = 0; /* xor self */
    eax = 0x4715B1;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x17F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251697u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00251697: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002516A3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002516A3: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + 0xC;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 0x14);
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002516C6u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002516C6: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x18;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002516E9u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002516E9: ;
    edx = MEM32(ebp + 0x14);
    edx = edx + 0xC;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + 0x18;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251708u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00251708: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00251710
 * Original: 0x00251710 - 0x00251749 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251710(void)
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

loc_00251710: ;
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
 * sub_00251750
 * Original: 0x00251750 - 0x002523AF (3167 bytes, 728 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251750(void)
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

loc_00251750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x230;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025177Fu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0025177F: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_002517C9; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00251795: ;
    ecx = 0x47C897;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3DA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002517BDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002517BD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002517C9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002517C9: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 8); /* divss */
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002517F4u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002517F4: ;
    eax = ebp + -24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002517FFu); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_002517FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251882; /* jne: not equal / not zero */

loc_00251803: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x4496D6;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251852u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00251852: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3DE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251876u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00251876: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251882u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00251882: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x14;
    edx = ebp + -24;
    eax = ebp + -36;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002518A1u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002518A1: ;
    eax = ebp + -36;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002518ACu); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_002518AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025192F; /* jne: not equal / not zero */

loc_002518B0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x44118C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002518FFu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_002518FF: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3E2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251923u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00251923: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025192Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025192F: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -36); /* addss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -32); /* addss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -28); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x2C;
    edx = ebp + -136;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025198Du); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_0025198D: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax + 0x5C;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002519AEu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_002519AE: ;
    ecx = eax;
    edx = ebp + -136;
    eax = ebp + -172;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002519CCu); RECOMP_ABI_CALL(0x001D0900u, sub_001D0900); /* call 0x001D0900 */

loc_002519CC: ;
    eax = ebp + -136;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002519DEu); RECOMP_ABI_CALL(0x001D07D0u, sub_001D07D0); /* call 0x001D07D0 */

loc_002519DE: ;
    ecx = eax;
    eax = ebp + -172;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002519F6u); RECOMP_ABI_CALL(0x001D0900u, sub_001D0900); /* call 0x001D0900 */

loc_002519F6: ;
    ecx = MEM32(ebp + 0x18);
    edx = ebp + -172;
    eax = ebp + -60;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251A12u); RECOMP_ABI_CALL(0x001D2C50u, sub_001D2C50); /* call 0x001D2C50 */

loc_00251A12: ;
    eax = ebp + -60;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251A1Du); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_00251A1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251AA0; /* jne: not equal / not zero */

loc_00251A21: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x465C1D;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251A70u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00251A70: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3F0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251A94u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00251A94: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251AA0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00251AA0: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x38;
    edx = ebp + -60;
    eax = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251ABFu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00251ABF: ;
    eax = ebp + -72;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251ACAu); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_00251ACA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251B4D; /* jne: not equal / not zero */

loc_00251ACE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x482647;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251B1Du); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00251B1D: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3F4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251B41u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00251B41: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251B4Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00251B4D: ;
    edi = MEM32(ebp + -12);
    edi = edi + 4;
    edi = edi + 0x20;
    esi = MEM32(ebp + -12);
    esi = esi + 4;
    esi = esi + 0x2C;
    edx = ebp + -72;
    ecx = ebp + -84;
    eax = ebp + -96;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251B80u); RECOMP_ABI_CALL(0x00252430u, sub_00252430); /* call 0x00252430 */

loc_00251B80: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -72);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x44) = ecx;
    _fa = (uint32_t)(MEM8(0xBDD340)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBDD340), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251BDA; /* je: equal / zero */

loc_00251BB3: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax);
    edx = ebp + -48;
    ecx = ebp + -84;
    eax = ebp + -96;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251BD5u); RECOMP_ABI_CALL(0x0022AA20u, sub_0022AA20); /* call 0x0022AA20 */

loc_00251BD5: ;
    goto loc_00252120;

loc_00251BDA: ;
    MEM16(ebp + -174) = 4;

loc_00251BE3: ;
    SET_LO16(eax, MEM16(ebp + -174));
    SET_LO16(ecx, LO16(eax));
    SET_LO16(ecx, LO16(ecx) + 0xFFFFFFFFu);
    MEM16(ebp + -174) = LO16(ecx);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00252111; /* jle: less or equal (signed <=) */

loc_00251C02: ;
    MEM8(ebp + -181) = 0;
    MEM32(ebp + -180) = 0;
    esi = ebp + -328;
    edx = ebp + -48;
    ecx = ebp + -84;
    eax = ebp + -96;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251C36u); RECOMP_ABI_CALL(0x001D2020u, sub_001D2020); /* call 0x001D2020 */

loc_00251C36: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm2 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm1 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -340;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251C9Eu); RECOMP_ABI_CALL(0x0024FB80u, sub_0024FB80); /* call 0x0024FB80 */

loc_00251C9E: ;
    ecx = ebp + -328;
    eax = ebp + -340;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251CBAu); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_00251CBA: ;
    eax = MEM32(ebp + -340);
    MEM32(ebp + -288) = eax;
    eax = MEM32(ebp + -336);
    MEM32(ebp + -284) = eax;
    eax = MEM32(ebp + -332);
    MEM32(ebp + -280) = eax;
    MEM16(ebp + -98) = 0;

loc_00251CE4: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -98);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00251E48; /* jge: greater or equal (signed >=) */

loc_00251CF7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -98);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251D18u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00251D18: ;
    MEM32(ebp + -344) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -98);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x130);
    eax = eax + ecx;
    MEM32(ebp + -348) = eax;
    ecx = MEM32(ebp + -344);
    ecx = ecx + 0x38;
    edx = ebp + -328;
    eax = ebp + -360;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251D58u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_00251D58: ;
    edx = MEM32(ebp + -348);
    edx = edx + 4;
    ecx = ebp + -360;
    eax = ebp + -372;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251D7Du); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_00251D7D: ;
    esi = MEM32(ebp + -348);
    esi = esi + 4;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = ebp + -372;
    eax = ebp + -452;
    MEM32(esp) = 0xC0A1;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251DB3u); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_00251DB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251E35; /* je: equal / zero */

loc_00251DB7: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -98);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | MEM32(ebp + -180);
    MEM32(ebp + -180) = eax;
    _fa = (uint32_t)(MEM8(ebp + -181)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -181), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251DE8; /* je: equal / zero */

loc_00251DD7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -256)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -432); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00251E33; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -432)) */

loc_00251DE8: ;
    MEM8(ebp + -181) = 1;
    eax = MEM32(ebp + -372);
    MEM32(ebp + -196) = eax;
    eax = MEM32(ebp + -368);
    MEM32(ebp + -192) = eax;
    eax = MEM32(ebp + -364);
    MEM32(ebp + -188) = eax;
    ecx = ebp + -276;
    eax = ebp + -452;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251E33u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00251E33: ;
    goto loc_00251E35;

loc_00251E35: ;
    goto loc_00251E37;

loc_00251E37: ;
    SET_LO16(eax, MEM16(ebp + -98));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -98) = LO16(eax);
    goto loc_00251CE4;

loc_00251E48: ;
    _fa = (uint32_t)(MEM8(ebp + -181)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -181), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251E78; /* jne: not equal / not zero */

loc_00251E51: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax);
    edx = ebp + -48;
    ecx = ebp + -84;
    eax = ebp + -96;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251E73u); RECOMP_ABI_CALL(0x0022AA20u, sub_0022AA20); /* call 0x0022AA20 */

loc_00251E73: ;
    goto loc_00252111;

loc_00251E78: ;
    eax = ebp + -276;
    eax = eax + 0x24;
    ecx = ebp + -196;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251E93u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00251E93: ;
    MEMF(ebp + -500) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -500)); /* movss */
    MEMF(ebp + -456) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -456)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00251EBD; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00251EB9: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00251EBD; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00251EBB: ;
    goto loc_00251EEA;

loc_00251EBD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -456)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E180)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -528) = xmm0.d[0]; /* movsd */
    goto loc_00251EFC;

loc_00251EEA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EB48)); /* movsd */
    MEMD(ebp + -528) = xmm0.d[0]; /* movsd */
    goto loc_00251EFC;

loc_00251EFC: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -528)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -460) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -256)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -460); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00251F42; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00251F28: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -256)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -460); /* subss */
    MEMF(ebp + -532) = xmm0.f[0]; /* movss */
    goto loc_00251F4F;

loc_00251F42: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -532) = xmm0.f[0]; /* movss */
    goto loc_00251F4F;

loc_00251F4F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -532)); /* movss */
    MEMF(ebp + -464) = xmm0.f[0]; /* movss */
    ecx = ebp + -276;
    ecx = ecx + 0x24;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00251F77u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00251F77: ;
    MEMF(ebp + -504) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -504)); /* movss */
    MEMF(ebp + -468) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -468); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002520A7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -468)) */

loc_00251F9D: ;
    goto loc_00251F9F;

loc_00251F9F: ;
    eax = ebp + -36;
    MEM32(ebp + -472) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -464)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -468); /* mulss */
    MEMF(ebp + -476) = xmm0.f[0]; /* movss */
    eax = ebp + -276;
    eax = eax + 0x24;
    MEM32(ebp + -480) = eax;
    eax = ebp + -36;
    MEM32(ebp + -484) = eax;
    eax = MEM32(ebp + -480);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -476); /* mulss */
    eax = MEM32(ebp + -484);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    eax = MEM32(ebp + -472);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -480);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -476); /* mulss */
    eax = MEM32(ebp + -484);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(ebp + -472);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -480);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -476); /* mulss */
    eax = MEM32(ebp + -484);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(ebp + -472);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -36); /* addss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -32); /* addss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -28); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */

loc_002520A7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -464)); /* movss */
    eax = ebp + -72;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002520C4u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002520C4: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -72);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x44) = ecx;
    edi = MEM32(ebp + -12);
    edi = edi + 4;
    edi = edi + 0x20;
    esi = MEM32(ebp + -12);
    esi = esi + 4;
    esi = esi + 0x2C;
    edx = ebp + -72;
    ecx = ebp + -84;
    eax = ebp + -96;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025210Cu); RECOMP_ABI_CALL(0x00252430u, sub_00252430); /* call 0x00252430 */

loc_0025210C: ;
    goto loc_00251BE3;

loc_00252111: ;
    ecx = MEM32(ebp + -180);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x478) = ecx;

loc_00252120: ;
    MEM16(ebp + -486) = 0;
    MEM16(ebp + -488) = 0;
    MEM16(ebp + -490) = 0;
    MEM16(ebp + -492) = 0;
    MEM16(ebp + -98) = 0;

loc_0025214A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -98);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025221B; /* jge: greater or equal (signed >=) */

loc_0025215D: ;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -98);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x130);
    eax = eax + ecx;
    MEM32(ebp + -496) = eax;
    eax = MEM32(ebp + -496);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -486);
    eax = eax + ecx;
    MEM16(ebp + -486) = LO16(eax);
    eax = MEM32(ebp + -496);
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -488);
    eax = eax + ecx;
    MEM16(ebp + -488) = LO16(eax);
    eax = MEM32(ebp + -496);
    eax = MEM32(eax);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -490);
    eax = eax + ecx;
    MEM16(ebp + -490) = LO16(eax);
    eax = MEM32(ebp + -496);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -492);
    eax = eax + ecx;
    MEM16(ebp + -492) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -98));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -98) = LO16(eax);
    goto loc_0025214A;

loc_0025221B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -486);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002522FB; /* jne: not equal / not zero */

loc_00252231: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002522FB; /* jl: less (signed <) */

loc_00252241: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -490);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002522FB; /* jne: not equal / not zero */

loc_00252251: ;
    eax = ebp + -36;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025225Cu); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_0025225C: ;
    MEMF(ebp + -508) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -508)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D774)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002522FB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025227B: ;
    eax = ebp + -72;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252286u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_00252286: ;
    MEMF(ebp + -512) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -512)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DD0C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002522FB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002522A1: ;
    eax = ebp + -24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002522ACu); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_002522AC: ;
    MEMF(ebp + -516) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -516)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA04)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002522FB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002522C7: ;
    eax = ebp + -60;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002522D2u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_002522D2: ;
    MEMF(ebp + -520) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -520)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002522FB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002522ED: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x20;
    MEM32(eax + 4) = ecx;
    goto loc_00252307;

loc_002522FB: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(eax + 4) = ecx;

loc_00252307: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00252321; /* jle: less or equal (signed <=) */

loc_00252313: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx | 2;
    MEM32(eax + 4) = ecx;
    goto loc_0025232D;

loc_00252321: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 4) = ecx;

loc_0025232D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -492);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00252347; /* jle: less or equal (signed <=) */

loc_00252339: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx | 4;
    MEM32(eax + 4) = ecx;
    goto loc_00252353;

loc_00252347: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 4) = ecx;

loc_00252353: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -492);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025236D; /* jle: less or equal (signed <=) */

loc_0025235F: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx | 8;
    MEM32(eax + 4) = ecx;
    goto loc_00252379;

loc_0025236D: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax + 4) = ecx;

loc_00252379: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -492);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252399; /* jne: not equal / not zero */

loc_0025238B: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x10;
    MEM32(eax + 4) = ecx;
    goto loc_002523A5;

loc_00252399: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFEFu;
    MEM32(eax + 4) = ecx;

loc_002523A5: ;
    esp = esp + 0x230;
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
 * sub_002523B0
 * Original: 0x002523B0 - 0x00252421 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002523B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002523B0: ;
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
    PUSH32(esp, 0x002523CAu); RECOMP_ABI_CALL(0x00254FD0u, sub_00254FD0); /* call 0x00254FD0 */

loc_002523CA: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00252414; /* je: equal / zero */

loc_002523D7: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002523E9u); RECOMP_ABI_CALL(0x00254FD0u, sub_00254FD0); /* call 0x00254FD0 */

loc_002523E9: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00252414; /* je: equal / zero */

loc_002523F6: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252408u); RECOMP_ABI_CALL(0x00254FD0u, sub_00254FD0); /* call 0x00254FD0 */

loc_00252408: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_00252414: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00252430
 * Original: 0x00252430 - 0x0025273D (781 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252430(void)
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

loc_00252430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0xA4;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -12) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252468u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_00252468: ;
    MEMF(ebp + -80) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002524B1; /* jne: not equal / not zero */

loc_0025247D: ;
    ecx = 0x45D2BD;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3B0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002524A5u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002524A5: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002524B1u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002524B1: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002524ED; /* jne: not equal / not zero */

loc_002524B9: ;
    ecx = 0x4799E6;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3B1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002524E1u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002524E1: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002524EDu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002524ED: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00252501; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_002524FA: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00252501; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_002524FC: ;
    goto loc_00252628;

loc_00252501: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252510u); RECOMP_ABI_CALL(0x00255080u, sub_00255080); /* call 0x00255080 */

loc_00252510: ;
    MEMF(ebp + -100) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025252Cu); RECOMP_ABI_CALL(0x002550C0u, sub_002550C0); /* call 0x002550C0 */

loc_0025252C: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    MEMF(ebp + -96) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -96)); /* movss */
    ecx = ebp + -72;
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252557u); RECOMP_ABI_CALL(0x001D0CC0u, sub_001D0CC0); /* call 0x001D0CC0 */

loc_00252557: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    edx = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252570u); RECOMP_ABI_CALL(0x001D2420u, sub_001D2420); /* call 0x001D2420 */

loc_00252570: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x18);
    edx = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252589u); RECOMP_ABI_CALL(0x001D2420u, sub_001D2420); /* call 0x001D2420 */

loc_00252589: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252594u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_00252594: ;
    MEMF(ebp + -92) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002525AEu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002525AE: ;
    MEMF(ebp + -88) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    eax = MEM32(ebp + 0x14);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    eax = MEM32(ebp + 0x14);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    eax = MEM32(ebp + 0x14);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025261Eu); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_0025261E: ;
    MEMF(ebp + -84) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    goto loc_00252654;

loc_00252628: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_00252654: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252666u); RECOMP_ABI_CALL(0x00255100u, sub_00255100); /* call 0x00255100 */

loc_00252666: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252734; /* jne: not equal / not zero */

loc_0025266E: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x46468F;
    ecx = 0x490921;
    eax = 0x482659;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x28) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x30) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252704u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00252704: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3C5;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252728u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00252728: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252734u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00252734: ;
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
 * sub_00252740
 * Original: 0x00252740 - 0x00252B4B (1035 bytes, 248 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252740(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00252740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x90;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025276Du); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0025276D: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x6F626A65;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252785u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00252785: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002527A1u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_002527A1: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002527DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002527B3: ;
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
    PUSH32(esp, 0x002527DAu); RECOMP_ABI_CALL(0x00252B50u, sub_00252B50); /* call 0x00252B50 */

loc_002527DA: ;
    goto loc_00252B41;

loc_002527DF: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -80;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002527F1u); RECOMP_ABI_CALL(0x0024F920u, sub_0024F920); /* call 0x0024F920 */

loc_002527F1: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025284E; /* je: equal / zero */

loc_002527F7: ;
    MEM16(ebp + -106) = 0;

loc_002527FD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -106);
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025284C; /* jge: greater or equal (signed >=) */

loc_00252809: ;
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -106);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x60);
    eax = eax + ecx;
    MEM32(ebp + -112) = eax;
    ecx = MEM32(ebp + -112);
    ecx = ecx + 0x2C;
    eax = MEM32(ebp + -112);
    eax = eax + 0x1C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252830u); RECOMP_ABI_CALL(0x001D04E0u, sub_001D04E0); /* call 0x001D04E0 */

loc_00252830: ;
    eax = MEM32(ebp + -112);
    eax = eax + 0x2C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025283Eu); RECOMP_ABI_CALL(0x001D02F0u, sub_001D02F0); /* call 0x001D02F0 */

loc_0025283E: ;
    SET_LO16(eax, MEM16(ebp + -106));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -106) = LO16(eax);
    goto loc_002527FD;

loc_0025284C: ;
    goto loc_0025284E;

loc_0025284E: ;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = ebp + -80;
    ecx = ebp + -92;
    eax = ebp + -104;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252875u); RECOMP_ABI_CALL(0x0024FEC0u, sub_0024FEC0); /* call 0x0024FEC0 */

loc_00252875: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252888u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00252888: ;
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x460)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -92); /* addss */
    MEMF(ebp + -92) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x464)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -88); /* addss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x468)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -84); /* addss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x46C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -104); /* addss */
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x470)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -100); /* addss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x474)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -96); /* addss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x460) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x464) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x468) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x46C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x470) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -116);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x474) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252A36; /* je: equal / zero */

loc_00252967: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252972u); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_00252972: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252A01; /* jne: not equal / not zero */

loc_0025297A: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x49345B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002529D1u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_002529D1: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x10E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002529F5u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002529F5: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252A01u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00252A01: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -92); /* addss */
    MEMF(ebp + -92) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -88); /* addss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -84); /* addss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */

loc_00252A36: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252B0F; /* je: equal / zero */

loc_00252A40: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252A4Bu); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_00252A4B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252ADA; /* jne: not equal / not zero */

loc_00252A53: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x48ACEC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252AAAu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00252AAA: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x114;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252ACEu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00252ACE: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252ADAu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00252ADA: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -104); /* addss */
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -100); /* addss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -96); /* addss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */

loc_00252B0F: ;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = ebp + -80;
    ecx = ebp + -92;
    eax = ebp + -104;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252B36u); RECOMP_ABI_CALL(0x00251750u, sub_00251750); /* call 0x00251750 */

loc_00252B36: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252B41u); RECOMP_ABI_CALL(0x00254BC0u, sub_00254BC0); /* call 0x00254BC0 */

loc_00252B41: ;
    esp = esp + 0x90;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00252B50
 * Original: 0x00252B50 - 0x00254BC0 (8304 bytes, 1795 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252B50(void)
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

loc_00252B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x314;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252B7Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00252B7C: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = 0x6F626A65;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252B94u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00252B94: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x8C);
    MEM32(esp) = 0x70687973;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252BB0u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00252BB0: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F40); /* mulss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -80) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -20); /* mulss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    eax = ebp + -96;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252C14u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00252C14: ;
    eax = ebp + -108;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252C31u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00252C31: ;
    eax = ebp + -120;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252C4Eu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00252C4E: ;
    MEM16(ebp + -122) = 0;
    MEM16(ebp + -124) = 0;
    MEM16(ebp + -126) = 0;
    MEM16(ebp + -128) = 0;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 8;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x2C;
    esi = ebp + -72;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252C98u); RECOMP_ABI_CALL(0x001D2020u, sub_001D2020); /* call 0x001D2020 */

loc_00252C98: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252D10; /* je: equal / zero */

loc_00252C9E: ;
    MEM16(ebp + -132) = 0;

loc_00252CA7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -132);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00252D0E; /* jge: greater or equal (signed >=) */

loc_00252CB6: ;
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -132);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x60);
    eax = eax + ecx;
    MEM32(ebp + -136) = eax;
    ecx = MEM32(ebp + -136);
    ecx = ecx + 0x2C;
    eax = MEM32(ebp + -136);
    eax = eax + 0x1C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252CE9u); RECOMP_ABI_CALL(0x001D04E0u, sub_001D04E0); /* call 0x001D04E0 */

loc_00252CE9: ;
    eax = MEM32(ebp + -136);
    eax = eax + 0x2C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252CFAu); RECOMP_ABI_CALL(0x001D02F0u, sub_001D02F0); /* call 0x001D02F0 */

loc_00252CFA: ;
    SET_LO16(eax, MEM16(ebp + -132));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -132) = LO16(eax);
    goto loc_00252CA7;

loc_00252D0E: ;
    goto loc_00252D10;

loc_00252D10: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)MEM32(eax + 0x74) * (int32_t)0x130);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252D33u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00252D33: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252DED; /* je: equal / zero */

loc_00252D3D: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252D48u); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_00252D48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252DD7; /* jne: not equal / not zero */

loc_00252D50: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x49345B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252DA7u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00252DA7: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4E7;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252DCBu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00252DCB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252DD7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00252DD7: ;
    ecx = MEM32(ebp + 0x14);
    eax = ebp + -84;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252DEDu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00252DED: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252EA5; /* je: equal / zero */

loc_00252DF7: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252E02u); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_00252E02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252E91; /* jne: not equal / not zero */

loc_00252E0A: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x48ACEC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252E61u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00252E61: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4ED;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252E85u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00252E85: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252E91u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00252E91: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    MEM32(ebp + -96) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -92) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -88) = eax;

loc_00252EA5: ;
    MEM16(ebp + -130) = 0;

loc_00252EAE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -130);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025432D; /* jge: greater or equal (signed >=) */

loc_00252EC1: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -130);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252EE2u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00252EE2: ;
    MEM32(ebp + -140) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -130);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x130);
    eax = eax + ecx;
    MEM32(ebp + -144) = eax;
    MEM32(ebp + -148) = 0;
    MEM32(ebp + -152) = 0;
    eax = MEM32(ebp + -140);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252F76; /* je: equal / zero */

loc_00252F23: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252F76; /* je: equal / zero */

loc_00252F29: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x68;
    eax = MEM32(ebp + -140);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252F4Du); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00252F4D: ;
    MEM32(ebp + -148) = eax;
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252F74; /* je: equal / zero */

loc_00252F5C: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -140);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x60);
    eax = eax + ecx;
    MEM32(ebp + -152) = eax;

loc_00252F74: ;
    goto loc_00252F76;

loc_00252F76: ;
    eax = MEM32(ebp + -144);
    MEM32(eax) = 0;
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xC); /* subss */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x10); /* subss */
    MEMF(ebp + -160) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x14); /* subss */
    MEMF(ebp + -156) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 4;
    edx = ebp + -72;
    ecx = ebp + -164;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00252FF5u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_00252FF5: ;
    _fa = (uint32_t)(MEM32(ebp + -152)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -152), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253072; /* je: equal / zero */

loc_00252FFE: ;
    ecx = MEM32(ebp + -152);
    ecx = ecx + 0x2C;
    edx = ebp + -72;
    eax = ebp + -216;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253020u); RECOMP_ABI_CALL(0x001D2180u, sub_001D2180); /* call 0x001D2180 */

loc_00253020: ;
    ecx = MEM32(ebp + -140);
    ecx = ecx + 0x44;
    eax = MEM32(ebp + -144);
    eax = eax + 0x10;
    edx = ebp + -216;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253048u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_00253048: ;
    ecx = MEM32(ebp + -140);
    ecx = ecx + 0x50;
    eax = MEM32(ebp + -144);
    eax = eax + 0x28;
    edx = ebp + -216;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253070u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_00253070: ;
    goto loc_002530BC;

loc_00253072: ;
    ecx = MEM32(ebp + -140);
    ecx = ecx + 0x44;
    eax = MEM32(ebp + -144);
    eax = eax + 0x10;
    edx = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253097u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_00253097: ;
    ecx = MEM32(ebp + -140);
    ecx = ecx + 0x50;
    eax = MEM32(ebp + -144);
    eax = eax + 0x28;
    edx = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002530BCu); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_002530BC: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x34;
    eax = MEM32(ebp + -144);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002530DAu); RECOMP_ABI_CALL(0x00333290u, sub_00333290); /* call 0x00333290 */

loc_002530DA: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 8;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 4;
    eax = MEM32(ebp + -144);
    eax = eax + 0x3C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253105u); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_00253105: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x38;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x3C;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253130u); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_00253130: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x14;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x48;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025315Bu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_0025315B: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -144);
    eax = MEM32(ebp + -140);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025317Au); RECOMP_ABI_CALL(0x00251270u, sub_00251270); /* call 0x00251270 */

loc_0025317A: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x34;
    eax = MEM32(ebp + -144);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253198u); RECOMP_ABI_CALL(0x00332FE0u, sub_00332FE0); /* call 0x00332FE0 */

loc_00253198: ;
    MEMF(ebp + -624) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -624)); /* movss */
    eax = MEM32(ebp + -144);
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002536ED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002531C8: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002536ED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002531DC: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x48;
    eax = MEM32(ebp + -144);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002531FAu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002531FA: ;
    MEMF(ebp + -628) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -628)); /* movss */
    MEMF(ebp + -220) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    MEMF(ebp + -224) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x5A1F40)); /* movss */
    eax = MEM32(ebp + -16);
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0x24); /* divss */
    eax = MEM32(ebp + -144);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x74); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -220)); /* movss */
    eax = MEM32(ebp + -16);
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -144);
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x60;
    eax = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 0x84;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002532B5u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002532B5: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x60;
    xmm0 = XMM_SCALAR(MEMF(ebp + -220)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -144);
    eax = eax + 0x54;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002532EEu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002532EE: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x54;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x48;
    eax = MEM32(ebp + -144);
    eax = eax + 0x54;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253319u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00253319: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x54;
    xmm0 = XMM_SCALAR(MEMF(ebp + -224)); /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 0x90;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253347u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253347: ;
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253608; /* je: equal / zero */

loc_00253354: ;
    eax = MEM32(ebp + -148);
    eax = MEM32(eax + 0x20);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253608; /* je: equal / zero */

loc_00253369: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00253382; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0025337B: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00253382; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0025337D: ;
    goto loc_00253608;

loc_00253382: ;
    eax = MEM32(ebp + -144);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + -16);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002533B3u); RECOMP_ABI_CALL(0x0024F550u, sub_0024F550); /* call 0x0024F550 */

loc_002533B3: ;
    MEMF(ebp + -636) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -636)); /* movss */
    MEMF(ebp + -228) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x28;
    eax = MEM32(ebp + -144);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002533E7u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002533E7: ;
    MEMF(ebp + -632) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -632)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025340D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002533FD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -688) = xmm0.f[0]; /* movss */
    goto loc_0025349C;

loc_0025340D: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x28;
    eax = MEM32(ebp + -144);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025342Bu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_0025342B: ;
    MEMF(ebp + -640) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -640)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00253458; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00253446: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -692) = xmm0.f[0]; /* movss */
    goto loc_0025348C;

loc_00253458: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x28;
    eax = MEM32(ebp + -144);
    eax = eax + 0x60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253476u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00253476: ;
    MEMF(ebp + -644) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -644)); /* movss */
    MEMF(ebp + -692) = xmm0.f[0]; /* movss */

loc_0025348C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -692)); /* movss */
    MEMF(ebp + -688) = xmm0.f[0]; /* movss */

loc_0025349C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -688)); /* movss */
    MEMF(ebp + -232) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -232)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -232); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -228); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -228); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -224); /* mulss */
    MEMF(ebp + -236) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -248;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253514u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253514: ;
    eax = MEM32(ebp + -144);
    eax = eax + 0x60;
    MEM32(ebp + -696) = eax;
    eax = MEM32(ebp + -144);
    eax = eax + 0x60;
    ecx = ebp + -248;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025353Eu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_0025353E: ;
    ecx = MEM32(ebp + -696);
    MEMF(ebp + -648) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -648)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -260;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253577u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253577: ;
    eax = ebp + -260;
    ecx = ebp + -248;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253593u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00253593: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x54;
    eax = MEM32(ebp + -144);
    eax = eax + 0x54;
    ecx = ebp + -260;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002535BBu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002535BB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -236)); /* movss */
    eax = ebp + -260;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002535DBu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002535DB: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x90;
    eax = MEM32(ebp + -144);
    eax = eax + 0x90;
    ecx = ebp + -260;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253608u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00253608: ;
    eax = MEM32(ebp + -144);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025368A; /* jne: not equal / not zero */

loc_00253617: ;
    eax = MEM32(ebp + -140);
    SET_LO16(esi, MEM16(eax + 0x5C));
    eax = MEM32(ebp + -140);
    xmm1 = XMM_SCALAR(MEMF(0x43DC38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x60); /* mulss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(0x43DC38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x64); /* mulss */
    edx = MEM32(ebp + -144);
    edx = edx + 0x90;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x28;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253688u); RECOMP_ABI_CALL(0x00251550u, sub_00251550); /* call 0x00251550 */

loc_00253688: ;
    goto loc_002536EB;

loc_0025368A: ;
    eax = MEM32(ebp + -140);
    SET_LO16(esi, MEM16(eax + 0x5C));
    eax = MEM32(ebp + -140);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    edx = MEM32(ebp + -144);
    edx = edx + 0x90;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x28;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002536EBu); RECOMP_ABI_CALL(0x00251550u, sub_00251550); /* call 0x00251550 */

loc_002536EB: ;
    goto loc_002536ED;

loc_002536ED: ;
    eax = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00253AC9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00253704: ;
    eax = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    eax = MEM32(ebp + -16);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x3C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025372A; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x3C)) */

loc_00253718: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -700) = xmm0.f[0]; /* movss */
    goto loc_00253745;

loc_0025372A: ;
    eax = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x3C); /* divss */
    MEMF(ebp + -700) = xmm0.f[0]; /* movss */

loc_00253745: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -700)); /* movss */
    MEMF(ebp + -264) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x38); /* mulss */
    MEMF(ebp + -268) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025380F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00253790: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025380F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002537A0: ;
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(ebp + -140);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x34); /* divss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -264); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -20); /* mulss */
    eax = MEM32(ebp + -144);
    MEMF(eax + 0xB4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 0xB8;
    ecx = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025380Fu); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_0025380F: ;
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002538D0; /* je: equal / zero */

loc_0025381C: ;
    eax = MEM32(ebp + -148);
    eax = MEM32(eax + 0x20);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002538D0; /* je: equal / zero */

loc_00253831: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025384B; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00253844: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025384B; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00253846: ;
    goto loc_002538D0;

loc_0025384B: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -280;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253884u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253884: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x48;
    eax = ebp + -280;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002538A3u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002538A3: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 0xC4;
    ecx = ebp + -280;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002538CEu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002538CE: ;
    goto loc_002538FE;

loc_002538D0: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x48;
    xmm0 = XMM_SCALAR(MEMF(ebp + -268)); /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 0xC4;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002538FEu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002538FE: ;
    eax = MEM32(ebp + -140);
    SET_LO16(esi, MEM16(eax + 0x5C));
    eax = MEM32(ebp + -140);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    edx = MEM32(ebp + -144);
    edx = edx + 0xC4;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x28;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025395Fu); RECOMP_ABI_CALL(0x00251550u, sub_00251550); /* call 0x00251550 */

loc_0025395F: ;
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253AC7; /* je: equal / zero */

loc_0025396C: ;
    eax = MEM32(ebp + -148);
    eax = MEM32(eax + 0x20);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253AC7; /* je: equal / zero */

loc_00253981: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025399B; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00253994: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025399B; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00253996: ;
    goto loc_00253AC7;

loc_0025399B: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002539B9u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002539B9: ;
    MEMF(ebp + -652) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -652)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00253A05; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002539CF: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002539EDu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002539ED: ;
    MEMF(ebp + -660) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -660)); /* movss */
    MEMF(ebp + -704) = xmm0.f[0]; /* movss */
    goto loc_00253A46;

loc_00253A05: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253A23u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00253A23: ;
    MEMF(ebp + -656) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -656)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -704) = xmm0.f[0]; /* movss */

loc_00253A46: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -704)); /* movss */
    eax = MEM32(ebp + -152);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -264); /* mulss */
    MEMF(ebp + -284) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + -284)); /* movss */
    eax = ebp + -296;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253A9Au); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253A9A: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -144);
    eax = eax + 0x10C;
    ecx = ebp + -296;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253AC7u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00253AC7: ;
    goto loc_00253AC9;

loc_00253AC9: ;
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    MEMF(ebp + -300) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253BB2; /* je: equal / zero */

loc_00253AFE: ;
    eax = MEM32(ebp + -148);
    eax = MEM32(eax + 0x20);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253BB2; /* je: equal / zero */

loc_00253B13: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00253B2D; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00253B26: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00253B2D; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00253B28: ;
    goto loc_00253BB2;

loc_00253B2D: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = ebp + -312;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253B66u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253B66: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x48;
    eax = ebp + -312;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253B85u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00253B85: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -300)); /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 0xE8;
    ecx = ebp + -312;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253BB0u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253BB0: ;
    goto loc_00253BE0;

loc_00253BB2: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x48;
    xmm0 = XMM_SCALAR(MEMF(ebp + -300)); /* movss */
    eax = MEM32(ebp + -144);
    eax = eax + 0xE8;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253BE0u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253BE0: ;
    eax = MEM32(ebp + -140);
    SET_LO16(esi, MEM16(eax + 0x5C));
    eax = MEM32(ebp + -140);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    edx = MEM32(ebp + -144);
    edx = edx + 0xE8;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x28;
    esi = SX16(LO16(esi));
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253C41u); RECOMP_ABI_CALL(0x00251550u, sub_00251550); /* call 0x00251550 */

loc_00253C41: ;
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253DA1; /* je: equal / zero */

loc_00253C4E: ;
    eax = MEM32(ebp + -148);
    eax = MEM32(eax + 0x20);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253DA1; /* je: equal / zero */

loc_00253C63: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00253C7D; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00253C76: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00253C7D; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00253C78: ;
    goto loc_00253DA1;

loc_00253C7D: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253C9Bu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00253C9B: ;
    MEMF(ebp + -664) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -664)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00253CE7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00253CB1: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253CCFu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00253CCF: ;
    MEMF(ebp + -672) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -672)); /* movss */
    MEMF(ebp + -708) = xmm0.f[0]; /* movss */
    goto loc_00253D28;

loc_00253CE7: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253D05u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00253D05: ;
    MEMF(ebp + -668) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -668)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -708) = xmm0.f[0]; /* movss */

loc_00253D28: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -708)); /* movss */
    eax = MEM32(ebp + -152);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(ebp + -316) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + -316)); /* movss */
    eax = ebp + -328;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253D74u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253D74: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -144);
    eax = eax + 0x10C;
    ecx = ebp + -328;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253DA1u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00253DA1: ;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253DB2u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_00253DB2: ;
    MEMF(ebp + -676) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -676)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D774)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00253DDC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00253DCD: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(eax);
    ecx = ecx | 1;
    MEM32(eax) = ecx;
    goto loc_00253DE9;

loc_00253DDC: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax) = ecx;

loc_00253DE9: ;
    eax = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00253E0B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00253DFC: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(eax);
    ecx = ecx | 2;
    MEM32(eax) = ecx;
    goto loc_00253E18;

loc_00253E0B: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax) = ecx;

loc_00253E18: ;
    eax = MEM32(ebp + -144);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00253E3A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00253E2B: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(eax);
    ecx = ecx | 8;
    MEM32(eax) = ecx;
    goto loc_00253E47;

loc_00253E3A: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax) = ecx;

loc_00253E47: ;
    eax = MEM32(ebp + -144);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -122);
    eax = eax + ecx;
    MEM16(ebp + -122) = LO16(eax);
    eax = MEM32(ebp + -144);
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -124);
    eax = eax + ecx;
    MEM16(ebp + -124) = LO16(eax);
    eax = MEM32(ebp + -144);
    eax = MEM32(eax);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -126);
    eax = eax + ecx;
    MEM16(ebp + -126) = LO16(eax);
    eax = MEM32(ebp + -144);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(ebp + -128);
    eax = eax + ecx;
    MEM16(ebp + -128) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + -148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002541A9; /* je: equal / zero */

loc_00253ED4: ;
    eax = MEM32(ebp + -148);
    eax = MEM32(eax + 0x20);
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253F46; /* je: equal / zero */

loc_00253EE5: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = ebp + -340;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253F19u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253F19: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -144);
    eax = eax + 0x10C;
    ecx = ebp + -340;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253F46u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00253F46: ;
    eax = MEM32(ebp + -148);
    eax = MEM32(eax + 0x20);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002541A7; /* je: equal / zero */

loc_00253F5B: ;
    eax = MEM32(ebp + -140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + -148);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x2C); /* addss */
    MEMF(ebp + -344) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -144);
    ecx = MEM32(eax + 4);
    MEM32(ebp + -356) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -352) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -348) = eax;
    ecx = MEM32(0x59CA70);
    xmm0 = XMM_SCALAR(MEMF(ebp + -344)); /* movss */
    eax = ebp + -368;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253FC0u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00253FC0: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -356;
    edx = ebp + -368;
    eax = ebp + -448;
    MEM32(esp) = 0xC0A0;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00253FF1u); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_00253FF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002541A5; /* je: equal / zero */

loc_00253FF9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -344)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -428); /* mulss */
    eax = MEM32(ebp + -140);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x68); /* subss */
    MEMF(ebp + -452) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -144);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    eax = MEM32(ebp + -148);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + -148);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254053u); RECOMP_ABI_CALL(0x0024F550u, sub_0024F550); /* call 0x0024F550 */

loc_00254053: ;
    MEMF(ebp + -680) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -680)); /* movss */
    MEMF(ebp + -456) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -452); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00254087; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + -452)) */

loc_00254075: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -712) = xmm0.f[0]; /* movss */
    goto loc_002540AE;

loc_00254087: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -452)); /* movss */
    eax = MEM32(ebp + -148);
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0x2C); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -712) = xmm0.f[0]; /* movss */

loc_002540AE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -712)); /* movss */
    MEMF(ebp + -460) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -460)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -460); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F40); /* mulss */
    MEMF(ebp + -716) = xmm0.f[0]; /* movss */
    ecx = ebp + -448;
    ecx = ecx + 0x24;
    eax = MEM32(ebp + -144);
    eax = eax + 0x48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002540FCu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002540FC: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -716)); /* movss */
    MEMF(ebp + -684) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -684)); /* movss */
    eax = MEM32(ebp + -148);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + -152);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    eax = MEM32(ebp + -148);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -456); /* mulss */
    MEMF(ebp + -464) = xmm0.f[0]; /* movss */
    ecx = ebp + -448;
    ecx = ecx + 0x24;
    xmm0 = XMM_SCALAR(MEMF(ebp + -464)); /* movss */
    eax = ebp + -476;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254178u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00254178: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x10C;
    eax = MEM32(ebp + -144);
    eax = eax + 0x10C;
    ecx = ebp + -476;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002541A5u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002541A5: ;
    goto loc_002541A7;

loc_002541A7: ;
    goto loc_002541A9;

loc_002541A9: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x84;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x90;
    eax = MEM32(ebp + -144);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002541DCu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002541DC: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0xB8;
    eax = MEM32(ebp + -144);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025420Fu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_0025420F: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0xC4;
    eax = MEM32(ebp + -144);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254242u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00254242: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0xE8;
    eax = MEM32(ebp + -144);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254275u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00254275: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x118;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x10C;
    eax = MEM32(ebp + -144);
    eax = eax + 0x118;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002542A8u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002542A8: ;
    edx = MEM32(ebp + -144);
    edx = edx + 0x3C;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x118;
    eax = MEM32(ebp + -144);
    eax = eax + 0x124;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002542D8u); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_002542D8: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x118;
    eax = ebp + -84;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002542F7u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002542F7: ;
    ecx = MEM32(ebp + -144);
    ecx = ecx + 0x124;
    eax = ebp + -96;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254316u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00254316: ;
    SET_LO16(eax, MEM16(ebp + -130));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -130) = LO16(eax);
    goto loc_00252EAE;

loc_0025432D: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00254341; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0025433D: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00254341; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0025433F: ;
    goto loc_00254369;

loc_00254341: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 8); /* divss */
    ecx = ebp + -84;
    eax = ebp + -108;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254369u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00254369: ;
    eax = MEM32(ebp + -96);
    MEM32(ebp + -488) = eax;
    eax = MEM32(ebp + -92);
    MEM32(ebp + -484) = eax;
    eax = MEM32(ebp + -88);
    MEM32(ebp + -480) = eax;
    eax = ebp + -488;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254392u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_00254392: ;
    MEMF(ebp + -572) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -572)); /* movss */
    MEMF(ebp + -492) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -492)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_002543BF; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_002543B8: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_002543BF; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_002543BA: ;
    goto loc_00254562;

loc_002543BF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -496) = xmm0.f[0]; /* movss */
    MEM16(ebp + -130) = 0;

loc_002543D3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -130);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00254524; /* jge: greater or equal (signed >=) */

loc_002543E6: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -130);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254407u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00254407: ;
    MEM32(ebp + -500) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -130);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x130);
    eax = eax + ecx;
    MEM32(ebp + -504) = eax;
    ecx = MEM32(ebp + -504);
    ecx = ecx + 0x3C;
    eax = ebp + -488;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254440u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00254440: ;
    MEMF(ebp + -620) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -620)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -508) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -508)); /* movss */
    ecx = ebp + -488;
    eax = ebp + -520;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254489u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00254489: ;
    ecx = MEM32(ebp + -504);
    ecx = ecx + 0x3C;
    eax = ebp + -520;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002544A8u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002544A8: ;
    eax = ebp + -520;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002544B6u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_002544B6: ;
    MEMF(ebp + -616) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -616)); /* movss */
    eax = MEM32(ebp + -500);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + -500);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x68); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x43DE34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + -500);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -496); /* addss */
    MEMF(ebp + -496) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + -130));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -130) = LO16(eax);
    goto loc_002543D3;

loc_00254524: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -496)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00254538; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00254534: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00254538; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00254536: ;
    goto loc_00254560;

loc_00254538: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -496); /* divss */
    ecx = ebp + -96;
    eax = ebp + -120;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254560u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00254560: ;
    goto loc_00254562;

loc_00254562: ;
    eax = ebp + -108;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025456Du); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_0025456D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002545F0; /* jne: not equal / not zero */

loc_00254571: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -108)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x4496EB;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002545C0u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_002545C0: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x603;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002545E4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002545E4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002545F0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002545F0: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x14;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x14;
    ecx = ebp + -108;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254615u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00254615: ;
    eax = ebp + -120;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254620u); RECOMP_ABI_CALL(0x002523B0u, sub_002523B0); /* call 0x002523B0 */

loc_00254620: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002546A3; /* jne: not equal / not zero */

loc_00254624: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -120)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x465C1D;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254673u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00254673: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x607;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254697u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00254697: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002546A3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002546A3: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x38;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x38;
    ecx = ebp + -120;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002546C8u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_002546C8: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(ebp + -532) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(ebp + -528) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(ebp + -524) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x44;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 8;
    esi = ebp + -540;
    eax = ebp + -532;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254742u); RECOMP_ABI_CALL(0x00333320u, sub_00333320); /* call 0x00333320 */

loc_00254742: ;
    edx = MEM32(ebp + 8);
    ecx = ebp + -532;
    eax = ebp + -540;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254761u); RECOMP_ABI_CALL(0x0022AB70u, sub_0022AB70); /* call 0x0022AB70 */

loc_00254761: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x3C);
    MEM32(ebp + -552) = ecx;
    ecx = MEM32(eax + 0x40);
    MEM32(ebp + -548) = ecx;
    eax = MEM32(eax + 0x44);
    MEM32(ebp + -544) = eax;
    eax = ebp + -552;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025478Du); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_0025478D: ;
    MEMF(ebp + -576) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -576)); /* movss */
    MEMF(ebp + -556) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -556)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_002547BA; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_002547B3: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_002547BA; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_002547B5: ;
    goto loc_0025494E;

loc_002547BA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -556)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002547CCu); RECOMP_ABI_CALL(0x00255080u, sub_00255080); /* call 0x00255080 */

loc_002547CC: ;
    MEMF(ebp + -596) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -596)); /* movss */
    MEMF(ebp + -560) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -556)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002547F4u); RECOMP_ABI_CALL(0x002550C0u, sub_002550C0); /* call 0x002550C0 */

loc_002547F4: ;
    MEMF(ebp + -592) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -592)); /* movss */
    MEMF(ebp + -564) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    xmm1 = XMM_SCALAR(MEMF(ebp + -560)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -564)); /* movss */
    eax = ebp + -552;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254841u); RECOMP_ABI_CALL(0x001D58A0u, sub_001D58A0); /* call 0x001D58A0 */

loc_00254841: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 0x2C;
    xmm1 = XMM_SCALAR(MEMF(ebp + -560)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -564)); /* movss */
    eax = ebp + -552;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254878u); RECOMP_ABI_CALL(0x001D58A0u, sub_001D58A0); /* call 0x001D58A0 */

loc_00254878: ;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254889u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_00254889: ;
    MEMF(ebp + -588) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -588)); /* movss */
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 0x2C;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002548B5u); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_002548B5: ;
    MEMF(ebp + -584) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -584)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -568) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -568)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -568)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -568)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x2C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254940u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_00254940: ;
    MEMF(ebp + -580) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -580)); /* movss */

loc_0025494E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -122);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254A2E; /* jne: not equal / not zero */

loc_0025495E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254A2E; /* jl: less (signed <) */

loc_0025496B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -126);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254A2E; /* jne: not equal / not zero */

loc_00254978: ;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254989u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_00254989: ;
    MEMF(ebp + -600) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -600)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D774)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00254A2E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002549A8: ;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x38;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002549B9u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_002549B9: ;
    MEMF(ebp + -604) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -604)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DD0C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00254A2E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002549D4: ;
    eax = ebp + -108;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002549DFu); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_002549DF: ;
    MEMF(ebp + -608) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -608)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA04)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00254A2E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002549FA: ;
    eax = ebp + -120;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254A05u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_00254A05: ;
    MEMF(ebp + -612) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -612)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DA9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00254A2E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00254A20: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x20;
    MEM32(eax + 4) = ecx;
    goto loc_00254A3A;

loc_00254A2E: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(eax + 4) = ecx;

loc_00254A3A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254A51; /* jle: less or equal (signed <=) */

loc_00254A43: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx | 2;
    MEM32(eax + 4) = ecx;
    goto loc_00254A5D;

loc_00254A51: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 4) = ecx;

loc_00254A5D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254A74; /* jle: less or equal (signed <=) */

loc_00254A66: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx | 4;
    MEM32(eax + 4) = ecx;
    goto loc_00254A80;

loc_00254A74: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 4) = ecx;

loc_00254A80: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254A97; /* jle: less or equal (signed <=) */

loc_00254A89: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx | 8;
    MEM32(eax + 4) = ecx;
    goto loc_00254AA3;

loc_00254A97: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax + 4) = ecx;

loc_00254AA3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -128);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254ABD; /* jne: not equal / not zero */

loc_00254AAF: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x10;
    MEM32(eax + 4) = ecx;
    goto loc_00254AC9;

loc_00254ABD: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFEFu;
    MEM32(eax + 4) = ecx;

loc_00254AC9: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -8);
    eax = eax + 4;
    eax = eax + 0x2C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254AE7u); RECOMP_ABI_CALL(0x00255100u, sub_00255100); /* call 0x00255100 */

loc_00254AE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254BB7; /* jne: not equal / not zero */

loc_00254AEF: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    esi = 0x8BEAC0;
    edx = 0x46468F;
    ecx = 0x4884C5;
    eax = 0x449707;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEMD(esp + 0x10) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x28) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x30) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254B87u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00254B87: ;
    ecx = eax;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x63B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254BABu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00254BAB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254BB7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00254BB7: ;
    esp = esp + 0x314;
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
 * sub_00254BC0
 * Original: 0x00254BC0 - 0x00254E49 (649 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254BC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00254BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20C4));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x20C4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254BDFu); RECOMP_ABI_CALL(0x00248580u, sub_00248580); /* call 0x00248580 */

loc_00254BDF: ;
    MEM8(ebp + -8273) = LO8(eax);
    eax = MEM32(ebp + 8);
    ecx = ebp + -80;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254BF7u); RECOMP_ABI_CALL(0x0024F920u, sub_0024F920); /* call 0x0024F920 */

loc_00254BF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00254C00; /* jne: not equal / not zero */

loc_00254BFB: ;
    goto loc_00254E40;

loc_00254C00: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254C13u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00254C13: ;
    MEM32(ebp + -8280) = eax;
    ecx = ZX8(MEM8(ebp + -8273));
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) esi = eax; /* cmovne */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    edx = MEM32(ebp + -8280);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x44)) >> 32) & 1);
    edx = edx + 0x44;
    ecx = MEM32(ebp + -8280);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C)) >> 32) & 1);
    ecx = ecx + 0x4C;
    eax = MEM32(ebp + -8280);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    eax = ebp + -8272;
    MEM32(esp) = 1;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x800;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254C83u); RECOMP_ABI_CALL(0x00226A00u, sub_00226A00); /* call 0x00226A00 */

loc_00254C83: ;
    MEM16(ebp + -8282) = LO16(eax);
    MEM16(ebp + -8284) = 0;

loc_00254C93: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8284);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -8282);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00254E3E; /* jge: greater or equal (signed >=) */

loc_00254CA9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8284);
    eax = MEM32(ebp + eax * 4 + -8272);
    MEM32(ebp + -8288) = eax;
    ecx = MEM32(0x838F8C);
    edx = MEM32(ebp + -8288);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254CD5u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00254CD5: ;
    MEM32(ebp + -8292) = eax;
    eax = MEM32(ebp + -8292);
    eax = ZX8(MEM8(eax + 3));
    MEM32(ebp + -8364) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00254D05; /* je: equal / zero */

loc_00254CEF: ;
    goto loc_00254CF1;

loc_00254CF1: ;
    eax = MEM32(ebp + -8364);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_00254D8D; /* je: equal / zero */

loc_00254D00: ;
    goto loc_00254E23;

loc_00254D05: ;
    eax = MEM32(ebp + -8288);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254D1Bu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00254D1B: ;
    MEM32(ebp + -8296) = eax;
    _fa = (uint32_t)(MEM8(ebp + -8273)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -8273), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00254D5E; /* jne: not equal / not zero */

loc_00254D2A: ;
    ecx = 0x476D5F;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x29D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254D52u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00254D52: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254D5Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00254D5E: ;
    eax = MEM32(ebp + -8296);
    eax = ZX16(MEM16(eax + 0xB6));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00254D88; /* jne: not equal / not zero */

loc_00254D73: ;
    eax = MEM32(ebp + -8288);
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254D88u); RECOMP_ABI_CALL(0x002552A0u, sub_002552A0); /* call 0x002552A0 */

loc_00254D88: ;
    goto loc_00254E25;

loc_00254D8D: ;
    eax = MEM32(ebp + -8288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00254E21; /* je: equal / zero */

loc_00254D9C: ;
    eax = MEM32(ebp + -8288);
    ecx = ebp + -8356;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254DB4u); RECOMP_ABI_CALL(0x0024F920u, sub_0024F920); /* call 0x0024F920 */

loc_00254DB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00254E1F; /* je: equal / zero */

loc_00254DB8: ;
    ecx = MEM32(ebp + -8288);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254DCEu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00254DCE: ;
    MEM32(ebp + -8360) = eax;
    eax = ZX16(MEM16(ebp + -8288));
    ecx = ZX16(MEM16(ebp + 8));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_00254E08; /* jb: below (unsigned <) */

loc_00254DE3: ;
    goto loc_00254DE5;

loc_00254DE5: ;
    eax = MEM32(ebp + -8360);
    eax = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00254E08; /* jne: not equal / not zero */

loc_00254DF6: ;
    eax = MEM32(ebp + -8352);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00254E1D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00254E08: ;
    ecx = ebp + -80;
    eax = ebp + -8356;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254E1Du); RECOMP_ABI_CALL(0x00255A90u, sub_00255A90); /* call 0x00255A90 */

loc_00254E1D: ;
    goto loc_00254E1F;

loc_00254E1F: ;
    goto loc_00254E21;

loc_00254E21: ;
    goto loc_00254E25;

loc_00254E23: ;
    goto loc_00254E25;

loc_00254E25: ;
    goto loc_00254E27;

loc_00254E27: ;
    SET_LO16(eax, MEM16(ebp + -8284));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -8284) = LO16(eax);
    goto loc_00254C93;

loc_00254E3E: ;
    goto loc_00254E40;

loc_00254E40: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20C4)) >> 32) & 1);
    esp = esp + 0x20C4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00254E50
 * Original: 0x00254E50 - 0x00254E8E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E50(void)
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

loc_00254E50: ;
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
    PUSH32(esp, 0x00254E75u); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_00254E75: ;
    ecx = eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254E80u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_00254E80: ;
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
 * sub_00254E90
 * Original: 0x00254E90 - 0x00254ECF (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E90(void)
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

loc_00254E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254EAEu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_00254EAE: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
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
 * sub_00254ED0
 * Original: 0x00254ED0 - 0x00254FA0 (208 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254ED0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254F91; /* je: equal / zero */

loc_00254EEA: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254F62; /* je: equal / zero */

loc_00254EF0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254F03u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00254F03: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = 0x6F626A65;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254F1Bu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00254F1B: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x7C);
    MEM32(esp) = 0x636F6C6C;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254F34u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00254F34: ;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x234;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254F58u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00254F58: ;
    SET_LO16(eax, MEM16(eax + 0x24));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00254F97;

loc_00254F62: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254F67u); RECOMP_ABI_CALL(0x003326D0u, sub_003326D0); /* call 0x003326D0 */

loc_00254F67: ;
    ecx = eax;
    ecx = ecx + 0xA4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254F87u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00254F87: ;
    SET_LO16(eax, MEM16(eax + 0x12));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_00254F97;

loc_00254F91: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_00254F97: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00254FA0
 * Original: 0x00254FA0 - 0x00254FC7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254FA0(void)
{
    uint32_t ebp = g_ebp;

loc_00254FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x838F8C);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00254FBEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_00254FBE: ;
    eax = ZX8(MEM8(eax + 3));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00254FD0
 * Original: 0x00254FD0 - 0x00254FEF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254FD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254FD0: ;
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
 * sub_00254FF0
 * Original: 0x00254FF0 - 0x0025507B (139 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254FF0(void)
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

loc_00254FF0: ;
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
    PUSH32(esp, 0x00255004u); RECOMP_ABI_CALL(0x00255190u, sub_00255190); /* call 0x00255190 */

loc_00255004: ;
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
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00255061; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025503A: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -4); /* divss */
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025505Fu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_0025505F: ;
    goto loc_00255069;

loc_00255061: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_00255069: ;
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
 * sub_00255080
 * Original: 0x00255080 - 0x002550B4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255080(void)
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

loc_00255080: ;
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
    PUSH32(esp, 0x0025509Fu); RECOMP_ABI_CALL(0x003DA050u, sub_003DA050); /* call 0x003DA050 */

loc_0025509F: ;
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
 * sub_002550C0
 * Original: 0x002550C0 - 0x002550F4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002550C0(void)
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

loc_002550C0: ;
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
    PUSH32(esp, 0x002550DFu); RECOMP_ABI_CALL(0x003D7580u, sub_003D7580); /* call 0x003D7580 */

loc_002550DF: ;
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
 * sub_00255100
 * Original: 0x00255100 - 0x00255182 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255100(void)
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

loc_00255100: ;
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
    PUSH32(esp, 0x00255117u); RECOMP_ABI_CALL(0x002551F0u, sub_002551F0); /* call 0x002551F0 */

loc_00255117: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00255175; /* je: equal / zero */

loc_00255124: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025512Fu); RECOMP_ABI_CALL(0x002551F0u, sub_002551F0); /* call 0x002551F0 */

loc_0025512F: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00255175; /* je: equal / zero */

loc_0025513C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025514Eu); RECOMP_ABI_CALL(0x002514B0u, sub_002514B0); /* call 0x002514B0 */

loc_0025514E: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255169u); RECOMP_ABI_CALL(0x00255230u, sub_00255230); /* call 0x00255230 */

loc_00255169: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_00255175: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
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
 * sub_00255190
 * Original: 0x00255190 - 0x002551BB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255190(void)
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

loc_00255190: ;
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
    PUSH32(esp, 0x002551A5u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_002551A5: ;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002551AEu); RECOMP_ABI_CALL(0x002551C0u, sub_002551C0); /* call 0x002551C0 */

loc_002551AE: ;
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
 * sub_002551C0
 * Original: 0x002551C0 - 0x002551E7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002551C0(void)
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

loc_002551C0: ;
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
 * sub_002551F0
 * Original: 0x002551F0 - 0x00255229 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002551F0(void)
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

loc_002551F0: ;
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
    PUSH32(esp, 0x00255204u); RECOMP_ABI_CALL(0x00251710u, sub_00251710); /* call 0x00251710 */

loc_00255204: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255224u); RECOMP_ABI_CALL(0x00255230u, sub_00255230); /* call 0x00255230 */

loc_00255224: ;
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
 * sub_00255230
 * Original: 0x00255230 - 0x0025529E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255230(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00255230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xC); /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025525Eu); RECOMP_ABI_CALL(0x00254FD0u, sub_00254FD0); /* call 0x00254FD0 */

loc_0025525E: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00255291; /* je: equal / zero */

loc_0025526B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43DF60)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    MEM8(ebp + -5) = LO8(eax);

loc_00255291: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002552A0
 * Original: 0x002552A0 - 0x00255A8A (2026 bytes, 408 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002552A0(void)
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

loc_002552A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0xAD84;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -5) = 0;
    esi = MEM32(ebp + 0xC);
    edx = ebp + -20;
    ecx = ebp + -24;
    eax = ebp + -28;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002552D4u); RECOMP_ABI_CALL(0x003644C0u, sub_003644C0); /* call 0x003644C0 */

loc_002552D4: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002552E6u); RECOMP_ABI_CALL(0x00248780u, sub_00248780); /* call 0x00248780 */

loc_002552E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002552F3; /* je: equal / zero */

loc_002552EA: ;
    MEM8(ebp + -5) = 1;
    goto loc_00255425;

loc_002552F3: ;
    eax = ebp + -44068;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255301u); RECOMP_ABI_CALL(0x00244990u, sub_00244990); /* call 0x00244990 */

loc_00255301: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + -24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = ebp + -44124;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255341u); RECOMP_ABI_CALL(0x0024FB80u, sub_0024FB80); /* call 0x0024FB80 */

loc_00255341: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -28); /* addss */
    MEMF(ebp + -44128) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DCFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43DCFC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00255394; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00255379: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DCFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -44380) = xmm0.f[0]; /* movss */
    goto loc_002553A6;

loc_00255394: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DCFC)); /* movss */
    MEMF(ebp + -44380) = xmm0.f[0]; /* movss */
    goto loc_002553A6;

loc_002553A6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44380)); /* movss */
    MEMF(ebp + -44132) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(ebp + -44128)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44132)); /* movss */
    ecx = ebp + -44124;
    eax = ebp + -44068;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002553FCu); RECOMP_ABI_CALL(0x00248D50u, sub_00248D50); /* call 0x00248D50 */

loc_002553FC: ;
    edx = ebp + -44068;
    ecx = ebp + -20;
    eax = ebp + -44112;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025541Bu); RECOMP_ABI_CALL(0x002461B0u, sub_002461B0); /* call 0x002461B0 */

loc_0025541B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255423; /* je: equal / zero */

loc_0025541F: ;
    MEM8(ebp + -5) = 1;

loc_00255423: ;
    goto loc_00255425;

loc_00255425: ;
    _fa = (uint32_t)(MEM8(ebp + -5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -5), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255A7E; /* je: equal / zero */

loc_0025542F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255444u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00255444: ;
    MEM32(ebp + -44136) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025545Du); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_0025545D: ;
    MEM32(ebp + -44140) = eax;
    eax = MEM32(ebp + -44136);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255477u); RECOMP_ABI_CALL(0x00255190u, sub_00255190); /* call 0x00255190 */

loc_00255477: ;
    MEMF(ebp + -44368) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44368)); /* movss */
    MEMF(ebp + -44144) = xmm0.f[0]; /* movss */
    MEM8(ebp + -44169) = 1;
    edx = MEM32(ebp + -44136);
    edx = edx + 4;
    edx = edx + 0x4C;
    ecx = MEM32(ebp + -44140);
    ecx = ecx + 4;
    ecx = ecx + 0x4C;
    eax = ebp + -44156;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002554C2u); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_002554C2: ;
    eax = ebp + -44156;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002554D0u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_002554D0: ;
    MEMF(ebp + -44364) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44364)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D80C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -44148); /* addss */
    MEMF(ebp + -44148) = xmm0.f[0]; /* movss */
    eax = ebp + -44156;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255504u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_00255504: ;
    MEMF(ebp + -44360) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44360)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44144)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DC98)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00255539; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00255527: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44144)); /* movss */
    MEMF(ebp + -44384) = xmm0.f[0]; /* movss */
    goto loc_0025554B;

loc_00255539: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DC98)); /* movss */
    MEMF(ebp + -44384) = xmm0.f[0]; /* movss */
    goto loc_0025554B;

loc_0025554B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44384)); /* movss */
    eax = ebp + -44156;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025556Bu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_0025556B: ;
    ecx = MEM32(ebp + -44136);
    ecx = ecx + 4;
    ecx = ecx + 0x14;
    eax = ebp + -44156;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025558Du); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_0025558D: ;
    eax = ebp + -44156;
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002555ADu); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_002555AD: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -44156;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002555C2u); RECOMP_ABI_CALL(0x00366940u, sub_00366940); /* call 0x00366940 */

loc_002555C2: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -44156); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -20); /* addss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -44152); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -16); /* addss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -44148); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -12); /* addss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + -28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    ecx = MEM32(ebp + 0xC);
    edx = ebp + -20;
    eax = ebp + -44168;
    MEM32(esp) = 0x20C3A0;
    MEM32(esp + 4) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025565Du); RECOMP_ABI_CALL(0x0024C970u, sub_0024C970); /* call 0x0024C970 */

loc_0025565D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255752; /* je: equal / zero */

loc_00255665: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44160)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -44160) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -44168;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025569Du); RECOMP_ABI_CALL(0x0022AB70u, sub_0022AB70); /* call 0x0022AB70 */

loc_0025569D: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -44140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2DC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002556D2; /* jne: not equal / not zero */

loc_002556B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002556B5u); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_002556B5: ;
    ecx = eax;
    eax = MEM32(ebp + -44140);
    edx = MEM32(eax + 0x2E0);
    edx = edx + 0x5A;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(ebp + -44385) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_00255741; /* jle: less or equal (signed <=) */

loc_002556D2: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44144)); /* movss */
    SET_LO8(eax, 1);
    xmm1 = XMM_SCALAR(MEMF(0x43D8A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEM8(ebp + -44386) = LO8(eax);
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00255735; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_002556EF: ;
    ecx = MEM32(ebp + -44136);
    ecx = ecx + 4;
    ecx = ecx + 0x14;
    eax = MEM32(ebp + -44140);
    eax = eax + 4;
    eax = eax + 0x14;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255713u); RECOMP_ABI_CALL(0x00254E50u, sub_00254E50); /* call 0x00254E50 */

loc_00255713: ;
    MEMF(ebp + -44372) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44372)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D774)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    MEM8(ebp + -44386) = LO8(eax);

loc_00255735: ;
    SET_LO8(eax, MEM8(ebp + -44386));
    MEM8(ebp + -44385) = LO8(eax);

loc_00255741: ;
    SET_LO8(eax, MEM8(ebp + -44385));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -44169) = LO8(eax);

loc_00255752: ;
    _fa = (uint32_t)(MEM8(ebp + -44169)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -44169), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255A7C; /* je: equal / zero */

loc_0025575F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255764u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_00255764: ;
    eax = eax + 0x188;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255783u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00255783: ;
    MEM32(ebp + -44176) = eax;
    eax = MEM32(ebp + -44176);
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255938; /* je: equal / zero */

loc_00255799: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -44180) = eax;
    eax = MEM32(ebp + -44136);
    MEM32(ebp + -44184) = eax;
    eax = MEM32(ebp + -44136);
    _fa = (uint32_t)(MEM32(eax + 0x2D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002557ED; /* je: equal / zero */

loc_002557BF: ;
    eax = MEM32(ebp + -44136);
    eax = MEM32(eax + 0x2D4);
    MEM32(ebp + -44180) = eax;
    eax = MEM32(ebp + -44180);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002557E7u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_002557E7: ;
    MEM32(ebp + -44184) = eax;

loc_002557ED: ;
    eax = MEM32(ebp + -44176);
    eax = MEM32(eax + 0x68);
    ecx = ebp + -44268;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255808u); RECOMP_ABI_CALL(0x002158E0u, sub_002158E0); /* call 0x002158E0 */

loc_00255808: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -44204) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -44264);
    eax = eax | 1;
    MEM32(ebp + -44264) = eax;
    eax = MEM32(ebp + -44184);
    eax = MEM32(eax + 0x70);
    MEM32(ebp + -44260) = eax;
    eax = MEM32(ebp + -44184);
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255853; /* je: equal / zero */

loc_00255842: ;
    eax = MEM32(ebp + -44184);
    eax = MEM32(eax + 0x74);
    MEM32(ebp + -44392) = eax;
    goto loc_0025585F;

loc_00255853: ;
    eax = MEM32(ebp + -44180);
    MEM32(ebp + -44392) = eax;

loc_0025585F: ;
    eax = MEM32(ebp + -44392);
    MEM32(ebp + -44256) = eax;
    eax = MEM32(ebp + -44184);
    SET_LO16(eax, MEM16(eax + 0x68));
    MEM16(ebp + -44252) = LO16(eax);
    eax = MEM32(ebp + -44140);
    ecx = MEM32(eax + 0x50);
    MEM32(ebp + -44240) = ecx;
    ecx = MEM32(eax + 0x54);
    MEM32(ebp + -44236) = ecx;
    eax = MEM32(eax + 0x58);
    MEM32(ebp + -44232) = eax;
    eax = MEM32(ebp + -44136);
    ecx = MEM32(eax + 0x50);
    MEM32(ebp + -44228) = ecx;
    ecx = MEM32(eax + 0x54);
    MEM32(ebp + -44224) = ecx;
    eax = MEM32(eax + 0x58);
    MEM32(ebp + -44220) = eax;
    eax = MEM32(ebp + -44156);
    MEM32(ebp + -44216) = eax;
    eax = MEM32(ebp + -44152);
    MEM32(ebp + -44212) = eax;
    eax = MEM32(ebp + -44148);
    MEM32(ebp + -44208) = eax;
    eax = ebp + -44268;
    eax = eax + 0x34;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002558F3u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_002558F3: ;
    MEMF(ebp + -44376) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44376)); /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -44268;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255938u); RECOMP_ABI_CALL(0x00216400u, sub_00216400); /* call 0x00216400 */

loc_00255938: ;
    eax = MEM32(ebp + -44176);
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255A7A; /* je: equal / zero */

loc_00255948: ;
    eax = MEM32(ebp + -44140);
    eax = MEM32(eax);
    MEM32(esp) = 0x756E6974;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255960u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_00255960: ;
    MEM32(ebp + -44272) = eax;
    eax = MEM32(ebp + -44176);
    eax = MEM32(eax + 0x58);
    ecx = ebp + -44356;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255981u); RECOMP_ABI_CALL(0x002158E0u, sub_002158E0); /* call 0x002158E0 */

loc_00255981: ;
    eax = MEM32(ebp + -44272);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002559A5; /* jl: less (signed <) */

loc_00255993: ;
    eax = MEM32(ebp + -44272);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002559D9; /* jb: below (unsigned <) */

loc_002559A5: ;
    ecx = 0x485651;
    eax = 0x4715B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x33E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002559CDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002559CD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002559D9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002559D9: ;
    eax = MEM32(ebp + -44272);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x298);
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0x5A1F60)); /* movss */
    MEMF(ebp + -44292) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -44140);
    ecx = MEM32(eax + 0x50);
    MEM32(ebp + -44328) = ecx;
    ecx = MEM32(eax + 0x54);
    MEM32(ebp + -44324) = ecx;
    eax = MEM32(eax + 0x58);
    MEM32(ebp + -44320) = eax;
    eax = ebp + -44356;
    eax = eax + 0x34;
    ecx = ebp + -44156;
    xmm0 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255A41u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00255A41: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = ebp + -44356;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255A7Au); RECOMP_ABI_CALL(0x00216400u, sub_00216400); /* call 0x00216400 */

loc_00255A7A: ;
    goto loc_00255A7C;

loc_00255A7C: ;
    goto loc_00255A7E;

loc_00255A7E: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0xAD84;
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
 * sub_00255A90
 * Original: 0x00255A90 - 0x00255F86 (1270 bytes, 306 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A90(void)
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

loc_00255A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xF8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255AB8u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00255AB8: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255AD0u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_00255AD0: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255AF3u); RECOMP_ABI_CALL(0x002551C0u, sub_002551C0); /* call 0x002551C0 */

loc_00255AF3: ;
    MEMF(ebp + -220) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -220)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    eax = ebp + -28;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255B26u); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_00255B26: ;
    eax = ebp + -40;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255B46u); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_00255B46: ;
    eax = ebp + -52;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255B66u); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_00255B66: ;
    eax = ebp + -64;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255B86u); RECOMP_ABI_CALL(0x00251170u, sub_00251170); /* call 0x00251170 */

loc_00255B86: ;
    MEM16(ebp + -66) = 0;

loc_00255B8C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -66);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00255E91; /* jge: greater or equal (signed >=) */

loc_00255B9F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -66);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255BC0u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00255BC0: ;
    MEM32(ebp + -72) = eax;
    edx = MEM32(ebp + 8);
    edx = edx + 8;
    ecx = MEM32(ebp + -72);
    ecx = ecx + 0x38;
    eax = ebp + -84;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255BE2u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_00255BE2: ;
    MEM16(ebp + -86) = 0;

loc_00255BE8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -86);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00255E7E; /* jge: greater or equal (signed >=) */

loc_00255BFB: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -86);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255C1Cu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_00255C1C: ;
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + -92);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x68); /* addss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0xC);
    edx = edx + 8;
    ecx = MEM32(ebp + -92);
    ecx = ecx + 0x38;
    eax = ebp + -108;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255C53u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_00255C53: ;
    edx = ebp + -84;
    ecx = ebp + -108;
    eax = ebp + -120;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255C6Cu); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_00255C6C: ;
    eax = ebp + -120;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255C77u); RECOMP_ABI_CALL(0x00254FF0u, sub_00254FF0); /* call 0x00254FF0 */

loc_00255C77: ;
    MEMF(ebp + -224) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -224)); /* movss */
    MEMF(ebp + -124) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -124)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -96)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00255E6B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00255C9D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -124)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00255E6B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00255CAE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -96)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -124); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -128) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -16); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F40); /* mulss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x5A1F4C); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -128); /* mulss */
    MEMF(ebp + -132) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    ecx = ebp + -120;
    eax = ebp + -144;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255D23u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00255D23: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    ecx = ebp + -120;
    eax = ebp + -156;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255D46u); RECOMP_ABI_CALL(0x00251500u, sub_00251500); /* call 0x00251500 */

loc_00255D46: ;
    eax = MEM32(ebp + -72);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -128); /* subss */
    edx = ebp + -84;
    ecx = ebp + -120;
    eax = ebp + -168;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255D75u); RECOMP_ABI_CALL(0x00255F90u, sub_00255F90); /* call 0x00255F90 */

loc_00255D75: ;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 8;
    ecx = ebp + -168;
    eax = ebp + -180;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255D9Au); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_00255D9A: ;
    edx = MEM32(ebp + -12);
    edx = edx + 4;
    edx = edx + 8;
    ecx = ebp + -168;
    eax = ebp + -192;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255DBFu); RECOMP_ABI_CALL(0x002511B0u, sub_002511B0); /* call 0x002511B0 */

loc_00255DBF: ;
    edx = ebp + -180;
    ecx = ebp + -144;
    eax = ebp + -204;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255DE1u); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_00255DE1: ;
    edx = ebp + -192;
    ecx = ebp + -156;
    eax = ebp + -216;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255E03u); RECOMP_ABI_CALL(0x0024FAC0u, sub_0024FAC0); /* call 0x0024FAC0 */

loc_00255E03: ;
    eax = ebp + -28;
    ecx = ebp + -144;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255E1Cu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255E1C: ;
    eax = ebp + -40;
    ecx = ebp + -156;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255E35u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255E35: ;
    eax = ebp + -52;
    ecx = ebp + -204;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255E4Eu); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255E4E: ;
    eax = ebp + -64;
    ecx = ebp + -216;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255E67u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255E67: ;
    MEM8(ebp + -1) = 1;

loc_00255E6B: ;
    goto loc_00255E6D;

loc_00255E6D: ;
    SET_LO16(eax, MEM16(ebp + -86));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -86) = LO16(eax);
    goto loc_00255BE8;

loc_00255E7E: ;
    goto loc_00255E80;

loc_00255E80: ;
    SET_LO16(eax, MEM16(ebp + -66));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -66) = LO16(eax);
    goto loc_00255B8C;

loc_00255E91: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255F7B; /* je: equal / zero */

loc_00255E9B: ;
    edx = MEM32(ebp + -8);
    edx = edx + 0x424;
    edx = edx + 0x3C;
    eax = MEM32(ebp + -8);
    eax = eax + 0x424;
    eax = eax + 0x3C;
    ecx = ebp + -28;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255EC5u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255EC5: ;
    edx = MEM32(ebp + -8);
    edx = edx + 0x424;
    edx = edx + 0x3C;
    edx = edx + 0xC;
    eax = MEM32(ebp + -8);
    eax = eax + 0x424;
    eax = eax + 0x3C;
    eax = eax + 0xC;
    ecx = ebp + -52;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255EF5u); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255EF5: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00255F79; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00255F13: ;
    edx = MEM32(ebp + -12);
    edx = edx + 0x424;
    edx = edx + 0x3C;
    eax = MEM32(ebp + -12);
    eax = eax + 0x424;
    eax = eax + 0x3C;
    ecx = ebp + -40;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255F3Du); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255F3D: ;
    edx = MEM32(ebp + -12);
    edx = edx + 0x424;
    edx = edx + 0x3C;
    edx = edx + 0xC;
    eax = MEM32(ebp + -12);
    eax = eax + 0x424;
    eax = eax + 0x3C;
    eax = eax + 0xC;
    ecx = ebp + -64;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00255F6Du); RECOMP_ABI_CALL(0x00251210u, sub_00251210); /* call 0x00251210 */

loc_00255F6D: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(eax + 4) = ecx;

loc_00255F79: ;
    goto loc_00255F7B;

loc_00255F7B: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0xF8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_00255F90
 * Original: 0x00255F90 - 0x00255FFA (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255F90(void)
{
    uint32_t ebp = g_ebp;

loc_00255F90: ;
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
 * sub_00256000
 * Original: 0x00256000 - 0x002561FB (507 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00256000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00256122; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00256063: ;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00256093; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00256081: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_002560DA;

loc_00256093: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002560B4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002560A2: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_002560D8;

loc_002560B4: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -12); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_002560D8: ;
    goto loc_002560DA;

loc_002560DA: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00256105; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002560F2: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    goto loc_00256111;

loc_00256105: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */

loc_00256111: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_002561F6;

loc_00256122: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002561F4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_0025612F: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -12); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00256152; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + -12)) */

loc_0025613C: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_00256199;

loc_00256152: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00256173; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax)) */

loc_0025615D: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_00256197;

loc_00256173: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -12); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_00256197: ;
    goto loc_00256199;

loc_00256199: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + 8);
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002561DC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_002561BB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    goto loc_002561E8;

loc_002561DC: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */

loc_002561E8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_002561F4: ;
    goto loc_002561F6;

loc_002561F6: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00256200
 * Original: 0x00256200 - 0x002562D0 (208 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00256200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00256275; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_00256227: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    edx = xmm0.u[0]; /* movd */
    edx = edx ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(edx); /* movd to xmm */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256252u); RECOMP_ABI_CALL(0x00256000u, sub_00256000); /* call 0x00256000 */

loc_00256252: ;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00256273; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00256263: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(ebp + -1) = 1;

loc_00256273: ;
    goto loc_002562C8;

loc_00256275: ;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_002562C2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00256286: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002562A3u); RECOMP_ABI_CALL(0x00256000u, sub_00256000); /* call 0x00256000 */

loc_002562A3: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002562C0; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_002562B0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(ebp + -1) = 1;

loc_002562C0: ;
    goto loc_002562C6;

loc_002562C2: ;
    MEM8(ebp + -1) = 1;

loc_002562C6: ;
    goto loc_002562C8;

loc_002562C8: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002562D0
 * Original: 0x002562D0 - 0x00256381 (177 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002562D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002562D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00256338; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00256305: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256327; /* je: equal / zero */

loc_0025630B: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_00256336;

loc_00256327: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_00256336: ;
    goto loc_0025637F;

loc_00256338: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025637D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00256347: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025636D; /* je: equal / zero */

loc_0025634D: ;
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_0025637B;

loc_0025636D: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_0025637B: ;
    goto loc_0025637D;

loc_0025637D: ;
    goto loc_0025637F;

loc_0025637F: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00256390
 * Original: 0x00256390 - 0x0025647D (237 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256390(void)
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

loc_00256390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x10));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002563D6u); RECOMP_ABI_CALL(0x00256480u, sub_00256480); /* call 0x00256480 */

loc_002563D6: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_002563F4; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_002563F0: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_002563F4; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_002563F2: ;
    goto loc_00256465;

loc_002563F4: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(ebp + 0x10));
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x18); /* mulss */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256420u); RECOMP_ABI_CALL(0x002562D0u, sub_002562D0); /* call 0x002562D0 */

loc_00256420: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x10));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025644Du); RECOMP_ABI_CALL(0x00256480u, sub_00256480); /* call 0x00256480 */

loc_0025644D: ;
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -8); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00256463; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(ebp + -8)) */

loc_0025645B: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00256463; /* jp: parity (xmm0.f[0] vs MEMF(ebp + -8)) */

loc_0025645D: ;
    MEM8(ebp + -1) = 0;
    goto loc_00256475;

loc_00256463: ;
    goto loc_00256465;

loc_00256465: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(ebp + -1) = 1;

loc_00256475: ;
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
 * sub_00256480
 * Original: 0x00256480 - 0x00256552 (210 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256480(void)
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

loc_00256480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x10));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xC); /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_002564B9; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_002564B2: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_002564B9; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_002564B4: ;
    goto loc_00256540;

loc_002564B9: ;
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256512; /* je: equal / zero */

loc_002564C2: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.d[0] = (double)xmm1.f[0]; /* cvtss2sd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00256512; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002564FB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_00256512: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.u[0] = (!isnan(xmm0.f[0]) && !isnan(xmm1.f[0]) && (xmm0.f[0] < xmm1.f[0])) ? 0xFFFFFFFFu : 0u; /* cmpltss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_AND(xmm1, xmm3); /* andps */
    xmm0 = XMM_ANDN(xmm0, xmm2); /* andnps */
    xmm0 = XMM_OR(xmm0, xmm1); /* orps */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_00256540: ;
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
 * sub_00256560
 * Original: 0x00256560 - 0x002565C7 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256560(void)
{
    uint32_t ebp = g_ebp;

loc_00256560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    eax = eax + 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256598u); RECOMP_ABI_CALL(0x00256000u, sub_00256000); /* call 0x00256000 */

loc_00256598: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 0x14));
    esi = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002565C1u); RECOMP_ABI_CALL(0x002562D0u, sub_002562D0); /* call 0x002562D0 */

loc_002565C1: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002565D0
 * Original: 0x002565D0 - 0x002566F7 (295 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002565D0(void)
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

loc_002565D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x14));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256620u); RECOMP_ABI_CALL(0x00256480u, sub_00256480); /* call 0x00256480 */

loc_00256620: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00256641; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0025663A: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00256641; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0025663C: ;
    goto loc_002566D4;

loc_00256641: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    eax = eax + 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x1C); /* mulss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256666u); RECOMP_ABI_CALL(0x00256000u, sub_00256000); /* call 0x00256000 */

loc_00256666: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    SET_LO8(eax, MEM8(ebp + 0x14));
    esi = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025668Fu); RECOMP_ABI_CALL(0x002562D0u, sub_002562D0); /* call 0x002562D0 */

loc_0025668F: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x14));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002566BCu); RECOMP_ABI_CALL(0x00256480u, sub_00256480); /* call 0x00256480 */

loc_002566BC: ;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -16); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_002566D2; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(ebp + -16)) */

loc_002566CA: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_002566D2; /* jp: parity (xmm0.f[0] vs MEMF(ebp + -16)) */

loc_002566CC: ;
    MEM8(ebp + -5) = 0;
    goto loc_002566EE;

loc_002566D2: ;
    goto loc_002566D4;

loc_002566D4: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(ebp + -5) = 1;

loc_002566EE: ;
    SET_LO8(eax, MEM8(ebp + -5));
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
 * sub_00256A10
 * Original: 0x00256A10 - 0x00256A45 (53 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A10(void)
{
    uint32_t ebp = g_ebp;

loc_00256A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(0x43DB68)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F48); /* mulss */
    MEMF(0xBDD344) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DB68)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F44); /* mulss */
    MEMF(0xBDD348) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00256A50
 * Original: 0x00256A50 - 0x00256A55 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A50(void)
{
    uint32_t ebp = g_ebp;

loc_00256A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00256A60
 * Original: 0x00256A60 - 0x00256A92 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A60(void)
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

loc_00256A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
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
 * sub_00256AA0
 * Original: 0x00256AA0 - 0x00257478 (2520 bytes, 565 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256AA0(void)
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
loc_00256AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xE4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    eax = MEM32(ebp + 0x28);
    eax = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    SET_LO16(eax, MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256AE2u); RECOMP_ABI_CALL(0x00257480u, sub_00257480); /* call 0x00257480 */

loc_00256AE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00256B71; /* jne: not equal / not zero */

loc_00256AEA: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x487126;
    eax = 0x480D96;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256B41u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00256B41: ;
    ecx = eax;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB9;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256B65u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00256B65: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256B71u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00256B71: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256B7Cu); RECOMP_ABI_CALL(0x00257500u, sub_00257500); /* call 0x00257500 */

loc_00256B7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00256C0B; /* jne: not equal / not zero */

loc_00256B84: ;
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    edx = 0x8BEAC0;
    ecx = 0x472DB9;
    eax = 0x46E88F;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x14) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x1C) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256BDBu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_00256BDB: ;
    ecx = eax;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xBA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256BFFu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00256BFF: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256C0Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00256C0B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00256C58; /* je: equal / zero */

loc_00256C11: ;
    eax = MEM32(ebp + 0x20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256C1Cu); RECOMP_ABI_CALL(0x00257500u, sub_00257500); /* call 0x00257500 */

loc_00256C1C: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00256C58; /* jne: not equal / not zero */

loc_00256C24: ;
    ecx = 0x499651;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xBB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256C4Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00256C4C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256C58u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00256C58: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_00256C99; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00256C65: ;
    ecx = 0x482664;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xBC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256C8Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00256C8D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256C99u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00256C99: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00256CAD; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00256CA6: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00256CAD; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00256CA8: ;
    goto loc_00257446;

loc_00256CAD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x2C); /* mulss */
    MEMF(ebp + -140) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -140)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x2C); /* mulss */
    MEMF(ebp + -144) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    MEM32(ebp + -176) = 0;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00256D0C; /* je: equal / zero */

loc_00256CFB: ;
    eax = MEM32(ebp + -176);
    eax = eax | 1;
    MEM32(ebp + -176) = eax;
    goto loc_00256D1B;

loc_00256D0C: ;
    eax = MEM32(ebp + -176);
    eax = eax & 0xFFFFFFFEu;
    MEM32(ebp + -176) = eax;

loc_00256D1B: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00256D39; /* je: equal / zero */

loc_00256D28: ;
    eax = MEM32(ebp + -176);
    eax = eax | 2;
    MEM32(ebp + -176) = eax;
    goto loc_00256D48;

loc_00256D39: ;
    eax = MEM32(ebp + -176);
    eax = eax & 0xFFFFFFFDu;
    MEM32(ebp + -176) = eax;

loc_00256D48: ;
    eax = MEM32(ebp + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00256D90; /* je: equal / zero */

loc_00256D53: ;
    eax = MEM32(ebp + 8);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -177) = LO8(eax);
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -176);
    ecx = ebp + -100;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256D8Eu); RECOMP_ABI_CALL(0x00335570u, sub_00335570); /* call 0x00335570 */

loc_00256D8E: ;
    goto loc_00256DB9;

loc_00256D90: ;
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -176);
    ecx = ebp + -100;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00256DB3u); RECOMP_ABI_CALL(0x00335BA0u, sub_00335BA0); /* call 0x00335BA0 */

loc_00256DB3: ;
    MEM8(ebp + -177) = LO8(eax);

loc_00256DB9: ;
    _fa = (uint32_t)(MEM8(ebp + -177)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -177), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00256E0D; /* je: equal / zero */

loc_00256DC2: ;
    xmm0 = XMM_SCALAR(MEMF(0xBDD348)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -148); /* addss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(ebp + -152) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -140); /* mulss */
    MEMF(ebp + -156) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = eax | 2;
    MEM32(ebp + -8) = eax;
    goto loc_00256E56;

loc_00256E0D: ;
    xmm0 = XMM_SCALAR(MEMF(0xBDD344)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -148); /* addss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ebp + -152) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -140); /* mulss */
    MEMF(ebp + -156) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = eax | 1;
    MEM32(ebp + -8) = eax;

loc_00256E56: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -148)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -144); /* mulss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -148); /* divss */
    MEMF(ebp + -160) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00256E9B; /* je: equal / zero */

loc_00256E90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -152) = xmm0.f[0]; /* movss */

loc_00256E9B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00256F09; /* je: equal / zero */

loc_00256EA1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -148)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00256EB5; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00256EB1: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00256EB5; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00256EB3: ;
    goto loc_00256F09;

loc_00256EB5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -160)); /* movss */
    eax = MEM32(ebp + 0x20);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -160)); /* movss */
    eax = MEM32(ebp + 0x20);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -160)); /* movss */
    eax = MEM32(ebp + 0x20);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00256F09: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A1F40); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -152); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x30); /* mulss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -148)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00256F85; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00256F52: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00256F85; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00256F54: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -156)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.u[0] = (!isnan(xmm0.f[0]) && !isnan(xmm3.f[0]) && (xmm0.f[0] == xmm3.f[0])) ? 0xFFFFFFFFu : 0u; /* cmpeqss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_AND(xmm1, xmm3); /* andps */
    xmm0 = XMM_ANDN(xmm0, xmm2); /* andnps */
    xmm0 = XMM_OR(xmm0, xmm1); /* orps */
    MEMF(ebp + -168) = xmm0.f[0]; /* movss */
    goto loc_0025700D;

loc_00256F85: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -160)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -156); /* mulss */
    MEMF(ebp + -168) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -168); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00256FB6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -168)) */

loc_00256FA9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -184) = xmm0.f[0]; /* movss */
    goto loc_00256FFD;

loc_00256FB6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -168)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00256FDD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00256FCB: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -188) = xmm0.f[0]; /* movss */
    goto loc_00256FED;

loc_00256FDD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -168)); /* movss */
    MEMF(ebp + -188) = xmm0.f[0]; /* movss */

loc_00256FED: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -188)); /* movss */
    MEMF(ebp + -184) = xmm0.f[0]; /* movss */

loc_00256FFD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -184)); /* movss */
    MEMF(ebp + -168) = xmm0.f[0]; /* movss */

loc_0025700D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -168); /* mulss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -96)); /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -168); /* mulss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -168); /* mulss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(ebp + -172) = 1;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_002570A3; /* je: equal / zero */

loc_00257087: ;
    eax = MEM32(ebp + 8);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_002570A3; /* jne: not equal / not zero */

loc_00257092: ;
    eax = MEM32(ebp + -172);
    eax = eax | 0x40;
    MEM32(ebp + -172) = eax;
    goto loc_002570B2;

loc_002570A3: ;
    eax = MEM32(ebp + -172);
    eax = eax & 0xFFFFFFBFu;
    MEM32(ebp + -172) = eax;

loc_002570B2: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_002570DB; /* je: equal / zero */

loc_002570BF: ;
    eax = MEM32(ebp + 8);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_002570DB; /* jne: not equal / not zero */

loc_002570CA: ;
    eax = MEM32(ebp + -172);
    eax = eax | 0x20;
    MEM32(ebp + -172) = eax;
    goto loc_002570EA;

loc_002570DB: ;
    eax = MEM32(ebp + -172);
    eax = eax & 0xFFFFFFDFu;
    MEM32(ebp + -172) = eax;

loc_002570EA: ;
    eax = (uint32_t)(int32_t)SMEM16(0xBDD31E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_0025712A; /* jl: less (signed <) */

loc_002570F6: ;
    ecx = 0x44D350;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x10D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025711Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025711E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025712Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025712A: ;
    SET_LO16(eax, MEM16(0xBDD31E));
    SET_LO16(ecx, LO16(eax));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(0xBDD31E) = LO16(ecx);
    eax = SX16(eax); /* cwde */
    MEM16(eax * 2 + 0x966404) = 0xD;
    MEM16(ebp + -180) = 0;

loc_00257152: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    eax = 0; /* xor self */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEM8(ebp + -189) = LO8(eax);
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025716B; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00257167: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025716B; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00257169: ;
    goto loc_0025717E;

loc_0025716B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(ebp + -189) = LO8(eax);

loc_0025717E: ;
    SET_LO8(eax, MEM8(ebp + -189));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0025718D; /* jne: not equal / not zero */

loc_00257188: ;
    goto loc_002573F6;

loc_0025718D: ;
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x30); /* mulss */
    MEMF(ebp + -112) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x30); /* mulss */
    MEMF(ebp + -108) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x30); /* mulss */
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + -172);
    edx = MEM32(ebp + 0x18);
    ecx = ebp + -112;
    eax = ebp + -88;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002571EDu); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_002571ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0025721E; /* jne: not equal / not zero */

loc_002571F1: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00257205; /* je: equal / zero */

loc_002571F7: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -76);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -72);
    MEM32(eax + 4) = ecx;

loc_00257205: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -64);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -60);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -56);
    MEM32(eax + 8) = ecx;
    goto loc_002573F6;

loc_0025721E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00257242; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00257230: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF30)); /* movss */
    MEMF(ebp + -196) = xmm0.f[0]; /* movss */
    goto loc_0025724F;

loc_00257242: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ebp + -196) = xmm0.f[0]; /* movss */

loc_0025724F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -196)); /* movss */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00257273; /* jne: not equal / not zero */

loc_00257268: ;
    eax = MEM32(ebp + -8);
    eax = eax | 8;
    MEM32(ebp + -8) = eax;
    goto loc_00257287;

loc_00257273: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00257285; /* jne: not equal / not zero */

loc_0025727C: ;
    eax = MEM32(ebp + -8);
    eax = eax | 4;
    MEM32(ebp + -8) = eax;

loc_00257285: ;
    goto loc_00257287;

loc_00257287: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_002572A1; /* je: equal / zero */

loc_0025728D: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + -52);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -48);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 8) = ecx;

loc_002572A1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_002572B1; /* je: equal / zero */

loc_002572A7: ;
    SET_LO16(ecx, MEM16(ebp + -36));
    eax = MEM32(ebp + 0x28);
    MEM16(eax) = LO16(ecx);

loc_002572B1: ;
    esi = MEM32(ebp + 0x1C);
    edx = ebp + -88;
    edx = edx + 0x24;
    ecx = ebp + -124;
    eax = ebp + -136;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002572D7u); RECOMP_ABI_CALL(0x001D5CA0u, sub_001D5CA0); /* call 0x001D5CA0 */

loc_002572D7: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x2C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -136); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -124)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x2C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -132); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -120)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x2C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -128); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025737A; /* je: equal / zero */

loc_0025736C: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -76);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -72);
    MEM32(eax + 4) = ecx;

loc_0025737A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -164); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -64); /* addss */
    eax = MEM32(ebp + 0x18);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -164); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -60); /* addss */
    eax = MEM32(ebp + 0x18);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -164); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -56); /* addss */
    eax = MEM32(ebp + 0x18);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0x30); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + -180));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -180) = LO16(eax);
    goto loc_00257152;

loc_002573F6: ;
    eax = (uint32_t)(int32_t)SMEM16(0xBDD31E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_00257436; /* jg: greater (signed >) */

loc_00257402: ;
    ecx = 0x469881;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x138;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025742Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025742A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257436u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00257436: ;
    SET_LO16(eax, MEM16(0xBDD31E));
    SET_LO16(eax, LO16(eax) + 0xFFFFFFFFu);
    MEM16(0xBDD31E) = LO16(eax);

loc_00257446: ;
    _fa = (uint32_t)(MEM8(0xCDD790)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xCDD790), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025746C; /* je: equal / zero */

loc_0025744F: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025746Cu); RECOMP_ABI_CALL(0x00257580u, sub_00257580); /* call 0x00257580 */

loc_0025746C: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0xE4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257480
 * Original: 0x00257480 - 0x002574F1 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257480: ;
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
    PUSH32(esp, 0x0025749Au); RECOMP_ABI_CALL(0x00257850u, sub_00257850); /* call 0x00257850 */

loc_0025749A: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_002574E4; /* je: equal / zero */

loc_002574A7: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002574B9u); RECOMP_ABI_CALL(0x00257850u, sub_00257850); /* call 0x00257850 */

loc_002574B9: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_002574E4; /* je: equal / zero */

loc_002574C6: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002574D8u); RECOMP_ABI_CALL(0x00257850u, sub_00257850); /* call 0x00257850 */

loc_002574D8: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_002574E4: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257500
 * Original: 0x00257500 - 0x00257571 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257500(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257500: ;
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
    PUSH32(esp, 0x0025751Au); RECOMP_ABI_CALL(0x00257850u, sub_00257850); /* call 0x00257850 */

loc_0025751A: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00257564; /* je: equal / zero */

loc_00257527: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257539u); RECOMP_ABI_CALL(0x00257850u, sub_00257850); /* call 0x00257850 */

loc_00257539: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00257564; /* je: equal / zero */

loc_00257546: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257558u); RECOMP_ABI_CALL(0x00257850u, sub_00257850); /* call 0x00257850 */

loc_00257558: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_00257564: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257580
 * Original: 0x00257580 - 0x002575E0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002575A8; /* je: equal / zero */

loc_0025759E: ;
    eax = MEM32(0x5823F0);
    MEM32(ebp + -8) = eax;
    goto loc_002575B0;

loc_002575A8: ;
    eax = MEM32(0x5823F4);
    MEM32(ebp + -8) = eax;

loc_002575B0: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + -4);
    MEM32(esp) = 1;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002575DBu); RECOMP_ABI_CALL(0x0031EF60u, sub_0031EF60); /* call 0x0031EF60 */

loc_002575DB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002575E0
 * Original: 0x002575E0 - 0x00257845 (613 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002575E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002575E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x10); /* subss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257640; /* jne: not equal / not zero */

loc_0025760C: ;
    ecx = 0x493467;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14C;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257634u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00257634: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257640u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00257640: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025767A; /* jne: not equal / not zero */

loc_00257646: ;
    ecx = 0x499692;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025766Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025766E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025767Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025767A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_00257695; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00257687: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_002576C9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_00257695: ;
    ecx = 0x443B9D;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002576BDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002576BD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002576C9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002576C9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257703; /* jne: not equal / not zero */

loc_002576CF: ;
    ecx = 0x447966;
    eax = 0x468CC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002576F7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002576F7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257703u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00257703: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0x14);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x14);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257850
 * Original: 0x00257850 - 0x0025786F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257850(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257850: ;
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
 * sub_00257870
 * Original: 0x00257870 - 0x00257987 (279 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257870(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257882u); RECOMP_ABI_CALL(0x003327C0u, sub_003327C0); /* call 0x003327C0 */

loc_00257882: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002578BF; /* jne: not equal / not zero */

loc_0025788B: ;
    ecx = 0x496665;
    eax = 0x468CE7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x18;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002578B3u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002578B3: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002578BFu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002578BF: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x134), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002578F2; /* je: equal / zero */

loc_002578CB: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x134;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x1AC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002578EDu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_002578ED: ;
    MEM32(ebp + -8) = eax;
    goto loc_002578F9;

loc_002578F2: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_002578F9;

loc_002578F9: ;
    eax = MEM32(ebp + -8);
    MEM32(0xBDD34C) = eax;
    _fa = (uint32_t)(MEM32(0xBDD34C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD34C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025793E; /* jne: not equal / not zero */

loc_0025790A: ;
    ecx = 0x48ACF9;
    eax = 0x468CE7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257932u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00257932: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025793Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025793E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257943u); RECOMP_ABI_CALL(0x00260560u, sub_00260560); /* call 0x00260560 */

loc_00257943: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257948u); RECOMP_ABI_CALL(0x00264950u, sub_00264950); /* call 0x00264950 */

loc_00257948: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025794Du); RECOMP_ABI_CALL(0x0025A430u, sub_0025A430); /* call 0x0025A430 */

loc_0025794D: ;
    _fa = (uint32_t)(MEM32(0x9695E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9695E0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257975; /* je: equal / zero */

loc_00257956: ;
    eax = MEM32(0x9695E0);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257975u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_00257975: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257982u); RECOMP_ABI_CALL(0x0025AEA0u, sub_0025AEA0); /* call 0x0025AEA0 */

loc_00257982: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257990
 * Original: 0x00257990 - 0x002579AF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257990(void)
{
    uint32_t ebp = g_ebp;

loc_00257990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025799Bu); RECOMP_ABI_CALL(0x0025A4B0u, sub_0025A4B0); /* call 0x0025A4B0 */

loc_0025799B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002579A0u); RECOMP_ABI_CALL(0x00264950u, sub_00264950); /* call 0x00264950 */

loc_002579A0: ;
    MEM32(0xBDD34C) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002579B0
 * Original: 0x002579B0 - 0x002579C7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002579B0(void)
{
    uint32_t ebp = g_ebp;

loc_002579B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(0xCE5C24) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257CE0
 * Original: 0x00257CE0 - 0x00257D52 (114 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x496672;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257D06u); RECOMP_ABI_CALL(0x00328600u, sub_00328600); /* call 0x00328600 */

loc_00257D06: ;
    MEM32(0x9695E0) = eax;
    _fa = (uint32_t)(MEM32(0x9695E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9695E0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257D48; /* jne: not equal / not zero */

loc_00257D14: ;
    ecx = 0x45D2D6;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x121;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257D3Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00257D3C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257D48u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00257D48: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257D4Du); RECOMP_ABI_CALL(0x002720D0u, sub_002720D0); /* call 0x002720D0 */

loc_00257D4D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257D60
 * Original: 0x00257D60 - 0x00257D70 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257D60(void)
{
    uint32_t ebp = g_ebp;

loc_00257D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257D6Bu); RECOMP_ABI_CALL(0x00266AF0u, sub_00266AF0); /* call 0x00266AF0 */

loc_00257D6B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257D70
 * Original: 0x00257D70 - 0x00257EAA (314 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257D70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00257D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(0x5A1FF0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00257E12; /* jg: greater (signed >) */

loc_00257D89: ;
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FFC) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FFB) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FFA) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF9) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF8) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF7) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF6) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF5) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF4) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF2) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF3) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FF1) = LO8(eax);
    SET_LO8(eax, MEM8(0x5A1FF0));
    MEM8(0x5A1FFD) = LO8(eax);
    MEM8(0x5A1FF0) = 2;

loc_00257E12: ;
    xmm0 = XMM_SCALAR(MEMF(0x5A1FBC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00257E34; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E22: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00257E34; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E24: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ADF50)); /* movss */
    MEMF(0x5A1FBC) = xmm0.f[0]; /* movss */

loc_00257E34: ;
    xmm0 = XMM_SCALAR(MEMF(0x5A1FC0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00257E56; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E44: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00257E56; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E46: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ADF54)); /* movss */
    MEMF(0x5A1FC0) = xmm0.f[0]; /* movss */

loc_00257E56: ;
    xmm0 = XMM_SCALAR(MEMF(0x5A1FC4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00257E78; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E66: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00257E78; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E68: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ADF58)); /* movss */
    MEMF(0x5A1FC4) = xmm0.f[0]; /* movss */

loc_00257E78: ;
    xmm0 = XMM_SCALAR(MEMF(0x5A1FC8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00257E9A; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E88: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00257E9A; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00257E8A: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ADF5C)); /* movss */
    MEMF(0x5A1FC8) = xmm0.f[0]; /* movss */

loc_00257E9A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257EA5u); RECOMP_ABI_CALL(0x002714E0u, sub_002714E0); /* call 0x002714E0 */

loc_00257EA5: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257EB0
 * Original: 0x00257EB0 - 0x00257ED3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257EB0(void)
{
    uint32_t ebp = g_ebp;

loc_00257EB0: ;
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
    PUSH32(esp, 0x00257ECEu); RECOMP_ABI_CALL(0x002719E0u, sub_002719E0); /* call 0x002719E0 */

loc_00257ECE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257EE0
 * Original: 0x00257EE0 - 0x00257EF9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257EE0(void)
{
    uint32_t ebp = g_ebp;

loc_00257EE0: ;
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
    PUSH32(esp, 0x00257EF4u); RECOMP_ABI_CALL(0x00266BA0u, sub_00266BA0); /* call 0x00266BA0 */

loc_00257EF4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257F00
 * Original: 0x00257F00 - 0x00257F19 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F00(void)
{
    uint32_t ebp = g_ebp;

loc_00257F00: ;
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
    PUSH32(esp, 0x00257F14u); RECOMP_ABI_CALL(0x00266C10u, sub_00266C10); /* call 0x00266C10 */

loc_00257F14: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257F20
 * Original: 0x00257F20 - 0x00257F39 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F20(void)
{
    uint32_t ebp = g_ebp;

loc_00257F20: ;
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
    PUSH32(esp, 0x00257F34u); RECOMP_ABI_CALL(0x00266B20u, sub_00266B20); /* call 0x00266B20 */

loc_00257F34: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257F40
 * Original: 0x00257F40 - 0x00257F59 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F40(void)
{
    uint32_t ebp = g_ebp;

loc_00257F40: ;
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
    PUSH32(esp, 0x00257F54u); RECOMP_ABI_CALL(0x0028B590u, sub_0028B590); /* call 0x0028B590 */

loc_00257F54: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257F60
 * Original: 0x00257F60 - 0x00257F79 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F60(void)
{
    uint32_t ebp = g_ebp;

loc_00257F60: ;
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
    PUSH32(esp, 0x00257F74u); RECOMP_ABI_CALL(0x0028B720u, sub_0028B720); /* call 0x0028B720 */

loc_00257F74: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257F80
 * Original: 0x00257F80 - 0x00257F99 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F80(void)
{
    uint32_t ebp = g_ebp;

loc_00257F80: ;
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
    PUSH32(esp, 0x00257F94u); RECOMP_ABI_CALL(0x0028B920u, sub_0028B920); /* call 0x0028B920 */

loc_00257F94: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257FA0
 * Original: 0x00257FA0 - 0x00257FB9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257FA0(void)
{
    uint32_t ebp = g_ebp;

loc_00257FA0: ;
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
    PUSH32(esp, 0x00257FB4u); RECOMP_ABI_CALL(0x0028BA60u, sub_0028BA60); /* call 0x0028BA60 */

loc_00257FB4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257FC0
 * Original: 0x00257FC0 - 0x00257FE8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257FC0(void)
{
    uint32_t ebp = g_ebp;

loc_00257FC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257FE3u); RECOMP_ABI_CALL(0x0028BA70u, sub_0028BA70); /* call 0x0028BA70 */

loc_00257FE3: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00257FF0
 * Original: 0x00257FF0 - 0x00258009 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257FF0(void)
{
    uint32_t ebp = g_ebp;

loc_00257FF0: ;
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
    PUSH32(esp, 0x00258004u); RECOMP_ABI_CALL(0x0028BC90u, sub_0028BC90); /* call 0x0028BC90 */

loc_00258004: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258010
 * Original: 0x00258010 - 0x00258029 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258010(void)
{
    uint32_t ebp = g_ebp;

loc_00258010: ;
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
    PUSH32(esp, 0x00258024u); RECOMP_ABI_CALL(0x0028BDA0u, sub_0028BDA0); /* call 0x0028BDA0 */

loc_00258024: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258030
 * Original: 0x00258030 - 0x00258049 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258030(void)
{
    uint32_t ebp = g_ebp;

loc_00258030: ;
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
    PUSH32(esp, 0x00258044u); RECOMP_ABI_CALL(0x0028C140u, sub_0028C140); /* call 0x0028C140 */

loc_00258044: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258050
 * Original: 0x00258050 - 0x00258069 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258050(void)
{
    uint32_t ebp = g_ebp;

loc_00258050: ;
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
    PUSH32(esp, 0x00258064u); RECOMP_ABI_CALL(0x0028C330u, sub_0028C330); /* call 0x0028C330 */

loc_00258064: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258070
 * Original: 0x00258070 - 0x00258089 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258070(void)
{
    uint32_t ebp = g_ebp;

loc_00258070: ;
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
    PUSH32(esp, 0x00258084u); RECOMP_ABI_CALL(0x00283F50u, sub_00283F50); /* call 0x00283F50 */

loc_00258084: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258090
 * Original: 0x00258090 - 0x002580A9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258090(void)
{
    uint32_t ebp = g_ebp;

loc_00258090: ;
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
    PUSH32(esp, 0x002580A4u); RECOMP_ABI_CALL(0x00283FF0u, sub_00283FF0); /* call 0x00283FF0 */

loc_002580A4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002580B0
 * Original: 0x002580B0 - 0x002580E9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002580B0(void)
{
    uint32_t ebp = g_ebp;

loc_002580B0: ;
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
    PUSH32(esp, 0x002580E3u); RECOMP_ABI_CALL(0x00281A50u, sub_00281A50); /* call 0x00281A50 */

loc_002580E3: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002580F0
 * Original: 0x002580F0 - 0x00258141 (81 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002580F0(void)
{
    uint32_t ebp = g_ebp;

loc_002580F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258139u); RECOMP_ABI_CALL(0x00281D10u, sub_00281D10); /* call 0x00281D10 */

loc_00258139: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258150
 * Original: 0x00258150 - 0x00258189 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258150(void)
{
    uint32_t ebp = g_ebp;

loc_00258150: ;
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
    PUSH32(esp, 0x00258183u); RECOMP_ABI_CALL(0x00283040u, sub_00283040); /* call 0x00283040 */

loc_00258183: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258190
 * Original: 0x00258190 - 0x002581C2 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258190(void)
{
    uint32_t ebp = g_ebp;

loc_00258190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002581BDu); RECOMP_ABI_CALL(0x00283210u, sub_00283210); /* call 0x00283210 */

loc_002581BD: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002581D0
 * Original: 0x002581D0 - 0x002581F8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002581D0(void)
{
    uint32_t ebp = g_ebp;

loc_002581D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002581F3u); RECOMP_ABI_CALL(0x00283710u, sub_00283710); /* call 0x00283710 */

loc_002581F3: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258200
 * Original: 0x00258200 - 0x00258210 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258200(void)
{
    uint32_t ebp = g_ebp;

loc_00258200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025820Bu); RECOMP_ABI_CALL(0x00283860u, sub_00283860); /* call 0x00283860 */

loc_0025820B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258210
 * Original: 0x00258210 - 0x00258220 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258210(void)
{
    uint32_t ebp = g_ebp;

loc_00258210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025821Bu); RECOMP_ABI_CALL(0x0030E410u, sub_0030E410); /* call 0x0030E410 */

loc_0025821B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258220
 * Original: 0x00258220 - 0x00258230 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258220(void)
{
    uint32_t ebp = g_ebp;

loc_00258220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025822Bu); RECOMP_ABI_CALL(0x00283C70u, sub_00283C70); /* call 0x00283C70 */

loc_0025822B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258230
 * Original: 0x00258230 - 0x00258240 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258230(void)
{
    uint32_t ebp = g_ebp;

loc_00258230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025823Bu); RECOMP_ABI_CALL(0x00283920u, sub_00283920); /* call 0x00283920 */

loc_0025823B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258240
 * Original: 0x00258240 - 0x00258250 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258240(void)
{
    uint32_t ebp = g_ebp;

loc_00258240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025824Bu); RECOMP_ABI_CALL(0x00283880u, sub_00283880); /* call 0x00283880 */

loc_0025824B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258250
 * Original: 0x00258250 - 0x00258260 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258250(void)
{
    uint32_t ebp = g_ebp;

loc_00258250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025825Bu); RECOMP_ABI_CALL(0x00283890u, sub_00283890); /* call 0x00283890 */

loc_0025825B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258260
 * Original: 0x00258260 - 0x00258270 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258260(void)
{
    uint32_t ebp = g_ebp;

loc_00258260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025826Bu); RECOMP_ABI_CALL(0x00283E50u, sub_00283E50); /* call 0x00283E50 */

loc_0025826B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258270
 * Original: 0x00258270 - 0x0025828B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258270(void)
{
    uint32_t ebp = g_ebp;

loc_00258270: ;
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
    PUSH32(esp, 0x00258286u); RECOMP_ABI_CALL(0x00284090u, sub_00284090); /* call 0x00284090 */

loc_00258286: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258290
 * Original: 0x00258290 - 0x002582A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258290(void)
{
    uint32_t ebp = g_ebp;

loc_00258290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025829Bu); RECOMP_ABI_CALL(0x00287170u, sub_00287170); /* call 0x00287170 */

loc_0025829B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002582A0
 * Original: 0x002582A0 - 0x002582BB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002582A0(void)
{
    uint32_t ebp = g_ebp;

loc_002582A0: ;
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
    PUSH32(esp, 0x002582B6u); RECOMP_ABI_CALL(0x002867D0u, sub_002867D0); /* call 0x002867D0 */

loc_002582B6: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002582C0
 * Original: 0x002582C0 - 0x002582D0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002582C0(void)
{
    uint32_t ebp = g_ebp;

loc_002582C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002582CBu); RECOMP_ABI_CALL(0x002871E0u, sub_002871E0); /* call 0x002871E0 */

loc_002582CB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002582D0
 * Original: 0x002582D0 - 0x002582E0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002582D0(void)
{
    uint32_t ebp = g_ebp;

loc_002582D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002582DBu); RECOMP_ABI_CALL(0x00287650u, sub_00287650); /* call 0x00287650 */

loc_002582DB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002582E0
 * Original: 0x002582E0 - 0x002582F9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002582E0(void)
{
    uint32_t ebp = g_ebp;

loc_002582E0: ;
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
    PUSH32(esp, 0x002582F4u); RECOMP_ABI_CALL(0x00289870u, sub_00289870); /* call 0x00289870 */

loc_002582F4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258300
 * Original: 0x00258300 - 0x00258319 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258300(void)
{
    uint32_t ebp = g_ebp;

loc_00258300: ;
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
    PUSH32(esp, 0x00258314u); RECOMP_ABI_CALL(0x00289DA0u, sub_00289DA0); /* call 0x00289DA0 */

loc_00258314: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258320
 * Original: 0x00258320 - 0x00258330 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258320(void)
{
    uint32_t ebp = g_ebp;

loc_00258320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025832Bu); RECOMP_ABI_CALL(0x0028AB70u, sub_0028AB70); /* call 0x0028AB70 */

loc_0025832B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258330
 * Original: 0x00258330 - 0x00258349 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258330(void)
{
    uint32_t ebp = g_ebp;

loc_00258330: ;
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
    PUSH32(esp, 0x00258344u); RECOMP_ABI_CALL(0x002E41B0u, sub_002E41B0); /* call 0x002E41B0 */

loc_00258344: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258350
 * Original: 0x00258350 - 0x00258360 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258350(void)
{
    uint32_t ebp = g_ebp;

loc_00258350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025835Bu); RECOMP_ABI_CALL(0x002807B0u, sub_002807B0); /* call 0x002807B0 */

loc_0025835B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258360
 * Original: 0x00258360 - 0x00258370 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258360(void)
{
    uint32_t ebp = g_ebp;

loc_00258360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025836Bu); RECOMP_ABI_CALL(0x00281A40u, sub_00281A40); /* call 0x00281A40 */

loc_0025836B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258370
 * Original: 0x00258370 - 0x00258380 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258370(void)
{
    uint32_t ebp = g_ebp;

loc_00258370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025837Bu); RECOMP_ABI_CALL(0x00282110u, sub_00282110); /* call 0x00282110 */

loc_0025837B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258380
 * Original: 0x00258380 - 0x00258390 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258380(void)
{
    uint32_t ebp = g_ebp;

loc_00258380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025838Bu); RECOMP_ABI_CALL(0x00283030u, sub_00283030); /* call 0x00283030 */

loc_0025838B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258390
 * Original: 0x00258390 - 0x002583A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258390(void)
{
    uint32_t ebp = g_ebp;

loc_00258390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025839Bu); RECOMP_ABI_CALL(0x0028E1F0u, sub_0028E1F0); /* call 0x0028E1F0 */

loc_0025839B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002583A0
 * Original: 0x002583A0 - 0x002583B0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002583A0(void)
{
    uint32_t ebp = g_ebp;

loc_002583A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002583ABu); RECOMP_ABI_CALL(0x0028E210u, sub_0028E210); /* call 0x0028E210 */

loc_002583AB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002583B0
 * Original: 0x002583B0 - 0x002583C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002583B0(void)
{
    uint32_t ebp = g_ebp;

loc_002583B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002583BBu); RECOMP_ABI_CALL(0x002D83C0u, sub_002D83C0); /* call 0x002D83C0 */

loc_002583BB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002583C0
 * Original: 0x002583C0 - 0x0025840E (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002583C0(void)
{
    uint32_t ebp = g_ebp;

loc_002583C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    eax = ZX8(MEM8(ebp + 0x18));
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258409u); RECOMP_ABI_CALL(0x002DA530u, sub_002DA530); /* call 0x002DA530 */

loc_00258409: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258410
 * Original: 0x00258410 - 0x00258439 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258410(void)
{
    uint32_t ebp = g_ebp;

loc_00258410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258434u); RECOMP_ABI_CALL(0x002DA9B0u, sub_002DA9B0); /* call 0x002DA9B0 */

loc_00258434: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258440
 * Original: 0x00258440 - 0x00258464 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258440(void)
{
    uint32_t ebp = g_ebp;

loc_00258440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025845Fu); RECOMP_ABI_CALL(0x002C8E20u, sub_002C8E20); /* call 0x002C8E20 */

loc_0025845F: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258470
 * Original: 0x00258470 - 0x002584DC (108 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258470(void)
{
    uint32_t ebp = g_ebp;

loc_00258470: ;
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
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    SET_LO16(ebx, MEM16(ebp + 0xC));
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -16);
    ebx = SX16(LO16(ebx));
    MEM32(esp + 4) = ebx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002584D4u); RECOMP_ABI_CALL(0x002D1DF0u, sub_002D1DF0); /* call 0x002D1DF0 */

loc_002584D4: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002584E0
 * Original: 0x002584E0 - 0x0025856C (140 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002584E0(void)
{
    uint32_t ebp = g_ebp;

loc_002584E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
    eax = MEM32(ebp + 0x28);
    eax = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(ebp + -22) = LO16(eax);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    ebx = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x28);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esp) = eax;
    SET_LO16(eax, MEM16(ebp + -22));
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258564u); RECOMP_ABI_CALL(0x002D7890u, sub_002D7890); /* call 0x002D7890 */

loc_00258564: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258570
 * Original: 0x00258570 - 0x00258580 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258570(void)
{
    uint32_t ebp = g_ebp;

loc_00258570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025857Bu); RECOMP_ABI_CALL(0x002C8D70u, sub_002C8D70); /* call 0x002C8D70 */

loc_0025857B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258580
 * Original: 0x00258580 - 0x00258590 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258580(void)
{
    uint32_t ebp = g_ebp;

loc_00258580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025858Bu); RECOMP_ABI_CALL(0x002C8D30u, sub_002C8D30); /* call 0x002C8D30 */

loc_0025858B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258590
 * Original: 0x00258590 - 0x002585A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258590(void)
{
    uint32_t ebp = g_ebp;

loc_00258590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025859Bu); RECOMP_ABI_CALL(0x00298430u, sub_00298430); /* call 0x00298430 */

loc_0025859B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002585A0
 * Original: 0x002585A0 - 0x002585B9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002585A0(void)
{
    uint32_t ebp = g_ebp;

loc_002585A0: ;
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
    PUSH32(esp, 0x002585B4u); RECOMP_ABI_CALL(0x00299930u, sub_00299930); /* call 0x00299930 */

loc_002585B4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002585C0
 * Original: 0x002585C0 - 0x00258616 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002585C0(void)
{
    uint32_t ebp = g_ebp;

loc_002585C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025860Eu); RECOMP_ABI_CALL(0x00292E90u, sub_00292E90); /* call 0x00292E90 */

loc_0025860E: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258620
 * Original: 0x00258620 - 0x00258630 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258620(void)
{
    uint32_t ebp = g_ebp;

loc_00258620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025862Bu); RECOMP_ABI_CALL(0x00298400u, sub_00298400); /* call 0x00298400 */

loc_0025862B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258630
 * Original: 0x00258630 - 0x00258640 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258630(void)
{
    uint32_t ebp = g_ebp;

loc_00258630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025863Bu); RECOMP_ABI_CALL(0x00298410u, sub_00298410); /* call 0x00298410 */

loc_0025863B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258640
 * Original: 0x00258640 - 0x00258650 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258640(void)
{
    uint32_t ebp = g_ebp;

loc_00258640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025864Bu); RECOMP_ABI_CALL(0x00299B90u, sub_00299B90); /* call 0x00299B90 */

loc_0025864B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258650
 * Original: 0x00258650 - 0x00258660 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258650(void)
{
    uint32_t ebp = g_ebp;

loc_00258650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025865Bu); RECOMP_ABI_CALL(0x0029CB10u, sub_0029CB10); /* call 0x0029CB10 */

loc_0025865B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258660
 * Original: 0x00258660 - 0x00258670 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258660(void)
{
    uint32_t ebp = g_ebp;

loc_00258660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025866Bu); RECOMP_ABI_CALL(0x0029AB20u, sub_0029AB20); /* call 0x0029AB20 */

loc_0025866B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258670
 * Original: 0x00258670 - 0x00258689 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258670(void)
{
    uint32_t ebp = g_ebp;

loc_00258670: ;
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
    PUSH32(esp, 0x00258684u); RECOMP_ABI_CALL(0x00299BA0u, sub_00299BA0); /* call 0x00299BA0 */

loc_00258684: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258690
 * Original: 0x00258690 - 0x002586E6 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258690(void)
{
    uint32_t ebp = g_ebp;

loc_00258690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002586DEu); RECOMP_ABI_CALL(0x0029A560u, sub_0029A560); /* call 0x0029A560 */

loc_002586DE: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002586F0
 * Original: 0x002586F0 - 0x00258700 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002586F0(void)
{
    uint32_t ebp = g_ebp;

loc_002586F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002586FBu); RECOMP_ABI_CALL(0x002EEBA0u, sub_002EEBA0); /* call 0x002EEBA0 */

loc_002586FB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258700
 * Original: 0x00258700 - 0x00258749 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258700(void)
{
    uint32_t ebp = g_ebp;

loc_00258700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258743u); RECOMP_ABI_CALL(0x002EEBC0u, sub_002EEBC0); /* call 0x002EEBC0 */

loc_00258743: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258750
 * Original: 0x00258750 - 0x00258769 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258750(void)
{
    uint32_t ebp = g_ebp;

loc_00258750: ;
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
    PUSH32(esp, 0x00258764u); RECOMP_ABI_CALL(0x002F0400u, sub_002F0400); /* call 0x002F0400 */

loc_00258764: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258770
 * Original: 0x00258770 - 0x002587AE (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258770(void)
{
    uint32_t ebp = g_ebp;

loc_00258770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    SET_LO16(edx, MEM16(ebp + 0xC));
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = esi;
    edx = SX16(LO16(edx));
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002587A8u); RECOMP_ABI_CALL(0x002F04F0u, sub_002F04F0); /* call 0x002F04F0 */

loc_002587A8: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002587B0
 * Original: 0x002587B0 - 0x002587C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002587B0(void)
{
    uint32_t ebp = g_ebp;

loc_002587B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002587BBu); RECOMP_ABI_CALL(0x002F04E0u, sub_002F04E0); /* call 0x002F04E0 */

loc_002587BB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002587C0
 * Original: 0x002587C0 - 0x002587D0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002587C0(void)
{
    uint32_t ebp = g_ebp;

loc_002587C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002587CBu); RECOMP_ABI_CALL(0x002F1990u, sub_002F1990); /* call 0x002F1990 */

loc_002587CB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002587D0
 * Original: 0x002587D0 - 0x00258826 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002587D0(void)
{
    uint32_t ebp = g_ebp;

loc_002587D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025881Eu); RECOMP_ABI_CALL(0x002F1A60u, sub_002F1A60); /* call 0x002F1A60 */

loc_0025881E: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258830
 * Original: 0x00258830 - 0x00258840 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258830(void)
{
    uint32_t ebp = g_ebp;

loc_00258830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025883Bu); RECOMP_ABI_CALL(0x002F7610u, sub_002F7610); /* call 0x002F7610 */

loc_0025883B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258840
 * Original: 0x00258840 - 0x00258850 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258840(void)
{
    uint32_t ebp = g_ebp;

loc_00258840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025884Bu); RECOMP_ABI_CALL(0x0029CB30u, sub_0029CB30); /* call 0x0029CB30 */

loc_0025884B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258850
 * Original: 0x00258850 - 0x00258860 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258850(void)
{
    uint32_t ebp = g_ebp;

loc_00258850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025885Bu); RECOMP_ABI_CALL(0x0029CB60u, sub_0029CB60); /* call 0x0029CB60 */

loc_0025885B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258860
 * Original: 0x00258860 - 0x002588B6 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258860(void)
{
    uint32_t ebp = g_ebp;

loc_00258860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002588AEu); RECOMP_ABI_CALL(0x0029E730u, sub_0029E730); /* call 0x0029E730 */

loc_002588AE: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002588C0
 * Original: 0x002588C0 - 0x002588D0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002588C0(void)
{
    uint32_t ebp = g_ebp;

loc_002588C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002588CBu); RECOMP_ABI_CALL(0x002A04A0u, sub_002A04A0); /* call 0x002A04A0 */

loc_002588CB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002588D0
 * Original: 0x002588D0 - 0x002588E0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002588D0(void)
{
    uint32_t ebp = g_ebp;

loc_002588D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002588DBu); RECOMP_ABI_CALL(0x002A32E0u, sub_002A32E0); /* call 0x002A32E0 */

loc_002588DB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002588E0
 * Original: 0x002588E0 - 0x002588F0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002588E0(void)
{
    uint32_t ebp = g_ebp;

loc_002588E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002588EBu); RECOMP_ABI_CALL(0x002A04B0u, sub_002A04B0); /* call 0x002A04B0 */

loc_002588EB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002588F0
 * Original: 0x002588F0 - 0x00258909 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002588F0(void)
{
    uint32_t ebp = g_ebp;

loc_002588F0: ;
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
    PUSH32(esp, 0x00258904u); RECOMP_ABI_CALL(0x002A23E0u, sub_002A23E0); /* call 0x002A23E0 */

loc_00258904: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258910
 * Original: 0x00258910 - 0x00258966 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258910(void)
{
    uint32_t ebp = g_ebp;

loc_00258910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025895Eu); RECOMP_ABI_CALL(0x002A2E30u, sub_002A2E30); /* call 0x002A2E30 */

loc_0025895E: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258970
 * Original: 0x00258970 - 0x00258980 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258970(void)
{
    uint32_t ebp = g_ebp;

loc_00258970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025897Bu); RECOMP_ABI_CALL(0x002A3300u, sub_002A3300); /* call 0x002A3300 */

loc_0025897B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258980
 * Original: 0x00258980 - 0x00258990 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258980(void)
{
    uint32_t ebp = g_ebp;

loc_00258980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025898Bu); RECOMP_ABI_CALL(0x002A3310u, sub_002A3310); /* call 0x002A3310 */

loc_0025898B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258990
 * Original: 0x00258990 - 0x002589A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258990(void)
{
    uint32_t ebp = g_ebp;

loc_00258990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025899Bu); RECOMP_ABI_CALL(0x002A3330u, sub_002A3330); /* call 0x002A3330 */

loc_0025899B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002589A0
 * Original: 0x002589A0 - 0x002589B9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002589A0(void)
{
    uint32_t ebp = g_ebp;

loc_002589A0: ;
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
    PUSH32(esp, 0x002589B4u); RECOMP_ABI_CALL(0x002A53D0u, sub_002A53D0); /* call 0x002A53D0 */

loc_002589B4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002589C0
 * Original: 0x002589C0 - 0x00258A16 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002589C0(void)
{
    uint32_t ebp = g_ebp;

loc_002589C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258A0Eu); RECOMP_ABI_CALL(0x002A5520u, sub_002A5520); /* call 0x002A5520 */

loc_00258A0E: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258A20
 * Original: 0x00258A20 - 0x00258A30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A20(void)
{
    uint32_t ebp = g_ebp;

loc_00258A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258A2Bu); RECOMP_ABI_CALL(0x002A59B0u, sub_002A59B0); /* call 0x002A59B0 */

loc_00258A2B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258A30
 * Original: 0x00258A30 - 0x00258A40 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A30(void)
{
    uint32_t ebp = g_ebp;

loc_00258A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258A3Bu); RECOMP_ABI_CALL(0x002A59C0u, sub_002A59C0); /* call 0x002A59C0 */

loc_00258A3B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258A40
 * Original: 0x00258A40 - 0x00258A50 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A40(void)
{
    uint32_t ebp = g_ebp;

loc_00258A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258A4Bu); RECOMP_ABI_CALL(0x002A59E0u, sub_002A59E0); /* call 0x002A59E0 */

loc_00258A4B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258A50
 * Original: 0x00258A50 - 0x00258A60 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A50(void)
{
    uint32_t ebp = g_ebp;

loc_00258A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258A5Bu); RECOMP_ABI_CALL(0x002A7C60u, sub_002A7C60); /* call 0x002A7C60 */

loc_00258A5B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258A60
 * Original: 0x00258A60 - 0x00258AB6 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A60(void)
{
    uint32_t ebp = g_ebp;

loc_00258A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258AAEu); RECOMP_ABI_CALL(0x002A7C80u, sub_002A7C80); /* call 0x002A7C80 */

loc_00258AAE: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258AC0
 * Original: 0x00258AC0 - 0x00258AD0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258AC0(void)
{
    uint32_t ebp = g_ebp;

loc_00258AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258ACBu); RECOMP_ABI_CALL(0x002ABC10u, sub_002ABC10); /* call 0x002ABC10 */

loc_00258ACB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258AD0
 * Original: 0x00258AD0 - 0x00258AE0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258AD0(void)
{
    uint32_t ebp = g_ebp;

loc_00258AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258ADBu); RECOMP_ABI_CALL(0x002ABC30u, sub_002ABC30); /* call 0x002ABC30 */

loc_00258ADB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258AE0
 * Original: 0x00258AE0 - 0x00258B36 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258AE0(void)
{
    uint32_t ebp = g_ebp;

loc_00258AE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258B2Eu); RECOMP_ABI_CALL(0x002ABC50u, sub_002ABC50); /* call 0x002ABC50 */

loc_00258B2E: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258B40
 * Original: 0x00258B40 - 0x00258B50 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258B40(void)
{
    uint32_t ebp = g_ebp;

loc_00258B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258B4Bu); RECOMP_ABI_CALL(0x002AFEB0u, sub_002AFEB0); /* call 0x002AFEB0 */

loc_00258B4B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258B50
 * Original: 0x00258B50 - 0x00258B60 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258B50(void)
{
    uint32_t ebp = g_ebp;

loc_00258B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258B5Bu); RECOMP_ABI_CALL(0x002AFED0u, sub_002AFED0); /* call 0x002AFED0 */

loc_00258B5B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258B60
 * Original: 0x00258B60 - 0x00258C1C (188 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258B60(void)
{
    uint32_t ebp = g_ebp;

loc_00258B60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x34);
    eax = MEM32(ebp + 0x30);
    eax = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x28);
    eax = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -40) = eax;
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(ebp + -34) = LO16(eax);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -20) = eax;
    ebx = MEM32(ebp + 0x20);
    edi = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 0x28);
    edx = MEM32(ebp + 0x2C);
    ecx = MEM32(ebp + 0x30);
    eax = MEM32(ebp + 0x34);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    SET_LO16(eax, MEM16(ebp + -34));
    eax = SX16(eax); /* cwde */
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -32);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258C14u); RECOMP_ABI_CALL(0x002AFEF0u, sub_002AFEF0); /* call 0x002AFEF0 */

loc_00258C14: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258C20
 * Original: 0x00258C20 - 0x00258C30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258C20(void)
{
    uint32_t ebp = g_ebp;

loc_00258C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258C2Bu); RECOMP_ABI_CALL(0x002B0430u, sub_002B0430); /* call 0x002B0430 */

loc_00258C2B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258C30
 * Original: 0x00258C30 - 0x00258C49 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258C30(void)
{
    uint32_t ebp = g_ebp;

loc_00258C30: ;
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
    PUSH32(esp, 0x00258C44u); RECOMP_ABI_CALL(0x002A75D0u, sub_002A75D0); /* call 0x002A75D0 */

loc_00258C44: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258C50
 * Original: 0x00258C50 - 0x00258CA6 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258C50(void)
{
    uint32_t ebp = g_ebp;

loc_00258C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258C9Eu); RECOMP_ABI_CALL(0x002A7730u, sub_002A7730); /* call 0x002A7730 */

loc_00258C9E: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258CB0
 * Original: 0x00258CB0 - 0x00258CE9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258CB0(void)
{
    uint32_t ebp = g_ebp;

loc_00258CB0: ;
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
    PUSH32(esp, 0x00258CE3u); RECOMP_ABI_CALL(0x00292990u, sub_00292990); /* call 0x00292990 */

loc_00258CE3: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258CF0
 * Original: 0x00258CF0 - 0x00258D13 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258CF0(void)
{
    uint32_t ebp = g_ebp;

loc_00258CF0: ;
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
    PUSH32(esp, 0x00258D0Eu); RECOMP_ABI_CALL(0x002929E0u, sub_002929E0); /* call 0x002929E0 */

loc_00258D0E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258D20
 * Original: 0x00258D20 - 0x00258D3A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258D20(void)
{
    uint32_t ebp = g_ebp;

loc_00258D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 8));
    eax = ZX8(MEM8(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258D35u); RECOMP_ABI_CALL(0x002E3480u, sub_002E3480); /* call 0x002E3480 */

loc_00258D35: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258D40
 * Original: 0x00258D40 - 0x00258D50 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258D40(void)
{
    uint32_t ebp = g_ebp;

loc_00258D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258D4Bu); RECOMP_ABI_CALL(0x002EA500u, sub_002EA500); /* call 0x002EA500 */

loc_00258D4B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258D50
 * Original: 0x00258D50 - 0x00258D6A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258D50(void)
{
    uint32_t ebp = g_ebp;

loc_00258D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 8));
    eax = ZX8(MEM8(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258D65u); RECOMP_ABI_CALL(0x002B4630u, sub_002B4630); /* call 0x002B4630 */

loc_00258D65: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258D70
 * Original: 0x00258D70 - 0x00258DA8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258D70(void)
{
    uint32_t ebp = g_ebp;

loc_00258D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258DA3u); RECOMP_ABI_CALL(0x002B4540u, sub_002B4540); /* call 0x002B4540 */

loc_00258DA3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258DB0
 * Original: 0x00258DB0 - 0x00258E06 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258DB0(void)
{
    uint32_t ebp = g_ebp;

loc_00258DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258DFEu); RECOMP_ABI_CALL(0x002B8D70u, sub_002B8D70); /* call 0x002B8D70 */

loc_00258DFE: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258E10
 * Original: 0x00258E10 - 0x00258E33 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258E10(void)
{
    uint32_t ebp = g_ebp;

loc_00258E10: ;
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
    PUSH32(esp, 0x00258E2Eu); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_00258E2E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258E40
 * Original: 0x00258E40 - 0x00258EB7 (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258E40(void)
{
    uint32_t ebp = g_ebp;

loc_00258E40: ;
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
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -20) = eax;
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258EAFu); RECOMP_ABI_CALL(0x00292500u, sub_00292500); /* call 0x00292500 */

loc_00258EAF: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258EC0
 * Original: 0x00258EC0 - 0x00258EE3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258EC0(void)
{
    uint32_t ebp = g_ebp;

loc_00258EC0: ;
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
    PUSH32(esp, 0x00258EDEu); RECOMP_ABI_CALL(0x0028E230u, sub_0028E230); /* call 0x0028E230 */

loc_00258EDE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258EF0
 * Original: 0x00258EF0 - 0x00258F29 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258EF0(void)
{
    uint32_t ebp = g_ebp;

loc_00258EF0: ;
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
    PUSH32(esp, 0x00258F23u); RECOMP_ABI_CALL(0x0030E570u, sub_0030E570); /* call 0x0030E570 */

loc_00258F23: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258F30
 * Original: 0x00258F30 - 0x00258F58 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258F30(void)
{
    uint32_t ebp = g_ebp;

loc_00258F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = ZX16(MEM16(ebp + 0xC));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258F53u); RECOMP_ABI_CALL(0x0030E7E0u, sub_0030E7E0); /* call 0x0030E7E0 */

loc_00258F53: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258F60
 * Original: 0x00258F60 - 0x00258F94 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258F60(void)
{
    uint32_t ebp = g_ebp;

loc_00258F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258F8Fu); RECOMP_ABI_CALL(0x00312520u, sub_00312520); /* call 0x00312520 */

loc_00258F8F: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258FA0
 * Original: 0x00258FA0 - 0x00258FBF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258FA0(void)
{
    uint32_t ebp = g_ebp;

loc_00258FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258FBAu); RECOMP_ABI_CALL(0x00312A20u, sub_00312A20); /* call 0x00312A20 */

loc_00258FBA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258FC0
 * Original: 0x00258FC0 - 0x00258FDA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258FC0(void)
{
    uint32_t ebp = g_ebp;

loc_00258FC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 8));
    eax = ZX8(MEM8(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00258FD5u); RECOMP_ABI_CALL(0x00312AB0u, sub_00312AB0); /* call 0x00312AB0 */

loc_00258FD5: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00258FE0
 * Original: 0x00258FE0 - 0x00259039 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258FE0(void)
{
    uint32_t ebp = g_ebp;

loc_00258FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = esi;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259033u); RECOMP_ABI_CALL(0x00312B10u, sub_00312B10); /* call 0x00312B10 */

loc_00259033: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259040
 * Original: 0x00259040 - 0x0025908D (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259040(void)
{
    uint32_t ebp = g_ebp;

loc_00259040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = edx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259088u); RECOMP_ABI_CALL(0x003130E0u, sub_003130E0); /* call 0x003130E0 */

loc_00259088: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259090
 * Original: 0x00259090 - 0x002590C3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259090(void)
{
    uint32_t ebp = g_ebp;

loc_00259090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002590BEu); RECOMP_ABI_CALL(0x00313A70u, sub_00313A70); /* call 0x00313A70 */

loc_002590BE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002590D0
 * Original: 0x002590D0 - 0x002590E9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590D0(void)
{
    uint32_t ebp = g_ebp;

loc_002590D0: ;
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
    PUSH32(esp, 0x002590E4u); RECOMP_ABI_CALL(0x0030E420u, sub_0030E420); /* call 0x0030E420 */

loc_002590E4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002590F0
 * Original: 0x002590F0 - 0x00259100 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590F0(void)
{
    uint32_t ebp = g_ebp;

loc_002590F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002590FBu); RECOMP_ABI_CALL(0x002B0F60u, sub_002B0F60); /* call 0x002B0F60 */

loc_002590FB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259100
 * Original: 0x00259100 - 0x00259110 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259100(void)
{
    uint32_t ebp = g_ebp;

loc_00259100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025910Bu); RECOMP_ABI_CALL(0x002B4480u, sub_002B4480); /* call 0x002B4480 */

loc_0025910B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259110
 * Original: 0x00259110 - 0x00259166 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259110(void)
{
    uint32_t ebp = g_ebp;

loc_00259110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(ebp + 0xC));
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = ebx;
    edi = SX16(LO16(edi));
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025915Eu); RECOMP_ABI_CALL(0x002B42D0u, sub_002B42D0); /* call 0x002B42D0 */

loc_0025915E: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259170
 * Original: 0x00259170 - 0x00259180 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259170(void)
{
    uint32_t ebp = g_ebp;

loc_00259170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025917Bu); RECOMP_ABI_CALL(0x002B8F60u, sub_002B8F60); /* call 0x002B8F60 */

loc_0025917B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259180
 * Original: 0x00259180 - 0x00259190 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259180(void)
{
    uint32_t ebp = g_ebp;

loc_00259180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025918Bu); RECOMP_ABI_CALL(0x00270710u, sub_00270710); /* call 0x00270710 */

loc_0025918B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259190
 * Original: 0x00259190 - 0x002591A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259190(void)
{
    uint32_t ebp = g_ebp;

loc_00259190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025919Bu); RECOMP_ABI_CALL(0x00271810u, sub_00271810); /* call 0x00271810 */

loc_0025919B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002591A0
 * Original: 0x002591A0 - 0x002591B9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591A0(void)
{
    uint32_t ebp = g_ebp;

loc_002591A0: ;
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
    PUSH32(esp, 0x002591B4u); RECOMP_ABI_CALL(0x0026A640u, sub_0026A640); /* call 0x0026A640 */

loc_002591B4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002591C0
 * Original: 0x002591C0 - 0x002591D0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591C0(void)
{
    uint32_t ebp = g_ebp;

loc_002591C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002591CBu); RECOMP_ABI_CALL(0x0026E740u, sub_0026E740); /* call 0x0026E740 */

loc_002591CB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002591D0
 * Original: 0x002591D0 - 0x002591E0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591D0(void)
{
    uint32_t ebp = g_ebp;

loc_002591D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002591DBu); RECOMP_ABI_CALL(0x00266B50u, sub_00266B50); /* call 0x00266B50 */

loc_002591DB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002591E0
 * Original: 0x002591E0 - 0x002591F0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591E0(void)
{
    uint32_t ebp = g_ebp;

loc_002591E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002591EBu); RECOMP_ABI_CALL(0x002675F0u, sub_002675F0); /* call 0x002675F0 */

loc_002591EB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_002591F0
 * Original: 0x002591F0 - 0x0025934E (350 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002591F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x74;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259332; /* jne: not equal / not zero */

loc_00259204: ;
    eax = (uint32_t)(int32_t)SMEM16(0xBDD31E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259244; /* jl: less (signed <) */

loc_00259210: ;
    ecx = 0x44D350;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2E4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259238u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00259238: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259244u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00259244: ;
    SET_LO16(eax, MEM16(0xBDD31E));
    SET_LO16(ecx, LO16(eax));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(0xBDD31E) = LO16(ecx);
    eax = SX16(eax); /* cwde */
    MEM16(eax * 2 + 0x966404) = 0x15;
    xmm0 = XMM_SCALAR(MEMF(0x43DEA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xCE5D44); /* mulss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DEA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xCE5D48); /* mulss */
    MEMF(ebp + -92) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DEA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xCE5D4C); /* mulss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(0x8C064C);
    esi = 0xCE5D30;
    esi = esi + 8;
    edx = ebp + -96;
    eax = ebp + -84;
    MEM32(esp) = 0xFFF80;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002592D4u); RECOMP_ABI_CALL(0x0024AA90u, sub_0024AA90); /* call 0x0024AA90 */

loc_002592D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002592E0; /* je: equal / zero */

loc_002592D8: ;
    eax = MEM32(ebp + -28);
    MEM32(0x9695E4) = eax;

loc_002592E0: ;
    eax = (uint32_t)(int32_t)SMEM16(0xBDD31E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00259320; /* jg: greater (signed >) */

loc_002592EC: ;
    ecx = 0x469881;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2F4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259314u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00259314: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259320u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00259320: ;
    SET_LO16(eax, MEM16(0xBDD31E));
    SET_LO16(eax, LO16(eax) + 0xFFFFFFFFu);
    MEM16(0xBDD31E) = LO16(eax);
    goto loc_0025933C;

loc_00259332: ;
    MEM32(0x9695E4) = 0xFFFFFFFFu;

loc_0025933C: ;
    eax = ZX8(MEM8(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259348u); RECOMP_ABI_CALL(0x002C8CE0u, sub_002C8CE0); /* call 0x002C8CE0 */

loc_00259348: ;
    esp = esp + 0x74;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259350
 * Original: 0x00259350 - 0x00259530 (480 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259350(void)
{
    uint32_t ebp = g_ebp;

loc_00259350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0xC); /* subss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebp + -16;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002593ADu); RECOMP_ABI_CALL(0x00259530u, sub_00259530); /* call 0x00259530 */

loc_002593AD: ;
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebp + 0xC); /* addss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebp + -28;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002593E6u); RECOMP_ABI_CALL(0x00259530u, sub_00259530); /* call 0x00259530 */

loc_002593E6: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x10);
    esi = ebp + -16;
    edx = ebp + -28;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259406u); RECOMP_ABI_CALL(0x00281A50u, sub_00281A50); /* call 0x00281A50 */

loc_00259406: ;
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0xC); /* subss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebp + -16;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025943Fu); RECOMP_ABI_CALL(0x00259530u, sub_00259530); /* call 0x00259530 */

loc_0025943F: ;
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebp + 0xC); /* addss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebp + -28;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259478u); RECOMP_ABI_CALL(0x00259530u, sub_00259530); /* call 0x00259530 */

loc_00259478: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x10);
    esi = ebp + -16;
    edx = ebp + -28;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259498u); RECOMP_ABI_CALL(0x00281A50u, sub_00281A50); /* call 0x00281A50 */

loc_00259498: ;
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xC); /* subss */
    eax = ebp + -16;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002594D1u); RECOMP_ABI_CALL(0x00259530u, sub_00259530); /* call 0x00259530 */

loc_002594D1: ;
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0xC); /* addss */
    eax = ebp + -28;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025950Au); RECOMP_ABI_CALL(0x00259530u, sub_00259530); /* call 0x00259530 */

loc_0025950A: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x10);
    esi = ebp + -16;
    edx = ebp + -28;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025952Au); RECOMP_ABI_CALL(0x00281A50u, sub_00281A50); /* call 0x00281A50 */

loc_0025952A: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259530
 * Original: 0x00259530 - 0x00259570 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259530(void)
{
    uint32_t ebp = g_ebp;

loc_00259530: ;
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
 * sub_00259570
 * Original: 0x00259570 - 0x00259603 (147 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259570(void)
{
    uint32_t ebp = g_ebp;

loc_00259570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x14);
    edx = ebp + -16;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002595FDu); RECOMP_ABI_CALL(0x00281A50u, sub_00281A50); /* call 0x00281A50 */

loc_002595FD: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00259610
 * Original: 0x00259610 - 0x0025A148 (2872 bytes, 588 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259610(void)
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

loc_00259610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x202DC;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025965F; /* jne: not equal / not zero */

loc_0025962B: ;
    ecx = 0x4726CB;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x33E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259653u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00259653: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025965Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025965F: ;
    eax = ZX8(MEM8(0x5A1FE7));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A13D; /* je: equal / zero */

loc_0025966F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9695E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x9695E4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A13D; /* jne: not equal / not zero */

loc_0025967E: ;
    MEM32(ebp + -16) = 0;
    MEM32(ebp + -20) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002596CC; /* je: equal / zero */

loc_00259698: ;
    ecx = 0x45252E;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x359;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002596C0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002596C0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002596CCu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002596CC: ;
    MEM16(ebp + -26) = 0;

loc_002596D2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -26);
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + 0x48);
    ecx = ecx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259EDF; /* jge: greater or equal (signed >=) */

loc_002596E7: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x3C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -26);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    MEM16(ebp + -131614) = LO16(eax);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x30);
    ecx = ZX16(MEM16(ebp + -131614));
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -131620) = eax;
    eax = MEM32(ebp + -131620);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    ecx = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    SET_LO16(eax, LO16(edx));
    MEM16(ebp + -131622) = LO16(eax);
    eax = MEM32(ebp + -131620);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1E);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8FC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -131628) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -131628); /* subss */
    MEMF(ebp + -131632) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -131620);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x1D);
    ecx = 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(ebp + -131624) = LO16(eax);
    eax = ebp + -131680;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002597A9u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_002597A9: ;
    eax = ebp + -131692;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002597C9u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_002597C9: ;
    eax = ebp + -131704;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002597E9u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_002597E9: ;
    eax = ebp + -131716;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259809u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00259809: ;
    eax = MEM32(ebp + -131620);
    eax = MEM32(eax + 0xC);
    ecx = ebp + -131732;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259824u); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_00259824: ;
    esp = esp - 4;
    eax = MEM32(ebp + -131732);
    MEM32(ebp + -131644) = eax;
    eax = MEM32(ebp + -131728);
    MEM32(ebp + -131640) = eax;
    eax = MEM32(ebp + -131724);
    MEM32(ebp + -131636) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131622);
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259891; /* jl: less (signed <) */

loc_0025985D: ;
    ecx = 0x490931;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x36E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259885u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00259885: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259891u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_00259891: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131624);
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002598D7; /* jl: less (signed <) */

loc_002598A3: ;
    ecx = 0x446AE9;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x36F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002598CBu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_002598CB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002598D7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_002598D7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -131628)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_002598F8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002598E7: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -131628); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_0025992C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebp + -131628)) */

loc_002598F8: ;
    ecx = 0x446B11;
    eax = 0x46B914;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x370;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259920u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_00259920: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025992Cu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025992C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131622);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259992; /* jl: less (signed <) */

loc_00259938: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131622);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    edx = edx + eax;
    ecx = MEM32(ebp + -131620);
    eax = ebp + -131680;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259965u); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_00259965: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131622);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    edx = edx + eax;
    ecx = ebp + -131644;
    eax = ebp + -131692;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259992u); RECOMP_ABI_CALL(0x001D2420u, sub_001D2420); /* call 0x001D2420 */

loc_00259992: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131624);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002599F8; /* jl: less (signed <) */

loc_0025999E: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131624);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    edx = edx + eax;
    ecx = MEM32(ebp + -131620);
    eax = ebp + -131704;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002599CBu); RECOMP_ABI_CALL(0x001D22D0u, sub_001D22D0); /* call 0x001D22D0 */

loc_002599CB: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131624);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    edx = edx + eax;
    ecx = ebp + -131644;
    eax = ebp + -131716;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002599F8u); RECOMP_ABI_CALL(0x001D2420u, sub_001D2420); /* call 0x001D2420 */

loc_002599F8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -131680)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -131628); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131704)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -131632); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -131656) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131676)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -131628); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131700)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -131632); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -131652) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131672)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -131628); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131696)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -131632); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -131648) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131692)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -131628); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131716)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -131632); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -131668) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131688)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -131628); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131712)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -131632); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -131664) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131684)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -131628); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131708)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -131632); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -131660) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -131668)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131664)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131660)); /* movss */
    eax = ebp + -131668;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259B38u); RECOMP_ABI_CALL(0x0025A1E0u, sub_0025A1E0); /* call 0x0025A1E0 */

loc_00259B38: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259B40u); RECOMP_ABI_CALL(0x0025A150u, sub_0025A150); /* call 0x0025A150 */

loc_00259B40: ;
    MEMF(ebp + -131776) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131776)); /* movss */
    MEM32(ebp + -131720) = 0;

loc_00259B58: ;
    eax = MEM32(ebp + -131720);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259D61; /* jge: greater or equal (signed >=) */

loc_00259B67: ;
    ecx = MEM32(ebp + -131720);
    eax = ebp + -131612;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -131736) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -131656)); /* movss */
    eax = MEM32(ebp + -131736);
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00259D4B; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(eax)) */

loc_00259B95: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00259D4B; /* jp: parity (xmm0.f[0] vs MEMF(eax)) */

loc_00259B9B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -131652)); /* movss */
    eax = MEM32(ebp + -131736);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00259D4B; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00259BB3: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00259D4B; /* jp: parity (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00259BB9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -131648)); /* movss */
    eax = MEM32(ebp + -131736);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00259D4B; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(eax + 8)) */

loc_00259BD1: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00259D4B; /* jp: parity (xmm0.f[0] vs MEMF(eax + 8)) */

loc_00259BD7: ;
    eax = MEM32(ebp + -131736);
    eax = ZX8(MEM8(eax + 0x3C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259C8D; /* jge: greater or equal (signed >=) */

loc_00259BEA: ;
    MEM16(ebp + -131738) = 0;

loc_00259BF3: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -131738);
    eax = MEM32(ebp + -131736);
    edx = ZX8(MEM8(eax + 0x3C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(ebp + -131789) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00259C31; /* jge: greater or equal (signed >=) */

loc_00259C10: ;
    eax = MEM32(ebp + -131736);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -131738);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -26);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -131789) = LO8(eax);

loc_00259C31: ;
    SET_LO8(eax, MEM8(ebp + -131789));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00259C3D; /* jne: not equal / not zero */

loc_00259C3B: ;
    goto loc_00259C53;

loc_00259C3D: ;
    goto loc_00259C3F;

loc_00259C3F: ;
    SET_LO16(eax, MEM16(ebp + -131738));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -131738) = LO16(eax);
    goto loc_00259BF3;

loc_00259C53: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131738);
    ecx = MEM32(ebp + -131736);
    ecx = ZX8(MEM8(ecx + 0x3C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259C8B; /* jne: not equal / not zero */

loc_00259C68: ;
    SET_LO16(edx, MEM16(ebp + -26));
    eax = MEM32(ebp + -131736);
    esi = MEM32(ebp + -131736);
    SET_LO8(ecx, MEM8(esi + 0x3C));
    SET_HI8(ecx, LO8(ecx));
    SET_HI8(ecx, HI8(ecx) + 1);
    MEM8(esi + 0x3C) = HI8(ecx);
    ecx = ZX8(LO8(ecx));
    MEM16(eax + ecx * 2 + 0xC) = LO16(edx);

loc_00259C8B: ;
    goto loc_00259C8D;

loc_00259C8D: ;
    eax = MEM32(ebp + -131736);
    eax = ZX8(MEM8(eax + 0x3D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259D49; /* jge: greater or equal (signed >=) */

loc_00259CA0: ;
    MEM16(ebp + -131738) = 0;

loc_00259CA9: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -131738);
    eax = MEM32(ebp + -131736);
    edx = ZX8(MEM8(eax + 0x3D));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(ebp + -131790) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00259CEA; /* jge: greater or equal (signed >=) */

loc_00259CC6: ;
    eax = MEM32(ebp + -131736);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -131738);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x24);
    ecx = ZX16(MEM16(ebp + -131614));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -131790) = LO8(eax);

loc_00259CEA: ;
    SET_LO8(eax, MEM8(ebp + -131790));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00259CF6; /* jne: not equal / not zero */

loc_00259CF4: ;
    goto loc_00259D0C;

loc_00259CF6: ;
    goto loc_00259CF8;

loc_00259CF8: ;
    SET_LO16(eax, MEM16(ebp + -131738));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -131738) = LO16(eax);
    goto loc_00259CA9;

loc_00259D0C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131738);
    ecx = MEM32(ebp + -131736);
    ecx = ZX8(MEM8(ecx + 0x3D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259D47; /* jne: not equal / not zero */

loc_00259D21: ;
    SET_LO16(edx, MEM16(ebp + -131614));
    eax = MEM32(ebp + -131736);
    esi = MEM32(ebp + -131736);
    SET_LO8(ecx, MEM8(esi + 0x3D));
    SET_HI8(ecx, LO8(ecx));
    SET_HI8(ecx, HI8(ecx) + 1);
    MEM8(esi + 0x3D) = HI8(ecx);
    ecx = ZX8(LO8(ecx));
    MEM16(eax + ecx * 2 + 0x24) = LO16(edx);

loc_00259D47: ;
    goto loc_00259D49;

loc_00259D49: ;
    goto loc_00259D61;

loc_00259D4B: ;
    goto loc_00259D4D;

loc_00259D4D: ;
    eax = MEM32(ebp + -131720);
    eax = eax + 1;
    MEM32(ebp + -131720) = eax;
    goto loc_00259B58;

loc_00259D61: ;
    eax = MEM32(ebp + -131720);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259ECC; /* jne: not equal / not zero */

loc_00259D70: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259ECC; /* jge: greater or equal (signed >=) */

loc_00259D7D: ;
    ecx = MEM32(ebp + -16);
    eax = ebp + -131612;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -131744) = eax;
    eax = MEM32(ebp + -131744);
    ecx = MEM32(ebp + -131656);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -131652);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -131648);
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(ebp + -26));
    eax = MEM32(ebp + -131744);
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -131614));
    eax = MEM32(ebp + -131744);
    MEM16(eax + 0x24) = LO16(ecx);
    eax = MEM32(ebp + -131744);
    MEM8(eax + 0x3C) = 1;
    eax = MEM32(ebp + -131744);
    MEM8(eax + 0x3D) = 1;
    edx = 0xCE5D30;
    edx = edx + 8;
    ecx = ebp + -131656;
    eax = ebp + -131756;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259E09u); RECOMP_ABI_CALL(0x0025A220u, sub_0025A220); /* call 0x0025A220 */

loc_00259E09: ;
    eax = ebp + -131756;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259E17u); RECOMP_ABI_CALL(0x0025A150u, sub_0025A150); /* call 0x0025A150 */

loc_00259E17: ;
    MEMF(ebp + -131788) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131788)); /* movss */
    ecx = ebp + -131756;
    eax = 0xCE5D30;
    eax = eax + 8;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259E43u); RECOMP_ABI_CALL(0x0025A280u, sub_0025A280); /* call 0x0025A280 */

loc_00259E43: ;
    MEMF(ebp + -131784) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131784)); /* movss */
    MEMF(ebp + -131760) = xmm0.f[0]; /* movss */
    ecx = ebp + -131756;
    eax = ebp + -131668;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259E71u); RECOMP_ABI_CALL(0x0025A280u, sub_0025A280); /* call 0x0025A280 */

loc_00259E71: ;
    MEMF(ebp + -131780) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -131780)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_00259E99; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00259E87: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -131760)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_00259EAD; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00259E99: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_00259EC3; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_00259EAB: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_00259EC3; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_00259EAD: ;
    eax = MEM32(ebp + -131720);
    MEM32(ebp + -20) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + -131760)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */

loc_00259EC3: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;

loc_00259ECC: ;
    goto loc_00259ECE;

loc_00259ECE: ;
    SET_LO16(eax, MEM16(ebp + -26));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -26) = LO16(eax);
    goto loc_002596D2;

loc_00259EDF: ;
    MEM32(ebp + -131764) = 0;

loc_00259EE9: ;
    eax = MEM32(ebp + -131764);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A13B; /* jge: greater or equal (signed >=) */

loc_00259EF8: ;
    ecx = MEM32(ebp + -131764);
    eax = ebp + -131612;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -131768) = eax;
    eax = MEM32(ebp + -131764);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A0F6; /* jne: not equal / not zero */

loc_00259F1E: ;
    ecx = 0x8BEAC0;
    eax = 0x48AD10;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259F36u); RECOMP_ABI_CALL(0x000FAF90u, sub_000FAF90); /* call 0x000FAF90 */

loc_00259F36: ;
    MEM16(ebp + -131770) = 0;

loc_00259F3F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131770);
    ecx = MEM32(ebp + -131768);
    ecx = ZX8(MEM8(ecx + 0x3C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259FDC; /* jge: greater or equal (signed >=) */

loc_00259F58: ;
    esi = ebp + -538;
    eax = MEM32(ebp + -131768);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -131770);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0xC);
    edi = (uint32_t)(int32_t)SMEM16(ebp + -131770);
    eax = MEM32(ebp + -131768);
    ebx = ZX8(MEM8(eax + 0x3C));
    ebx = ebx - 1;
    eax = 0x2C;
    edx = 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = edx; /* cmove */
    edx = 0x4715D2;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259FADu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_00259FAD: ;
    eax = ebp + -538;
    ecx = 0x8BEAC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259FC5u); RECOMP_ABI_CALL(0x000FA9F0u, sub_000FA9F0); /* call 0x000FA9F0 */

loc_00259FC5: ;
    SET_LO16(eax, MEM16(ebp + -131770));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -131770) = LO16(eax);
    goto loc_00259F3F;

loc_00259FDC: ;
    ecx = 0x8BEAC0;
    eax = 0x45A381;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259FF4u); RECOMP_ABI_CALL(0x000FA9F0u, sub_000FA9F0); /* call 0x000FA9F0 */

loc_00259FF4: ;
    MEM16(ebp + -131770) = 0;

loc_00259FFD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -131770);
    ecx = MEM32(ebp + -131768);
    ecx = ZX8(MEM8(ecx + 0x3D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A09A; /* jge: greater or equal (signed >=) */

loc_0025A016: ;
    esi = ebp + -282;
    eax = MEM32(ebp + -131768);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -131770);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x24);
    edi = (uint32_t)(int32_t)SMEM16(ebp + -131770);
    eax = MEM32(ebp + -131768);
    ebx = ZX8(MEM8(eax + 0x3D));
    ebx = ebx - 1;
    eax = 0x2C;
    edx = 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = edx; /* cmove */
    edx = 0x4715D2;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A06Bu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025A06B: ;
    eax = ebp + -282;
    ecx = 0x8BEAC0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A083u); RECOMP_ABI_CALL(0x000FA9F0u, sub_000FA9F0); /* call 0x000FA9F0 */

loc_0025A083: ;
    SET_LO16(eax, MEM16(ebp + -131770));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -131770) = LO16(eax);
    goto loc_00259FFD;

loc_0025A09A: ;
    ecx = MEM32(ebp + -131768);
    eax = MEM32(0x5823F0);
    edx = 0; /* xor self */
    xmm0 = XMM_SCALAR(MEMF(0x43DA4C)); /* movss */
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A0C9u); RECOMP_ABI_CALL(0x0031EF60u, sub_0031EF60); /* call 0x0031EF60 */

loc_0025A0C9: ;
    edx = MEM32(ebp + -131768);
    eax = MEM32(0x582400);
    ecx = 0; /* xor self */
    ecx = 0x8BEAC0;
    MEM32(esp) = 0;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A0F4u); RECOMP_ABI_CALL(0x00320120u, sub_00320120); /* call 0x00320120 */

loc_0025A0F4: ;
    goto loc_0025A125;

loc_0025A0F6: ;
    ecx = MEM32(ebp + -131768);
    eax = MEM32(0x5823E4);
    edx = 0; /* xor self */
    xmm0 = XMM_SCALAR(MEMF(0x43DA4C)); /* movss */
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A125u); RECOMP_ABI_CALL(0x0031EF60u, sub_0031EF60); /* call 0x0031EF60 */

loc_0025A125: ;
    goto loc_0025A127;

loc_0025A127: ;
    eax = MEM32(ebp + -131764);
    eax = eax + 1;
    MEM32(ebp + -131764) = eax;
    goto loc_00259EE9;

loc_0025A13B: ;
    goto loc_0025A13D;

loc_0025A13D: ;
    esp = esp + 0x202DC;
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
 * sub_0025A150
 * Original: 0x0025A150 - 0x0025A1DB (139 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A150(void)
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

loc_0025A150: ;
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
    PUSH32(esp, 0x0025A164u); RECOMP_ABI_CALL(0x0025A2D0u, sub_0025A2D0); /* call 0x0025A2D0 */

loc_0025A164: ;
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
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0025A1C1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025A19A: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -4); /* divss */
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A1BFu); RECOMP_ABI_CALL(0x0025A300u, sub_0025A300); /* call 0x0025A300 */

loc_0025A1BF: ;
    goto loc_0025A1C9;

loc_0025A1C1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0025A1C9: ;
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
 * sub_0025A1E0
 * Original: 0x0025A1E0 - 0x0025A220 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A1E0(void)
{
    uint32_t ebp = g_ebp;

loc_0025A1E0: ;
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
 * sub_0025A220
 * Original: 0x0025A220 - 0x0025A276 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A220(void)
{
    uint32_t ebp = g_ebp;

loc_0025A220: ;
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
 * sub_0025A280
 * Original: 0x0025A280 - 0x0025A2CD (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A280(void)
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

loc_0025A280: ;
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
 * sub_0025A2D0
 * Original: 0x0025A2D0 - 0x0025A2FB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A2D0(void)
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

loc_0025A2D0: ;
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
    PUSH32(esp, 0x0025A2E5u); RECOMP_ABI_CALL(0x0025A380u, sub_0025A380); /* call 0x0025A380 */

loc_0025A2E5: ;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A2EEu); RECOMP_ABI_CALL(0x0025A350u, sub_0025A350); /* call 0x0025A350 */

loc_0025A2EE: ;
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
 * sub_0025A300
 * Original: 0x0025A300 - 0x0025A350 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A300(void)
{
    uint32_t ebp = g_ebp;

loc_0025A300: ;
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
 * sub_0025A350
 * Original: 0x0025A350 - 0x0025A377 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A350(void)
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

loc_0025A350: ;
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
 * sub_0025A380
 * Original: 0x0025A380 - 0x0025A3B9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A380(void)
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

loc_0025A380: ;
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
 * sub_0025A3C0
 * Original: 0x0025A3C0 - 0x0025A42D (109 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A3C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x443BAE;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A3E6u); RECOMP_ABI_CALL(0x00328600u, sub_00328600); /* call 0x00328600 */

loc_0025A3E6: ;
    MEM32(0xBDD350) = eax;
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A428; /* jne: not equal / not zero */

loc_0025A3F4: ;
    ecx = 0x48D9CE;
    eax = 0x476D74;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x36;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A41Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025A41C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A428u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025A428: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025A430
 * Original: 0x0025A430 - 0x0025A4AB (123 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A430(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A4A6; /* je: equal / zero */

loc_0025A43F: ;
    eax = MEM32(0xBDD350);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A45Eu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0025A45E: ;
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */

loc_0025A4A6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025A4B0
 * Original: 0x0025A4B0 - 0x0025A4B5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A4B0(void)
{
    uint32_t ebp = g_ebp;

loc_0025A4B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025A4C0
 * Original: 0x0025A4C0 - 0x0025A4C5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A4C0(void)
{
    uint32_t ebp = g_ebp;

loc_0025A4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025A4D0
 * Original: 0x0025A4D0 - 0x0025A519 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A4D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebp + -2) = LO16(eax);
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A514; /* je: equal / zero */

loc_0025A4EE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A514; /* jl: less (signed <) */

loc_0025A4F7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A514; /* jge: greater or equal (signed >=) */

loc_0025A500: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(0xBDD350);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEMF(eax + ecx * 4 + 0x64) = xmm0.f[0]; /* movss */

loc_0025A514: ;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025A520
 * Original: 0x0025A520 - 0x0025A573 (83 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A520(void)
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

loc_0025A520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A561; /* je: equal / zero */

loc_0025A53B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A561; /* jl: less (signed <) */

loc_0025A544: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A561; /* jge: greater or equal (signed >=) */

loc_0025A54D: ;
    eax = MEM32(0xBDD350);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4 + 0x64)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0025A561: ;
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
 * sub_0025A580
 * Original: 0x0025A580 - 0x0025A5E1 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0025A580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO8(eax, MEM8(ebp + 8));
    eax = MEM32(0xBDD350);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025A5DC; /* je: equal / zero */

loc_0025A597: ;
    eax = ZX8(MEM8(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0025A5A9; /* jne: not equal / not zero */

loc_0025A5A0: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 0x39)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x39), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0025A5D5; /* jne: not equal / not zero */

loc_0025A5A9: ;
    eax = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A5C6u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0025A5C6: ;
    eax = MEM32(0xBDD350);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x39) = 1;

loc_0025A5D5: ;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x38) = 1;

loc_0025A5DC: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025A5F0
 * Original: 0x0025A5F0 - 0x0025A6D1 (225 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A5F0(void)
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

loc_0025A5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A6CC; /* je: equal / zero */

loc_0025A61A: ;
    eax = MEM32(0xBDD350);
    MEM8(eax + 0x23) = 0;
    eax = MEM32(0xBDD350);
    MEM16(eax + 0x24) = 0;
    eax = MEM32(0xBDD350);
    MEM32(eax + 0x28) = 0;
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    MEM32(eax + 0x34) = 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(0xBDD350);
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0xC));
    eax = MEM32(0xBDD350);
    MEM16(eax + 2) = LO16(ecx);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A69Cu); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025A69C: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x18); /* addss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */

loc_0025A6CC: ;
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
 * sub_0025A6E0
 * Original: 0x0025A6E0 - 0x0025A708 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A6E0(void)
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

loc_0025A6E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A6EBu); RECOMP_ABI_CALL(0x00140740u, sub_00140740); /* call 0x00140740 */

loc_0025A6EB: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
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
 * sub_0025A710
 * Original: 0x0025A710 - 0x0025A818 (264 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A710(void)
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

loc_0025A710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x18));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A813; /* je: equal / zero */

loc_0025A73F: ;
    eax = MEM32(0xBDD350);
    MEM8(eax + 0x23) = 0;
    eax = MEM32(0xBDD350);
    MEM16(eax + 0x24) = 0;
    eax = MEM32(0xBDD350);
    MEM32(eax + 0x28) = 0;
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    MEM32(eax + 0x34) = 0;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A7C6u); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025A7C6: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x1C); /* addss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(ebp + 0x18));
    eax = MEM32(0xBDD350);
    MEM8(eax + 0x20) = LO8(ecx);
    eax = MEM32(0xBDD350);
    MEM8(eax + 0x21) = 0;
    eax = MEM32(0xBDD350);
    MEM8(eax + 0x22) = 0;

loc_0025A813: ;
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
 * sub_0025A820
 * Original: 0x0025A820 - 0x0025AC2C (1036 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A820(void)
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

loc_0025A820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AC1E; /* je: equal / zero */

loc_0025A83C: ;
    eax = MEM32(0xBDD350);
    eax = ZX8(MEM8(eax + 0x38));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AC1E; /* je: equal / zero */

loc_0025A84E: ;
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    eax = MEM32(0xBDD350);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x44); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025A86A; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(eax + 0x44)) */

loc_0025A863: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025A86A; /* jp: parity (xmm0.f[0] vs MEMF(eax + 0x44)) */

loc_0025A865: ;
    goto loc_0025A943;

loc_0025A86A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A86Fu); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025A86F: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x44); /* subss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    eax = MEM32(0xBDD350);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025A8AE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025A8A1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    goto loc_0025A937;

loc_0025A8AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A8B3u); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025A8B3: ;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(0xBDD350);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    eax = MEM32(0xBDD350);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x44); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025A8F9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025A8EA: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    goto loc_0025A92D;

loc_0025A8F9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A8FEu); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025A8FE: ;
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(0xBDD350);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    eax = MEM32(0xBDD350);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x44); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */

loc_0025A92D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */

loc_0025A937: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    goto loc_0025A950;

loc_0025A943: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_0025A950: ;
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(0xBDD350);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x5C); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025A96C; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(eax + 0x5C)) */

loc_0025A965: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025A96C; /* jp: parity (xmm0.f[0] vs MEMF(eax + 0x5C)) */

loc_0025A967: ;
    goto loc_0025AA45;

loc_0025A96C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A971u); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025A971: ;
    MEMF(ebp + -32) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x5C); /* subss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(0xBDD350);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x5C); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025A9B0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025A9A3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    goto loc_0025AA39;

loc_0025A9B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025A9B5u); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025A9B5: ;
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    eax = MEM32(0xBDD350);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x5C); /* subss */
    eax = MEM32(0xBDD350);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x5C); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025A9FB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025A9EC: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    goto loc_0025AA2F;

loc_0025A9FB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AA00u); RECOMP_ABI_CALL(0x0025A6E0u, sub_0025A6E0); /* call 0x0025A6E0 */

loc_0025AA00: ;
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    eax = MEM32(0xBDD350);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x5C); /* subss */
    eax = MEM32(0xBDD350);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x5C); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */

loc_0025AA2F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */

loc_0025AA39: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    goto loc_0025AA52;

loc_0025AA45: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */

loc_0025AA52: ;
    eax = MEM32(0xBDD350);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(0xBDD350);
    eax = eax + 4;
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AA8Du); RECOMP_ABI_CALL(0x001D5B90u, sub_001D5B90); /* call 0x001D5B90 */

loc_0025AA8D: ;
    eax = MEM32(0xBDD350);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(0xBDD350);
    eax = eax + 0xC;
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AAC8u); RECOMP_ABI_CALL(0x001D5BD0u, sub_001D5BD0); /* call 0x001D5BD0 */

loc_0025AAC8: ;
    eax = MEM32(0xBDD350);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    eax = MEM32(0xBDD350);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(0xBDD350);
    eax = eax + 0x10;
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AB03u); RECOMP_ABI_CALL(0x001D5BD0u, sub_001D5BD0); /* call 0x001D5BD0 */

loc_0025AB03: ;
    ecx = MEM32(0xBDD350);
    ecx = ecx + 0x14;
    eax = MEM32(0x582430);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AB25u); RECOMP_ABI_CALL(0x000FA6F0u, sub_000FA6F0); /* call 0x000FA6F0 */

loc_0025AB25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AB4E; /* jne: not equal / not zero */

loc_0025AB2A: ;
    eax = MEM32(0xBDD350);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x582438);
    edx = MEM32(ecx);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x1C) = ecx;
    goto loc_0025AB56;

loc_0025AB4E: ;
    eax = MEM32(0xBDD350);
    MEM32(ebp + 8) = eax;

loc_0025AB56: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025AB85; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0025AB67: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    MEM16(eax + 2) = 0;
    eax = MEM32(ebp + 8);
    MEM16(eax) = 0;
    goto loc_0025ABCC;

loc_0025AB85: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AB8Au); RECOMP_ABI_CALL(0x001C5470u, sub_001C5470); /* call 0x001C5470 */

loc_0025AB8A: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025ABC4; /* jle: less or equal (signed <=) */

loc_0025AB90: ;
    ecx = 0x44971A;
    eax = 0x476D74;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x150;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ABB8u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025ABB8: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ABC4u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025ABC4: ;
    eax = MEM32(0xBDD350);
    MEM32(ebp + 8) = eax;

loc_0025ABCC: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025AC16; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0025ABDD: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025AC16; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0025ABEE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025AC16; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025AC00: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0025AC16: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0025AC24;

loc_0025AC1E: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_0025AC24: ;
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
 * sub_0025AC30
 * Original: 0x0025AC30 - 0x0025AC7D (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AC30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AC30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(0xBDD350);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AC78; /* je: equal / zero */

loc_0025AC51: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_0025AC78: ;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025AC80
 * Original: 0x0025AC80 - 0x0025AE78 (504 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AC80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE73; /* je: equal / zero */

loc_0025AC9C: ;
    _fa = (uint32_t)(MEM32(0xBDD34C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD34C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025ACD9; /* jne: not equal / not zero */

loc_0025ACA5: ;
    ecx = 0x48ACF9;
    eax = 0x476D74;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ACCDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025ACCD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ACD9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025ACD9: ;
    eax = MEM32(0xBDD34C);
    _fa = (uint32_t)(MEM32(eax + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x128), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE5B; /* je: equal / zero */

loc_0025ACEB: ;
    eax = MEM32(0xBDD34C);
    _fa = (uint32_t)(MEM32(eax + 0x138)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x138), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE5B; /* je: equal / zero */

loc_0025ACFD: ;
    eax = MEM32(0xBDD350);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AD1Cu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0025AD1C: ;
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    MEM8(eax + 0x23) = 1;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(0xBDD350);
    MEM16(eax + 0x24) = LO16(ecx);
    eax = MEM32(0xBDD34C);
    eax = MEM32(eax + 0x128);
    MEM32(esp) = 0x6269746D;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ADCFu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0025ADCF: ;
    eax = eax + 0x60;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ADECu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0025ADEC: ;
    ecx = eax;
    eax = MEM32(0xBDD350);
    MEM32(eax + 0x28) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD34C);
    eax = MEM32(eax + 0x138);
    MEM32(esp) = 0x6269746D;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AE32u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_0025AE32: ;
    eax = eax + 0x60;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AE4Fu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_0025AE4F: ;
    ecx = eax;
    eax = MEM32(0xBDD350);
    MEM32(eax + 0x34) = ecx;
    goto loc_0025AE71;

loc_0025AE5B: ;
    eax = 0x4856A8;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AE71u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025AE71: ;
    goto loc_0025AE73;

loc_0025AE73: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025AE80
 * Original: 0x0025AE80 - 0x0025AE97 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AE80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AE80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE95; /* je: equal / zero */

loc_0025AE8C: ;
    eax = MEM32(0xBDD350);
    MEM8(eax + 0x38) = 0;

loc_0025AE95: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025AEA0
 * Original: 0x0025AEA0 - 0x0025AEC2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AEA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fa = (uint32_t)(MEM32(0xBDD350)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD350), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AEC0; /* je: equal / zero */

loc_0025AEB1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(0xBDD350);
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */

loc_0025AEC0: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025AED0
 * Original: 0x0025AED0 - 0x0025AF20 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AED0(void)
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

loc_0025AED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    xmm0 = XMM_SCALAR(MEMF(0x4ADF50)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = MEM32(0xBDD350);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AF0E; /* je: equal / zero */

loc_0025AEF1: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025AF0E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025AF01: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0025AF0E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
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
 * sub_0025AF20
 * Original: 0x0025AF20 - 0x0025AFAE (142 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AF20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x2000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025AF7E; /* jge: greater or equal (signed >=) */

loc_0025AF3B: ;
    _fa = (uint32_t)(MEM32(0xBDD370)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD370), 0x2000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025AF7E; /* jge: greater or equal (signed >=) */

loc_0025AF47: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx) = edx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(0xBDD370);
    eax = eax + 1;
    MEM32(0xBDD370) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x5A1FE2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AF7C; /* jne: not equal / not zero */

loc_0025AF6F: ;
    eax = MEM32(0xCE6310);
    eax = eax + 1;
    MEM32(0xCE6310) = eax;

loc_0025AF7C: ;
    goto loc_0025AFA6;

loc_0025AF7E: ;
    _fa = (uint32_t)(MEM8(0xBDD374)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBDD374), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AFA4; /* jne: not equal / not zero */

loc_0025AF87: ;
    eax = 0x44119D;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AF9Du); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025AF9D: ;
    MEM8(0xBDD374) = 1;

loc_0025AFA4: ;
    goto loc_0025AFA6;

loc_0025AFA6: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025AFB0
 * Original: 0x0025AFB0 - 0x0025B090 (224 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AFB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AFB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM8(ebp + -1) = 1;
    eax = 0; /* xor self */
    eax = 0x446B3A;
    MEM32(esp) = 0x78000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025AFE2u); RECOMP_ABI_CALL(0x000FCB40u, sub_000FCB40); /* call 0x000FCB40 */

loc_0025AFE2: ;
    MEM32(0xBDD358) = eax;
    eax = 0; /* xor self */
    eax = 0x446B3A;
    MEM32(esp) = 0x78000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x61;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B00Fu); RECOMP_ABI_CALL(0x000FCB40u, sub_000FCB40); /* call 0x000FCB40 */

loc_0025B00F: ;
    MEM32(0xBDD360) = eax;
    eax = 0; /* xor self */
    eax = 0x446B3A;
    MEM32(esp) = 0x78000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B03Cu); RECOMP_ABI_CALL(0x000FCB40u, sub_000FCB40); /* call 0x000FCB40 */

loc_0025B03C: ;
    MEM32(0xBDD368) = eax;
    _fa = (uint32_t)(MEM32(0xBDD358)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD358), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B066; /* je: equal / zero */

loc_0025B04A: ;
    _fa = (uint32_t)(MEM32(0xBDD360)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD360), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B066; /* je: equal / zero */

loc_0025B053: ;
    _fa = (uint32_t)(MEM32(0xBDD368)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD368), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B066; /* je: equal / zero */

loc_0025B05C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(0xBDD354) = LO8(eax);
    goto loc_0025B088;

loc_0025B066: ;
    eax = 0x47F76E;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B07Cu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025B07C: ;
    MEM8(ebp + -1) = 0;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(0xBDD354) = LO8(eax);

loc_0025B088: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025B090
 * Original: 0x0025B090 - 0x0025B0BD (45 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B090(void)
{
    uint32_t ebp = g_ebp;

loc_0025B090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    MEM32(0xBDD35C) = 0;
    MEM32(0xBDD364) = 0;
    MEM32(0xBDD36C) = 0;
    MEM32(0xBDD370) = 0;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025B0C0
 * Original: 0x0025B0C0 - 0x0025B0C5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B0C0(void)
{
    uint32_t ebp = g_ebp;

loc_0025B0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025B0D0
 * Original: 0x0025B0D0 - 0x0025B206 (310 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B0D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B0D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM8(0xBDD354)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xBDD354), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B201; /* je: equal / zero */

loc_0025B0E3: ;
    _fa = (uint32_t)(MEM32(0xBDD358)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD358), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B120; /* jne: not equal / not zero */

loc_0025B0EC: ;
    ecx = 0x482670;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x89;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B114u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B114: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B120u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B120: ;
    _fa = (uint32_t)(MEM32(0xBDD360)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD360), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B15D; /* jne: not equal / not zero */

loc_0025B129: ;
    ecx = 0x44F52A;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x8A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B151u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B151: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B15Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B15D: ;
    _fa = (uint32_t)(MEM32(0xBDD368)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD368), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B19A; /* jne: not equal / not zero */

loc_0025B166: ;
    ecx = 0x45A385;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x8B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B18Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B18E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B19Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B19A: ;
    ecx = MEM32(0xBDD358);
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x8D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B1BAu); RECOMP_ABI_CALL(0x000FCD60u, sub_000FCD60); /* call 0x000FCD60 */

loc_0025B1BA: ;
    ecx = MEM32(0xBDD360);
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x8E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B1DAu); RECOMP_ABI_CALL(0x000FCD60u, sub_000FCD60); /* call 0x000FCD60 */

loc_0025B1DA: ;
    ecx = MEM32(0xBDD368);
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x8F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B1FAu); RECOMP_ABI_CALL(0x000FCD60u, sub_000FCD60); /* call 0x000FCD60 */

loc_0025B1FA: ;
    MEM8(0xBDD354) = 0;

loc_0025B201: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025B210
 * Original: 0x0025B210 - 0x0025B215 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B210(void)
{
    uint32_t ebp = g_ebp;

loc_0025B210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025B220
 * Original: 0x0025B220 - 0x0025B7BD (1437 bytes, 323 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B220(void)
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
loc_0025B220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x58)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM8(ebp + -1) = 1;
    eax = ZX8(MEM8(0xBDD354));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B7B8; /* je: equal / zero */

loc_0025B23A: ;
    _fa = (uint32_t)(MEM32(0xBDD370)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD370), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025B7B8; /* jle: less or equal (signed <=) */

loc_0025B247: ;
    eax = ZX8(MEM8(0x5A2005));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B7B8; /* je: equal / zero */

loc_0025B257: ;
    _fa = (uint32_t)(MEM32(0xBDD358)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD358), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0025B294; /* jne: not equal / not zero */

loc_0025B260: ;
    ecx = 0x482670;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x140;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B288u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B288: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B294u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B294: ;
    _fa = (uint32_t)(MEM32(0xBDD360)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD360), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0025B2D1; /* jne: not equal / not zero */

loc_0025B29D: ;
    ecx = 0x44F52A;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x141;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B2C5u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B2C5: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B2D1u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B2D1: ;
    _fa = (uint32_t)(MEM32(0xBDD368)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD368), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0025B30E; /* jne: not equal / not zero */

loc_0025B2DA: ;
    ecx = 0x45A385;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x142;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B302u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B302: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B30Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B30E: ;
    _fa = (uint32_t)(MEM32(0xBDD35C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD35C), 0x2000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025B34E; /* jle: less or equal (signed <=) */

loc_0025B31A: ;
    ecx = 0x48D9EE;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x143;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B342u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B342: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B34Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B34E: ;
    _fa = (uint32_t)(MEM32(0xBDD364)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD364), 0x2000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025B38E; /* jle: less or equal (signed <=) */

loc_0025B35A: ;
    ecx = 0x48AD13;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x144;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B382u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B382: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B38Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B38E: ;
    _fa = (uint32_t)(MEM32(0xBDD36C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD36C), 0x2000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025B3CE; /* jle: less or equal (signed <=) */

loc_0025B39A: ;
    ecx = 0x48AD56;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x145;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B3C2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B3C2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B3CEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B3CE: ;
    _fa = (uint32_t)(MEM32(0xBDD370)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD370), 0x2000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025B40E; /* jle: less or equal (signed <=) */

loc_0025B3DA: ;
    ecx = 0x44C6B2;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x146;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B402u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B402: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B40Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B40E: ;
    edx = MEM32(0xBDD368);
    ecx = MEM32(0xBDD36C);
    eax = 0x25B7C0;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x3C;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B438u); RECOMP_ABI_CALL(0x00427130u, sub_00427130); /* call 0x00427130 */

loc_0025B438: ;
    MEM16(0x5A1F7A) = 0xD;
    _fa = (uint32_t)(MEM32(0xBDD35C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD35C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025B565; /* jle: less or equal (signed <=) */

loc_0025B44E: ;
    eax = (uint32_t)((int32_t)MEM32(0xBDD35C) * (int32_t)3);
    MEM32(esp) = 9;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B465u); RECOMP_ABI_CALL(0x00257FC0u, sub_00257FC0); /* call 0x00257FC0 */

loc_0025B465: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B55F; /* je: equal / zero */

loc_0025B472: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B47Du); RECOMP_ABI_CALL(0x00258010u, sub_00258010); /* call 0x00258010 */

loc_0025B47D: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B538; /* je: equal / zero */

loc_0025B48A: ;
    eax = MEM32(0xBDD35C);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -24) = 0;

loc_0025B4A0: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0025B4F6; /* jge: greater or equal (signed >=) */

loc_0025B4A8: ;
    eax = MEM32(0xBDD358);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -24) * (int32_t)0x3C);
    eax = eax + ecx;
    MEM32(ebp + -28) = eax;
    edx = MEM32(ebp + -12);
    eax = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B4DEu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0025B4DE: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_0025B4A0;

loc_0025B4F6: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B501u); RECOMP_ABI_CALL(0x00258030u, sub_00258030); /* call 0x00258030 */

loc_0025B501: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B50Du); RECOMP_ABI_CALL(0x0027E280u, sub_0027E280); /* call 0x0027E280 */

loc_0025B50D: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -8);
    edx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B531u); RECOMP_ABI_CALL(0x0028C340u, sub_0028C340); /* call 0x0028C340 */

loc_0025B531: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B536u); RECOMP_ABI_CALL(0x002807A0u, sub_002807A0); /* call 0x002807A0 */

loc_0025B536: ;
    goto loc_0025B552;

loc_0025B538: ;
    eax = 0x49669B;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B54Eu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025B54E: ;
    MEM8(ebp + -1) = 0;

loc_0025B552: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B55Du); RECOMP_ABI_CALL(0x00258050u, sub_00258050); /* call 0x00258050 */

loc_0025B55D: ;
    goto loc_0025B563;

loc_0025B55F: ;
    MEM8(ebp + -1) = 0;

loc_0025B563: ;
    goto loc_0025B565;

loc_0025B565: ;
    eax = ZX8(MEM8(ebp + -1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B696; /* je: equal / zero */

loc_0025B572: ;
    _fa = (uint32_t)(MEM32(0xBDD364)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD364), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025B696; /* jle: less or equal (signed <=) */

loc_0025B57F: ;
    eax = MEM32(0xBDD364);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = 9;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B596u); RECOMP_ABI_CALL(0x00257FC0u, sub_00257FC0); /* call 0x00257FC0 */

loc_0025B596: ;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B690; /* je: equal / zero */

loc_0025B5A3: ;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B5AEu); RECOMP_ABI_CALL(0x00258010u, sub_00258010); /* call 0x00258010 */

loc_0025B5AE: ;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B669; /* je: equal / zero */

loc_0025B5BB: ;
    eax = MEM32(0xBDD364);
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -44) = 0;
    MEM32(ebp + -48) = 0;

loc_0025B5D1: ;
    eax = MEM32(ebp + -48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0025B627; /* jge: greater or equal (signed >=) */

loc_0025B5D9: ;
    eax = MEM32(0xBDD360);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -48) * (int32_t)0x3C);
    eax = eax + ecx;
    MEM32(ebp + -52) = eax;
    edx = MEM32(ebp + -36);
    eax = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + -52);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B60Fu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0025B60F: ;
    eax = MEM32(ebp + -52);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    eax = eax + MEM32(ebp + -44);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -48);
    eax = eax + 1;
    MEM32(ebp + -48) = eax;
    goto loc_0025B5D1;

loc_0025B627: ;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B632u); RECOMP_ABI_CALL(0x00258030u, sub_00258030); /* call 0x00258030 */

loc_0025B632: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B63Eu); RECOMP_ABI_CALL(0x0027E280u, sub_0027E280); /* call 0x0027E280 */

loc_0025B63E: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -32);
    edx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B662u); RECOMP_ABI_CALL(0x0028C340u, sub_0028C340); /* call 0x0028C340 */

loc_0025B662: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B667u); RECOMP_ABI_CALL(0x002807A0u, sub_002807A0); /* call 0x002807A0 */

loc_0025B667: ;
    goto loc_0025B683;

loc_0025B669: ;
    eax = 0x49669B;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B67Fu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025B67F: ;
    MEM8(ebp + -1) = 0;

loc_0025B683: ;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B68Eu); RECOMP_ABI_CALL(0x00258050u, sub_00258050); /* call 0x00258050 */

loc_0025B68E: ;
    goto loc_0025B694;

loc_0025B690: ;
    MEM8(ebp + -1) = 0;

loc_0025B694: ;
    goto loc_0025B696;

loc_0025B696: ;
    MEM32(ebp + -56) = 0;

loc_0025B69D: ;
    ecx = ZX8(MEM8(ebp + -1));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -69) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B6BA; /* je: equal / zero */

loc_0025B6AB: ;
    eax = MEM32(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xBDD36C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xBDD36C) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(ebp + -69) = LO8(eax);

loc_0025B6BA: ;
    SET_LO8(eax, MEM8(ebp + -69));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0025B6C6; /* jne: not equal / not zero */

loc_0025B6C1: ;
    goto loc_0025B7AF;

loc_0025B6C6: ;
    eax = MEM32(0xBDD368);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -56) * (int32_t)0x3C);
    eax = eax + ecx;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -60);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    MEM32(esp) = 9;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B6EBu); RECOMP_ABI_CALL(0x00257FC0u, sub_00257FC0); /* call 0x00257FC0 */

loc_0025B6EB: ;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -64), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B79B; /* je: equal / zero */

loc_0025B6F8: ;
    eax = MEM32(ebp + -64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B703u); RECOMP_ABI_CALL(0x00258010u, sub_00258010); /* call 0x00258010 */

loc_0025B703: ;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B774; /* je: equal / zero */

loc_0025B70C: ;
    edx = MEM32(ebp + -68);
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + -60);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B72Cu); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0025B72C: ;
    eax = MEM32(ebp + -64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B737u); RECOMP_ABI_CALL(0x00258030u, sub_00258030); /* call 0x00258030 */

loc_0025B737: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B745u); RECOMP_ABI_CALL(0x0027E280u, sub_0027E280); /* call 0x0027E280 */

loc_0025B745: ;
    ecx = MEM32(ebp + -64);
    eax = MEM32(ebp + -60);
    edx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B76Du); RECOMP_ABI_CALL(0x0028C340u, sub_0028C340); /* call 0x0028C340 */

loc_0025B76D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B772u); RECOMP_ABI_CALL(0x002807A0u, sub_002807A0); /* call 0x002807A0 */

loc_0025B772: ;
    goto loc_0025B78E;

loc_0025B774: ;
    eax = 0x49669B;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B78Au); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025B78A: ;
    MEM8(ebp + -1) = 0;

loc_0025B78E: ;
    eax = MEM32(ebp + -64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B799u); RECOMP_ABI_CALL(0x00258050u, sub_00258050); /* call 0x00258050 */

loc_0025B799: ;
    goto loc_0025B79F;

loc_0025B79B: ;
    MEM8(ebp + -1) = 0;

loc_0025B79F: ;
    goto loc_0025B7A1;

loc_0025B7A1: ;
    eax = MEM32(ebp + -56);
    eax = eax + 1;
    MEM32(ebp + -56) = eax;
    goto loc_0025B69D;

loc_0025B7AF: ;
    MEM16(0x5A1F7A) = 0;

loc_0025B7B8: ;
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025B7C0
 * Original: 0x0025B7C0 - 0x0025B85F (159 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B7C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0025B7C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x38), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025B827; /* jne: not equal / not zero */

loc_0025B7E8: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x38), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025B827; /* jne: not equal / not zero */

loc_0025B7F1: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = MEM32(ebp + -8);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x34); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025B809; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x34)) */

loc_0025B802: ;
    MEM32(ebp + -12) = 1;

loc_0025B809: ;
    eax = MEM32(ebp + -4);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025B825; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025B81E: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;

loc_0025B825: ;
    goto loc_0025B857;

loc_0025B827: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x38), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B83F; /* je: equal / zero */

loc_0025B830: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    eax = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;

loc_0025B83F: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x38), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025B855; /* je: equal / zero */

loc_0025B848: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    eax = eax + MEM32(ebp + -12);
    MEM32(ebp + -12) = eax;

loc_0025B855: ;
    goto loc_0025B857;

loc_0025B857: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025B860
 * Original: 0x0025B860 - 0x0025BBF2 (914 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B860(void)
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

loc_0025B860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(0xBDD354));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BBED; /* je: equal / zero */

loc_0025B882: ;
    eax = ZX8(MEM8(0x5A2005));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BBED; /* je: equal / zero */

loc_0025B892: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B8AA; /* je: equal / zero */

loc_0025B898: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B8AA; /* je: equal / zero */

loc_0025B89E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B8AA; /* je: equal / zero */

loc_0025B8A4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B8DE; /* jne: not equal / not zero */

loc_0025B8AA: ;
    ecx = 0x490959;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B8D2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B8D2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B8DEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B8DE: ;
    _fa = (uint32_t)(MEM32(0xBDD358)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD358), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B91B; /* jne: not equal / not zero */

loc_0025B8E7: ;
    ecx = 0x482670;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B90Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B90F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B91Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B91B: ;
    _fa = (uint32_t)(MEM32(0xBDD360)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD360), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B958; /* jne: not equal / not zero */

loc_0025B924: ;
    ecx = 0x44F52A;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B94Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B94C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B958u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B958: ;
    _fa = (uint32_t)(MEM32(0xBDD368)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD368), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B995; /* jne: not equal / not zero */

loc_0025B961: ;
    ecx = 0x45A385;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B989u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025B989: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025B995u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025B995: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0025B9B7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025B9A4: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025BBEB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025B9B7: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = 0; /* xor self */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEM8(ebp + -53) = LO8(eax);
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025B9EF; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0025B9D0: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025B9EF; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0025B9D2: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    SET_LO8(eax, ((_fca == _fcb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, ((!isnan(_fca) && !isnan(_fcb))) ? 1 : 0); /* setnp */
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    MEM8(ebp + -53) = LO8(eax);

loc_0025B9EF: ;
    SET_LO8(eax, MEM8(ebp + -53));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    edx = ZX8(MEM8(ebp + -1));
    ecx = 0xBDD354;
    eax = ecx;
    eax = eax + 0x18;
    ecx = ecx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BA1Au); RECOMP_ABI_CALL(0x0025AF20u, sub_0025AF20); /* call 0x0025AF20 */

loc_0025BA1A: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BBE9; /* je: equal / zero */

loc_0025BA27: ;
    eax = ZX8(MEM8(ebp + -1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BA40; /* je: equal / zero */

loc_0025BA30: ;
    eax = MEM32(0xBDD360);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)0x3C);
    eax = eax + ecx;
    MEM32(ebp + -60) = eax;
    goto loc_0025BA4E;

loc_0025BA40: ;
    eax = MEM32(0xBDD368);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)0x3C);
    eax = eax + ecx;
    MEM32(ebp + -60) = eax;

loc_0025BA4E: ;
    eax = MEM32(ebp + -60);
    MEM32(ebp + -12) = eax;
    xmm0 = XMM_SCALAR(MEMF(0xCE5D38)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D3C)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D40)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D38)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D3C)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D40)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x30) = 2;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BB11u); RECOMP_ABI_CALL(0x000129B0u, sub_000129B0); /* call 0x000129B0 */

loc_0025BB11: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BB24u); RECOMP_ABI_CALL(0x000129B0u, sub_000129B0); /* call 0x000129B0 */

loc_0025BB24: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x1C) = ecx;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BB47u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025BB47: ;
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BB6Fu); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025BB6F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025BBAB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BB81: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BB9Cu); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025BB9C: ;
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    goto loc_0025BBD3;

loc_0025BBAB: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BBC6u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025BBC6: ;
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */

loc_0025BBD3: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    eax = MEM32(ebp + -12);
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(ebp + -1));
    eax = MEM32(ebp + -12);
    MEM8(eax + 0x38) = LO8(ecx);

loc_0025BBE9: ;
    goto loc_0025BBEB;

loc_0025BBEB: ;
    goto loc_0025BBED;

loc_0025BBED: ;
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0025BC00
 * Original: 0x0025BC00 - 0x0025BC4D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BC00(void)
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

loc_0025BC00: ;
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
 * sub_0025BC50
 * Original: 0x0025BC50 - 0x0025C1A2 (1362 bytes, 342 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BC50(void)
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

loc_0025BC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x88;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(0xBDD354));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C19A; /* je: equal / zero */

loc_0025BC7B: ;
    eax = ZX8(MEM8(0x5A2005));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C19A; /* je: equal / zero */

loc_0025BC8B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCAF; /* je: equal / zero */

loc_0025BC91: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCAF; /* je: equal / zero */

loc_0025BC97: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCAF; /* je: equal / zero */

loc_0025BC9D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCAF; /* je: equal / zero */

loc_0025BCA3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCAF; /* je: equal / zero */

loc_0025BCA9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025BCE3; /* jne: not equal / not zero */

loc_0025BCAF: ;
    ecx = 0x44F542;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE5;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BCD7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025BCD7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BCE3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025BCE3: ;
    _fa = (uint32_t)(MEM32(0xBDD358)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD358), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025BD20; /* jne: not equal / not zero */

loc_0025BCEC: ;
    ecx = 0x482670;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BD14u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025BD14: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BD20u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025BD20: ;
    _fa = (uint32_t)(MEM32(0xBDD360)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD360), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025BD5D; /* jne: not equal / not zero */

loc_0025BD29: ;
    ecx = 0x44F52A;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE7;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BD51u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025BD51: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BD5Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025BD5D: ;
    _fa = (uint32_t)(MEM32(0xBDD368)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDD368), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025BD9A; /* jne: not equal / not zero */

loc_0025BD66: ;
    ecx = 0x45A385;
    eax = 0x446B3A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BD8Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025BD8E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BD9Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025BD9A: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0025BDCB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BDA9: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_0025BDCB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BDB8: ;
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025C198; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BDCB: ;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = 0; /* xor self */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEM8(ebp + -89) = LO8(eax);
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025BE1E; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BDE4: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025BE1E; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BDE6: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = 0; /* xor self */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEM8(ebp + -89) = LO8(eax);
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_0025BE1E; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BDFF: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_0025BE1E; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_0025BE01: ;
    eax = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    SET_LO8(eax, ((_fca == _fcb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, ((!isnan(_fca) && !isnan(_fcb))) ? 1 : 0); /* setnp */
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    MEM8(ebp + -89) = LO8(eax);

loc_0025BE1E: ;
    SET_LO8(eax, MEM8(ebp + -89));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    edx = ZX8(MEM8(ebp + -1));
    ecx = 0xBDD354;
    eax = ecx;
    eax = eax + 0x18;
    ecx = ecx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BE49u); RECOMP_ABI_CALL(0x0025AF20u, sub_0025AF20); /* call 0x0025AF20 */

loc_0025BE49: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C196; /* je: equal / zero */

loc_0025BE56: ;
    eax = ZX8(MEM8(ebp + -1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BE6F; /* je: equal / zero */

loc_0025BE5F: ;
    eax = MEM32(0xBDD358);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)0x3C);
    eax = eax + ecx;
    MEM32(ebp + -96) = eax;
    goto loc_0025BE7D;

loc_0025BE6F: ;
    eax = MEM32(0xBDD368);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)0x3C);
    eax = eax + ecx;
    MEM32(ebp + -96) = eax;

loc_0025BE7D: ;
    eax = MEM32(ebp + -96);
    MEM32(ebp + -12) = eax;
    xmm0 = XMM_SCALAR(MEMF(0xCE5D38)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D3C)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D40)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D38)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D3C)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D40)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D38)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D3C)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0xCE5D40)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x30) = 3;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BF95u); RECOMP_ABI_CALL(0x000129B0u, sub_000129B0); /* call 0x000129B0 */

loc_0025BF95: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BFA8u); RECOMP_ABI_CALL(0x000129B0u, sub_000129B0); /* call 0x000129B0 */

loc_0025BFA8: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BFBBu); RECOMP_ABI_CALL(0x000129B0u, sub_000129B0); /* call 0x000129B0 */

loc_0025BFBB: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x2C) = ecx;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025BFDEu); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025BFDE: ;
    MEMF(ebp + -60) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C006u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C006: ;
    MEMF(ebp + -56) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C02Eu); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C02E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025C06A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025C040: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C05Bu); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C05B: ;
    MEMF(ebp + -68) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    MEMF(ebp + -108) = xmm0.f[0]; /* movss */
    goto loc_0025C092;

loc_0025C06A: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C085u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C085: ;
    MEMF(ebp + -64) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    MEMF(ebp + -108) = xmm0.f[0]; /* movss */

loc_0025C092: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -108)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025C158; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025C0A5: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C0C0u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C0C0: ;
    MEMF(ebp + -80) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    MEMF(ebp + -112) = xmm0.f[0]; /* movss */
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C0E8u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C0E8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    MEMF(ebp + -76) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0025C124; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025C0FA: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C115u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C115: ;
    MEMF(ebp + -88) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */
    goto loc_0025C14C;

loc_0025C124: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C13Fu); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C13F: ;
    MEMF(ebp + -84) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    MEMF(ebp + -116) = xmm0.f[0]; /* movss */

loc_0025C14C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    MEMF(ebp + -120) = xmm0.f[0]; /* movss */
    goto loc_0025C180;

loc_0025C158: ;
    ecx = 0xCE5D30;
    ecx = ecx + 8;
    ecx = ecx + 0xC;
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C173u); RECOMP_ABI_CALL(0x0025BC00u, sub_0025BC00); /* call 0x0025BC00 */

loc_0025C173: ;
    MEMF(ebp + -72) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    MEMF(ebp + -120) = xmm0.f[0]; /* movss */

loc_0025C180: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -120)); /* movss */
    eax = MEM32(ebp + -12);
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(ebp + -1));
    eax = MEM32(ebp + -12);
    MEM8(eax + 0x38) = LO8(ecx);

loc_0025C196: ;
    goto loc_0025C198;

loc_0025C198: ;
    goto loc_0025C19A;

loc_0025C19A: ;
    esp = esp + 0x88;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0025C1B0
 * Original: 0x0025C1B0 - 0x0025C1E6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C1B0(void)
{
    uint32_t ebp = g_ebp;

loc_0025C1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C1E0u); RECOMP_ABI_CALL(0x0025B860u, sub_0025B860); /* call 0x0025B860 */

loc_0025C1E0: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025C1F0
 * Original: 0x0025C1F0 - 0x0025C23B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C1F0(void)
{
    uint32_t ebp = g_ebp;

loc_0025C1F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C233u); RECOMP_ABI_CALL(0x0025BC50u, sub_0025BC50); /* call 0x0025BC50 */

loc_0025C233: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025C550
 * Original: 0x0025C550 - 0x0025C5B2 (98 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM8(ebp + -1) = 1;
    eax = 0; /* xor self */
    eax = 0x46B93B;
    MEM32(esp) = 0x24000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x29;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C582u); RECOMP_ABI_CALL(0x000FCB40u, sub_000FCB40); /* call 0x000FCB40 */

loc_0025C582: ;
    MEM32(0xBDDAB8) = eax;
    _fa = (uint32_t)(MEM32(0xBDDAB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDDAB8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C5AA; /* jne: not equal / not zero */

loc_0025C590: ;
    eax = 0x454B09;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C5A6u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025C5A6: ;
    MEM8(ebp + -1) = 0;

loc_0025C5AA: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025C5C0
 * Original: 0x0025C5C0 - 0x0025C5EB (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C5C0(void)
{
    uint32_t ebp = g_ebp;

loc_0025C5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xCE61D0;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x170;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C5E6u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_0025C5E6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025C5F0
 * Original: 0x0025C5F0 - 0x0025C8A2 (690 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C5F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0025C5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x48)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(0x5A1FE2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025C894; /* je: equal / zero */

loc_0025C609: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025C894; /* je: equal / zero */

loc_0025C613: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C618u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_0025C618: ;
    MEM32(ebp + -4) = eax;
    SET_LO16(eax, MEM16(0xBDDBC8));
    MEM16(ebp + -6) = LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -6), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0025C861; /* je: equal / zero */

loc_0025C630: ;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(0xBDDAD8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(0xBDDAD8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0xBDDBC8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM16(ebp + -22) = LO16(eax);

loc_0025C656: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025C6EA; /* jle: less or equal (signed <=) */

loc_0025C663: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025C6C0; /* jle: less or equal (signed <=) */

loc_0025C66C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = MEM32(eax * 4 + 0xBDDAD8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -22);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx * 4 + 0xBDDAD8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0025C698; /* jbe: below or equal (unsigned <=) */

loc_0025C690: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -32) = eax;
    goto loc_0025C69E;

loc_0025C698: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -32) = eax;

loc_0025C69E: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0025C6B4; /* jbe: below or equal (unsigned <=) */

loc_0025C6AC: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -36) = eax;
    goto loc_0025C6BA;

loc_0025C6B4: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -36) = eax;

loc_0025C6BA: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -16) = eax;

loc_0025C6C0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = MEM32(eax * 4 + 0xBDDAD8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -22);
    MEM32(eax * 4 + 0xBDDAD8) = ecx;
    SET_LO16(eax, MEM16(ebp + -22));
    SET_LO16(eax, LO16(eax) + 0xFFFFFFFFu);
    MEM16(ebp + -22) = LO16(eax);
    goto loc_0025C656;

loc_0025C6EA: ;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(0xBDDAD8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0025C704; /* jbe: below or equal (unsigned <=) */

loc_0025C6FC: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -40) = eax;
    goto loc_0025C70E;

loc_0025C704: ;
    eax = 1;
    MEM32(ebp + -40) = eax;
    goto loc_0025C70E;

loc_0025C70E: ;
    eax = MEM32(ebp + -40);
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO16(ecx, MEM16(ebp + -6));
    eax = MEM32(ebp + 8);
    MEM16(eax + 4) = LO16(ecx);
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    ecx = MEM32(ecx * 4 + 0xBDDAD4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -20) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0025C788; /* jbe: below or equal (unsigned <=) */

loc_0025C780: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -48) = eax;
    goto loc_0025C792;

loc_0025C788: ;
    eax = 1;
    MEM32(ebp + -48) = eax;
    goto loc_0025C792;

loc_0025C792: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + -48);
    xmm1 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm2 = XMM_MEM(0x43ECA0); /* movaps */
    xmm1 = XMM_OR(xmm1, xmm2); /* por */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0025C7D3; /* jbe: below or equal (unsigned <=) */

loc_0025C7CB: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -52) = eax;
    goto loc_0025C7DD;

loc_0025C7D3: ;
    eax = 1;
    MEM32(ebp + -52) = eax;
    goto loc_0025C7DD;

loc_0025C7DD: ;
    eax = MEM32(ebp + -52);
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0025C821; /* jbe: below or equal (unsigned <=) */

loc_0025C819: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -56) = eax;
    goto loc_0025C82B;

loc_0025C821: ;
    eax = 1;
    MEM32(ebp + -56) = eax;
    goto loc_0025C82B;

loc_0025C82B: ;
    eax = MEM32(ebp + -56);
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    xmm0 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_0025C861: ;
    eax = MEM32(ebp + -4);
    MEM32(0xBDDAD8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0025C87F; /* jle: less or equal (signed <=) */

loc_0025C875: ;
    eax = 0x3C;
    MEM32(ebp + -60) = eax;
    goto loc_0025C889;

loc_0025C87F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    eax = eax + 1;
    MEM32(ebp + -60) = eax;

loc_0025C889: ;
    eax = MEM32(ebp + -60);
    MEM16(0xBDDBC8) = LO16(eax);
    goto loc_0025C89D;

loc_0025C894: ;
    MEM16(0xBDDBC8) = 0;

loc_0025C89D: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025C8B0
 * Original: 0x0025C8B0 - 0x0025C8E6 (54 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C8B0(void)
{
    uint32_t ebp = g_ebp;

loc_0025C8B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM8(0x5A1FE0) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C8C2u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_0025C8C2: ;
    MEM32(0xBDDAC0) = eax;
    MEM32(0xBDDAC4) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x5A1F90)); /* movsd */
    MEMD(0xBDDAC8) = xmm0.d[0]; /* movsd */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025C8F0
 * Original: 0x0025C8F0 - 0x0025CA05 (277 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C8F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0025C8F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C9FD; /* je: equal / zero */

loc_0025C90D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C9FD; /* je: equal / zero */

loc_0025C917: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C933; /* jne: not equal / not zero */

loc_0025C922: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax + 2;
    MEM32(ebp + -4) = eax;
    goto loc_0025C9FB;

loc_0025C933: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C9F9; /* jne: not equal / not zero */

loc_0025C942: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C956; /* je: equal / zero */

loc_0025C948: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    goto loc_0025C9F7;

loc_0025C956: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)MEM32(eax + 4) * (int32_t)3);
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -14) = 0xFFFF;
    edx = MEM32(0xBDDAB8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = (uint32_t)((int32_t)eax * (int32_t)3);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C98Du); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0025C98D: ;
    edx = MEM32(0xBDDAB8);
    ecx = MEM32(ebp + -8);
    eax = 0x25CA10;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C9ACu); RECOMP_ABI_CALL(0x00101F70u, sub_00101F70); /* call 0x00101F70 */

loc_0025C9AC: ;
    MEM32(ebp + -12) = 0;

loc_0025C9B3: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025C9F5; /* jge: greater or equal (signed >=) */

loc_0025C9BB: ;
    eax = MEM32(0xBDDAB8);
    ecx = MEM32(ebp + -12);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    MEM16(ebp + -16) = LO16(eax);
    eax = ZX16(MEM16(ebp + -14));
    ecx = ZX16(MEM16(ebp + -16));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C9E8; /* je: equal / zero */

loc_0025C9D7: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(ebp + -14) = LO16(eax);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;

loc_0025C9E8: ;
    goto loc_0025C9EA;

loc_0025C9EA: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0025C9B3;

loc_0025C9F5: ;
    goto loc_0025C9F7;

loc_0025C9F7: ;
    goto loc_0025C9F9;

loc_0025C9F9: ;
    goto loc_0025C9FB;

loc_0025C9FB: ;
    goto loc_0025C9FD;

loc_0025C9FD: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025CA10
 * Original: 0x0025CA10 - 0x0025CA4E (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CA10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025CA2E; /* jle: less or equal (signed <=) */

loc_0025CA28: ;
    MEM8(ebp + -1) = 1;
    goto loc_0025CA46;

loc_0025CA2E: ;
    eax = ZX16(MEM16(ebp + 8));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025CA40; /* jge: greater or equal (signed >=) */

loc_0025CA3A: ;
    MEM8(ebp + -1) = 0;
    goto loc_0025CA46;

loc_0025CA40: ;
    goto loc_0025CA42;

loc_0025CA42: ;
    MEM8(ebp + -1) = 0;

loc_0025CA46: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025CA50
 * Original: 0x0025CA50 - 0x0025CBEB (411 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CA50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0025CA50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025CBAD; /* jl: less (signed <) */

loc_0025CA70: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CA7Bu); RECOMP_ABI_CALL(0x00257F60u, sub_00257F60); /* call 0x00257F60 */

loc_0025CA7B: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CBAB; /* je: equal / zero */

loc_0025CA88: ;
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x10) * (int32_t)3);
    MEM32(ebp + -12) = eax;
    MEM16(ebp + -14) = 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x6000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025CAD2; /* jl: less (signed <) */

loc_0025CA9E: ;
    ecx = 0x4966E0;
    eax = 0x46B93B;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xD9;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CAC6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025CAC6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CAD2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025CAD2: ;
    _fa = (uint32_t)(MEM32(0xBDDAB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDDAB8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CB0F; /* jne: not equal / not zero */

loc_0025CADB: ;
    ecx = 0x4715D7;
    eax = 0x46B93B;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xDA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CB03u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025CB03: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CB0Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025CB0F: ;
    edx = MEM32(0xBDDAB8);
    ecx = MEM32(ebp + -8);
    eax = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)3);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0x10);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = (uint32_t)((int32_t)eax * (int32_t)3);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CB38u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_0025CB38: ;
    edx = MEM32(0xBDDAB8);
    ecx = MEM32(ebp + -12);
    eax = 0x25CA10;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CB57u); RECOMP_ABI_CALL(0x00101F70u, sub_00101F70); /* call 0x00101F70 */

loc_0025CB57: ;
    MEM32(ebp + -20) = 0;

loc_0025CB5E: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025CBA0; /* jge: greater or equal (signed >=) */

loc_0025CB66: ;
    eax = MEM32(0xBDDAB8);
    ecx = MEM32(ebp + -20);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    MEM16(ebp + -22) = LO16(eax);
    eax = ZX16(MEM16(ebp + -14));
    ecx = ZX16(MEM16(ebp + -22));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CB93; /* je: equal / zero */

loc_0025CB82: ;
    SET_LO16(eax, MEM16(ebp + -22));
    MEM16(ebp + -14) = LO16(eax);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;

loc_0025CB93: ;
    goto loc_0025CB95;

loc_0025CB95: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_0025CB5E;

loc_0025CBA0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CBABu); RECOMP_ABI_CALL(0x00257F80u, sub_00257F80); /* call 0x00257F80 */

loc_0025CBAB: ;
    goto loc_0025CBE3;

loc_0025CBAD: ;
    eax = 0; /* xor self */
    eax = eax - MEM32(ebp + 8);
    MEM16(ebp + -24) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CBC8; /* je: equal / zero */

loc_0025CBBF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CBDA; /* jne: not equal / not zero */

loc_0025CBC8: ;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -24);
    ecx = ecx - 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -4) = eax;
    goto loc_0025CBE1;

loc_0025CBDA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -24);
    MEM32(ebp + -4) = eax;

loc_0025CBE1: ;
    goto loc_0025CBE3;

loc_0025CBE3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025CBF0
 * Original: 0x0025CBF0 - 0x0025E7DC (7148 bytes, 1377 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CBF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _sbb_result = 0;
    int _sbb_sf = 0, _sbb_of = 0;
    (void)_sbb_result; (void)_sbb_sf; (void)_sbb_of;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
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

loc_0025CBF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x32DC));
    esp = esp - 0x32DC;
    _fa = (uint32_t)(MEM16(0x5A1FE2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5A1FE2), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025E41A; /* je: equal / zero */

loc_0025CC0A: ;
    eax = ebp + -12304;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CC2Au); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0025CC2A: ;
    MEM16(ebp + -12306) = 0xFFFC;
    MEM16(ebp + -12308) = 0xFFFF;
    SET_LO16(eax, MEM16(0x5A1F86));
    MEM16(ebp + -12310) = LO16(eax);
    eax = MEM32(0x4AE170);
    MEM32(ebp + -12322) = eax;
    eax = MEM32(0x4AE174);
    MEM32(ebp + -12318) = eax;
    eax = MEM32(0x4AE178);
    MEM32(ebp + -12314) = eax;
    eax = MEM32(0x43EC20);
    MEM32(ebp + -12340) = eax;
    eax = MEM32(0x43EC24);
    MEM32(ebp + -12336) = eax;
    eax = MEM32(0x43EC28);
    MEM32(ebp + -12332) = eax;
    eax = MEM32(0x43EC2C);
    MEM32(ebp + -12328) = eax;
    eax = MEM32(0x43ECE0);
    MEM32(ebp + -12356) = eax;
    eax = MEM32(0x43ECE4);
    MEM32(ebp + -12352) = eax;
    eax = MEM32(0x43ECE8);
    MEM32(ebp + -12348) = eax;
    eax = MEM32(0x43ECEC);
    MEM32(ebp + -12344) = eax;
    eax = MEM32(0x43ECE0);
    MEM32(ebp + -12372) = eax;
    eax = MEM32(0x43ECE4);
    MEM32(ebp + -12368) = eax;
    eax = MEM32(0x43ECE8);
    MEM32(ebp + -12364) = eax;
    eax = MEM32(0x43ECEC);
    MEM32(ebp + -12360) = eax;
    eax = MEM32(0xCE61F4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6204))) >> 32) & 1);
    eax = eax + MEM32(0xCE6204);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6210))) >> 32) & 1);
    eax = eax + MEM32(0xCE6210);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6230))) >> 32) & 1);
    eax = eax + MEM32(0xCE6230);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE623C))) >> 32) & 1);
    eax = eax + MEM32(0xCE623C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6248))) >> 32) & 1);
    eax = eax + MEM32(0xCE6248);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6254))) >> 32) & 1);
    eax = eax + MEM32(0xCE6254);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6260))) >> 32) & 1);
    eax = eax + MEM32(0xCE6260);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE626C))) >> 32) & 1);
    eax = eax + MEM32(0xCE626C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE627C))) >> 32) & 1);
    eax = eax + MEM32(0xCE627C);
    MEM32(ebp + -12376) = eax;
    eax = MEM32(0xCE61F8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6208))) >> 32) & 1);
    eax = eax + MEM32(0xCE6208);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6214))) >> 32) & 1);
    eax = eax + MEM32(0xCE6214);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6234))) >> 32) & 1);
    eax = eax + MEM32(0xCE6234);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6240))) >> 32) & 1);
    eax = eax + MEM32(0xCE6240);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE624C))) >> 32) & 1);
    eax = eax + MEM32(0xCE624C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6258))) >> 32) & 1);
    eax = eax + MEM32(0xCE6258);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6264))) >> 32) & 1);
    eax = eax + MEM32(0xCE6264);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6270))) >> 32) & 1);
    eax = eax + MEM32(0xCE6270);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6280))) >> 32) & 1);
    eax = eax + MEM32(0xCE6280);
    MEM32(ebp + -12380) = eax;
    eax = MEM32(0xCE61FC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE620C))) >> 32) & 1);
    eax = eax + MEM32(0xCE620C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6218))) >> 32) & 1);
    eax = eax + MEM32(0xCE6218);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6238))) >> 32) & 1);
    eax = eax + MEM32(0xCE6238);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6244))) >> 32) & 1);
    eax = eax + MEM32(0xCE6244);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6250))) >> 32) & 1);
    eax = eax + MEM32(0xCE6250);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE625C))) >> 32) & 1);
    eax = eax + MEM32(0xCE625C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6268))) >> 32) & 1);
    eax = eax + MEM32(0xCE6268);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6278))) >> 32) & 1);
    eax = eax + MEM32(0xCE6278);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE6284))) >> 32) & 1);
    eax = eax + MEM32(0xCE6284);
    MEM32(ebp + -12384) = eax;
    eax = MEM32(0xCE62A8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE62B4))) >> 32) & 1);
    eax = eax + MEM32(0xCE62B4);
    MEM32(ebp + -12388) = eax;
    eax = MEM32(0xCE62AC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE62B8))) >> 32) & 1);
    eax = eax + MEM32(0xCE62B8);
    MEM32(ebp + -12392) = eax;
    eax = MEM32(0xCE62B0);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE62C0))) >> 32) & 1);
    eax = eax + MEM32(0xCE62C0);
    MEM32(ebp + -12396) = eax;
    eax = MEM32(ebp + -12376);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -12388))) >> 32) & 1);
    eax = eax + MEM32(ebp + -12388);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE62C8))) >> 32) & 1);
    eax = eax + MEM32(0xCE62C8);
    MEM32(ebp + -12400) = eax;
    eax = MEM32(ebp + -12380);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -12392))) >> 32) & 1);
    eax = eax + MEM32(ebp + -12392);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE62CC))) >> 32) & 1);
    eax = eax + MEM32(0xCE62CC);
    MEM32(ebp + -12404) = eax;
    eax = MEM32(ebp + -12384);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -12396))) >> 32) & 1);
    eax = eax + MEM32(ebp + -12396);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xCE62D0))) >> 32) & 1);
    eax = eax + MEM32(0xCE62D0);
    MEM32(ebp + -12408) = eax;
    MEM16(ebp + -12418) = 0;

loc_0025CE35: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0025CE75; /* jge: greater or equal (signed >=) */

loc_0025CE41: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12418);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + eax * 2 + -12322);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    MEM16(ebp + eax * 2 + -12322) = LO16(ecx);
    SET_LO16(eax, MEM16(ebp + -12418));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12418) = LO16(eax);
    goto loc_0025CE35;

loc_0025CE75: ;
    eax = MEM32(0x5A1F84);
    MEM32(ebp + -12416) = eax;
    eax = MEM32(0x5A1F88);
    MEM32(ebp + -12412) = eax;
    eax = ebp + -12416;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CEABu); RECOMP_ABI_CALL(0x001CF6F0u, sub_001CF6F0); /* call 0x001CF6F0 */

loc_0025CEAB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 5;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CEE1u); RECOMP_ABI_CALL(0x00185B60u, sub_00185B60); /* call 0x00185B60 */

loc_0025CEE1: ;
    edx = ebp + -12300;
    eax = (uint32_t)(int32_t)SMEM16(0xCE61D4);
    ecx = 0x490976;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CF04u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025CF04: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CF28u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025CF28: ;
    eax = ebp + -12356;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CF36u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025CF36: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CF70u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025CF70: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    _fa = (uint32_t)(MEM8(0x5A1FE0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5A1FE0), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025D084; /* je: equal / zero */

loc_0025CF94: ;
    eax = MEM32(0x5A1F94);
    ecx = MEM32(0x5A1F90);
    edx = MEM32(0xBDDACC);
    esi = MEM32(0xBDDAC8);
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
    MEM32(ebp + -12432) = ecx;
    MEM32(ebp + -12428) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CFC0u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_0025CFC0: ;
    ecx = eax;
    edx = MEM32(0xBDDAC4);
    esi = MEM32(0xBDDAC0);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
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
    MEM32(ebp + -12440) = ecx;
    MEM32(ebp + -12436) = eax;
    ecx = ebp + -12300;
    xmm0 = XMM_SCALAR(MEMF(0xCE61D0)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0xCE61D8)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    fp_push((double)SMEM64(ebp + -12432)); /* fild */
    MEMF(ebp + -12696) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12696)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    fp_push((double)SMEM64(ebp + -12440)); /* fild */
    MEMF(ebp + -12692) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -12692)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0xCE61DC)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0xCE61E0)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x452572;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D082u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D082: ;
    goto loc_0025D0E4;

loc_0025D084: ;
    ecx = ebp + -12300;
    xmm0 = XMM_SCALAR(MEMF(0xCE61D0)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0xCE61D8)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0xCE61DC)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_SCALAR(MEMF(0xCE61E0)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x48268C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D0E4u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D0E4: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D108u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D108: ;
    eax = ebp + -12340;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D116u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025D116: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D150u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D150: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(0x5A1FE2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025D34D; /* jne: not equal / not zero */

loc_0025D177: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D19Bu); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D19B: ;
    eax = ebp + -12340;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D1A9u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025D1A9: ;
    ebx = ebp + -12300;
    esi = MEM32(0xCE61E4);
    edx = MEM32(0xCE61E8);
    ecx = MEM32(0xCE61EC);
    eax = MEM32(0xCE61F0);
    edi = 0x474181;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D1E8u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D1E8: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D222u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D222: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    edi = ebp + -12300;
    edx = MEM32(0xCE6330);
    ecx = MEM32(0xCE6334);
    eax = MEM32(0xCE6338);
    esi = 0x4856F2;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D26Eu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D26E: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D2A8u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D2A8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    esi = ebp + -12300;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D2CAu); RECOMP_ABI_CALL(0x00148F70u, sub_00148F70); /* call 0x00148F70 */

loc_0025D2CA: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -12716) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D2D6u); RECOMP_ABI_CALL(0x001C5470u, sub_001C5470); /* call 0x001C5470 */

loc_0025D2D6: ;
    ecx = MEM32(ebp + -12716);
    eax = SX16(eax); /* cwde */
    edx = 0x47F7A7;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D2F7u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D2F7: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D331u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D331: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    goto loc_0025E3F6;

loc_0025D34D: ;
    eax = (uint32_t)(int32_t)SMEM16(0x5A1FE2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025DCEC; /* jne: not equal / not zero */

loc_0025D35D: ;
    ecx = ebp + -12300;
    eax = 0x49969B;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D375u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D375: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D399u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D399: ;
    eax = ebp + -12356;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D3A7u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025D3A7: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D3E1u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D3E1: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    edi = ebp + -12300;
    edx = MEM32(ebp + -12400);
    ecx = MEM32(ebp + -12404);
    eax = MEM32(ebp + -12408);
    esi = 0x46B973;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D42Eu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D42E: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D452u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D452: ;
    eax = ebp + -12340;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D460u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025D460: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D49Au); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D49A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    edi = ebp + -12300;
    edx = MEM32(ebp + -12376);
    ecx = MEM32(ebp + -12380);
    eax = MEM32(ebp + -12384);
    esi = 0x46307F;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D4E7u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D4E7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x19)) >> 32) & 1);
    eax = eax + 0x19;
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D50Eu); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D50E: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D548u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D548: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    eax = ebp + -12300;
    MEM32(ebp + -12848) = eax;
    eax = MEM32(0xCE61F4);
    MEM32(ebp + -12840) = eax;
    eax = MEM32(0xCE61F8);
    MEM32(ebp + -12836) = eax;
    eax = MEM32(0xCE61FC);
    MEM32(ebp + -12832) = eax;
    eax = MEM32(0xCE6200);
    MEM32(ebp + -12828) = eax;
    eax = MEM32(0xCE6204);
    MEM32(ebp + -12824) = eax;
    eax = MEM32(0xCE6208);
    MEM32(ebp + -12820) = eax;
    eax = MEM32(0xCE620C);
    MEM32(ebp + -12816) = eax;
    eax = MEM32(0xCE6210);
    MEM32(ebp + -12812) = eax;
    eax = MEM32(0xCE6214);
    MEM32(ebp + -12808) = eax;
    eax = MEM32(0xCE6218);
    MEM32(ebp + -12804) = eax;
    eax = MEM32(0xCE6230);
    MEM32(ebp + -12800) = eax;
    eax = MEM32(0xCE6234);
    MEM32(ebp + -12796) = eax;
    eax = MEM32(0xCE6238);
    MEM32(ebp + -12792) = eax;
    eax = MEM32(0xCE623C);
    MEM32(ebp + -12788) = eax;
    eax = MEM32(0xCE6240);
    MEM32(ebp + -12784) = eax;
    eax = MEM32(0xCE6244);
    MEM32(ebp + -12780) = eax;
    eax = MEM32(0xCE6248);
    MEM32(ebp + -12776) = eax;
    eax = MEM32(0xCE624C);
    MEM32(ebp + -12772) = eax;
    eax = MEM32(0xCE6250);
    MEM32(ebp + -12768) = eax;
    eax = MEM32(0xCE6254);
    MEM32(ebp + -12764) = eax;
    eax = MEM32(0xCE6258);
    MEM32(ebp + -12760) = eax;
    eax = MEM32(0xCE625C);
    MEM32(ebp + -12756) = eax;
    eax = MEM32(0xCE6260);
    MEM32(ebp + -12752) = eax;
    eax = MEM32(0xCE6264);
    MEM32(ebp + -12748) = eax;
    eax = MEM32(0xCE6268);
    MEM32(ebp + -12744) = eax;
    eax = MEM32(0xCE626C);
    MEM32(ebp + -12740) = eax;
    ebx = MEM32(0xCE6270);
    edi = MEM32(0xCE6274);
    esi = MEM32(0xCE6278);
    edx = MEM32(0xCE627C);
    ecx = MEM32(0xCE6280);
    eax = MEM32(0xCE6284);
    MEM32(ebp + -12736) = eax;
    eax = 0x48DA35;
    MEM32(ebp + -12844) = eax;
    eax = MEM32(ebp + -12848);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -12844);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -12840);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -12836);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + -12832);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + -12828);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + -12824);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + -12820);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + -12816);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + -12812);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + -12808);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ebp + -12804);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebp + -12800);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ebp + -12796);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebp + -12792);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ebp + -12788);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ebp + -12784);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ebp + -12780);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebp + -12776);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ebp + -12772);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebp + -12768);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(ebp + -12764);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(ebp + -12760);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(ebp + -12756);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ebp + -12752);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(ebp + -12748);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(ebp + -12744);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(ebp + -12740);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(ebp + -12736);
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x84) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D7FEu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D7FE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x32)) >> 32) & 1);
    eax = eax + 0x32;
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D825u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D825: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D85Fu); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D85F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    ebx = ebp + -12300;
    esi = MEM32(0xCE62C4);
    edx = MEM32(0xCE62C8);
    ecx = MEM32(0xCE62CC);
    eax = MEM32(0xCE62D0);
    edi = 0x493470;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D8B5u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D8B5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x19)) >> 32) & 1);
    eax = eax + 0x19;
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D8DCu); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D8DC: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D916u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D916: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    ebx = ebp + -12300;
    esi = MEM32(0xCE62A4);
    edx = MEM32(ebp + -12388);
    ecx = MEM32(ebp + -12392);
    eax = MEM32(ebp + -12396);
    edi = 0x46B989;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D96Du); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025D96D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x19)) >> 32) & 1);
    eax = eax + 0x19;
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D994u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025D994: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D9CEu); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025D9CE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    eax = ebp + -12300;
    MEM32(ebp + -12732) = eax;
    eax = MEM32(0xCE62A8);
    MEM32(ebp + -12724) = eax;
    ebx = MEM32(0xCE62AC);
    edi = MEM32(0xCE62B0);
    esi = MEM32(0xCE62B4);
    edx = MEM32(0xCE62B8);
    ecx = MEM32(0xCE62BC);
    eax = MEM32(0xCE62C0);
    MEM32(ebp + -12720) = eax;
    eax = 0x496720;
    MEM32(ebp + -12728) = eax;
    eax = MEM32(ebp + -12732);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -12728);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + -12724);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -12720);
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DA71u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DA71: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x32)) >> 32) & 1);
    eax = eax + 0x32;
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DA98u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025DA98: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DAD2u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025DAD2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    edi = ebp + -12300;
    edx = MEM32(0xCE621C);
    ecx = MEM32(0xCE6220);
    eax = MEM32(0xCE6224);
    esi = 0x4497A7;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DB1Eu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DB1E: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DB42u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025DB42: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DB7Cu); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025DB7C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    ebx = ebp + -12300;
    esi = MEM32(0xCE6300);
    edx = MEM32(0xCE6304);
    ecx = MEM32(0xCE6308);
    eax = MEM32(0xCE630C);
    edi = 0x47F7DF;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DBD2u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DBD2: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DBF6u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025DBF6: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DC30u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025DC30: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    esi = ebp + -12300;
    ecx = MEM32(0xCE6318);
    eax = MEM32(0xCE631C);
    edx = 0x47C8B4;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DC72u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DC72: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DC96u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025DC96: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DCD0u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025DCD0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    goto loc_0025E3F4;

loc_0025DCEC: ;
    eax = (uint32_t)(int32_t)SMEM16(0x5A1FE2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025E030; /* jne: not equal / not zero */

loc_0025DCFC: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC8)) >> 32) & 1);
    eax = eax + 0xC8;
    MEM16(ebp + -12320) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x12C)) >> 32) & 1);
    eax = eax + 0x12C;
    MEM16(ebp + -12318) = LO16(eax);
    MEM16(ebp + -12316) = 0x258;
    ecx = ebp + -12300;
    eax = 0x443BC2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DD51u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DD51: ;
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DD67u); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025DD67: ;
    eax = ebp + -12356;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DD75u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025DD75: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x1E));
    eax = eax - 0x1E;
    MEM16(ebp + -12302) = LO16(eax);
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DDC0u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025DDC0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    eax = ebp + -12340;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DDE5u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025DDE5: ;
    MEM16(ebp + -12442) = 0;

loc_0025DDEE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12442);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0025DF48; /* jge: greater or equal (signed >=) */

loc_0025DDFE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12442);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DE0Du); RECOMP_ABI_CALL(0x002E3A20u, sub_002E3A20); /* call 0x002E3A20 */

loc_0025DE0D: ;
    MEMF(ebp + -12704) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12704)); /* movss */
    MEMF(ebp + -12448) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12448)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025DEA9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025DE33: ;
    esi = ebp + -12300;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12442);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DE48u); RECOMP_ABI_CALL(0x002E39C0u, sub_002E39C0); /* call 0x002E39C0 */

loc_0025DE48: ;
    MEM32(ebp + -12860) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -12448); /* mulss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -12856) = xmm0.d[0]; /* movsd */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12442);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DE79u); RECOMP_ABI_CALL(0x002E3BE0u, sub_002E3BE0); /* call 0x002E3BE0 */

loc_0025DE79: ;
    ecx = MEM32(ebp + -12860);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -12856)); /* movsd */
    edx = 0x47F802;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEMD(esp + 0xC) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DEA7u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DEA7: ;
    goto loc_0025DEE0;

loc_0025DEA9: ;
    eax = ebp + -12300;
    MEM32(ebp + -12864) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12442);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DEC4u); RECOMP_ABI_CALL(0x002E39C0u, sub_002E39C0); /* call 0x002E39C0 */

loc_0025DEC4: ;
    edx = MEM32(ebp + -12864);
    ecx = 0x493491;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DEE0u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DEE0: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DF1Au); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025DF1A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -12442));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12442) = LO16(eax);
    goto loc_0025DDEE;

loc_0025DF48: ;
    eax = ebp + -12300;
    MEM32(ebp + -12876) = eax;
    MEM32(esp) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DF60u); RECOMP_ABI_CALL(0x002E3A20u, sub_002E3A20); /* call 0x002E3A20 */

loc_0025DF60: ;
    MEMF(ebp + -12700) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12700)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -12872) = xmm0.d[0]; /* movsd */
    MEM32(esp) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DF92u); RECOMP_ABI_CALL(0x002E3BE0u, sub_002E3BE0); /* call 0x002E3BE0 */

loc_0025DF92: ;
    edx = MEM32(ebp + -12876);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -12872)); /* movsd */
    ecx = 0x443BEC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DFBCu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025DFBC: ;
    eax = MEM32(0x582400);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025DFC9u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025DFC9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12416);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM16(ebp + -12416) = LO16(eax);
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E014u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025E014: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    goto loc_0025E3F2;

loc_0025E030: ;
    eax = (uint32_t)(int32_t)SMEM16(0x5A1FE2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025E3F0; /* jne: not equal / not zero */

loc_0025E040: ;
    MEM32(ebp + -12452) = 0;
    MEM32(ebp + -12456) = 0;
    ecx = ebp + -12680;
    eax = 0x4AE17C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E074u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0025E074: ;
    SET_LO16(eax, MEM16(ebp + -12310));
    MEM16(ebp + -12322) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12310);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x12C)) >> 32) & 1);
    eax = eax + 0x12C;
    MEM16(ebp + -12320) = LO16(eax);
    MEM16(ebp + -12318) = 0x258;
    ecx = ebp + -12300;
    eax = 0x48DB61;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E0B6u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025E0B6: ;
    eax = ebp + -12322;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E0CCu); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025E0CC: ;
    eax = ebp + -12356;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E0DAu); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025E0DA: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E114u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025E114: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    eax = ebp + -12340;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E139u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025E139: ;
    MEM16(ebp + -12682) = 0;

loc_0025E142: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12682);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0025E25A; /* jge: greater or equal (signed >=) */

loc_0025E152: ;
    esi = ebp + -12300;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12682);
    eax = ebp + -12680;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = MEM32(eax);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -12682);
    eax = ebp + -12680;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    eax = MEM32(eax + 4);
    edx = 0x4909AE;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E19Bu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025E19B: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E1D5u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025E1D5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12682);
    eax = ebp + -12680;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    eax = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -12452))) >> 32) & 1);
    eax = eax + MEM32(ebp + -12452);
    MEM32(ebp + -12452) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12682);
    eax = ebp + -12680;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    eax = MEM32(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -12682);
    ecx = ebp + -12680;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 8)));
    eax = eax - MEM32(ecx + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -12456))) >> 32) & 1);
    eax = eax + MEM32(ebp + -12456);
    MEM32(ebp + -12456) = eax;
    SET_LO16(eax, MEM16(ebp + -12682));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12682) = LO16(eax);
    goto loc_0025E142;

loc_0025E25A: ;
    esi = ebp + -12300;
    ecx = MEM32(ebp + -12452);
    eax = MEM32(ebp + -12456);
    edx = 0x4741B9;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E286u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025E286: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E2C0u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025E2C0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    eax = ebp + -12488;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E2E5u); RECOMP_ABI_CALL(0x003BEF40u, sub_003BEF40); /* call 0x003BEF40 */

loc_0025E2E5: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(4));
    esp = esp - 4;
    eax = ebp + -12356;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E2F6u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025E2F6: ;
    edx = ebp + -12300;
    eax = MEM32(ebp + -12480);
    _shift_result = RECOMP_SHIFT(eax, 0xA, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    ecx = 0x4601E8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E31Bu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025E31B: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E355u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025E355: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    edx = ebp + -12300;
    eax = MEM32(ebp + -12476);
    _shift_result = RECOMP_SHIFT(eax, 0xA, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    ecx = 0x4996CF;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E391u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_0025E391: ;
    SET_LO16(ecx, MEM16(ebp + -12306));
    eax = ebp + -12300;
    esi = ebp + -12416;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx = ebp + -12304;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E3CBu); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_0025E3CB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12302);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12308);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM16(ebp + -12416) = LO16(eax);
    eax = ebp + -12340;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E3F0u); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025E3F0: ;
    goto loc_0025E3F2;

loc_0025E3F2: ;
    goto loc_0025E3F4;

loc_0025E3F4: ;
    goto loc_0025E3F6;

loc_0025E3F6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E40Cu); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_0025E40C: ;
    eax = ebp + -12372;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E41Au); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_0025E41A: ;
    _fa = (uint32_t)(MEM8(0x5A202C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5A202C), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025E7AF; /* je: equal / zero */

loc_0025E427: ;
    _fa = (uint32_t)(MEM32(0xBDDAD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDDAD0), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025E491; /* jne: not equal / not zero */

loc_0025E430: ;
    ecx = MEM32(0x5A206C);
    eax = 0x48C279;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E448u); RECOMP_ABI_CALL(0x003A51D0u, sub_003A51D0); /* call 0x003A51D0 */

loc_0025E448: ;
    MEM32(0xBDDAD0) = eax;
    _fa = (uint32_t)(MEM32(0xBDDAD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDDAD0), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025E47C; /* jne: not equal / not zero */

loc_0025E456: ;
    eax = MEM32(0x5A206C);
    ecx = 0x452592;
    MEM32(esp) = 2;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E475u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025E475: ;
    MEM8(0x5A202C) = 0;

loc_0025E47C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0xBDDBCC) = xmm0.f[0]; /* movss */
    MEM32(0xBDDBD0) = 0;

loc_0025E491: ;
    _fa = (uint32_t)(MEM32(0xBDDAD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDDAD0), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025E7AD; /* je: equal / zero */

loc_0025E49E: ;
    MEM16(ebp + -12684) = 0;

loc_0025E4A7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0025E50E; /* jge: greater or equal (signed >=) */

loc_0025E4B3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E4C2u); RECOMP_ABI_CALL(0x002E3A20u, sub_002E3A20); /* call 0x002E3A20 */

loc_0025E4C2: ;
    MEMF(ebp + -12712) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12712)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    eax = 0xBDD378;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = (uint32_t)(int32_t)SMEM16(0xBDDBD4);
    MEMF(eax + ecx * 4) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + -12684));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12684) = LO16(eax);
    goto loc_0025E4A7;

loc_0025E50E: ;
    MEM32(esp) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E51Au); RECOMP_ABI_CALL(0x002E3A20u, sub_002E3A20); /* call 0x002E3A20 */

loc_0025E51A: ;
    MEMF(ebp + -12708) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12708)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0xBDDBCC); /* addss */
    MEMF(0xBDDBCC) = xmm0.f[0]; /* movss */
    MEM32(esp) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E550u); RECOMP_ABI_CALL(0x002E3BE0u, sub_002E3BE0); /* call 0x002E3BE0 */

loc_0025E550: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xBDDBD0))) >> 32) & 1);
    eax = eax + MEM32(0xBDDBD0);
    MEM32(0xBDDBD0) = eax;
    SET_LO16(eax, MEM16(0xBDDBD4));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(0xBDDBD4) = LO16(eax);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025E7AB; /* jne: not equal / not zero */

loc_0025E575: ;
    ecx = MEM32(0xBDDAD0);
    eax = 0x478409;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E58Du); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E58D: ;
    MEM16(ebp + -12684) = 0;

loc_0025E596: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0025E713; /* jge: greater or equal (signed >=) */

loc_0025E5A6: ;
    eax = MEM32(0xBDDAD0);
    MEM32(ebp + -12880) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E5C0u); RECOMP_ABI_CALL(0x002E39C0u, sub_002E39C0); /* call 0x002E39C0 */

loc_0025E5C0: ;
    edx = MEM32(ebp + -12880);
    ecx = 0x463B55;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E5DCu); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E5DC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E5EBu); RECOMP_ABI_CALL(0x002E39C0u, sub_002E39C0); /* call 0x002E39C0 */

loc_0025E5EB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E5F3u); RECOMP_ABI_CALL(0x000FAEA0u, sub_000FAEA0); /* call 0x000FAEA0 */

loc_0025E5F3: ;
    MEM16(ebp + -12688) = LO16(eax);

loc_0025E5FA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12688);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0025E632; /* jge: greater or equal (signed >=) */

loc_0025E606: ;
    ecx = MEM32(0xBDDAD0);
    eax = 0x454B21;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E61Eu); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E61E: ;
    SET_LO16(eax, MEM16(ebp + -12688));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12688) = LO16(eax);
    goto loc_0025E5FA;

loc_0025E632: ;
    MEM16(ebp + -12686) = 0;

loc_0025E63B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12686);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0025E6E4; /* jge: greater or equal (signed >=) */

loc_0025E64B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    eax = 0xBDD378;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12686);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0025E6B3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025E671: ;
    ecx = MEM32(0xBDDAD0);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -12684);
    eax = 0xBDD378;
    _shift_result = RECOMP_SHIFT(edx, 6, 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -12686);
    xmm0 = XMM_SCALAR(MEMF(eax + edx * 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x479A23;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E6B1u); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E6B1: ;
    goto loc_0025E6CB;

loc_0025E6B3: ;
    ecx = MEM32(0xBDDAD0);
    eax = 0x4630BD;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E6CBu); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E6CB: ;
    goto loc_0025E6CD;

loc_0025E6CD: ;
    SET_LO16(eax, MEM16(ebp + -12686));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12686) = LO16(eax);
    goto loc_0025E63B;

loc_0025E6E4: ;
    ecx = MEM32(0xBDDAD0);
    eax = 0x478409;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E6FCu); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E6FC: ;
    SET_LO16(eax, MEM16(ebp + -12684));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -12684) = LO16(eax);
    goto loc_0025E596;

loc_0025E713: ;
    ecx = MEM32(0xBDDAD0);
    xmm0 = XMM_SCALAR(MEMF(0xBDDBCC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D850)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x4577FB;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E749u); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E749: ;
    eax = MEM32(0xBDDAD0);
    MEM32(ebp + -12884) = eax;
    eax = MEM32(0xBDDBD0);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    ecx = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(ebp + -12884);
    ecx = 0x4411E4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E780u); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_0025E780: ;
    eax = MEM32(0xBDDAD0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E78Du); RECOMP_ABI_CALL(0x00418F60u, sub_00418F60); /* call 0x00418F60 */

loc_0025E78D: ;
    MEM16(0xBDDBD4) = 0;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0xBDDBCC) = xmm0.f[0]; /* movss */
    MEM32(0xBDDBD0) = 0;

loc_0025E7AB: ;
    goto loc_0025E7AD;

loc_0025E7AD: ;
    goto loc_0025E7D1;

loc_0025E7AF: ;
    _fa = (uint32_t)(MEM32(0xBDDAD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xBDDAD0), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025E7CF; /* je: equal / zero */

loc_0025E7B8: ;
    eax = MEM32(0xBDDAD0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E7C5u); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_0025E7C5: ;
    MEM32(0xBDDAD0) = 0;

loc_0025E7CF: ;
    goto loc_0025E7D1;

loc_0025E7D1: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x32DC)) >> 32) & 1);
    esp = esp + 0x32DC;
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
 * sub_0025E7E0
 * Original: 0x0025E7E0 - 0x0025E7E5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E7E0(void)
{
    uint32_t ebp = g_ebp;

loc_0025E7E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025E7F0
 * Original: 0x0025E7F0 - 0x0025E826 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E7F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E7F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xBDDAB8);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025E821; /* je: equal / zero */

loc_0025E804: ;
    ecx = MEM32(ebp + -4);
    eax = 0x46B93B;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x345;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E821u); RECOMP_ABI_CALL(0x000FCD60u, sub_000FCD60); /* call 0x000FCD60 */

loc_0025E821: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025E830
 * Original: 0x0025E830 - 0x0025E858 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E830(void)
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

loc_0025E830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 8));
    eax = ZX8(MEM8(ebp + 8));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
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
 * sub_0025E860
 * Original: 0x0025E860 - 0x0025E899 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E860(void)
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

loc_0025E860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
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
 * sub_0025E8A0
 * Original: 0x0025E8A0 - 0x0025E901 (97 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E8A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E8A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E8BC; /* jl: less (signed <) */

loc_0025E8B3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E8F0; /* jl: less (signed <) */

loc_0025E8BC: ;
    ecx = 0x48DB84;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E8E4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025E8E4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E8F0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025E8F0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x4AE23C);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025E910
 * Original: 0x0025E910 - 0x0025E922 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E910(void)
{
    uint32_t ebp = g_ebp;

loc_0025E910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025E930
 * Original: 0x0025E930 - 0x0025EFBE (1678 bytes, 409 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E930(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0025E930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xA8;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025E986; /* jne: not equal / not zero */

loc_0025E952: ;
    ecx = 0x485737;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x118;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E97Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025E97A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E986u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025E986: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025E9C0; /* jne: not equal / not zero */

loc_0025E98C: ;
    ecx = 0x447AC1;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x119;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E9B4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025E9B4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025E9C0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025E9C0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(ebp + -124) = eax;
    eax = eax - 1;
    if ((eax == 0)) goto loc_0025E9ED; /* je: equal / zero */

loc_0025E9CC: ;
    goto loc_0025E9CE;

loc_0025E9CE: ;
    eax = MEM32(ebp + -124);
    eax = eax - 3;
    if ((eax == 0)) goto loc_0025EB7A; /* je: equal / zero */

loc_0025E9DA: ;
    goto loc_0025E9DC;

loc_0025E9DC: ;
    eax = MEM32(ebp + -124);
    eax = eax - 5;
    if ((eax == 0)) goto loc_0025ECD5; /* je: equal / zero */

loc_0025E9E8: ;
    goto loc_0025EFA0;

loc_0025E9ED: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EA36; /* je: equal / zero */

loc_0025EA02: ;
    ecx = 0x47C8DC;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EA2Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025EA2A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EA36u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025EA36: ;
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EA75; /* je: equal / zero */

loc_0025EA41: ;
    ecx = 0x4601FF;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x120;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EA69u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025EA69: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EA75u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025EA75: ;
    MEM32(ebp + -12) = 0;

loc_0025EA7C: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025EB75; /* jge: greater or equal (signed >=) */

loc_0025EA88: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -136) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    ecx = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EABCu); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025EABC: ;
    esp = esp - 4;
    eax = MEM32(ebp + -136);
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    ecx = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EAF5u); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025EAF5: ;
    esp = esp - 4;
    eax = MEM32(ebp + -132);
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -128) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x14);
    ecx = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EB2Bu); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025EB2B: ;
    esp = esp - 4;
    eax = MEM32(ebp + -128);
    ecx = MEM32(ebp + -48);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -40);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 0x38;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0x20;
    MEM32(ebp + -8) = eax;
    goto loc_0025EA7C;

loc_0025EB75: ;
    goto loc_0025EFB6;

loc_0025EB7A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -56) = eax;
    eax = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EBC3; /* je: equal / zero */

loc_0025EB8F: ;
    ecx = 0x48DBB6;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x133;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EBB7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025EBB7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EBC3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025EBC3: ;
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EC02; /* je: equal / zero */

loc_0025EBCE: ;
    ecx = 0x4715FF;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x134;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EBF6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025EBF6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EC02u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025EC02: ;
    MEM32(ebp + -60) = 0;

loc_0025EC09: ;
    eax = MEM32(ebp + -60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025ECD0; /* jge: greater or equal (signed >=) */

loc_0025EC15: ;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -140) = eax;
    eax = MEM32(ebp + -56);
    ecx = MEM32(eax);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -72;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EC32u); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025EC32: ;
    esp = esp - 4;
    eax = MEM32(ebp + -140);
    ecx = MEM32(ebp + -64);
    MEM32(eax + 8) = ecx;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -56);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -52);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -56);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -52);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -60);
    eax = eax + 1;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -52);
    eax = eax + 0x14;
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -56);
    eax = eax + 8;
    MEM32(ebp + -56) = eax;
    goto loc_0025EC09;

loc_0025ECD0: ;
    goto loc_0025EFB6;

loc_0025ECD5: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -80) = eax;
    eax = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025ED1E; /* je: equal / zero */

loc_0025ECEA: ;
    ecx = 0x4741CC;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x145;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ED12u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025ED12: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ED1Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025ED1E: ;
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025ED5D; /* je: equal / zero */

loc_0025ED29: ;
    ecx = 0x4525C7;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x146;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ED51u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025ED51: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025ED5Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025ED5D: ;
    MEM32(ebp + -84) = 0;

loc_0025ED64: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025EF9E; /* jge: greater or equal (signed >=) */

loc_0025ED70: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + -80);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ecx)); /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -76);
    MEM32(ebp + -152) = eax;
    eax = MEM32(ebp + -80);
    ecx = MEM32(eax + 0xC);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -96;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EDA2u); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025EDA2: ;
    esp = esp - 4;
    eax = MEM32(ebp + -152);
    ecx = MEM32(ebp + -88);
    MEM32(eax + 0x14) = ecx;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(eax + 0xC) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -76);
    MEM32(ebp + -148) = eax;
    eax = MEM32(ebp + -80);
    ecx = MEM32(eax + 0x10);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -108;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EDD9u); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025EDD9: ;
    esp = esp - 4;
    eax = MEM32(ebp + -148);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x20) = ecx;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -108)); /* movsd */
    MEMD(eax + 0x18) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -76);
    MEM32(ebp + -144) = eax;
    eax = MEM32(ebp + -80);
    ecx = MEM32(eax + 0x14);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -120;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EE10u); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025EE10: ;
    esp = esp - 4;
    eax = MEM32(ebp + -144);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x2C) = ecx;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(eax + 0x24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -80);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -76);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -80);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -76);
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -80);
    eax = ZX8(MEM8(eax + 0x1C));
    ecx = 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EED7; /* je: equal / zero */

loc_0025EEA3: ;
    ecx = 0x44F581;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x155;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EECBu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025EECB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EED7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025EED7: ;
    eax = MEM32(ebp + -80);
    eax = ZX8(MEM8(eax + 0x1D));
    ecx = 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EF1F; /* je: equal / zero */

loc_0025EEEB: ;
    ecx = 0x485744;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x156;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EF13u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025EF13: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EF1Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025EF1F: ;
    eax = MEM32(ebp + -80);
    eax = ZX8(MEM8(eax + 0x1C));
    ecx = 0x55555556;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + -76);
    MEM16(eax + 0x38) = LO16(edx);
    eax = MEM32(ebp + -80);
    eax = ZX8(MEM8(eax + 0x1D));
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO16(ecx, LO16(edx));
    eax = MEM32(ebp + -76);
    MEM16(eax + 0x3A) = LO16(ecx);
    eax = MEM32(ebp + -80);
    eax = ZX8(MEM8(eax + 0x1E));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -76);
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -76);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x3C); /* subss */
    eax = MEM32(ebp + -76);
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -84);
    eax = eax + 1;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -76);
    eax = eax + 0x44;
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -80);
    eax = eax + 0x20;
    MEM32(ebp + -80) = eax;
    goto loc_0025ED64;

loc_0025EF9E: ;
    goto loc_0025EFB6;

loc_0025EFA0: ;
    eax = 0x49349F;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025EFB6u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_0025EFB6: ;
    esp = esp + 0xA8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025EFC0
 * Original: 0x0025EFC0 - 0x0025F08F (207 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EFC0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0025EFC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    eax = ecx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(edx, 0x15, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DC50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(edx, 0xB, 32, 1, NULL, &_shift_of);
    edx = _shift_result;
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(edx, 0x15, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DC50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(edx, 0xB, 32, 1, NULL, &_shift_of);
    edx = _shift_result;
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(edx, 0x16, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D90C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D744)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0025F090
 * Original: 0x0025F090 - 0x0025F09D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F090(void)
{
    uint32_t ebp = g_ebp;

loc_0025F090: ;
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
 * sub_0025F0A0
 * Original: 0x0025F0A0 - 0x0025F13B (155 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F0A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0E6; /* jne: not equal / not zero */

loc_0025F0B2: ;
    ecx = 0x48D90F;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1B6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F0DAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F0DA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F0E6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F0E6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F120; /* jne: not equal / not zero */

loc_0025F0EC: ;
    ecx = 0x44D65E;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1B7;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F114u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F114: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F120u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F120: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025F140
 * Original: 0x0025F140 - 0x0025F1F7 (183 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F140(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F186; /* jne: not equal / not zero */

loc_0025F152: ;
    ecx = 0x48D90F;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F17Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F17A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F186u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F186: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F1C0; /* jne: not equal / not zero */

loc_0025F18C: ;
    ecx = 0x487150;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F1B4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F1B4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F1C0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F1C0: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = ebp + -12;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F1DBu); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025F1DB: ;
    esp = esp - 4;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025F200
 * Original: 0x0025F200 - 0x0025F296 (150 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F246; /* jne: not equal / not zero */

loc_0025F212: ;
    ecx = 0x48D90F;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1CE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F23Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F23A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F246u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F246: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F280; /* jne: not equal / not zero */

loc_0025F24C: ;
    ecx = 0x441208;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1CF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F274u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F274: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F280u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F280: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x18);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x1C);
    MEM32(eax + 4) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025F2A0
 * Original: 0x0025F2A0 - 0x0025F356 (182 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F2A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F2A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F2E6; /* jne: not equal / not zero */

loc_0025F2B2: ;
    ecx = 0x48D90F;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1DA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F2DAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F2DA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F2E6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F2E6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F320; /* jne: not equal / not zero */

loc_0025F2EC: ;
    ecx = 0x487150;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1DB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F314u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F314: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F320u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F320: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = ebp + -12;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F33Au); RECOMP_ABI_CALL(0x0025EFC0u, sub_0025EFC0); /* call 0x0025EFC0 */

loc_0025F33A: ;
    esp = esp - 4;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0025F360
 * Original: 0x0025F360 - 0x0025F44A (234 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F360(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F3A6; /* jne: not equal / not zero */

loc_0025F372: ;
    ecx = 0x48D90F;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F39Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F39A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F3A6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F3A6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F3E0; /* jne: not equal / not zero */

loc_0025F3AC: ;
    ecx = 0x441208;
    eax = 0x4909B7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E7;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F3D4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_0025F3D4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025F3E0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_0025F3E0: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

