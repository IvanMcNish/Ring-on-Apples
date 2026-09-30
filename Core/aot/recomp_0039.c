/* Generated ELF translation shard 39: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_003CF5E0
 * Original: 0x003CF5E0 - 0x003CF69F (191 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF5E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF628; /* je: equal / zero */

loc_003CF5FE: ;
    edx = 0x48342B;
    ecx = 0x452E67;
    eax = 0x46F34C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x17F;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF628u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003CF628: ;
    MEM32(ebp + -20) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -24) = eax;

loc_003CF638: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CF68F; /* jge: greater or equal (signed >=) */

loc_003CF640: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ebp + -20);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF682; /* jne: not equal / not zero */

loc_003CF651: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ebp + -16);
    esi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF672u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_003CF672: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF682; /* jne: not equal / not zero */

loc_003CF67A: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    goto loc_003CF696;

loc_003CF682: ;
    goto loc_003CF684;

loc_003CF684: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_003CF638;

loc_003CF68F: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;

loc_003CF696: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003CF6A0
 * Original: 0x003CF6A0 - 0x003CF71C (124 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF6A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003CF6A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x48)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = ebp + 8;
    ecx = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF6C0u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003CF6C0: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 9 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -49) = LO8(eax);
    MEM32(ebp + -56) = 0;

loc_003CF6D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -49), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    MEM8(ebp + -57) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003CF6EA; /* je: equal / zero */

loc_003CF6DE: ;
    eax = MEM32(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(ebp + -57) = LO8(eax);

loc_003CF6EA: ;
    SET_LO8(eax, MEM8(ebp + -57));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003CF6F3; /* jne: not equal / not zero */

loc_003CF6F1: ;
    goto loc_003CF712;

loc_003CF6F3: ;
    eax = MEM32(ebp + -20);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -56) * (int32_t)0x30);
    eax = eax + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -49) = LO8(eax);
    eax = MEM32(ebp + -56);
    eax = eax + 1;
    MEM32(ebp + -56) = eax;
    goto loc_003CF6D3;

loc_003CF712: ;
    SET_LO8(eax, MEM8(ebp + -49));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003CF720
 * Original: 0x003CF720 - 0x003CF73B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF720(void)
{
    uint32_t ebp = g_ebp;

loc_003CF720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003CF740
 * Original: 0x003CF740 - 0x003CF760 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF740(void)
{
    uint32_t ebp = g_ebp;

loc_003CF740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003CF760
 * Original: 0x003CF760 - 0x003CF7EC (140 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF760(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = eax;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF78Eu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003CF78E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF7AE; /* je: equal / zero */

loc_003CF79C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF7AE; /* je: equal / zero */

loc_003CF7A2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF7AE; /* je: equal / zero */

loc_003CF7A8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF7E2; /* jne: not equal / not zero */

loc_003CF7AE: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x18) = 0xFFFF;
    MEM16(eax + 0x1A) = 0xFFFF;
    MEM16(eax + 0x1C) = 0xFFFF;
    MEM16(eax + 0x1E) = 0xFFFF;
    MEM16(eax + 0x20) = 0xFFFF;
    MEM16(eax + 0x22) = 0xFFFF;
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    MEM16(eax + 0x28) = 0xFFFF;

loc_003CF7E2: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003CF7F0
 * Original: 0x003CF7F0 - 0x003CFA64 (628 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF7F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003CF7F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0xA0;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF81Bu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003CF81B: ;
    eax = MEM32(ebp + 0x44);
    MEM32(eax) = 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF864; /* je: equal / zero */

loc_003CF82A: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF864; /* je: equal / zero */

loc_003CF830: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF864; /* je: equal / zero */

loc_003CF836: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x450475;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF85Cu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CF85C: ;
    MEM32(ebp + -12) = eax;
    goto loc_003CFA57;

loc_003CF864: ;
    MEM32(ebp + -76) = 0;
    eax = MEM32(ebp + 0x44);
    eax = eax + 4;
    MEM32(ebp + -80) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -80);
    eax = MEM32(ebp + -76);
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movups */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movups */
    xmm1 = XMM_MEM(ebp + -56); /* movups */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF8B0u); RECOMP_ABI_CALL(0x003CFDD0u, sub_003CFDD0); /* call 0x003CFDD0 */

loc_003CF8B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF8E3; /* je: equal / zero */

loc_003CF8B5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x474D40;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF8DBu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CF8DB: ;
    MEM32(ebp + -12) = eax;
    goto loc_003CFA57;

loc_003CF8E3: ;
    eax = MEM32(ebp + -76);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;

loc_003CF8EC: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -96;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF8FEu); RECOMP_ABI_CALL(0x003D0330u, sub_003D0330); /* call 0x003D0330 */

loc_003CF8FE: ;
    esp = esp - 4;
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF913u); RECOMP_ABI_CALL(0x003CE0D0u, sub_003CE0D0); /* call 0x003CE0D0 */

loc_003CF913: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF924; /* je: equal / zero */

loc_003CF918: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_003CFA57;

loc_003CF924: ;
    goto loc_003CF926;

loc_003CF926: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF958; /* je: equal / zero */

loc_003CF92C: ;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + -96);
    edx = MEM32(ebp + -92);
    ecx = MEM32(ebp + -88);
    eax = MEM32(ebp + -84);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF953u); RECOMP_ABI_CALL(0x003D0360u, sub_003D0360); /* call 0x003D0360 */

loc_003CF953: ;
    goto loc_003CFA48;

loc_003CF958: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF96Au); RECOMP_ABI_CALL(0x003CE0D0u, sub_003CE0D0); /* call 0x003CE0D0 */

loc_003CF96A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF97B; /* je: equal / zero */

loc_003CF96F: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_003CFA57;

loc_003CF97B: ;
    goto loc_003CF97D;

loc_003CF97D: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF9BD; /* je: equal / zero */

loc_003CF983: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF9BD; /* je: equal / zero */

loc_003CF989: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF9BD; /* je: equal / zero */

loc_003CF98F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x486670;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF9B5u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CF9B5: ;
    MEM32(ebp + -12) = eax;
    goto loc_003CFA57;

loc_003CF9BD: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CF9EE; /* jl: less (signed <) */

loc_003CF9C3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x474D75;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF9E9u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CF9E9: ;
    MEM32(ebp + -12) = eax;
    goto loc_003CFA57;

loc_003CF9EE: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -80);
    eax = MEM32(ebp + -76);
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movups */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movups */
    xmm1 = XMM_MEM(ebp + -56); /* movups */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFA2Au); RECOMP_ABI_CALL(0x003CFDD0u, sub_003CFDD0); /* call 0x003CFDD0 */

loc_003CFA2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA38; /* je: equal / zero */

loc_003CFA2F: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_003CFA57;

loc_003CFA38: ;
    goto loc_003CFA3A;

loc_003CFA3A: ;
    eax = MEM32(ebp + -76);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    goto loc_003CF8EC;

loc_003CFA48: ;
    ecx = MEM32(ebp + -76);
    eax = MEM32(ebp + 0x44);
    MEM32(eax) = ecx;
    MEM32(ebp + -12) = 0;

loc_003CFA57: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0xA0;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003CFA70
 * Original: 0x003CFA70 - 0x003CFCE6 (630 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFA70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x90;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    ecx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -13) = LO8(eax);
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 0;

loc_003CFA9F: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CFCD3; /* jge: greater or equal (signed >=) */

loc_003CFAAD: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + 0x18);
    esi = MEM32(ebp + -24);
    ecx = MEM32(eax + esi * 8 + 4);
    eax = MEM32(eax + esi * 8 + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFACEu); RECOMP_ABI_CALL(0x003CF5E0u, sub_003CF5E0); /* call 0x003CF5E0 */

loc_003CFACE: ;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CFBAD; /* jge: greater or equal (signed >=) */

loc_003CFADB: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = ebp + -80;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFAFCu); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003CFAFC: ;
    esp = esp - 4;
    SET_LO8(edx, MEM8(ebp + -13));
    eax = 0; /* xor self */
    ecx = 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    eax = eax | MEM32(ebp + -76);
    MEM32(ebp + -76) = eax;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 0x18);
    esi = MEM32(ebp + -24);
    edx = MEM32(eax + esi * 8 + 4);
    esi = MEM32(eax + esi * 8 + 8);
    xmm0 = XMM_MEM(ebp + -48); /* movups */
    eax = esp;
    XMM_STORE(eax + 0x2C, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -80); /* movups */
    xmm1 = XMM_MEM(ebp + -64); /* movups */
    XMM_STORE(eax + 0x1C, xmm1); /* movups */
    XMM_STORE(eax + 0xC, xmm0); /* movups */
    edi = ebp + -28;
    MEM32(eax + 0x3C) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFB53u); RECOMP_ABI_CALL(0x003CFCF0u, sub_003CFCF0); /* call 0x003CFCF0 */

loc_003CFB53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFB91; /* je: equal / zero */

loc_003CFB58: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -28);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x463B55;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFB85u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CFB85: ;
    MEM32(ebp + -12) = 0;
    goto loc_003CFCD9;

loc_003CFB91: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0x18);
    ecx = ecx - 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x30);
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    goto loc_003CFCC5;

loc_003CFBAD: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x24);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -32) * (int32_t)0x30);
    eax = eax + ecx;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFBCF; /* jne: not equal / not zero */

loc_003CFBC4: ;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -20) = eax;
    goto loc_003CFCC5;

loc_003CFBCF: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFC88; /* jne: not equal / not zero */

loc_003CFBDB: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003CFC24; /* jg: greater (signed >) */

loc_003CFBE4: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x18);
    esi = MEM32(ebp + -24);
    eax = MEM32(eax + esi * 8 + 4);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x48BACA;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFC18u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CFC18: ;
    MEM32(ebp + -12) = 0;
    goto loc_003CFCD9;

loc_003CFC24: ;
    eax = MEM32(ebp + -84);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(ebp + -84);
    ecx = MEM32(ecx + 0x18);
    ecx = ecx - 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x30);
    eax = eax + ecx;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFC80; /* je: equal / zero */

loc_003CFC43: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x18);
    esi = MEM32(ebp + -24);
    eax = MEM32(eax + esi * 8 + 4);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x447538;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFC77u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CFC77: ;
    MEM32(ebp + -12) = 0;
    goto loc_003CFCD9;

loc_003CFC80: ;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -20) = eax;
    goto loc_003CFCC5;

loc_003CFC88: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x18);
    esi = MEM32(ebp + -24);
    eax = MEM32(eax + esi * 8 + 4);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x4555B7;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFCBCu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CFCBC: ;
    MEM32(ebp + -12) = 0;
    goto loc_003CFCD9;

loc_003CFCC5: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_003CFA9F;

loc_003CFCD3: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -12) = eax;

loc_003CFCD9: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x90;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003CFCF0
 * Original: 0x003CFCF0 - 0x003CFDCD (221 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFCF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFCF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x54;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0x14;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = ecx;
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFD23u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003CFD23: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFD55; /* je: equal / zero */

loc_003CFD2B: ;
    edx = 0x48342B;
    ecx = 0x452E67;
    eax = 0x4449A5;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x1C9;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFD55u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003CFD55: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x44);
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFD75u); RECOMP_ABI_CALL(0x003CF190u, sub_003CF190); /* call 0x003CF190 */

loc_003CFD75: ;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFD87; /* jne: not equal / not zero */

loc_003CFD7E: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003CFDC4;

loc_003CFD87: ;
    eax = MEM32(ebp + -68);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFDA3; /* je: equal / zero */

loc_003CFD8F: ;
    eax = MEM32(ebp + 0x44);
    ecx = 0x48668F;
    MEM32(eax) = ecx;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003CFDC4;

loc_003CFDA3: ;
    ecx = MEM32(ebp + -68);
    eax = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFDBDu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003CFDBD: ;
    MEM32(ebp + -8) = 0;

loc_003CFDC4: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003CFDD0
 * Original: 0x003CFDD0 - 0x003D0324 (1364 bytes, 395 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFDD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003CFDD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x90));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x90)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFDFBu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003CFDFB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(ebp + -56);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFE13u); RECOMP_ABI_CALL(0x003CDF00u, sub_003CDF00); /* call 0x003CDF00 */

loc_003CFE13: ;
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CFE4A; /* jne: not equal / not zero */

loc_003CFE1C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x48EFBF;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFE42u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CFE42: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D0317;

loc_003CFE4A: ;
    ecx = MEM32(ebp + -76);
    edx = MEM32(ebp + -60);
    esi = MEM32(ebp + -56);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFE62u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003CFE62: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + -56);
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -76);
    eax = MEM32(ebp + 0x44);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -56);
    eax = MEM32(ebp + 0x44);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -72);
    MEM32(ebp + -120) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xA));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xA)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003CFEA4; /* je: equal / zero */

loc_003CFE88: ;
    goto loc_003CFE8A;

loc_003CFE8A: ;
    eax = MEM32(ebp + -120);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF5u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF5u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_003CFEB0; /* jb: below (unsigned <) */

loc_003CFE95: ;
    goto loc_003CFE97;

loc_003CFE97: ;
    eax = MEM32(ebp + -120);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF3u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF3u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_003CFEB2; /* ja: above (unsigned >) */

loc_003CFEA2: ;
    goto loc_003CFEA4;

loc_003CFEA4: ;
    MEM32(ebp + -12) = 0;
    goto loc_003D0317;

loc_003CFEB0: ;
    goto loc_003CFEE3;

loc_003CFEB2: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x64);
    ecx = MEM32(eax + 0x68);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax = 0x480414;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFEDBu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003CFEDB: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D0317;

loc_003CFEE3: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CFEF5; /* jne: not equal / not zero */

loc_003CFEE9: ;
    MEM32(ebp + -12) = 0;
    goto loc_003D0317;

loc_003CFEF5: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -60);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    eax = eax + MEM32(ebp + -76);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + 0x44);
    ecx = MEM32(ecx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = MEM32(ebp + -48);
    edx = MEM32(ebp + -60);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFF43; /* je: equal / zero */

loc_003CFF19: ;
    edx = 0x48BA9C;
    ecx = 0x452E67;
    eax = 0x44D301;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x741;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFF43u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003CFF43: ;
    eax = MEM32(ebp + -76);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFF78; /* je: equal / zero */

loc_003CFF4E: ;
    edx = 0x4723BD;
    ecx = 0x452E67;
    eax = 0x44D301;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x742;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFF78u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003CFF78: ;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -80) = eax;

loc_003CFF7E: ;
    eax = MEM32(ebp + -76);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D02FA; /* je: equal / zero */

loc_003CFF8A: ;
    eax = MEM32(ebp + -76);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFFB1; /* je: equal / zero */

loc_003CFF95: ;
    eax = MEM32(ebp + -76);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -76) = ecx;
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(ebp + -80);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + -80) = edx;
    MEM8(eax) = LO8(ecx);
    goto loc_003CFF7E;

loc_003CFFB1: ;
    eax = MEM32(ebp + -76);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF7u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF7u;
    MEM32(ebp + -124) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x6F));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x6F)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_003D02C4; /* ja: above (unsigned >) */

loc_003CFFC7: ;
    eax = MEM32(ebp + -124);
    eax = MEM32(eax * 4 + 0x4D4820);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003CFFD3u) goto loc_003CFFD3;
    if (_jt == 0x003CFFF1u) goto loc_003CFFF1;
    if (_jt == 0x003D000Du) goto loc_003D000D;
    if (_jt == 0x003D0029u) goto loc_003D0029;
    if (_jt == 0x003D0045u) goto loc_003D0045;
    if (_jt == 0x003D0061u) goto loc_003D0061;
    if (_jt == 0x003D007Du) goto loc_003D007D;
    if (_jt == 0x003D0099u) goto loc_003D0099;
    if (_jt == 0x003D012Fu) goto loc_003D012F;
    if (_jt == 0x003D023Fu) goto loc_003D023F;
    if (_jt == 0x003D029Bu) goto loc_003D029B;
    if (_jt == 0x003D02C4u) goto loc_003D02C4;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003CFFD3: ;
    eax = MEM32(ebp + -76);
    SET_LO8(ecx, MEM8(eax + 1));
    eax = MEM32(ebp + -80);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + -80) = edx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003CFFF1: ;
    eax = MEM32(ebp + -80);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -80) = ecx;
    MEM8(eax) = 8;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D000D: ;
    eax = MEM32(ebp + -80);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -80) = ecx;
    MEM8(eax) = 9;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D0029: ;
    eax = MEM32(ebp + -80);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -80) = ecx;
    MEM8(eax) = 0xA;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D0045: ;
    eax = MEM32(ebp + -80);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -80) = ecx;
    MEM8(eax) = 0xC;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D0061: ;
    eax = MEM32(ebp + -80);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -80) = ecx;
    MEM8(eax) = 0xD;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D007D: ;
    eax = MEM32(ebp + -80);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -80) = ecx;
    MEM8(eax) = 0x1B;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D0099: ;
    eax = MEM32(ebp + -76);
    SET_LO16(eax, MEM16(eax + 2));
    MEM16(ebp + -83) = LO16(eax);
    MEM8(ebp + -81) = 0;
    eax = ebp + -83;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D00C5u); RECOMP_ABI_CALL(0x004274E0u, sub_004274E0); /* call 0x004274E0 */

loc_003D00C5: ;
    MEM32(ebp + -88) = eax;
    ecx = MEM32(ebp + -88);
    eax = MEM32(ebp + -80);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D00DAu); RECOMP_ABI_CALL(0x003D03E0u, sub_003D03E0); /* call 0x003D03E0 */

loc_003D00DA: ;
    MEM32(ebp + -92) = eax;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D0118; /* jge: greater or equal (signed >=) */

loc_003D00E3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -68);
    eax = ebp + -83;
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x46F362;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0110u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D0110: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D0317;

loc_003D0118: ;
    eax = MEM32(ebp + -92);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -80))) >> 32) & 1);
    eax = eax + MEM32(ebp + -80);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D012F: ;
    eax = MEM32(ebp + -76);
    edx = (uint32_t)(int32_t)SMEM8(eax + 1);
    eax = 8;
    ecx = 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x75 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -108) = eax;
    edx = ebp + -101;
    ecx = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    eax = MEM32(ebp + -108);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0165u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D0165: ;
    eax = MEM32(ebp + -108);
    MEM8(ebp + eax + -101) = 0;
    eax = ebp + -101;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D018Au); RECOMP_ABI_CALL(0x004274E0u, sub_004274E0); /* call 0x004274E0 */

loc_003D018A: ;
    MEM32(ebp + -112) = eax;
    eax = 0xD800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -112) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D01D5; /* jg: greater (signed >) */

loc_003D0197: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 0xDFFF (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D01D5; /* jg: greater (signed >) */

loc_003D01A0: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -68);
    eax = MEM32(ebp + -112);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x44A417;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D01CDu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D01CD: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D0317;

loc_003D01D5: ;
    ecx = MEM32(ebp + -112);
    eax = MEM32(ebp + -80);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D01E7u); RECOMP_ABI_CALL(0x003D03E0u, sub_003D03E0); /* call 0x003D03E0 */

loc_003D01E7: ;
    MEM32(ebp + -116) = eax;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D0225; /* jge: greater or equal (signed >=) */

loc_003D01F0: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -68);
    eax = ebp + -101;
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x46F362;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D021Du); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D021D: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D0317;

loc_003D0225: ;
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -80))) >> 32) & 1);
    eax = eax + MEM32(ebp + -80);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -108);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    eax = eax + MEM32(ebp + -76);
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D023F: ;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    ecx = MEM32(ebp + -76);
    eax = 0x49A026;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D025Du); RECOMP_ABI_CALL(0x0042A580u, sub_0042A580); /* call 0x0042A580 */

loc_003D025D: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    eax = eax + MEM32(ebp + -76);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -76);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0299; /* je: equal / zero */

loc_003D026E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x489006;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0294u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D0294: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D0317;

loc_003D0299: ;
    goto loc_003D029B;

loc_003D029B: ;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -76) = eax;
    ecx = MEM32(ebp + -76);
    eax = 0x489032;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D02B9u); RECOMP_ABI_CALL(0x0042A580u, sub_0042A580); /* call 0x0042A580 */

loc_003D02B9: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    eax = eax + MEM32(ebp + -76);
    MEM32(ebp + -76) = eax;
    goto loc_003CFF7E;

loc_003D02C4: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -68);
    eax = MEM32(ebp + -76);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x47A777;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D02F5u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D02F5: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D0317;

loc_003D02FA: ;
    eax = MEM32(ebp + -80);
    MEM8(eax) = 0;
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + 0x44);
    eax = MEM32(eax);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0x44);
    MEM32(eax + 4) = ecx;
    MEM32(ebp + -12) = 0;

loc_003D0317: ;
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x90)) >> 32) & 1);
    esp = esp + 0x90;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D0330
 * Original: 0x003D0330 - 0x003D035F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0330(void)
{
    uint32_t ebp = g_ebp;

loc_003D0330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = ecx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 0x10);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003D0360
 * Original: 0x003D0360 - 0x003D03D7 (119 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0360(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D03B5; /* je: equal / zero */

loc_003D038B: ;
    edx = 0x480433;
    ecx = 0x452E67;
    eax = 0x489037;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0xB69;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D03B5u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D03B5: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D03E0
 * Original: 0x003D03E0 - 0x003D04FF (287 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D03E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003D03E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x7F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D0406; /* ja: above (unsigned >) */

loc_003D03F0: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = LO8(ecx);
    MEM32(ebp + -4) = 1;
    goto loc_003D04F7;

loc_003D0406: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x7FF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D0440; /* ja: above (unsigned >) */

loc_003D040F: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | 0xC0;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + 8);
    eax = eax & 0x3F;
    eax = eax | 0x80;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 1) = LO8(ecx);
    MEM32(ebp + -4) = 2;
    goto loc_003D04F7;

loc_003D0440: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D048D; /* ja: above (unsigned >) */

loc_003D0449: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | 0xE0;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x3F;
    eax = eax | 0x80;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 1) = LO8(ecx);
    eax = MEM32(ebp + 8);
    eax = eax & 0x3F;
    eax = eax | 0x80;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 2) = LO8(ecx);
    MEM32(ebp + -4) = 3;
    goto loc_003D04F7;

loc_003D048D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x1FFFFF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D04F0; /* ja: above (unsigned >) */

loc_003D0496: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0x12, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | 0xF0;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x3F;
    eax = eax | 0x80;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 1) = LO8(ecx);
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x3F;
    eax = eax | 0x80;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 2) = LO8(ecx);
    eax = MEM32(ebp + 8);
    eax = eax & 0x3F;
    eax = eax | 0x80;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 3) = LO8(ecx);
    MEM32(ebp + -4) = 4;
    goto loc_003D04F7;

loc_003D04F0: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_003D04F7: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D0500
 * Original: 0x003D0500 - 0x003D057A (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0500(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D051E; /* je: equal / zero */

loc_003D0515: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003D0572;

loc_003D051E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D053Au); RECOMP_ABI_CALL(0x003D07C0u, sub_003D07C0); /* call 0x003D07C0 */

loc_003D053A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0556; /* jne: not equal / not zero */

loc_003D053F: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0551u); RECOMP_ABI_CALL(0x003D0AD0u, sub_003D0AD0); /* call 0x003D0AD0 */

loc_003D0551: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D056B; /* je: equal / zero */

loc_003D0556: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003D0572;

loc_003D056B: ;
    MEM32(ebp + -4) = 0;

loc_003D0572: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D0580
 * Original: 0x003D0580 - 0x003D07B6 (566 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003D0580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x94));
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x30)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(eax + 0x20); /* movups */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MEM(eax + 0x10); /* movups */
    XMM_STORE(ebp + -56, xmm1); /* movaps */
    XMM_STORE(ebp + -72, xmm0); /* movaps */
    eax = MEM32(ebp + 0x44);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    XMM_STORE(eax + 0x10, xmm0); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    eax = MEM32(ebp + -72);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    MEM32(ebp + -76) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x11));
    eax = eax - 0x11;
    if ((!_cf && eax != 0)) goto loc_003D0781; /* ja: above (unsigned >) */

loc_003D05D7: ;
    eax = MEM32(ebp + -76);
    eax = MEM32(eax * 4 + 0x4D49E0);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003D05E3u) goto loc_003D05E3;
    if (_jt == 0x003D061Fu) goto loc_003D061F;
    if (_jt == 0x003D065Bu) goto loc_003D065B;
    if (_jt == 0x003D0697u) goto loc_003D0697;
    if (_jt == 0x003D06D3u) goto loc_003D06D3;
    if (_jt == 0x003D070Fu) goto loc_003D070F;
    if (_jt == 0x003D0748u) goto loc_003D0748;
    if (_jt == 0x003D0781u) goto loc_003D0781;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003D05E3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x44);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    xmm1 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0617u); RECOMP_ABI_CALL(0x003D3EF0u, sub_003D3EF0); /* call 0x003D3EF0 */

loc_003D0617: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D07AA;

loc_003D061F: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x44);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    xmm1 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0653u); RECOMP_ABI_CALL(0x003D3FD0u, sub_003D3FD0); /* call 0x003D3FD0 */

loc_003D0653: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D07AA;

loc_003D065B: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x44);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    xmm1 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D068Fu); RECOMP_ABI_CALL(0x003D4100u, sub_003D4100); /* call 0x003D4100 */

loc_003D068F: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D07AA;

loc_003D0697: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x44);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    xmm1 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D06CBu); RECOMP_ABI_CALL(0x003D41C0u, sub_003D41C0); /* call 0x003D41C0 */

loc_003D06CB: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D07AA;

loc_003D06D3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x44);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    xmm1 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0707u); RECOMP_ABI_CALL(0x003D4280u, sub_003D4280); /* call 0x003D4280 */

loc_003D0707: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D07AA;

loc_003D070F: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x44);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    xmm1 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0743u); RECOMP_ABI_CALL(0x003D4340u, sub_003D4340); /* call 0x003D4340 */

loc_003D0743: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D07AA;

loc_003D0748: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x44);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movaps */
    xmm1 = XMM_MEM(ebp + -56); /* movaps */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D077Cu); RECOMP_ABI_CALL(0x003D45D0u, sub_003D45D0); /* call 0x003D45D0 */

loc_003D077C: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D07AA;

loc_003D0781: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x48345B;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D07A7u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D07A7: ;
    MEM32(ebp + -8) = eax;

loc_003D07AA: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x94)) >> 32) & 1);
    esp = esp + 0x94;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D07C0
 * Original: 0x003D07C0 - 0x003D0AC4 (772 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D07C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D07C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x64)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -9) = LO8(eax);

loc_003D07D5: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFEC78u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D07F5u); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D07F5: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(ebp + -80);
    eax = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0812u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D0812: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D081Du); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D081D: ;
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0xFFFFEC78u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D0835; /* jne: not equal / not zero */

loc_003D0829: ;
    MEM32(ebp + -8) = 0;
    goto loc_003D0ABB;

loc_003D0835: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -76) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003D0877; /* jg: greater (signed >) */

loc_003D0846: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_003D0877; /* jge: greater or equal (signed >=) */

loc_003D084F: ;
    eax = MEM32(ebp + -76);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x4D4A7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x4D4A7C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0877; /* je: equal / zero */

loc_003D085C: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(eax * 4 + 0x4D4A7C);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(ebp + -8) = 0;
    goto loc_003D0ABB;

loc_003D0877: ;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -84) = eax;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(9)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D08D3; /* je: equal / zero */

loc_003D0882: ;
    goto loc_003D0884;

loc_003D0884: ;
    eax = MEM32(ebp + -84);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x20)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D08D3; /* je: equal / zero */

loc_003D088C: ;
    goto loc_003D088E;

loc_003D088E: ;
    eax = MEM32(ebp + -84);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x22)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D0A02; /* je: equal / zero */

loc_003D089A: ;
    goto loc_003D089C;

loc_003D089C: ;
    eax = MEM32(ebp + -84);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x23)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D08D8; /* je: equal / zero */

loc_003D08A4: ;
    goto loc_003D08A6;

loc_003D08A6: ;
    eax = MEM32(ebp + -84);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x27)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D0A35; /* je: equal / zero */

loc_003D08B2: ;
    goto loc_003D08B4;

loc_003D08B4: ;
    eax = MEM32(ebp + -84);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x5B)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D096C; /* je: equal / zero */

loc_003D08C0: ;
    goto loc_003D08C2;

loc_003D08C2: ;
    eax = MEM32(ebp + -84);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x5D)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D09B7; /* je: equal / zero */

loc_003D08CE: ;
    goto loc_003D0A65;

loc_003D08D3: ;
    goto loc_003D07D5;

loc_003D08D8: ;
    goto loc_003D08DA;

loc_003D08DA: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D08EDu); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D08ED: ;
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D08F5; /* jne: not equal / not zero */

loc_003D08F3: ;
    goto loc_003D0967;

loc_003D08F5: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0900u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D0900: ;
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0xFFFFEC78u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D090E; /* jne: not equal / not zero */

loc_003D090C: ;
    goto loc_003D0967;

loc_003D090E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -76) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003D091B; /* jg: greater (signed >) */

loc_003D0915: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 8 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_003D0931; /* jle: less or equal (signed <=) */

loc_003D091B: ;
    eax = 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -76) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003D092B; /* jg: greater (signed >) */

loc_003D0925: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0x1F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_003D0931; /* jle: less or equal (signed <=) */

loc_003D092B: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0x7F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D0962; /* jne: not equal / not zero */

loc_003D0931: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x489044;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D095Au); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D095A: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D0ABB;

loc_003D0962: ;
    goto loc_003D08DA;

loc_003D0967: ;
    goto loc_003D07D5;

loc_003D096C: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 4;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -9), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_Z(_fa, _fb)) goto loc_003D09B2; /* je: equal / zero */

loc_003D097B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x5B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D098Eu); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D098E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D0994; /* jne: not equal / not zero */

loc_003D0992: ;
    goto loc_003D09B2;

loc_003D0994: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D099Fu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D099F: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 5;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = 2;

loc_003D09B2: ;
    goto loc_003D0AB4;

loc_003D09B7: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 6;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -9), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_Z(_fa, _fb)) goto loc_003D09FD; /* je: equal / zero */

loc_003D09C6: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x5D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D09D9u); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D09D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D09DF; /* jne: not equal / not zero */

loc_003D09DD: ;
    goto loc_003D09FD;

loc_003D09DF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D09EAu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D09EA: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 7;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = 2;

loc_003D09FD: ;
    goto loc_003D0AB4;

loc_003D0A02: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A20u); RECOMP_ABI_CALL(0x003D0D40u, sub_003D0D40); /* call 0x003D0D40 */

loc_003D0A20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0A31; /* je: equal / zero */

loc_003D0A25: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003D0ABB;

loc_003D0A31: ;
    goto loc_003D0A33;

loc_003D0A33: ;
    goto loc_003D0AB4;

loc_003D0A35: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A53u); RECOMP_ABI_CALL(0x003D1000u, sub_003D1000); /* call 0x003D1000 */

loc_003D0A53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0A61; /* je: equal / zero */

loc_003D0A58: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003D0ABB;

loc_003D0A61: ;
    goto loc_003D0A63;

loc_003D0A63: ;
    goto loc_003D0AB4;

loc_003D0A65: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 8) = ecx;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -9), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_Z(_fa, _fb)) goto loc_003D0A90; /* je: equal / zero */

loc_003D0A77: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A89u); RECOMP_ABI_CALL(0x003D11F0u, sub_003D11F0); /* call 0x003D11F0 */

loc_003D0A89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D0AA7; /* jne: not equal / not zero */

loc_003D0A8E: ;
    goto loc_003D0AB0;

loc_003D0A90: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0AA2u); RECOMP_ABI_CALL(0x003D1300u, sub_003D1300); /* call 0x003D1300 */

loc_003D0AA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0AB0; /* je: equal / zero */

loc_003D0AA7: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003D0ABB;

loc_003D0AB0: ;
    goto loc_003D0AB2;

loc_003D0AB2: ;
    goto loc_003D0AB4;

loc_003D0AB4: ;
    MEM32(ebp + -8) = 0;

loc_003D0ABB: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x64;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D0AD0
 * Original: 0x003D0AD0 - 0x003D0BB5 (229 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0AD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003D0AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    MEM32(ebp + -12) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    if ((!_cf && eax != 0)) goto loc_003D0BA3; /* ja: above (unsigned >) */

loc_003D0AF1: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax * 4 + 0x4D4A28);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003D0AFDu) goto loc_003D0AFD;
    if (_jt == 0x003D0B42u) goto loc_003D0B42;
    if (_jt == 0x003D0B50u) goto loc_003D0B50;
    if (_jt == 0x003D0B95u) goto loc_003D0B95;
    if (_jt == 0x003D0BA3u) goto loc_003D0BA3;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003D0AFD: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x1E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D0B40; /* jle: less or equal (signed <=) */

loc_003D0B12: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4668A1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B3Bu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D0B3B: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D0BAC;

loc_003D0B40: ;
    goto loc_003D0BA5;

loc_003D0B42: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 0x20) = ecx;
    goto loc_003D0BA5;

loc_003D0B50: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0x1E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D0B93; /* jle: less or equal (signed <=) */

loc_003D0B65: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4668A1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B8Eu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D0B8E: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D0BAC;

loc_003D0B93: ;
    goto loc_003D0BA5;

loc_003D0B95: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 0x24) = ecx;
    goto loc_003D0BA5;

loc_003D0BA3: ;
    goto loc_003D0BA5;

loc_003D0BA5: ;
    MEM32(ebp + -8) = 0;

loc_003D0BAC: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D0BC0
 * Original: 0x003D0BC0 - 0x003D0C2B (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0BC0(void)
{
    uint32_t ebp = g_ebp;

loc_003D0BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    ecx = eax;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0BF2u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003D0BF2: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 8);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 8);
    esi = MEM32(ebp + 0xC);
    esi = MEM32(esi + 0x10);
    edx = edx - esi;
    edx = edx + 1;
    MEM32(ecx + 8) = edx;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003D0C30
 * Original: 0x003D0C30 - 0x003D0CC0 (144 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0C30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0xFFFFEC78u;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D0C94; /* jae: above or equal (unsigned >=) */

loc_003D0C54: ;
    eax = MEM32(ebp + -8);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -8) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0C92; /* jne: not equal / not zero */

loc_003D0C6B: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D0C92; /* jae: above or equal (unsigned >=) */

loc_003D0C76: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0C92; /* jne: not equal / not zero */

loc_003D0C81: ;
    eax = MEM32(ebp + -8);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -8) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -4) = eax;

loc_003D0C92: ;
    goto loc_003D0C94;

loc_003D0C94: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0CB8; /* jne: not equal / not zero */

loc_003D0CA3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    ecx = ecx + 1;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;

loc_003D0CB8: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D0CC0
 * Original: 0x003D0CC0 - 0x003D0D3D (125 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0CC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D0CF1; /* jae: above or equal (unsigned >=) */

loc_003D0CE0: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0CF1; /* jne: not equal / not zero */

loc_003D0CEB: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D0D33;

loc_003D0CF1: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0D2F; /* jne: not equal / not zero */

loc_003D0CF7: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D0D2F; /* jae: above or equal (unsigned >=) */

loc_003D0D05: ;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D0D25; /* jne: not equal / not zero */

loc_003D0D15: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -9) = LO8(eax);

loc_003D0D25: ;
    SET_LO8(eax, MEM8(ebp + -9));
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -1) = LO8(eax);
    goto loc_003D0D33;

loc_003D0D2F: ;
    MEM8(ebp + -1) = 0;

loc_003D0D33: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D0D40
 * Original: 0x003D0D40 - 0x003D0FFA (698 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D0D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x64)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0D60u); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D0D60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D0D8E; /* jne: not equal / not zero */

loc_003D0D64: ;
    edx = 0x48E8D0;
    ecx = 0x452E67;
    eax = 0x489060;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x884;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0D8Eu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D0D8E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DA9u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D0DA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D0DAF; /* jne: not equal / not zero */

loc_003D0DAD: ;
    goto loc_003D0DC9;

loc_003D0DAF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DC1u); RECOMP_ABI_CALL(0x003D14F0u, sub_003D14F0); /* call 0x003D14F0 */

loc_003D0DC1: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D0FF1;

loc_003D0DC9: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DD4u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D0DD4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DF4u); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D0DF4: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(ebp + -80);
    eax = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0E11u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D0E11: ;
    MEM32(ebp + -68) = 0;

loc_003D0E18: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0E2Bu); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D0E2B: ;
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D0E36; /* jne: not equal / not zero */

loc_003D0E31: ;
    goto loc_003D0F81;

loc_003D0E36: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0E41u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D0E41: ;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xFFFFEC78u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D0E7E; /* jne: not equal / not zero */

loc_003D0E4D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x47A799;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0E76u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D0E76: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D0FF1;

loc_003D0E7E: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0x5C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0ED5; /* je: equal / zero */

loc_003D0E84: ;
    eax = MEM32(ebp + -72);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0E8Fu); RECOMP_ABI_CALL(0x003D1980u, sub_003D1980); /* call 0x003D1980 */

loc_003D0E8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D0ED0; /* jne: not equal / not zero */

loc_003D0E93: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0ED0; /* je: equal / zero */

loc_003D0E99: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 9 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0ED0; /* je: equal / zero */

loc_003D0E9F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4587F1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0EC8u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D0EC8: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D0FF1;

loc_003D0ED0: ;
    goto loc_003D0E18;

loc_003D0ED5: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D0F1C; /* jne: not equal / not zero */

loc_003D0EDB: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -68);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0F1C; /* je: equal / zero */

loc_003D0EF2: ;
    edx = 0x46C833;
    ecx = 0x452E67;
    eax = 0x489060;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x89C;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0F1Cu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D0F1C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0F27u); RECOMP_ABI_CALL(0x003D19E0u, sub_003D19E0); /* call 0x003D19E0 */

loc_003D0F27: ;
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_003D0F3C; /* jge: greater or equal (signed >=) */

loc_003D0F30: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003D0FF1;

loc_003D0F3C: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_003D0F53; /* jle: less or equal (signed <=) */

loc_003D0F42: ;
    ecx = MEM32(ebp + -76);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    goto loc_003D0E18;

loc_003D0F53: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x477C3C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0F7Cu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D0F7C: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D0FF1;

loc_003D0F81: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -68);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0FB1u); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D0FB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D0FDF; /* jne: not equal / not zero */

loc_003D0FB5: ;
    edx = 0x48E8D0;
    ecx = 0x452E67;
    eax = 0x489060;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x8AD;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0FDFu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D0FDF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0FEAu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D0FEA: ;
    MEM32(ebp + -8) = 0;

loc_003D0FF1: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x64;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1000
 * Original: 0x003D1000 - 0x003D11EF (495 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D1000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x54)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1020u); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D1020: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D104E; /* jne: not equal / not zero */

loc_003D1024: ;
    edx = 0x46C841;
    ecx = 0x452E67;
    eax = 0x477C6C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x8DF;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D104Eu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D104E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1069u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1069: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D106F; /* jne: not equal / not zero */

loc_003D106D: ;
    goto loc_003D1089;

loc_003D106F: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1081u); RECOMP_ABI_CALL(0x003D1C10u, sub_003D1C10); /* call 0x003D1C10 */

loc_003D1081: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D11E6;

loc_003D1089: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1094u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1094: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D10B4u); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D10B4: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(ebp + -72);
    eax = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D10D1u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D10D1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D10E4u); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D10E4: ;
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D10EF; /* jne: not equal / not zero */

loc_003D10EA: ;
    goto loc_003D117F;

loc_003D10EF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D10FAu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D10FA: ;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0xFFFFEC78u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D1137; /* jne: not equal / not zero */

loc_003D1106: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x47A799;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D112Fu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D112F: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D11E6;

loc_003D1137: ;
    eax = MEM32(ebp + -68);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1142u); RECOMP_ABI_CALL(0x003D1980u, sub_003D1980); /* call 0x003D1980 */

loc_003D1142: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D117A; /* jne: not equal / not zero */

loc_003D1146: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 9 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D117A; /* je: equal / zero */

loc_003D114C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4587F1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1175u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D1175: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D11E6;

loc_003D117A: ;
    goto loc_003D10D1;

loc_003D117F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D11A6u); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D11A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D11D4; /* jne: not equal / not zero */

loc_003D11AA: ;
    edx = 0x46C841;
    ecx = 0x452E67;
    eax = 0x477C6C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x8F1;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D11D4u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D11D4: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D11DFu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D11DF: ;
    MEM32(ebp + -8) = 0;

loc_003D11E6: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D11F0
 * Original: 0x003D11F0 - 0x003D1300 (272 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D11F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D11F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x58)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D121Cu); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D121C: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(ebp + -72);
    eax = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1239u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D1239: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -60) = eax;

loc_003D1242: ;
    eax = MEM32(ebp + -60);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003D12DF; /* jae: above or equal (unsigned >=) */

loc_003D1251: ;
    eax = MEM32(ebp + -60);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D125Fu); RECOMP_ABI_CALL(0x003DAA50u, sub_003DAA50); /* call 0x003DAA50 */

loc_003D125F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D127A; /* jne: not equal / not zero */

loc_003D1264: ;
    eax = MEM32(ebp + -60);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D127A; /* je: equal / zero */

loc_003D126F: ;
    eax = MEM32(ebp + -60);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D1285; /* jne: not equal / not zero */

loc_003D127A: ;
    eax = MEM32(ebp + -60);
    eax = eax + 1;
    MEM32(ebp + -60) = eax;
    goto loc_003D1242;

loc_003D1285: ;
    eax = MEM32(ebp + -60);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_003D12DD; /* jl: less (signed <) */

loc_003D1292: ;
    edx = MEM32(ebp + -60);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -60);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ebp + -64;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D12B3u); RECOMP_ABI_CALL(0x003CDC70u, sub_003CDC70); /* call 0x003CDC70 */

loc_003D12B3: ;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_003D12DB; /* jle: less or equal (signed <=) */

loc_003D12BC: ;
    eax = MEM32(ebp + -64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D12C7u); RECOMP_ABI_CALL(0x003D1ED0u, sub_003D1ED0); /* call 0x003D1ED0 */

loc_003D12C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D12CD; /* jne: not equal / not zero */

loc_003D12CB: ;
    goto loc_003D12DB;

loc_003D12CD: ;
    eax = MEM32(ebp + -68);
    eax = eax + MEM32(ebp + -60);
    MEM32(ebp + -60) = eax;
    goto loc_003D1242;

loc_003D12DB: ;
    goto loc_003D12DD;

loc_003D12DD: ;
    goto loc_003D12DF;

loc_003D12DF: ;
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1300
 * Original: 0x003D1300 - 0x003D1422 (290 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1300(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D132Eu); RECOMP_ABI_CALL(0x003D2090u, sub_003D2090); /* call 0x003D2090 */

loc_003D132E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D1334; /* jne: not equal / not zero */

loc_003D1332: ;
    goto loc_003D134E;

loc_003D1334: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1346u); RECOMP_ABI_CALL(0x003D2140u, sub_003D2140); /* call 0x003D2140 */

loc_003D1346: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D1419;

loc_003D134E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1366u); RECOMP_ABI_CALL(0x003D22E0u, sub_003D22E0); /* call 0x003D22E0 */

loc_003D1366: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D136C; /* jne: not equal / not zero */

loc_003D136A: ;
    goto loc_003D1386;

loc_003D136C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D137Eu); RECOMP_ABI_CALL(0x003D2410u, sub_003D2410); /* call 0x003D2410 */

loc_003D137E: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D1419;

loc_003D1386: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D139Eu); RECOMP_ABI_CALL(0x003D2AD0u, sub_003D2AD0); /* call 0x003D2AD0 */

loc_003D139E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D13A4; /* jne: not equal / not zero */

loc_003D13A2: ;
    goto loc_003D13BB;

loc_003D13A4: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D13B6u); RECOMP_ABI_CALL(0x003D2B20u, sub_003D2B20); /* call 0x003D2B20 */

loc_003D13B6: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D1419;

loc_003D13BB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D13D3u); RECOMP_ABI_CALL(0x003D2CC0u, sub_003D2CC0); /* call 0x003D2CC0 */

loc_003D13D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D13D9; /* jne: not equal / not zero */

loc_003D13D7: ;
    goto loc_003D13F0;

loc_003D13D9: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D13EBu); RECOMP_ABI_CALL(0x003D2D70u, sub_003D2D70); /* call 0x003D2D70 */

loc_003D13EB: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D1419;

loc_003D13F0: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x441EFB;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1416u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D1416: ;
    MEM32(ebp + -8) = eax;

loc_003D1419: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1430
 * Original: 0x003D1430 - 0x003D14E4 (180 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1430(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D146F; /* jne: not equal / not zero */

loc_003D1445: ;
    edx = 0x469765;
    ecx = 0x452E67;
    eax = 0x45049D;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x7DD;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D146Fu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D146F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax + MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003D1486; /* jbe: below or equal (unsigned <=) */

loc_003D1480: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D14DA;

loc_003D1486: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;

loc_003D1496: ;
    ecx = MEM32(ebp + -12);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_003D14B6; /* jge: greater or equal (signed >=) */

loc_003D14A3: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -13) = LO8(eax);

loc_003D14B6: ;
    SET_LO8(eax, MEM8(ebp + -13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D14BF; /* jne: not equal / not zero */

loc_003D14BD: ;
    goto loc_003D14CC;

loc_003D14BF: ;
    goto loc_003D14C1;

loc_003D14C1: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_003D1496;

loc_003D14CC: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -1) = LO8(eax);

loc_003D14DA: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D14F0
 * Original: 0x003D14F0 - 0x003D1975 (1157 bytes, 308 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D14F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D14F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x64)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1518u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1518: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1546; /* jne: not equal / not zero */

loc_003D151C: ;
    edx = 0x463B40;
    ecx = 0x452E67;
    eax = 0x477C56;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x82A;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1546u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D1546: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1551u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1551: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D155Cu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D155C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1567u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1567: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D157Au); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D157A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1580; /* jne: not equal / not zero */

loc_003D157E: ;
    goto loc_003D158B;

loc_003D1580: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D158Bu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D158B: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D15ABu); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D15AB: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(ebp + -80);
    eax = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D15C8u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D15C8: ;
    MEM32(ebp + -68) = 0;

loc_003D15CF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D15EAu); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D15EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D15F0; /* jne: not equal / not zero */

loc_003D15EE: ;
    goto loc_003D166E;

loc_003D15F0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D160Bu); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D160B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1611; /* jne: not equal / not zero */

loc_003D160F: ;
    goto loc_003D1667;

loc_003D1611: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    MEM32(esp + 8) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D162Cu); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D162C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1632; /* jne: not equal / not zero */

loc_003D1630: ;
    goto loc_003D1663;

loc_003D1632: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x45B186;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D165Bu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D165B: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D196C;

loc_003D1663: ;
    goto loc_003D1665;

loc_003D1665: ;
    goto loc_003D166C;

loc_003D1667: ;
    goto loc_003D18DE;

loc_003D166C: ;
    goto loc_003D166E;

loc_003D166E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1679u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1679: ;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xFFFFEC78u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D16B6; /* jne: not equal / not zero */

loc_003D1685: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x491643;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D16AEu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D16AE: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D196C;

loc_003D16B6: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0x5C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1721; /* je: equal / zero */

loc_003D16BC: ;
    eax = MEM32(ebp + -72);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D16C7u); RECOMP_ABI_CALL(0x003D1980u, sub_003D1980); /* call 0x003D1980 */

loc_003D16C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D171C; /* jne: not equal / not zero */

loc_003D16CB: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D16EB; /* je: equal / zero */

loc_003D16D1: ;
    eax = MEM32(ebp + -72);
    ecx = 0x45E165;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D16E6u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D16E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D171C; /* jne: not equal / not zero */

loc_003D16EB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4587F1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1714u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D1714: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D196C;

loc_003D171C: ;
    goto loc_003D15CF;

loc_003D1721: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D1768; /* jne: not equal / not zero */

loc_003D1727: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -68);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1768; /* je: equal / zero */

loc_003D173E: ;
    edx = 0x46C833;
    ecx = 0x452E67;
    eax = 0x477C56;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x852;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1768u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D1768: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1773u); RECOMP_ABI_CALL(0x003D19E0u, sub_003D19E0); /* call 0x003D19E0 */

loc_003D1773: ;
    MEM32(ebp + -76) = eax;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_003D1788; /* jge: greater or equal (signed >=) */

loc_003D177C: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003D196C;

loc_003D1788: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_003D179F; /* jle: less or equal (signed <=) */

loc_003D178E: ;
    ecx = MEM32(ebp + -76);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    goto loc_003D15CF;

loc_003D179F: ;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D17CF; /* je: equal / zero */

loc_003D17A5: ;
    edx = 0x460E68;
    ecx = 0x452E67;
    eax = 0x477C56;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x85E;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D17CFu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D17CF: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D17DAu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D17DA: ;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D17ED; /* je: equal / zero */

loc_003D17E3: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 9 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D1878; /* jne: not equal / not zero */

loc_003D17ED: ;
    goto loc_003D17EF;

loc_003D17EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xFFFFEC78u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -81) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1826; /* je: equal / zero */

loc_003D17FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -81) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1826; /* je: equal / zero */

loc_003D1808: ;
    eax = MEM32(ebp + -72);
    ecx = 0x463B4E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D181Du); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D181D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -81) = LO8(eax);

loc_003D1826: ;
    SET_LO8(eax, MEM8(ebp + -81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D182F; /* jne: not equal / not zero */

loc_003D182D: ;
    goto loc_003D183F;

loc_003D182F: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D183Au); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D183A: ;
    MEM32(ebp + -72) = eax;
    goto loc_003D17EF;

loc_003D183F: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1876; /* je: equal / zero */

loc_003D1845: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x477C3C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D186Eu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D186E: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D196C;

loc_003D1876: ;
    goto loc_003D1878;

loc_003D1878: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D18AD; /* jne: not equal / not zero */

loc_003D187E: ;
    goto loc_003D1880;

loc_003D1880: ;
    ecx = MEM32(ebp + 8);
    eax = 0x45E165;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1895u); RECOMP_ABI_CALL(0x003D1B60u, sub_003D1B60); /* call 0x003D1B60 */

loc_003D1895: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D189B; /* jne: not equal / not zero */

loc_003D1899: ;
    goto loc_003D18A8;

loc_003D189B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D18A6u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D18A6: ;
    goto loc_003D1880;

loc_003D18A8: ;
    goto loc_003D15CF;

loc_003D18AD: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x477C3C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D18D6u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D18D6: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D196C;

loc_003D18DE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -68);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x22;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1916u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1916: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1944; /* jne: not equal / not zero */

loc_003D191A: ;
    edx = 0x463B40;
    ecx = 0x452E67;
    eax = 0x477C56;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x87D;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1944u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D1944: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D194Fu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D194F: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D195Au); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D195A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1965u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1965: ;
    MEM32(ebp + -8) = 0;

loc_003D196C: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x64;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1980
 * Original: 0x003D1980 - 0x003D19DB (91 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1980(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D1991; /* jne: not equal / not zero */

loc_003D198F: ;
    goto loc_003D19AD;

loc_003D1991: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D199Fu); RECOMP_ABI_CALL(0x003DAC90u, sub_003DAC90); /* call 0x003DAC90 */

loc_003D199F: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D19D1; /* jne: not equal / not zero */

loc_003D19AB: ;
    goto loc_003D19C0;

loc_003D19AD: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    ecx = ecx - 0x20;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5F (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003D19D1; /* jb: below (unsigned <) */

loc_003D19C0: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003D19D1: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D19E0
 * Original: 0x003D19E0 - 0x003D1B53 (371 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D19E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D19E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003D1A0C; /* jb: below (unsigned <) */

loc_003D1A00: ;
    MEM32(ebp + -16) = 0;
    goto loc_003D1B48;

loc_003D1A0C: ;
    eax = MEM32(ebp + -20);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -20) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1A50; /* je: equal / zero */

loc_003D1A23: ;
    eax = MEM32(ebp + -24);
    ecx = 0x458808;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1A38u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D1A38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1A50; /* je: equal / zero */

loc_003D1A3D: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 8);
    eax = eax - ecx;
    MEM32(ebp + -16) = eax;
    goto loc_003D1B48;

loc_003D1A50: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x78 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1A60; /* jne: not equal / not zero */

loc_003D1A56: ;
    eax = 2;
    MEM32(ebp + -36) = eax;
    goto loc_003D1A89;

loc_003D1A60: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x75 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1A70; /* jne: not equal / not zero */

loc_003D1A66: ;
    eax = 4;
    MEM32(ebp + -40) = eax;
    goto loc_003D1A83;

loc_003D1A70: ;
    edx = MEM32(ebp + -24);
    eax = 0; /* xor self */
    ecx = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x55 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -40) = eax;

loc_003D1A83: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -36) = eax;

loc_003D1A89: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1B41; /* je: equal / zero */

loc_003D1A99: ;
    MEM32(ebp + -32) = 0;

loc_003D1AA0: ;
    ecx = MEM32(ebp + -32);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_003D1ACE; /* jge: greater or equal (signed >=) */

loc_003D1AAD: ;
    ecx = MEM32(ebp + -20);
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D1ACE; /* jae: above or equal (unsigned >=) */

loc_003D1ABD: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1ACBu); RECOMP_ABI_CALL(0x003D1BB0u, sub_003D1BB0); /* call 0x003D1BB0 */

loc_003D1ACB: ;
    MEM8(ebp + -41) = LO8(eax);

loc_003D1ACE: ;
    SET_LO8(eax, MEM8(ebp + -41));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D1AD7; /* jne: not equal / not zero */

loc_003D1AD5: ;
    goto loc_003D1AED;

loc_003D1AD7: ;
    goto loc_003D1AD9;

loc_003D1AD9: ;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_003D1AA0;

loc_003D1AED: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1B31; /* je: equal / zero */

loc_003D1AF5: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0xC);
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -24);
    ebx = MEM32(edx + 0x18);
    edi = MEM32(edx + 0x1C);
    edx = 0x441EDC;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1B2Cu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D1B2C: ;
    MEM32(ebp + -16) = eax;
    goto loc_003D1B48;

loc_003D1B31: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 8);
    eax = eax - ecx;
    MEM32(ebp + -16) = eax;
    goto loc_003D1B48;

loc_003D1B41: ;
    MEM32(ebp + -16) = 0;

loc_003D1B48: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1B60
 * Original: 0x003D1B60 - 0x003D1BB0 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1B60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D1B60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003D1B6C: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1BA2; /* je: equal / zero */

loc_003D1B74: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1B89u); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D1B89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1B8F; /* jne: not equal / not zero */

loc_003D1B8D: ;
    goto loc_003D1B95;

loc_003D1B8F: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D1BA6;

loc_003D1B95: ;
    goto loc_003D1B97;

loc_003D1B97: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;
    goto loc_003D1B6C;

loc_003D1BA2: ;
    MEM8(ebp + -1) = 0;

loc_003D1BA6: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1BB0
 * Original: 0x003D1BB0 - 0x003D1C08 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1BB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1BC7u); RECOMP_ABI_CALL(0x003DB5E0u, sub_003DB5E0); /* call 0x003DB5E0 */

loc_003D1BC7: ;
    MEM32(ebp + 8) = eax;
    eax = 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D1BDF; /* jg: greater (signed >) */

loc_003D1BD4: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x39 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_003D1BFE; /* jle: less or equal (signed <=) */

loc_003D1BDF: ;
    eax = 0; /* xor self */
    ecx = 0x41;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_003D1BF8; /* jg: greater (signed >) */

loc_003D1BEE: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x46 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ebp + -2) = LO8(eax);

loc_003D1BF8: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_003D1BFE: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1C10
 * Original: 0x003D1C10 - 0x003D1EC2 (690 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1C10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D1C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x54)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C38u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1C38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1C66; /* jne: not equal / not zero */

loc_003D1C3C: ;
    edx = 0x474D88;
    ecx = 0x452E67;
    eax = 0x480453;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x8B4;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C66u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D1C66: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C71u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1C71: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C7Cu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1C7C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C87u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1C87: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C9Au); RECOMP_ABI_CALL(0x003D0CC0u, sub_003D0CC0); /* call 0x003D0CC0 */

loc_003D1C9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1CA0; /* jne: not equal / not zero */

loc_003D1C9E: ;
    goto loc_003D1CAB;

loc_003D1CA0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1CABu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1CAB: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1CCBu); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D1CCB: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(ebp + -72);
    eax = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1CE8u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D1CE8: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D03u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1D03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1D09; /* jne: not equal / not zero */

loc_003D1D07: ;
    goto loc_003D1D87;

loc_003D1D09: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D24u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1D24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1D2A; /* jne: not equal / not zero */

loc_003D1D28: ;
    goto loc_003D1D80;

loc_003D1D2A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    MEM32(esp + 8) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D45u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1D45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1D4B; /* jne: not equal / not zero */

loc_003D1D49: ;
    goto loc_003D1D7C;

loc_003D1D4B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4504A9;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D74u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D1D74: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D1EB9;

loc_003D1D7C: ;
    goto loc_003D1D7E;

loc_003D1D7E: ;
    goto loc_003D1D85;

loc_003D1D80: ;
    goto loc_003D1E34;

loc_003D1D85: ;
    goto loc_003D1D87;

loc_003D1D87: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D92u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1D92: ;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0xFFFFEC78u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D1DCF; /* jne: not equal / not zero */

loc_003D1D9E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x46686A;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1DC7u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D1DC7: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D1EB9;

loc_003D1DCF: ;
    eax = MEM32(ebp + -68);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1DDAu); RECOMP_ABI_CALL(0x003D1980u, sub_003D1980); /* call 0x003D1980 */

loc_003D1DDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1E2F; /* jne: not equal / not zero */

loc_003D1DDE: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1DFE; /* je: equal / zero */

loc_003D1DE4: ;
    eax = MEM32(ebp + -68);
    ecx = 0x45E165;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1DF9u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D1DF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D1E2F; /* jne: not equal / not zero */

loc_003D1DFE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4587F1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1E27u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D1E27: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D1EB9;

loc_003D1E2F: ;
    goto loc_003D1CE8;

loc_003D1E34: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x27;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1E63u); RECOMP_ABI_CALL(0x003D1430u, sub_003D1430); /* call 0x003D1430 */

loc_003D1E63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D1E91; /* jne: not equal / not zero */

loc_003D1E67: ;
    edx = 0x474D88;
    ecx = 0x452E67;
    eax = 0x480453;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x8D8;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1E91u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D1E91: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1E9Cu); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1E9C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1EA7u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1EA7: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1EB2u); RECOMP_ABI_CALL(0x003D0C30u, sub_003D0C30); /* call 0x003D0C30 */

loc_003D1EB2: ;
    MEM32(ebp + -8) = 0;

loc_003D1EB9: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D1ED0
 * Original: 0x003D1ED0 - 0x003D208C (444 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1ED0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xB2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1EF2; /* je: equal / zero */

loc_003D1EE0: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xB3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1EF2; /* je: equal / zero */

loc_003D1EE9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xB9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1EFB; /* jne: not equal / not zero */

loc_003D1EF2: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1EFB: ;
    eax = 0xBC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F17; /* ja: above (unsigned >) */

loc_003D1F05: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xBE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F17; /* ja: above (unsigned >) */

loc_003D1F0E: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1F17: ;
    eax = 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F33; /* ja: above (unsigned >) */

loc_003D1F21: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xD6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F33; /* ja: above (unsigned >) */

loc_003D1F2A: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1F33: ;
    eax = 0xD8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F4F; /* ja: above (unsigned >) */

loc_003D1F3D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xF6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F4F; /* ja: above (unsigned >) */

loc_003D1F46: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1F4F: ;
    eax = 0xF8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F6B; /* ja: above (unsigned >) */

loc_003D1F59: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x37D (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F6B; /* ja: above (unsigned >) */

loc_003D1F62: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1F6B: ;
    eax = 0x37F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F87; /* ja: above (unsigned >) */

loc_003D1F75: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x1FFF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1F87; /* ja: above (unsigned >) */

loc_003D1F7E: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1F87: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x200C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1F99; /* je: equal / zero */

loc_003D1F90: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x200D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1FA2; /* jne: not equal / not zero */

loc_003D1F99: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1FA2: ;
    eax = 0x203F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1FBE; /* ja: above (unsigned >) */

loc_003D1FAC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2040) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x2040 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1FBE; /* ja: above (unsigned >) */

loc_003D1FB5: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1FBE: ;
    eax = 0x2070;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1FDA; /* ja: above (unsigned >) */

loc_003D1FC8: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x218F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x218F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1FDA; /* ja: above (unsigned >) */

loc_003D1FD1: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1FDA: ;
    eax = 0x2460;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1FF6; /* ja: above (unsigned >) */

loc_003D1FE4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x24FF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D1FF6; /* ja: above (unsigned >) */

loc_003D1FED: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D1FF6: ;
    eax = 0x2C00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D200F; /* ja: above (unsigned >) */

loc_003D2000: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x2FEF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D200F; /* ja: above (unsigned >) */

loc_003D2009: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D200F: ;
    eax = 0x3001;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D2028; /* ja: above (unsigned >) */

loc_003D2019: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xD7FF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D2028; /* ja: above (unsigned >) */

loc_003D2022: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D2028: ;
    eax = 0xF900;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D2041; /* ja: above (unsigned >) */

loc_003D2032: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDCF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDCF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D2041; /* ja: above (unsigned >) */

loc_003D203B: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D2041: ;
    eax = 0xFDF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D2065; /* ja: above (unsigned >) */

loc_003D204B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D2065; /* ja: above (unsigned >) */

loc_003D2054: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFEFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFEFF (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -1) = LO8(eax);
    goto loc_003D2082;

loc_003D2065: ;
    eax = 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D207E; /* ja: above (unsigned >) */

loc_003D206F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xEFFFF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D207E; /* ja: above (unsigned >) */

loc_003D2078: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2082;

loc_003D207E: ;
    MEM8(ebp + -1) = 0;

loc_003D2082: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D2090
 * Original: 0x003D2090 - 0x003D213A (170 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2090(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D2090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2130; /* jae: above or equal (unsigned >=) */

loc_003D20B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D20B8; /* jne: not equal / not zero */

loc_003D20B6: ;
    goto loc_003D20D4;

loc_003D20B8: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D20C6u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D20C6: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D20E7; /* jne: not equal / not zero */

loc_003D20D2: ;
    goto loc_003D2130;

loc_003D20D4: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax));
    ecx = ecx - 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2130; /* jae: above or equal (unsigned >=) */

loc_003D20E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D20EF; /* jne: not equal / not zero */

loc_003D20ED: ;
    goto loc_003D210C;

loc_003D20EF: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 1));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D20FEu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D20FE: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D2120; /* jne: not equal / not zero */

loc_003D210A: ;
    goto loc_003D2130;

loc_003D210C: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax + 1));
    ecx = ecx - 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2130; /* jae: above or equal (unsigned >=) */

loc_003D2120: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_003D2130: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D2140
 * Original: 0x003D2140 - 0x003D22DC (412 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2140(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D2140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x90;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + 8);
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2174u); RECOMP_ABI_CALL(0x003D31F0u, sub_003D31F0); /* call 0x003D31F0 */

loc_003D2174: ;
    eax = ebp + -36;
    MEM32(ebp + -40) = eax;
    edi = MEM32(ebp + -40);
    esi = ebp + -44;
    edx = ebp + -48;
    ecx = ebp + -52;
    eax = ebp + -56;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D21A1u); RECOMP_ABI_CALL(0x003D3290u, sub_003D3290); /* call 0x003D3290 */

loc_003D21A1: ;
    MEM32(ebp + -60) = eax;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D21D8; /* jne: not equal / not zero */

loc_003D21AA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x48BB0E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D21D0u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D21D0: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D22CF;

loc_003D21D8: ;
    esi = MEM32(ebp + -44);
    edx = MEM32(ebp + -48);
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + -56);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D21F8u); RECOMP_ABI_CALL(0x003D34A0u, sub_003D34A0); /* call 0x003D34A0 */

loc_003D21F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D222A; /* jne: not equal / not zero */

loc_003D21FC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x48BB0E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2222u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2222: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D22CF;

loc_003D222A: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -124) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -120;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D224Au); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D224A: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -124);
    eax = ebp + -120;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2267u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D2267: ;
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -56);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x34) = 0xFFFFFFFFu;
    MEM32(ebp + -12) = 0;

loc_003D22CF: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x90;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D22E0
 * Original: 0x003D22E0 - 0x003D240A (298 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D22E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D22E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2400; /* jae: above or equal (unsigned >=) */

loc_003D2300: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D2308; /* jne: not equal / not zero */

loc_003D2306: ;
    goto loc_003D2327;

loc_003D2308: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2316u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D2316: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D233E; /* jne: not equal / not zero */

loc_003D2322: ;
    goto loc_003D2400;

loc_003D2327: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax));
    ecx = ecx - 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2400; /* jae: above or equal (unsigned >=) */

loc_003D233E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D2346; /* jne: not equal / not zero */

loc_003D2344: ;
    goto loc_003D2366;

loc_003D2346: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 1));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2355u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D2355: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D237E; /* jne: not equal / not zero */

loc_003D2361: ;
    goto loc_003D2400;

loc_003D2366: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax + 1));
    ecx = ecx - 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2400; /* jae: above or equal (unsigned >=) */

loc_003D237E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D2386; /* jne: not equal / not zero */

loc_003D2384: ;
    goto loc_003D23A3;

loc_003D2386: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 2));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2395u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D2395: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D23B7; /* jne: not equal / not zero */

loc_003D23A1: ;
    goto loc_003D2400;

loc_003D23A3: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax + 2));
    ecx = ecx - 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2400; /* jae: above or equal (unsigned >=) */

loc_003D23B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D23BF; /* jne: not equal / not zero */

loc_003D23BD: ;
    goto loc_003D23DC;

loc_003D23BF: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 3));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D23CEu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D23CE: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D23F0; /* jne: not equal / not zero */

loc_003D23DA: ;
    goto loc_003D2400;

loc_003D23DC: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax + 3));
    ecx = ecx - 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2400; /* jae: above or equal (unsigned >=) */

loc_003D23F0: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_003D2400: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D2410
 * Original: 0x003D2410 - 0x003D2AC5 (1717 bytes, 443 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2410(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D2410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF0));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xF0)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -44) = 0xFFFFFFFFu;
    MEM32(ebp + -40) = 0xFFFFFFFFu;
    MEM32(ebp + -36) = 0xFFFFFFFFu;
    MEM32(ebp + -32) = 0xFFFFFFFFu;
    MEM32(ebp + -28) = 0xFFFFFFFFu;
    MEM32(ebp + -24) = 0xFFFFFFFFu;
    MEM32(ebp + -20) = 0xFFFFFFFFu;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    eax = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2473u); RECOMP_ABI_CALL(0x003D31F0u, sub_003D31F0); /* call 0x003D31F0 */

loc_003D2473: ;
    MEM32(ebp + -132) = 0xFFFFEC78u;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -136) = eax;
    eax = ebp + -128;
    MEM32(ebp + -140) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D249A; /* jne: not equal / not zero */

loc_003D2498: ;
    goto loc_003D24B5;

loc_003D249A: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D24ABu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D24AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D24CA; /* jne: not equal / not zero */

loc_003D24B0: ;
    goto loc_003D2592;

loc_003D24B5: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D2592; /* jae: above or equal (unsigned >=) */

loc_003D24CA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D24D2; /* jne: not equal / not zero */

loc_003D24D0: ;
    goto loc_003D24EE;

loc_003D24D2: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax + 1));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D24E4u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D24E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2504; /* jne: not equal / not zero */

loc_003D24E9: ;
    goto loc_003D2592;

loc_003D24EE: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax + 1));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D2592; /* jae: above or equal (unsigned >=) */

loc_003D2504: ;
    eax = MEM32(ebp + -140);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2592; /* jne: not equal / not zero */

loc_003D2513: ;
    edi = ebp + -128;
    esi = ebp + -28;
    edx = ebp + -32;
    ecx = ebp + -36;
    eax = ebp + -40;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D253Au); RECOMP_ABI_CALL(0x003D3290u, sub_003D3290); /* call 0x003D3290 */

loc_003D253A: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2574; /* jne: not equal / not zero */

loc_003D2543: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x48BB0E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D256Cu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D256C: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D2574: ;
    MEM32(ebp + -132) = 0xF;
    eax = MEM32(ebp + -48);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -140))) >> 32) & 1);
    eax = eax + MEM32(ebp + -140);
    MEM32(ebp + -140) = eax;
    goto loc_003D27F3;

loc_003D2592: ;
    esi = MEM32(ebp + -140);
    edx = ebp + -16;
    ecx = ebp + -20;
    eax = ebp + -24;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D25B5u); RECOMP_ABI_CALL(0x003D35F0u, sub_003D35F0); /* call 0x003D35F0 */

loc_003D25B5: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D25EF; /* jne: not equal / not zero */

loc_003D25BE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x44D30C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D25E7u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D25E7: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D25EF: ;
    MEM32(ebp + -132) = 0x10;
    eax = MEM32(ebp + -48);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -140))) >> 32) & 1);
    eax = eax + MEM32(ebp + -140);
    MEM32(ebp + -140) = eax;
    eax = MEM32(ebp + -140);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x54 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D2632; /* je: equal / zero */

loc_003D2616: ;
    eax = MEM32(ebp + -140);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D2632; /* je: equal / zero */

loc_003D2624: ;
    eax = MEM32(ebp + -140);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D26A7; /* jne: not equal / not zero */

loc_003D2632: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D263A; /* jne: not equal / not zero */

loc_003D2638: ;
    goto loc_003D2653;

loc_003D263A: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax + 1));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D264Cu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D264C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2665; /* jne: not equal / not zero */

loc_003D2651: ;
    goto loc_003D26A7;

loc_003D2653: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax + 1));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D26A7; /* jae: above or equal (unsigned >=) */

loc_003D2665: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D266D; /* jne: not equal / not zero */

loc_003D266B: ;
    goto loc_003D2686;

loc_003D266D: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax + 2));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D267Fu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D267F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2698; /* jne: not equal / not zero */

loc_003D2684: ;
    goto loc_003D26A7;

loc_003D2686: ;
    eax = MEM32(ebp + -140);
    eax = ZX8(MEM8(eax + 2));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D26A7; /* jae: above or equal (unsigned >=) */

loc_003D2698: ;
    eax = MEM32(ebp + -140);
    eax = (uint32_t)(int32_t)SMEM8(eax + 3);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D26AC; /* je: equal / zero */

loc_003D26A7: ;
    goto loc_003D27F3;

loc_003D26AC: ;
    edi = MEM32(ebp + -140);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(1)) >> 32) & 1);
    edi = edi + 1;
    MEM32(ebp + -140) = edi;
    esi = ebp + -28;
    edx = ebp + -32;
    ecx = ebp + -36;
    eax = ebp + -40;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D26DFu); RECOMP_ABI_CALL(0x003D3290u, sub_003D3290); /* call 0x003D3290 */

loc_003D26DF: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2719; /* jne: not equal / not zero */

loc_003D26E8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x44A430;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2711u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2711: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D2719: ;
    MEM32(ebp + -132) = 0x11;
    eax = MEM32(ebp + -48);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -140))) >> 32) & 1);
    eax = eax + MEM32(ebp + -140);
    MEM32(ebp + -140) = eax;
    esi = MEM32(ebp + -140);
    edx = ebp + -141;
    ecx = ebp + -148;
    eax = ebp + -152;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D275Eu); RECOMP_ABI_CALL(0x003D3700u, sub_003D3700); /* call 0x003D3700 */

loc_003D275E: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D276C; /* jne: not equal / not zero */

loc_003D2767: ;
    goto loc_003D27F3;

loc_003D276C: ;
    MEM32(ebp + -132) = 0x12;
    eax = MEM32(ebp + -48);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -140))) >> 32) & 1);
    eax = eax + MEM32(ebp + -140);
    MEM32(ebp + -140) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -152)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -152) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D2798; /* jg: greater (signed >) */

loc_003D278F: ;
    _fa = (uint32_t)(MEM32(ebp + -152)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -152), 0x3C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D27C9; /* jl: less (signed <) */

loc_003D2798: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x46688C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D27C1u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D27C1: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D27C9: ;
    eax = (uint32_t)((int32_t)MEM32(ebp + -148) * (int32_t)0x3C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -152))) >> 32) & 1);
    eax = eax + MEM32(ebp + -152);
    esi = (uint32_t)(int32_t)SMEM8(ebp + -141);
    ecx = 1;
    edx = 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) ecx = edx; /* cmove */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(ebp + -44) = eax;

loc_003D27F3: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -216) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -132);
    eax = esp;
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -208;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D281Au); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D281A: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(4));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + -216);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(eax + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -176); /* movups */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -208); /* movups */
    xmm1 = XMM_MEM(ebp + -192); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    eax = MEM32(ebp + -140);
    ecx = ebp + -128;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -48) = eax;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(ebp + -48);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(ebp + -212) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xF));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xF)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D28F3; /* je: equal / zero */

loc_003D28CD: ;
    goto loc_003D28CF;

loc_003D28CF: ;
    eax = MEM32(ebp + -212);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x10));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x10)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D294D; /* je: equal / zero */

loc_003D28DA: ;
    goto loc_003D28DC;

loc_003D28DC: ;
    eax = MEM32(ebp + -212);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFEFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFEFu;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_003D29A0; /* jb: below (unsigned <) */

loc_003D28EE: ;
    goto loc_003D2A87;

loc_003D28F3: ;
    esi = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + -40);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2913u); RECOMP_ABI_CALL(0x003D34A0u, sub_003D34A0); /* call 0x003D34A0 */

loc_003D2913: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D2948; /* jne: not equal / not zero */

loc_003D2917: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x48BB0E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2940u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2940: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D2948: ;
    goto loc_003D2AB1;

loc_003D294D: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2966u); RECOMP_ABI_CALL(0x003D3800u, sub_003D3800); /* call 0x003D3800 */

loc_003D2966: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D299B; /* jne: not equal / not zero */

loc_003D296A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x44D30C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2993u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2993: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D299B: ;
    goto loc_003D2AB1;

loc_003D29A0: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D29B9u); RECOMP_ABI_CALL(0x003D3800u, sub_003D3800); /* call 0x003D3800 */

loc_003D29B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D29EE; /* jne: not equal / not zero */

loc_003D29BD: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x44D30C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D29E6u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D29E6: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D29EE: ;
    esi = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + -40);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2A0Eu); RECOMP_ABI_CALL(0x003D34A0u, sub_003D34A0); /* call 0x003D34A0 */

loc_003D2A0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D2A40; /* jne: not equal / not zero */

loc_003D2A12: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x48BB0E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2A3Bu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2A3B: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D2A40: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x12 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2A85; /* jne: not equal / not zero */

loc_003D2A48: ;
    eax = MEM32(ebp + -44);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2A53u); RECOMP_ABI_CALL(0x003D3910u, sub_003D3910); /* call 0x003D3910 */

loc_003D2A53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D2A85; /* jne: not equal / not zero */

loc_003D2A57: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -136);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x46688C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2A80u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2A80: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D2AB8;

loc_003D2A85: ;
    goto loc_003D2AB1;

loc_003D2A87: ;
    edx = 0x48150B;
    ecx = 0x452E67;
    eax = 0x46F382;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0xA21;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2AB1u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D2AB1: ;
    MEM32(ebp + -12) = 0;

loc_003D2AB8: ;
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xF0)) >> 32) & 1);
    esp = esp + 0xF0;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D2AD0
 * Original: 0x003D2AD0 - 0x003D2B16 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2AD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D2AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D2B0C; /* jae: above or equal (unsigned >=) */

loc_003D2AE7: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x74 (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D2B06; /* je: equal / zero */

loc_003D2AF7: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -2) = LO8(eax);

loc_003D2B06: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_003D2B0C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D2B20
 * Original: 0x003D2B20 - 0x003D2CBE (414 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2B20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D2B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x74;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -18;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2B47u); RECOMP_ABI_CALL(0x003D31F0u, sub_003D31F0); /* call 0x003D31F0 */

loc_003D2B47: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -24) = eax;
    MEM8(ebp + -25) = 0;
    eax = ebp + -18;
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -32);
    eax = 0x466DBF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2B77u); RECOMP_ABI_CALL(0x0042A280u, sub_0042A280); /* call 0x0042A280 */

loc_003D2B77: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D2B8E; /* jne: not equal / not zero */

loc_003D2B7F: ;
    MEM8(ebp + -25) = 1;
    eax = MEM32(ebp + -32);
    eax = eax + 4;
    MEM32(ebp + -32) = eax;
    goto loc_003D2BF2;

loc_003D2B8E: ;
    ecx = MEM32(ebp + -32);
    eax = 0x43F14C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2BABu); RECOMP_ABI_CALL(0x0042A280u, sub_0042A280); /* call 0x0042A280 */

loc_003D2BAB: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D2BC2; /* jne: not equal / not zero */

loc_003D2BB3: ;
    MEM8(ebp + -25) = 0;
    eax = MEM32(ebp + -32);
    eax = eax + 5;
    MEM32(ebp + -32) = eax;
    goto loc_003D2BF0;

loc_003D2BC2: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x48046C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2BE8u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2BE8: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D2CB5;

loc_003D2BF0: ;
    goto loc_003D2BF2;

loc_003D2BF2: ;
    eax = MEM32(ebp + -32);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D2C45; /* je: equal / zero */

loc_003D2BFD: ;
    eax = MEM32(ebp + -32);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 0x4555EC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2C15u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D2C15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D2C45; /* jne: not equal / not zero */

loc_003D2C1A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x48046C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2C40u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2C40: ;
    MEM32(ebp + -8) = eax;
    goto loc_003D2CB5;

loc_003D2C45: ;
    eax = MEM32(ebp + -32);
    ecx = ebp + -18;
    eax = eax - ecx;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -100) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -96;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x15;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2C70u); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D2C70: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -100);
    eax = ebp + -96;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2C8Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D2C8D: ;
    SET_LO8(ecx, MEM8(ebp + -25));
    eax = MEM32(ebp + 0xC);
    SET_LO8(ecx, LO8(ecx) & 1);
    MEM8(eax + 0x18) = LO8(ecx);
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    MEM32(ebp + -8) = 0;

loc_003D2CB5: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x74;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D2CC0
 * Original: 0x003D2CC0 - 0x003D2D67 (167 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2CC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D2CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D2D02; /* jae: above or equal (unsigned >=) */

loc_003D2CD4: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D2D02; /* je: equal / zero */

loc_003D2CDF: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 0x452EC3;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2CF7u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D2CF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D2D02; /* je: equal / zero */

loc_003D2CFC: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2D5D;

loc_003D2D02: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D2D59; /* jae: above or equal (unsigned >=) */

loc_003D2D0D: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 3;
    MEM32(eax + 4) = 0x48E8DD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2D27u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_003D2D27: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D2D51; /* je: equal / zero */

loc_003D2D2F: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 3;
    MEM32(eax + 4) = 0x463B51;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2D49u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_003D2D49: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D2D57; /* jne: not equal / not zero */

loc_003D2D51: ;
    MEM8(ebp + -1) = 1;
    goto loc_003D2D5D;

loc_003D2D57: ;
    goto loc_003D2D59;

loc_003D2D59: ;
    MEM8(ebp + -1) = 0;

loc_003D2D5D: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D2D70
 * Original: 0x003D2D70 - 0x003D31E7 (1143 bytes, 309 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2D70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D2D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xF0)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -66;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2D9Bu); RECOMP_ABI_CALL(0x003D31F0u, sub_003D31F0); /* call 0x003D31F0 */

loc_003D2D9B: ;
    eax = ebp + -66;
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -72);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2FB9; /* jne: not equal / not zero */

loc_003D2DB9: ;
    MEM32(ebp + -80) = 0;
    MEM32(ebp + -84) = 0;
    eax = MEM32(ebp + -72);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    MEM32(ebp + -216) = eax;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x62)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D2E19; /* je: equal / zero */

loc_003D2DD9: ;
    goto loc_003D2DDB;

loc_003D2DDB: ;
    eax = MEM32(ebp + -216);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x6F)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D2E07; /* je: equal / zero */

loc_003D2DE6: ;
    goto loc_003D2DE8;

loc_003D2DE8: ;
    eax = MEM32(ebp + -216);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x78)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax != 0)) goto loc_003D2E29; /* jne: not equal / not zero */

loc_003D2DF3: ;
    goto loc_003D2DF5;

loc_003D2DF5: ;
    MEM32(ebp + -84) = 0x10;
    eax = 0x483443;
    MEM32(ebp + -80) = eax;
    goto loc_003D2E29;

loc_003D2E07: ;
    MEM32(ebp + -84) = 8;
    eax = 0x47D765;
    MEM32(ebp + -80) = eax;
    goto loc_003D2E29;

loc_003D2E19: ;
    MEM32(ebp + -84) = 2;
    eax = 0x46689D;
    MEM32(ebp + -80) = eax;

loc_003D2E29: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D2FB7; /* je: equal / zero */

loc_003D2E33: ;
    eax = MEM32(ebp + -72);
    eax = eax + 2;
    MEM32(ebp + -72) = eax;
    ecx = MEM32(ebp + -72);
    eax = MEM32(ebp + -80);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2E4Eu); RECOMP_ABI_CALL(0x0042A580u, sub_0042A580); /* call 0x0042A580 */

loc_003D2E4E: ;
    eax = eax + MEM32(ebp + -72);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -72);
    ecx = ebp + -66;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + -88);
    MEM8(ebp + eax + -66) = 0;
    edx = ebp + -66;
    edx = edx + 2;
    ecx = MEM32(ebp + -84);
    eax = ebp + -16;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2E83u); RECOMP_ABI_CALL(0x003D3990u, sub_003D3990); /* call 0x003D3990 */

loc_003D2E83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D2EBD; /* je: equal / zero */

loc_003D2E88: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -76);
    eax = MEM32(ebp + -16);
    edi = MEM32(ecx + 0x18);
    esi = MEM32(ecx + 0x1C);
    ecx = 0x463B55;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2EB5u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2EB5: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D31DA;

loc_003D2EBD: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -220) = eax;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -144;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x13;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2EE2u); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D2EE2: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + -220);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(eax + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -112); /* movups */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -144); /* movups */
    xmm1 = XMM_MEM(ebp + -128); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2F14u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003D2F14: ;
    MEM32(eax) = 0;
    ecx = ebp + -64;
    edx = MEM32(ebp + -84);
    eax = esp;
    MEM32(eax + 8) = edx;
    edx = ebp + -148;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2F35u); RECOMP_ABI_CALL(0x00427460u, sub_00427460); /* call 0x00427460 */

loc_003D2F35: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2F45u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003D2F45: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2F68; /* jne: not equal / not zero */

loc_003D2F4A: ;
    eax = MEM32(ebp + -148);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2F68; /* jne: not equal / not zero */

loc_003D2F58: ;
    eax = MEM32(ebp + -148);
    ecx = ebp + -66;
    ecx = ecx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2F96; /* jne: not equal / not zero */

loc_003D2F68: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -76);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x44A44F;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D2F8Eu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D2F8E: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D31DA;

loc_003D2F96: ;
    ecx = MEM32(ebp + -88);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -88);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    MEM32(ebp + -12) = 0;
    goto loc_003D31DA;

loc_003D2FB7: ;
    goto loc_003D2FB9;

loc_003D2FB9: ;
    eax = MEM32(ebp + -72);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D2FCF; /* je: equal / zero */

loc_003D2FC4: ;
    eax = MEM32(ebp + -72);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D2FD8; /* jne: not equal / not zero */

loc_003D2FCF: ;
    eax = MEM32(ebp + -72);
    eax = eax + 1;
    MEM32(ebp + -72) = eax;

loc_003D2FD8: ;
    eax = MEM32(ebp + -72);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x69 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D2FEE; /* je: equal / zero */

loc_003D2FE3: ;
    eax = MEM32(ebp + -72);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D3008; /* jne: not equal / not zero */

loc_003D2FEE: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3000u); RECOMP_ABI_CALL(0x003D3CA0u, sub_003D3CA0); /* call 0x003D3CA0 */

loc_003D3000: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D31DA;

loc_003D3008: ;
    eax = ebp + -66;
    MEM32(ebp + -72) = eax;
    ecx = MEM32(ebp + -72);
    eax = 0x4943CE;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3023u); RECOMP_ABI_CALL(0x0042A580u, sub_0042A580); /* call 0x0042A580 */

loc_003D3023: ;
    eax = eax + MEM32(ebp + -72);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -72);
    ecx = ebp + -66;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -152) = eax;
    eax = MEM32(ebp + -152);
    MEM8(ebp + eax + -66) = 0;
    ecx = ebp + -66;
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D305Cu); RECOMP_ABI_CALL(0x003D3990u, sub_003D3990); /* call 0x003D3990 */

loc_003D305C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3096; /* je: equal / zero */

loc_003D3061: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -76);
    eax = MEM32(ebp + -16);
    edi = MEM32(ecx + 0x18);
    esi = MEM32(ecx + 0x1C);
    ecx = 0x463B55;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D308Eu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D308E: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D31DA;

loc_003D3096: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -224) = eax;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -208;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x13;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D30BBu); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D30BB: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + -224);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(eax + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -176); /* movups */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -208); /* movups */
    xmm1 = XMM_MEM(ebp + -192); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D30F6u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003D30F6: ;
    MEM32(eax) = 0;
    eax = esp;
    ecx = ebp + -212;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -66;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3118u); RECOMP_ABI_CALL(0x00427460u, sub_00427460); /* call 0x00427460 */

loc_003D3118: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3128u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003D3128: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D3148; /* jne: not equal / not zero */

loc_003D312D: ;
    eax = MEM32(ebp + -212);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D3148; /* jne: not equal / not zero */

loc_003D313B: ;
    eax = MEM32(ebp + -212);
    ecx = ebp + -66;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D31B8; /* jne: not equal / not zero */

loc_003D3148: ;
    eax = MEM32(ebp + -212);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D318D; /* je: equal / zero */

loc_003D3156: ;
    eax = MEM32(ebp + -212);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = 0x474D97;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3171u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D3171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D318D; /* je: equal / zero */

loc_003D3176: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3188u); RECOMP_ABI_CALL(0x003D3CA0u, sub_003D3CA0); /* call 0x003D3CA0 */

loc_003D3188: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D31DA;

loc_003D318D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -76);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x44A44F;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D31B3u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D31B3: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D31DA;

loc_003D31B8: ;
    ecx = MEM32(ebp + -152);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -152);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    MEM32(ebp + -12) = 0;

loc_003D31DA: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0xF0;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D31F0
 * Original: 0x003D31F0 - 0x003D3283 (147 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D31F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D31F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D322F; /* jg: greater (signed >) */

loc_003D3205: ;
    edx = 0x47A7AD;
    ecx = 0x452E67;
    eax = 0x441F09;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x16A;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D322Fu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D322F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = ecx - eax;
    eax = MEM32(ebp + 0x10);
    eax = eax - 1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D324Fu); RECOMP_ABI_CALL(0x003D3510u, sub_003D3510); /* call 0x003D3510 */

loc_003D324F: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D327E; /* jle: less or equal (signed <=) */

loc_003D3258: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -4);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3274u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D3274: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM8(eax + ecx) = 0;

loc_003D327E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3290
 * Original: 0x003D3290 - 0x003D3497 (519 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3290(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D3290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = 0;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D32E1u); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D32E1: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D32F6; /* jne: not equal / not zero */

loc_003D32EA: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3302; /* je: equal / zero */

loc_003D32F6: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D348F;

loc_003D3302: ;
    eax = MEM32(ebp + 8);
    eax = eax + 3;
    MEM32(ebp + 8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D331Du); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D331D: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3332; /* je: equal / zero */

loc_003D3326: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D348F;

loc_003D3332: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3357; /* je: equal / zero */

loc_003D333E: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003D348F;

loc_003D3357: ;
    eax = MEM32(ebp + 8);
    eax = eax + 3;
    MEM32(ebp + 8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3372u); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D3372: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3387; /* je: equal / zero */

loc_003D337B: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D348F;

loc_003D3387: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D33AB; /* je: equal / zero */

loc_003D339B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003D348F;

loc_003D33AB: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D33BC; /* jne: not equal / not zero */

loc_003D33BA: ;
    goto loc_003D33D1;

loc_003D33BC: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D33CAu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D33CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D33EB; /* jne: not equal / not zero */

loc_003D33CF: ;
    goto loc_003D33DF;

loc_003D33D1: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D33EB; /* jb: below (unsigned <) */

loc_003D33DF: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D348F;

loc_003D33EB: ;
    MEM32(ebp + -16) = 0x186A0;

loc_003D33F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D33FA; /* jne: not equal / not zero */

loc_003D33F8: ;
    goto loc_003D3416;

loc_003D33FA: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3408u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D3408: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -17) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D3429; /* jne: not equal / not zero */

loc_003D3414: ;
    goto loc_003D3433;

loc_003D3416: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -17) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D3433; /* jae: above or equal (unsigned >=) */

loc_003D3429: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -17) = LO8(eax);

loc_003D3433: ;
    SET_LO8(eax, MEM8(ebp + -17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D343C; /* jne: not equal / not zero */

loc_003D343A: ;
    goto loc_003D3469;

loc_003D343C: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -16));
    eax = MEM32(ebp + 0x18);
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -16);
    ecx = 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_003D33F2;

loc_003D3469: ;
    goto loc_003D346B;

loc_003D346B: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D3484; /* jae: above or equal (unsigned >=) */

loc_003D3479: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_003D346B;

loc_003D3484: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;

loc_003D348F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D34A0
 * Original: 0x003D34A0 - 0x003D3504 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D34A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D34A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D34BD; /* jg: greater (signed >) */

loc_003D34B7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x17 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D34C3; /* jle: less or equal (signed <=) */

loc_003D34BD: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D34FA;

loc_003D34C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D34D0; /* jg: greater (signed >) */

loc_003D34CA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3B (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D34D6; /* jle: less or equal (signed <=) */

loc_003D34D0: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D34FA;

loc_003D34D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D34E3; /* jg: greater (signed >) */

loc_003D34DD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x3B (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D34E9; /* jle: less or equal (signed <=) */

loc_003D34E3: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D34FA;

loc_003D34E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D34F6; /* jle: less or equal (signed <=) */

loc_003D34F0: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D34FA;

loc_003D34F6: ;
    MEM8(ebp + -1) = 1;

loc_003D34FA: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3510
 * Original: 0x003D3510 - 0x003D3538 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3510(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D3510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003D352A; /* jge: greater or equal (signed >=) */

loc_003D3522: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_003D3530;

loc_003D352A: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;

loc_003D3530: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3540
 * Original: 0x003D3540 - 0x003D35EA (170 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3540(void)
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

loc_003D3540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -24) = 0;

loc_003D3561: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D35CE; /* jae: above or equal (unsigned >=) */

loc_003D356F: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -28) = ecx;
    ecx = 0xA;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = eax;
    eax = MEM32(ebp + -28);
    eax = eax + eax * 4;
    edx = edx + eax * 2;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFD0u)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFD0u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x80000000u));
    ecx = ecx - 0x80000000u;
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
    if ((_sbb_sf != _sbb_of)) goto loc_003D35C1; /* jl: less (signed <) */

loc_003D35B6: ;
    goto loc_003D35B8;

loc_003D35B8: ;
    MEM32(ebp + -8) = 0;
    goto loc_003D35E1;

loc_003D35C1: ;
    goto loc_003D35C3;

loc_003D35C3: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_003D3561;

loc_003D35CE: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    MEM32(ebp + -8) = eax;

loc_003D35E1: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D35F0
 * Original: 0x003D35F0 - 0x003D36F4 (260 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D35F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D35F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D361Au); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D361A: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 4 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D362F; /* jne: not equal / not zero */

loc_003D3623: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D363B; /* je: equal / zero */

loc_003D362F: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D36EC;

loc_003D363B: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 1;
    ecx = ecx + MEM32(ebp + 8);
    MEM32(ebp + 8) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3656u); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D3656: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D366B; /* jne: not equal / not zero */

loc_003D365F: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3674; /* je: equal / zero */

loc_003D366B: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D36EC;

loc_003D3674: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 1;
    ecx = ecx + MEM32(ebp + 8);
    MEM32(ebp + 8) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D368Fu); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D368F: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D36A1; /* je: equal / zero */

loc_003D3698: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D36EC;

loc_003D36A1: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D36E1; /* je: equal / zero */

loc_003D36B7: ;
    edx = 0x44A442;
    ecx = 0x452E67;
    eax = 0x4943C4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x93F;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D36E1u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D36E1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;

loc_003D36EC: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3700
 * Original: 0x003D3700 - 0x003D37F9 (249 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3700(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D3700: ;
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
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = 0x2B;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3746; /* je: equal / zero */

loc_003D373B: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D3752; /* jne: not equal / not zero */

loc_003D3746: ;
    MEM32(ebp + -4) = 1;
    goto loc_003D37F1;

loc_003D3752: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + 8) = ecx;
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3783; /* je: equal / zero */

loc_003D376F: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3783; /* je: equal / zero */

loc_003D377A: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D37F1;

loc_003D3783: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3795u); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D3795: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D37AA; /* jne: not equal / not zero */

loc_003D379E: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D37B3; /* je: equal / zero */

loc_003D37AA: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D37F1;

loc_003D37B3: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 3;
    MEM32(ebp + 8) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D37CBu); RECOMP_ABI_CALL(0x003D3540u, sub_003D3540); /* call 0x003D3540 */

loc_003D37CB: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D37DD; /* je: equal / zero */

loc_003D37D4: ;
    MEM32(ebp + -4) = 0;
    goto loc_003D37F1;

loc_003D37DD: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;

loc_003D37F1: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3800
 * Original: 0x003D3800 - 0x003D3909 (265 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3800(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D3800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x3C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D3822; /* jle: less or equal (signed <=) */

loc_003D3819: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D38FF;

loc_003D3822: ;
    eax = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D3832; /* jg: greater (signed >) */

loc_003D382C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D383B; /* jle: less or equal (signed <=) */

loc_003D3832: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D38FF;

loc_003D383B: ;
    eax = MEM32(ebp + 8);
    ecx = 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D3860; /* jne: not equal / not zero */

loc_003D384B: ;
    eax = MEM32(ebp + 8);
    ecx = 0x64;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM8(ebp + -57) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D3874; /* jne: not equal / not zero */

loc_003D3860: ;
    eax = MEM32(ebp + 8);
    ecx = 0x190;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -57) = LO8(eax);

loc_003D3874: ;
    SET_LO8(eax, MEM8(ebp + -57));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -56) = 0x1F;
    eax = MEM32(ebp + -8);
    eax = eax + 0x1C;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = 0x1F;
    MEM32(ebp + -44) = 0x1E;
    MEM32(ebp + -40) = 0x1F;
    MEM32(ebp + -36) = 0x1E;
    MEM32(ebp + -32) = 0x1F;
    MEM32(ebp + -28) = 0x1F;
    MEM32(ebp + -24) = 0x1E;
    MEM32(ebp + -20) = 0x1F;
    MEM32(ebp + -16) = 0x1E;
    MEM32(ebp + -12) = 0x1F;
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    MEM8(ebp + -58) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_003D38F7; /* jg: greater (signed >) */

loc_003D38E4: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    ecx = ecx - 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + ecx * 4 + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + ecx * 4 + -56) (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ebp + -58) = LO8(eax);

loc_003D38F7: ;
    SET_LO8(eax, MEM8(ebp + -58));
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -1) = LO8(eax);

loc_003D38FF: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0x3C;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3910
 * Original: 0x003D3910 - 0x003D3985 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3910(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D3910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D3929; /* jge: greater or equal (signed >=) */

loc_003D391F: ;
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + 8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;
    goto loc_003D392F;

loc_003D3929: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;

loc_003D392F: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    ecx = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    ecx = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + 8) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D395E; /* jg: greater (signed >) */

loc_003D3958: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x17 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D3964; /* jle: less or equal (signed <=) */

loc_003D395E: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D397B;

loc_003D3964: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D3971; /* jg: greater (signed >) */

loc_003D396B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x3C (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D3977; /* jl: less (signed <) */

loc_003D3971: ;
    MEM8(ebp + -1) = 0;
    goto loc_003D397B;

loc_003D3977: ;
    MEM8(ebp + -1) = 1;

loc_003D397B: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3990
 * Original: 0x003D3990 - 0x003D3C97 (775 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3990(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D3990: ;
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
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x5F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D39B2u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003D39B2: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3AED; /* je: equal / zero */

loc_003D39BF: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;

loc_003D39CA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3AE7; /* je: equal / zero */

loc_003D39DA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3A04; /* je: equal / zero */

loc_003D39E9: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    SET_LO8(ecx, MEM8(eax + ecx));
    eax = MEM32(ebp + -8);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -8) = edx;
    MEM8(eax) = LO8(ecx);
    goto loc_003D3AD9;

loc_003D3A04: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3A11; /* jne: not equal / not zero */

loc_003D3A0A: ;
    eax = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    goto loc_003D3A21;

loc_003D3A11: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ZX8(MEM8(eax + ecx));
    MEM32(ebp + -28) = eax;

loc_003D3A21: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax + ecx + 1));
    MEM32(ebp + -20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D3A3D; /* jne: not equal / not zero */

loc_003D3A3B: ;
    goto loc_003D3A4F;

loc_003D3A3D: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3A48u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D3A48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3A86; /* jne: not equal / not zero */

loc_003D3A4D: ;
    goto loc_003D3A5A;

loc_003D3A4F: ;
    eax = MEM32(ebp + -16);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_003D3A86; /* jb: below (unsigned <) */

loc_003D3A5A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3A6F; /* jne: not equal / not zero */

loc_003D3A60: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3A6Bu); RECOMP_ABI_CALL(0x003D1BB0u, sub_003D1BB0); /* call 0x003D1BB0 */

loc_003D3A6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D3A86; /* jne: not equal / not zero */

loc_003D3A6F: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0x44A465;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003D3C8F;

loc_003D3A86: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D3A8E; /* jne: not equal / not zero */

loc_003D3A8C: ;
    goto loc_003D3AA0;

loc_003D3A8E: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3A99u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D3A99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3AD7; /* jne: not equal / not zero */

loc_003D3A9E: ;
    goto loc_003D3AAB;

loc_003D3AA0: ;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_003D3AD7; /* jb: below (unsigned <) */

loc_003D3AAB: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3AC0; /* jne: not equal / not zero */

loc_003D3AB1: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3ABCu); RECOMP_ABI_CALL(0x003D1BB0u, sub_003D1BB0); /* call 0x003D1BB0 */

loc_003D3ABC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D3AD7; /* jne: not equal / not zero */

loc_003D3AC0: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0x44A465;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003D3C8F;

loc_003D3AD7: ;
    goto loc_003D3AD9;

loc_003D3AD9: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_003D39CA;

loc_003D3AE7: ;
    eax = MEM32(ebp + -8);
    MEM8(eax) = 0;

loc_003D3AED: ;
    MEM32(ebp + -24) = 0;

loc_003D3AF4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3BF5; /* je: equal / zero */

loc_003D3B04: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3BA4; /* jne: not equal / not zero */

loc_003D3B17: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3B8B; /* je: equal / zero */

loc_003D3B1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D3B25; /* jne: not equal / not zero */

loc_003D3B23: ;
    goto loc_003D3B41;

loc_003D3B25: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ZX8(MEM8(eax + ecx));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3B3Au); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D3B3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3B56; /* jne: not equal / not zero */

loc_003D3B3F: ;
    goto loc_003D3B8B;

loc_003D3B41: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003D3B8B; /* jae: above or equal (unsigned >=) */

loc_003D3B56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D3B5E; /* jne: not equal / not zero */

loc_003D3B5C: ;
    goto loc_003D3B78;

loc_003D3B5E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx + 1));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3B71u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D3B71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3BA2; /* jne: not equal / not zero */

loc_003D3B76: ;
    goto loc_003D3B8B;

loc_003D3B78: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx + 1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_003D3BA2; /* jb: below (unsigned <) */

loc_003D3B8B: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0x4504CE;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003D3C8F;

loc_003D3BA2: ;
    goto loc_003D3BE5;

loc_003D3BA4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    ecx = (uint32_t)(int32_t)SMEM8(eax + ecx);
    eax = 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003D3BE3; /* jg: greater (signed >) */

loc_003D3BB7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003D3BE3; /* jg: greater (signed >) */

loc_003D3BC6: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3BD8u); RECOMP_ABI_CALL(0x003DB570u, sub_003DB570); /* call 0x003DB570 */

loc_003D3BD8: ;
    SET_LO8(edx, LO8(eax));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    MEM8(eax + ecx) = LO8(edx);

loc_003D3BE3: ;
    goto loc_003D3BE5;

loc_003D3BE5: ;
    goto loc_003D3BE7;

loc_003D3BE7: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_003D3AF4;

loc_003D3BF5: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3C88; /* jne: not equal / not zero */

loc_003D3BFF: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -29) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3C24; /* je: equal / zero */

loc_003D3C15: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -29) = LO8(eax);

loc_003D3C24: ;
    SET_LO8(edx, MEM8(ebp + -29));
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3C86; /* jne: not equal / not zero */

loc_003D3C45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D3C4D; /* jne: not equal / not zero */

loc_003D3C4B: ;
    goto loc_003D3C63;

loc_003D3C4D: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 1));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3C5Cu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003D3C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D3C72; /* jne: not equal / not zero */

loc_003D3C61: ;
    goto loc_003D3C86;

loc_003D3C63: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003D3C86; /* jae: above or equal (unsigned >=) */

loc_003D3C72: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0x4449AD;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003D3C8F;

loc_003D3C86: ;
    goto loc_003D3C88;

loc_003D3C88: ;
    MEM32(ebp + -4) = 0;

loc_003D3C8F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3CA0
 * Original: 0x003D3CA0 - 0x003D3EE2 (578 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3CA0(void)
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

loc_003D3CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0xC0;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -62;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3CCBu); RECOMP_ABI_CALL(0x003D31F0u, sub_003D31F0); /* call 0x003D31F0 */

loc_003D3CCB: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -68) = eax;
    eax = ebp + -62;
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -72);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    MEM8(ebp + -161) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D3CFF; /* je: equal / zero */

loc_003D3CED: ;
    eax = MEM32(ebp + -72);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -161) = LO8(eax);

loc_003D3CFF: ;
    SET_LO8(edx, MEM8(ebp + -161));
    eax = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    eax = eax + MEM32(ebp + -72);
    MEM32(ebp + -72) = eax;
    ecx = MEM32(ebp + -72);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 3;
    MEM32(eax + 4) = 0x48E8DD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3D32u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_003D3D32: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D3D5C; /* je: equal / zero */

loc_003D3D3A: ;
    ecx = MEM32(ebp + -72);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 3;
    MEM32(eax + 4) = 0x463B51;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3D54u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_003D3D54: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D3D67; /* jne: not equal / not zero */

loc_003D3D5C: ;
    eax = MEM32(ebp + -72);
    eax = eax + 3;
    MEM32(ebp + -72) = eax;
    goto loc_003D3D82;

loc_003D3D67: ;
    ecx = MEM32(ebp + -72);
    eax = 0x452ED2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3D7Cu); RECOMP_ABI_CALL(0x0042A580u, sub_0042A580); /* call 0x0042A580 */

loc_003D3D7C: ;
    eax = eax + MEM32(ebp + -72);
    MEM32(ebp + -72) = eax;

loc_003D3D82: ;
    eax = MEM32(ebp + -72);
    ecx = ebp + -62;
    eax = eax - ecx;
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -76);
    MEM8(ebp + eax + -62) = 0;
    ecx = ebp + -62;
    eax = ebp + -80;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3DAFu); RECOMP_ABI_CALL(0x003D3990u, sub_003D3990); /* call 0x003D3990 */

loc_003D3DAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D3DE9; /* je: equal / zero */

loc_003D3DB4: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -68);
    eax = MEM32(ebp + -80);
    edi = MEM32(ecx + 0x18);
    esi = MEM32(ecx + 0x1C);
    ecx = 0x463B55;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3DE1u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D3DE1: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D3ED5;

loc_003D3DE9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3DEEu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003D3DEE: ;
    MEM32(eax) = 0;
    ecx = ebp + -62;
    eax = ebp + -84;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3E06u); RECOMP_ABI_CALL(0x004272E0u, sub_004272E0); /* call 0x004272E0 */

loc_003D3E06: ;
    MEMD(ebp + -160) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3E1Eu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003D3E1E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D3E38; /* jne: not equal / not zero */

loc_003D3E23: ;
    eax = MEM32(ebp + -84);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D3E38; /* jne: not equal / not zero */

loc_003D3E2E: ;
    eax = MEM32(ebp + -84);
    ecx = ebp + -62;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D3E63; /* jne: not equal / not zero */

loc_003D3E38: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    eax = 0x4866B4;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3E5Eu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D3E5E: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D3ED5;

loc_003D3E63: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -168) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -152;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3E89u); RECOMP_ABI_CALL(0x003D0BC0u, sub_003D0BC0); /* call 0x003D0BC0 */

loc_003D3E89: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -168);
    eax = ebp + -152;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3EACu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D3EAC: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax + 0x18) = xmm0.d[0]; /* movsd */
    ecx = MEM32(ebp + -76);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -76);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    MEM32(ebp + -12) = 0;

loc_003D3ED5: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0xC0;
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
 * sub_003D3EF0
 * Original: 0x003D3EF0 - 0x003D3FC5 (213 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3EF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D3EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC8;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3F19u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D3F19: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + -124) = eax;
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + -56);
    edx = ebp + -112;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3F40u); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003D3F40: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -124);
    eax = ebp + -112;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3F5Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D3F5D: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -32); /* movups */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -64); /* movups */
    xmm1 = XMM_MEM(ebp + -48); /* movups */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    edx = ebp + -120;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D3F91u); RECOMP_ABI_CALL(0x003CFDD0u, sub_003CFDD0); /* call 0x003CFDD0 */

loc_003D3F91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D3F9F; /* je: equal / zero */

loc_003D3F96: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003D3FBA;

loc_003D3F9F: ;
    goto loc_003D3FA1;

loc_003D3FA1: ;
    ecx = MEM32(ebp + -120);
    eax = MEM32(ebp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -116);
    eax = MEM32(ebp + 0x44);
    MEM32(eax + 0x1C) = ecx;
    MEM32(ebp + -4) = 0;

loc_003D3FBA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0xC8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D3FD0
 * Original: 0x003D3FD0 - 0x003D40F6 (294 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3FD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003D3FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x94));
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x30)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(eax + 0x20); /* movups */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MEM(eax + 0x10); /* movups */
    XMM_STORE(ebp + -56, xmm1); /* movaps */
    XMM_STORE(ebp + -72, xmm0); /* movaps */
    eax = MEM32(ebp + -72);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF1u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF1u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((!_cf && eax != 0)) goto loc_003D4013; /* ja: above (unsigned >) */

loc_003D400F: ;
    goto loc_003D4011;

loc_003D4011: ;
    goto loc_003D403D;

loc_003D4013: ;
    edx = 0x47D76F;
    ecx = 0x452E67;
    eax = 0x4723C8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x4BF;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D403Du); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D403D: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + -124) = eax;
    eax = MEM32(ebp + -72);
    edx = MEM32(eax * 4 + 0x4D4C7C);
    ecx = MEM32(ebp + -68);
    eax = MEM32(ebp + -64);
    esi = ebp + -120;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D406Au); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003D406A: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(4));
    esp = esp - 4;
    ecx = MEM32(ebp + -124);
    eax = ebp + -120;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4087u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D4087: ;
    eax = MEM32(ebp + -48);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x44);
    MEM16(eax + 0x18) = LO16(ecx);
    eax = MEM32(ebp + -44);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x44);
    MEM16(eax + 0x1A) = LO16(ecx);
    eax = MEM32(ebp + -40);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x44);
    MEM16(eax + 0x1C) = LO16(ecx);
    eax = MEM32(ebp + -36);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x44);
    MEM16(eax + 0x1E) = LO16(ecx);
    eax = MEM32(ebp + -32);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x44);
    MEM16(eax + 0x20) = LO16(ecx);
    eax = MEM32(ebp + -28);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x44);
    MEM16(eax + 0x22) = LO16(ecx);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0x44);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -20);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0x44);
    MEM16(eax + 0x28) = LO16(ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x94)) >> 32) & 1);
    esp = esp + 0x94;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D4100
 * Original: 0x003D4100 - 0x003D41B2 (178 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D4100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x88;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4129u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D4129: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4159; /* je: equal / zero */

loc_003D412F: ;
    edx = 0x4449C2;
    ecx = 0x452E67;
    eax = 0x46F391;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x4D2;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4159u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D4159: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + -108) = eax;
    ecx = MEM32(ebp + -52);
    edx = MEM32(ebp + -48);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    ecx = ebp + -104;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D417Eu); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003D417E: ;
    esp = esp - 4;
    eax = MEM32(ebp + -108);
    xmm0 = XMM_MEM(ebp + -72); /* movups */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -104); /* movups */
    xmm1 = XMM_MEM(ebp + -88); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    eax = MEM32(ebp + 0x44);
    MEMD(eax + 0x18) = xmm0.d[0]; /* movsd */
    eax = 0; /* xor self */
    esp = esp + 0x88;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D41C0
 * Original: 0x003D41C0 - 0x003D4274 (180 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D41C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D41C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x88;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D41E9u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D41E9: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4219; /* je: equal / zero */

loc_003D41EF: ;
    edx = 0x4449DC;
    ecx = 0x452E67;
    eax = 0x44D319;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x4DB;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4219u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D4219: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + -108) = eax;
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + -48);
    edx = ebp + -104;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 3;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4240u); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003D4240: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -108);
    eax = ebp + -104;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D425Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D425D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    eax = MEM32(ebp + 0x44);
    MEMD(eax + 0x18) = xmm0.d[0]; /* movsd */
    eax = 0; /* xor self */
    esp = esp + 0x88;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D4280
 * Original: 0x003D4280 - 0x003D4333 (179 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4280(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D4280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x88;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D42A9u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D42A9: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D42D9; /* je: equal / zero */

loc_003D42AF: ;
    edx = 0x483469;
    ecx = 0x452E67;
    eax = 0x460E71;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x4E4;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D42D9u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D42D9: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + -108) = eax;
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + -48);
    edx = ebp + -104;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4300u); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003D4300: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -108);
    eax = ebp + -104;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D431Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D431D: ;
    SET_LO8(ecx, MEM8(ebp + -32));
    eax = MEM32(ebp + 0x44);
    SET_LO8(ecx, LO8(ecx) & 1);
    MEM8(eax + 0x18) = LO8(ecx);
    eax = 0; /* xor self */
    esp = esp + 0x88;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D4340
 * Original: 0x003D4340 - 0x003D45CD (653 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D4340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x100;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D436Bu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D436B: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D439B; /* je: equal / zero */

loc_003D4371: ;
    edx = 0x44751F;
    ecx = 0x452E67;
    eax = 0x460E82;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x579;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D439Bu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D439B: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + -188) = eax;
    ecx = MEM32(ebp + -68);
    eax = MEM32(ebp + -64);
    edx = ebp + -120;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 9;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D43C5u); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003D43C5: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -188);
    eax = ebp + -120;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D43E5u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D43E5: ;
    MEM32(ebp + -124) = 0;

loc_003D43EC: ;
    goto loc_003D43EE;

loc_003D43EE: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4400u); RECOMP_ABI_CALL(0x003D0500u, sub_003D0500); /* call 0x003D0500 */

loc_003D4400: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4411; /* je: equal / zero */

loc_003D4405: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_003D45C0;

loc_003D4411: ;
    goto loc_003D4413;

loc_003D4413: ;
    goto loc_003D4415;

loc_003D4415: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D43EE; /* je: equal / zero */

loc_003D441B: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D4426; /* jne: not equal / not zero */

loc_003D4421: ;
    goto loc_003D45A6;

loc_003D4426: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D4469; /* jne: not equal / not zero */

loc_003D442C: ;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -124), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D443B; /* je: equal / zero */

loc_003D4432: ;
    MEM32(ebp + -124) = 0;
    goto loc_003D43EC;

loc_003D443B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x48906C;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4461u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D4461: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D45C0;

loc_003D4469: ;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -124), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D449D; /* je: equal / zero */

loc_003D446F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x474D9B;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4495u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D4495: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D45C0;

loc_003D449D: ;
    eax = ebp + -176;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D44BDu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003D44BD: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movups */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movups */
    xmm1 = XMM_MEM(ebp + -56); /* movups */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    edx = ebp + -176;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D44F4u); RECOMP_ABI_CALL(0x003D0580u, sub_003D0580); /* call 0x003D0580 */

loc_003D44F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4513; /* je: equal / zero */

loc_003D44F9: ;
    eax = ebp + -176;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4507u); RECOMP_ABI_CALL(0x003CD090u, sub_003CD090); /* call 0x003CD090 */

loc_003D4507: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_003D45C0;

loc_003D4513: ;
    ecx = MEM32(ebp + 0x44);
    eax = ebp + -180;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4528u); RECOMP_ABI_CALL(0x003CF350u, sub_003CF350); /* call 0x003CF350 */

loc_003D4528: ;
    MEM32(ebp + -184) = eax;
    _fa = (uint32_t)(MEM32(ebp + -184)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -184), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D457A; /* jne: not equal / not zero */

loc_003D4537: ;
    eax = ebp + -176;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4545u); RECOMP_ABI_CALL(0x003CD090u, sub_003CD090); /* call 0x003CD090 */

loc_003D4545: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -68);
    eax = MEM32(ebp + -180);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x4723DB;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4575u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D4575: ;
    MEM32(ebp + -12) = eax;
    goto loc_003D45C0;

loc_003D457A: ;
    ecx = MEM32(ebp + -184);
    eax = ebp + -176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D459Au); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D459A: ;
    MEM32(ebp + -124) = 1;
    goto loc_003D43EC;

loc_003D45A6: ;
    eax = MEM32(ebp + 0x44);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D45B9u); RECOMP_ABI_CALL(0x003D4AB0u, sub_003D4AB0); /* call 0x003D4AB0 */

loc_003D45B9: ;
    MEM32(ebp + -12) = 0;

loc_003D45C0: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x100;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D45D0
 * Original: 0x003D45D0 - 0x003D4AA6 (1238 bytes, 306 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D45D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D45D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x15C;
    eax = MEM32(ebp + 0x44);
    eax = ebp + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D45FCu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D45FC: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D462C; /* je: equal / zero */

loc_003D4602: ;
    edx = 0x4723F3;
    ecx = 0x452E67;
    eax = 0x460E95;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x5B5;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D462Cu); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D462C: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + -288) = eax;
    ecx = MEM32(ebp + -68);
    eax = MEM32(ebp + -64);
    edx = ebp + -120;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4656u); RECOMP_ABI_CALL(0x003CDEB0u, sub_003CDEB0); /* call 0x003CDEB0 */

loc_003D4656: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -288);
    eax = ebp + -120;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4676u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003D4676: ;
    MEM8(ebp + -121) = 0;
    MEM8(ebp + -122) = 0;

loc_003D467E: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4690u); RECOMP_ABI_CALL(0x003CE0D0u, sub_003CE0D0); /* call 0x003CE0D0 */

loc_003D4690: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D46A1; /* je: equal / zero */

loc_003D4695: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_003D4A98;

loc_003D46A1: ;
    goto loc_003D46A3;

loc_003D46A3: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D46B6; /* jne: not equal / not zero */

loc_003D46A9: ;
    _fa = (uint32_t)(MEM8(ebp + -122)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -122), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D46B1; /* je: equal / zero */

loc_003D46AF: ;
    goto loc_003D46B1;

loc_003D46B1: ;
    goto loc_003D4A7E;

loc_003D46B6: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D46FA; /* jne: not equal / not zero */

loc_003D46BC: ;
    _fa = (uint32_t)(MEM8(ebp + -121)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -121), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D46CC; /* je: equal / zero */

loc_003D46C2: ;
    MEM8(ebp + -121) = 0;
    MEM8(ebp + -122) = 1;
    goto loc_003D467E;

loc_003D46CC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x49A035;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D46F2u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D46F2: ;
    MEM32(ebp + -16) = eax;
    goto loc_003D4A98;

loc_003D46FA: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D4705; /* jne: not equal / not zero */

loc_003D4700: ;
    goto loc_003D467E;

loc_003D4705: ;
    _fa = (uint32_t)(MEM8(ebp + -121)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -121), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D4739; /* je: equal / zero */

loc_003D470B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x4943DF;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4731u); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D4731: ;
    MEM32(ebp + -16) = eax;
    goto loc_003D4A98;

loc_003D4739: ;
    eax = ebp + -208;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4759u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003D4759: ;
    eax = MEM32(ebp + -68);
    MEM32(ebp + -212) = eax;
    eax = MEM32(ebp + -64);
    MEM32(ebp + -216) = eax;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movups */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movups */
    xmm1 = XMM_MEM(ebp + -56); /* movups */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    edx = ebp + -208;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D47A2u); RECOMP_ABI_CALL(0x003CF7F0u, sub_003CF7F0); /* call 0x003CF7F0 */

loc_003D47A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D47B3; /* je: equal / zero */

loc_003D47A7: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_003D4A98;

loc_003D47B3: ;
    goto loc_003D47B5;

loc_003D47B5: ;
    _fa = (uint32_t)(MEM32(ebp + -208)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -208), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D47E8; /* jg: greater (signed >) */

loc_003D47BE: ;
    edx = 0x480441;
    ecx = 0x452E67;
    eax = 0x460E95;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x5E7;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D47E8u); RECOMP_ABI_CALL(0x003DCF50u, sub_003DCF50); /* call 0x003DCF50 */

loc_003D47E8: ;
    eax = MEM32(ebp + -208);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + -208) = ecx;
    ecx = MEM32(ebp + eax * 8 + -212);
    MEM32(ebp + -224) = ecx;
    eax = MEM32(ebp + eax * 8 + -208);
    MEM32(ebp + -220) = eax;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + -212);
    edx = MEM32(ebp + -216);
    ecx = MEM32(ebp + 0x44);
    eax = ebp + -208;
    ebx = 0; /* xor self */
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D484Du); RECOMP_ABI_CALL(0x003CFA70u, sub_003CFA70); /* call 0x003CFA70 */

loc_003D484D: ;
    MEM32(ebp + -228) = eax;
    _fa = (uint32_t)(MEM32(ebp + -228)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -228), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D4868; /* jne: not equal / not zero */

loc_003D485C: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_003D4A98;

loc_003D4868: ;
    eax = MEM32(ebp + -228);
    eax = MEM32(eax + 4);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D48A7; /* je: equal / zero */

loc_003D4879: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x441EBC;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D489Fu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D489F: ;
    MEM32(ebp + -16) = eax;
    goto loc_003D4A98;

loc_003D48A7: ;
    eax = MEM32(ebp + -228);
    ecx = MEM32(eax + 4);
    ecx = ecx | 4;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D48C8u); RECOMP_ABI_CALL(0x003D0500u, sub_003D0500); /* call 0x003D0500 */

loc_003D48C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D48D9; /* je: equal / zero */

loc_003D48CD: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_003D4A98;

loc_003D48D9: ;
    goto loc_003D48DB;

loc_003D48DB: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4943; /* je: equal / zero */

loc_003D48E1: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D4915; /* jne: not equal / not zero */

loc_003D48E7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x48909F;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D490Du); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D490D: ;
    MEM32(ebp + -16) = eax;
    goto loc_003D4A98;

loc_003D4915: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -68);
    esi = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x68);
    eax = 0x483480;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D493Bu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D493B: ;
    MEM32(ebp + -16) = eax;
    goto loc_003D4A98;

loc_003D4943: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4955u); RECOMP_ABI_CALL(0x003D0500u, sub_003D0500); /* call 0x003D0500 */

loc_003D4955: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4966; /* je: equal / zero */

loc_003D495A: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_003D4A98;

loc_003D4966: ;
    goto loc_003D4968;

loc_003D4968: ;
    eax = ebp + -280;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4988u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003D4988: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = esp;
    MEMD(eax + 0x34) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -40); /* movups */
    XMM_STORE(eax + 0x24, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -72); /* movups */
    xmm1 = XMM_MEM(ebp + -56); /* movups */
    XMM_STORE(eax + 0x14, xmm1); /* movups */
    XMM_STORE(eax + 4, xmm0); /* movups */
    edx = ebp + -280;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D49BFu); RECOMP_ABI_CALL(0x003D0580u, sub_003D0580); /* call 0x003D0580 */

loc_003D49BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D49DE; /* je: equal / zero */

loc_003D49C4: ;
    eax = ebp + -280;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D49D2u); RECOMP_ABI_CALL(0x003CD090u, sub_003CD090); /* call 0x003CD090 */

loc_003D49D2: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_003D4A98;

loc_003D49DE: ;
    ecx = MEM32(ebp + -228);
    edx = MEM32(ebp + -224);
    esi = MEM32(ebp + -220);
    xmm0 = XMM_MEM(ebp + -248); /* movups */
    eax = esp;
    XMM_STORE(eax + 0x2C, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -280); /* movups */
    xmm1 = XMM_MEM(ebp + -264); /* movups */
    XMM_STORE(eax + 0x1C, xmm1); /* movups */
    XMM_STORE(eax + 0xC, xmm0); /* movups */
    edi = ebp + -284;
    MEM32(eax + 0x3C) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4A29u); RECOMP_ABI_CALL(0x003CFCF0u, sub_003CFCF0); /* call 0x003CFCF0 */

loc_003D4A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4A71; /* je: equal / zero */

loc_003D4A2E: ;
    eax = ebp + -280;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4A3Cu); RECOMP_ABI_CALL(0x003CD090u, sub_003CD090); /* call 0x003CD090 */

loc_003D4A3C: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -68);
    eax = MEM32(ebp + -284);
    edi = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x68);
    ecx = 0x463B55;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4A6Cu); RECOMP_ABI_CALL(0x003CEF60u, sub_003CEF60); /* call 0x003CEF60 */

loc_003D4A6C: ;
    MEM32(ebp + -16) = eax;
    goto loc_003D4A98;

loc_003D4A71: ;
    MEM8(ebp + -121) = 1;
    MEM8(ebp + -122) = 0;
    goto loc_003D467E;

loc_003D4A7E: ;
    eax = MEM32(ebp + 0x44);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4A91u); RECOMP_ABI_CALL(0x003D4AB0u, sub_003D4AB0); /* call 0x003D4AB0 */

loc_003D4A91: ;
    MEM32(ebp + -16) = 0;

loc_003D4A98: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x15C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D4AB0
 * Original: 0x003D4AB0 - 0x003D4B6D (189 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4AB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D4AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx | edx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(9)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D4AE6; /* je: equal / zero */

loc_003D4AD7: ;
    goto loc_003D4AD9;

loc_003D4AD9: ;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xA)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D4B26; /* je: equal / zero */

loc_003D4AE1: ;
    goto loc_003D4B66;

loc_003D4AE6: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -8) = eax;

loc_003D4AF6: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D4B24; /* jge: greater or equal (signed >=) */

loc_003D4AFE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1C);
    eax = (uint32_t)((int32_t)MEM32(ebp + -4) * (int32_t)0x30);
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4B19u); RECOMP_ABI_CALL(0x003D4AB0u, sub_003D4AB0); /* call 0x003D4AB0 */

loc_003D4B19: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003D4AF6;

loc_003D4B24: ;
    goto loc_003D4B68;

loc_003D4B26: ;
    MEM32(ebp + -12) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -16) = eax;

loc_003D4B36: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D4B64; /* jge: greater or equal (signed >=) */

loc_003D4B3E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    eax = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)0x30);
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4B59u); RECOMP_ABI_CALL(0x003D4AB0u, sub_003D4AB0); /* call 0x003D4AB0 */

loc_003D4B59: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_003D4B36;

loc_003D4B64: ;
    goto loc_003D4B68;

loc_003D4B66: ;
    goto loc_003D4B68;

loc_003D4B68: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D4B70
 * Original: 0x003D4B70 - 0x003D4C8D (285 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4B70(void)
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

loc_003D4B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm0.d[0]; /* mulsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm0.d[0]; /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E350)); /* movsd */
    xmm0 = xmm2; /* movaps */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E5C8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm2; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm0.d[0]; /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E870)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = xmm2; /* movaps */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm1.d[0]; /* mulsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D8)); /* movsd */
    xmm3 = xmm2; /* movaps */
    xmm3.d[0] = xmm3.d[0] * xmm4.d[0]; /* mulsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(0x43E8B0)); /* movsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x43EAB0)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0 = xmm1; /* movaps */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * xmm4.d[0]; /* mulsd */
    xmm2.d[0] = xmm2.d[0] - xmm3.d[0]; /* subsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -40)); /* fld double */
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
 * sub_003D4C90
 * Original: 0x003D4C90 - 0x003D4CD4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4C90(void)
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

loc_003D4C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax * 8 + 0x43ECB0)); /* movsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4CB8u); RECOMP_ABI_CALL(0x003D4CE0u, sub_003D4CE0); /* call 0x003D4CE0 */

loc_003D4CB8: ;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
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
 * sub_003D4CE0
 * Original: 0x003D4CE0 - 0x003D4D07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4CE0(void)
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

loc_003D4CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D4D10
 * Original: 0x003D4D10 - 0x003D4D35 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4D10(void)
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

loc_003D4D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm0.d[0]; /* subsd */
    xmm0.d[0] = xmm0.d[0] / xmm0.d[0]; /* divsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -8)); /* fld double */
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
 * sub_003D4D40
 * Original: 0x003D4D40 - 0x003D4D70 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4D40(void)
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

loc_003D4D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x70000000;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4D63u); RECOMP_ABI_CALL(0x003D4DA0u, sub_003D4DA0); /* call 0x003D4DA0 */

loc_003D4D63: ;
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
 * sub_003D4D70
 * Original: 0x003D4D70 - 0x003D4DA0 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4D70(void)
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

loc_003D4D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x10000000;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4D93u); RECOMP_ABI_CALL(0x003D4DA0u, sub_003D4DA0); /* call 0x003D4DA0 */

loc_003D4D93: ;
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
 * sub_003D4DA0
 * Original: 0x003D4DA0 - 0x003D4E13 (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4DA0(void)
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

loc_003D4DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0xC)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D4DD0; /* je: equal / zero */

loc_003D4DB9: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    goto loc_003D4DDA;

loc_003D4DD0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */

loc_003D4DDA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4DEAu); RECOMP_ABI_CALL(0x003D4E50u, sub_003D4E50); /* call 0x003D4E50 */

loc_003D4DEA: ;
    MEMD(ebp + -16) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D4E06u); RECOMP_ABI_CALL(0x003D4E20u, sub_003D4E20); /* call 0x003D4E20 */

loc_003D4E06: ;
    MEMD(ebp + -24) = fp_top(); /* fst */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
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
 * sub_003D4E20
 * Original: 0x003D4E20 - 0x003D4E47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4E20(void)
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

loc_003D4E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D4E50
 * Original: 0x003D4E50 - 0x003D4E77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4E50(void)
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

loc_003D4E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D4E80
 * Original: 0x003D4E80 - 0x003D55E5 (1893 bytes, 413 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4E80(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D4E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x94)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -104) = eax;
    eax = MEM32(ebp + -12);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -100) = eax;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400F6A7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x400F6A7A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_A(_fa, _fb)) goto loc_003D5042; /* ja: above (unsigned >) */

loc_003D4EBD: ;
    eax = MEM32(ebp + -100);
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x921FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x921FB (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D4ED1; /* jne: not equal / not zero */

loc_003D4ECC: ;
    goto loc_003D51EB;

loc_003D4ED1: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4002D97C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x4002D97C (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_A(_fa, _fb)) goto loc_003D4F90; /* ja: above (unsigned >) */

loc_003D4EDE: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D4F3E; /* jne: not equal / not zero */

loc_003D4EE4: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E728)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E0E0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E0E0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 1;
    goto loc_003D55D9;

loc_003D4F3E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E728)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E0E0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E0E0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_003D55D9;

loc_003D4F90: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D4FF0; /* jne: not equal / not zero */

loc_003D4F96: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E420)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E048)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E048)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 2;
    goto loc_003D55D9;

loc_003D4FF0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E420)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E048)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E048)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 0xFFFFFFFEu;
    goto loc_003D55D9;

loc_003D5042: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x401C463B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x401C463B (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_A(_fa, _fb)) goto loc_003D51DC; /* ja: above (unsigned >) */

loc_003D504F: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4015FDBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x4015FDBC (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_A(_fa, _fb)) goto loc_003D511C; /* ja: above (unsigned >) */

loc_003D505C: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4012D97C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x4012D97C (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D506A; /* jne: not equal / not zero */

loc_003D5065: ;
    goto loc_003D51EB;

loc_003D506A: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D50CA; /* jne: not equal / not zero */

loc_003D5070: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E928)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E7D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E7D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 3;
    goto loc_003D55D9;

loc_003D50CA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E928)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E7D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E7D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 0xFFFFFFFDu;
    goto loc_003D55D9;

loc_003D511C: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x401921FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x401921FB (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D512A; /* jne: not equal / not zero */

loc_003D5125: ;
    goto loc_003D51EB;

loc_003D512A: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D518A; /* jne: not equal / not zero */

loc_003D5130: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E770)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E0D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E0D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 4;
    goto loc_003D55D9;

loc_003D518A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E770)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E0D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E0D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 0xFFFFFFFCu;
    goto loc_003D55D9;

loc_003D51DC: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x413921FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x413921FB (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D547A; /* jae: above or equal (unsigned >=) */

loc_003D51E9: ;
    goto loc_003D51EB;

loc_003D51EB: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EAB8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E6A8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E6A8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    eax = (int32_t)MEMD(ebp + -56); /* cvttsd2si */
    MEM32(ebp + -108) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E728)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -56); /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E0E0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -56); /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + -32); /* subsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E7E0)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003D52AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003D5262: ;
    eax = MEM32(ebp + -108);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -108) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -56); /* addsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E728)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -56); /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E0E0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -56); /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    goto loc_003D530E;

loc_003D52AC: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -32); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E618)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003D530C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003D52C4: ;
    eax = MEM32(ebp + -108);
    eax = eax + 1;
    MEM32(ebp + -108) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -56); /* addsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E728)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -56); /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E0E0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -56); /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */

loc_003D530C: ;
    goto loc_003D530E;

loc_003D530E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x7FF;
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -100);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -112);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -116))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D5456; /* jle: less or equal (signed <=) */

loc_003D5355: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E730)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E878)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x7FF;
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -112);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -116))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D5454; /* jle: less or equal (signed <=) */

loc_003D53F3: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43DF68)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -56); /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -32); /* subsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EBA0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -56); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + -48); /* subsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + -32); /* subsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -32); /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */

loc_003D5454: ;
    goto loc_003D5456;

loc_003D5456: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -32); /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -108);
    MEM32(ebp + -8) = eax;
    goto loc_003D55D9;

loc_003D547A: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), 0x7FF00000 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D54A8; /* jb: below (unsigned <) */

loc_003D5483: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 8); /* subsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 0;
    goto loc_003D55D9;

loc_003D54A8: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) & 0xF);
    MEM16(ebp + -10) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) | 0x4160);
    MEM16(ebp + -10) = LO16(eax);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -120) = 0;

loc_003D54DB: ;
    _fa = (uint32_t)(MEM32(ebp + -120)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -120), 2 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D551D; /* jge: greater or equal (signed >=) */

loc_003D54E1: ;
    eax = (int32_t)MEMD(ebp + -24); /* cvttsd2si */
    xmm0.d[0] = (double)(int32_t)eax; /* cvtsi2sd */
    eax = MEM32(ebp + -120);
    MEMD(ebp + eax * 8 + -80) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + -120);
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + eax * 8 + -80); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43EB00)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -120);
    eax = eax + 1;
    MEM32(ebp + -120) = eax;
    goto loc_003D54DB;

loc_003D551D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    eax = MEM32(ebp + -120);
    MEMD(ebp + eax * 8 + -80) = xmm0.d[0]; /* movsd */

loc_003D552B: ;
    eax = MEM32(ebp + -120);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -80)); /* movsd */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003D554A; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_003D553D: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003D554A; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_003D553F: ;
    eax = MEM32(ebp + -120);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -120) = eax;
    goto loc_003D552B;

loc_003D554A: ;
    esi = ebp + -80;
    edx = ebp + -96;
    ecx = MEM32(ebp + -100);
    _shift_result = RECOMP_SHIFT(ecx, 0x14, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x416)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -120);
    eax = eax + 1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D557Eu); RECOMP_ABI_CALL(0x003D55F0u, sub_003D55F0); /* call 0x003D55F0 */

loc_003D557E: ;
    MEM32(ebp + -108) = eax;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D55BA; /* je: equal / zero */

loc_003D5587: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movapd */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    eax = MEM32(ebp + 0x10);
    XMM_STORE_LOW(eax, xmm0); /* movlpd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -108))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;
    goto loc_003D55D9;

loc_003D55BA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -108);
    MEM32(ebp + -8) = eax;

loc_003D55D9: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x94;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D55F0
 * Original: 0x003D55F0 - 0x003D616F (2943 bytes, 664 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D55F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D55F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2E8));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x2E8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax * 4 + 0x4D4CC8);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x14);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = 0x18;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D5642; /* jge: greater or equal (signed >=) */

loc_003D563B: ;
    MEM32(ebp + -12) = 0;

loc_003D5642: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x18);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -128) = eax;
    eax = MEM32(ebp + -12);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -8)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -20))) >> 32) & 1);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -124) = eax;
    MEM32(ebp + -112) = 0;

loc_003D566C: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -124) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D56C3; /* jg: greater (signed >) */

loc_003D5674: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D5687; /* jge: greater or equal (signed >=) */

loc_003D567A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -680) = xmm0.d[0]; /* movsd */
    goto loc_003D569B;

loc_003D5687: ;
    eax = MEM32(ebp + -116);
    xmm0.d[0] = (double)(int32_t)MEM32(eax * 4 + 0x4D4CD8); /* cvtsi2sd */
    MEMD(ebp + -680) = xmm0.d[0]; /* movsd */

loc_003D569B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -680)); /* movsd */
    eax = MEM32(ebp + -112);
    MEMD(ebp + eax * 8 + -312) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -116) = eax;
    goto loc_003D566C;

loc_003D56C3: ;
    MEM32(ebp + -112) = 0;

loc_003D56CA: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D5743; /* jg: greater (signed >) */

loc_003D56D2: ;
    MEM32(ebp + -116) = 0;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */

loc_003D56E4: ;
    eax = MEM32(ebp + -116);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D5724; /* jg: greater (signed >) */

loc_003D56EC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + ecx * 8)); /* movsd */
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -112))) >> 32) & 1);
    eax = eax + MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -116)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -116))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + eax * 8 + -312); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -116) = eax;
    goto loc_003D56E4;

loc_003D5724: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    eax = MEM32(ebp + -112);
    MEMD(ebp + eax * 8 + -632) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -112) = eax;
    goto loc_003D56CA;

loc_003D5743: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = eax;

loc_003D5749: ;
    MEM32(ebp + -112) = 0;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -632)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */

loc_003D576A: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D57EA; /* jle: less or equal (signed <=) */

loc_003D5770: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E778)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -144); /* mulsd */
    eax = (int32_t)xmm0.d[0]; /* cvttsd2si */
    xmm0.d[0] = (double)(int32_t)eax; /* cvtsi2sd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43EB00)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -152); /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    ecx = (int32_t)xmm0.d[0]; /* cvttsd2si */
    eax = MEM32(ebp + -112);
    MEM32(ebp + eax * 4 + -108) = ecx;
    eax = MEM32(ebp + -116);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -632)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -116) = eax;
    goto loc_003D576A;

loc_003D57EA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    eax = MEM32(ebp + -128);
    MEMD(esp) = xmm0.d[0]; /* movsd */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D5803u); RECOMP_ABI_CALL(0x00408C90u, sub_00408C90); /* call 0x00408C90 */

loc_003D5803: ;
    MEMD(ebp + -648) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -648)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E3D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -144); /* mulsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D5834u); RECOMP_ABI_CALL(0x003F61F0u, sub_003F61F0); /* call 0x003F61F0 */

loc_003D5834: ;
    MEMD(ebp + -640) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -640)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E3C8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm0.d[0]; /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    eax = (int32_t)MEMD(ebp + -144); /* cvttsd2si */
    MEM32(ebp + -28) = eax;
    xmm1.d[0] = (double)(int32_t)MEM32(ebp + -28); /* cvtsi2sd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -132) = 0;
    _fa = (uint32_t)(MEM32(ebp + -128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -128), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D58EF; /* jle: less or equal (signed <=) */

loc_003D5896: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = MEM32(ebp + eax * 4 + -108);
    ecx = 0x18;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -128)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -128))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = RECOMP_SAR(eax, LO8(ecx), 32, &_cf);
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -28))) >> 32) & 1);
    eax = eax + MEM32(ebp + -28);
    MEM32(ebp + -28) = eax;
    edx = MEM32(ebp + -112);
    ecx = 0x18;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -128)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -128))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = MEM32(ebp + eax * 4 + -108);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM32(ebp + eax * 4 + -108) = ecx;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = MEM32(ebp + eax * 4 + -108);
    ecx = 0x17;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -128)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -128))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = RECOMP_SAR(eax, LO8(ecx), 32, &_cf);
    MEM32(ebp + -132) = eax;
    goto loc_003D592E;

loc_003D58EF: ;
    _fa = (uint32_t)(MEM32(ebp + -128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -128), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D590A; /* jne: not equal / not zero */

loc_003D58F5: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = MEM32(ebp + eax * 4 + -108);
    eax = RECOMP_SAR(eax, 0x17, 32, &_cf);
    MEM32(ebp + -132) = eax;
    goto loc_003D592C;

loc_003D590A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_003D592A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003D5920: ;
    MEM32(ebp + -132) = 2;

loc_003D592A: ;
    goto loc_003D592C;

loc_003D592C: ;
    goto loc_003D592E;

loc_003D592E: ;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D5A59; /* jle: less or equal (signed <=) */

loc_003D593B: ;
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -112) = 0;

loc_003D5952: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D59A4; /* jge: greater or equal (signed >=) */

loc_003D595A: ;
    eax = MEM32(ebp + -112);
    eax = MEM32(ebp + eax * 4 + -108);
    MEM32(ebp + -116) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5988; /* jne: not equal / not zero */

loc_003D596A: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D5986; /* je: equal / zero */

loc_003D5970: ;
    MEM32(ebp + -24) = 1;
    ecx = 0x1000000;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -116)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -116))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -112);
    MEM32(ebp + eax * 4 + -108) = ecx;

loc_003D5986: ;
    goto loc_003D5997;

loc_003D5988: ;
    ecx = 0xFFFFFF;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -116)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -116))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -112);
    MEM32(ebp + eax * 4 + -108) = ecx;

loc_003D5997: ;
    goto loc_003D5999;

loc_003D5999: ;
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -112) = eax;
    goto loc_003D5952;

loc_003D59A4: ;
    _fa = (uint32_t)(MEM32(ebp + -128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -128), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D59F3; /* jle: less or equal (signed <=) */

loc_003D59AA: ;
    eax = MEM32(ebp + -128);
    MEM32(ebp + -684) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D59C7; /* je: equal / zero */

loc_003D59B8: ;
    goto loc_003D59BA;

loc_003D59BA: ;
    eax = MEM32(ebp + -684);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D59DD; /* je: equal / zero */

loc_003D59C5: ;
    goto loc_003D59F1;

loc_003D59C7: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = MEM32(ebp + eax * 4 + -108);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFF;
    MEM32(ebp + eax * 4 + -108) = ecx;
    goto loc_003D59F1;

loc_003D59DD: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = MEM32(ebp + eax * 4 + -108);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3FFFFF;
    MEM32(ebp + eax * 4 + -108) = ecx;

loc_003D59F1: ;
    goto loc_003D59F3;

loc_003D59F3: ;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 2 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5A57; /* jne: not equal / not zero */

loc_003D59FC: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -144); /* subsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D5A55; /* je: equal / zero */

loc_003D5A1A: ;
    eax = MEM32(ebp + -128);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D5A33u); RECOMP_ABI_CALL(0x00408C90u, sub_00408C90); /* call 0x00408C90 */

loc_003D5A33: ;
    MEMD(ebp + -656) = fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -656)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */

loc_003D5A55: ;
    goto loc_003D5A57;

loc_003D5A57: ;
    goto loc_003D5A59;

loc_003D5A59: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003D5B8B; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_003D5A6E: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003D5B8B; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_003D5A74: ;
    MEM32(ebp + -116) = 0;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -112) = eax;

loc_003D5A84: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D5AA4; /* jl: less (signed <) */

loc_003D5A8C: ;
    eax = MEM32(ebp + -112);
    eax = MEM32(ebp + eax * 4 + -108);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebp + -116);
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D5A84;

loc_003D5AA4: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5B89; /* jne: not equal / not zero */

loc_003D5AAE: ;
    MEM32(ebp + -120) = 1;

loc_003D5AB5: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -120)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -120))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -108), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5ACF; /* jne: not equal / not zero */

loc_003D5AC2: ;
    goto loc_003D5AC4;

loc_003D5AC4: ;
    eax = MEM32(ebp + -120);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -120) = eax;
    goto loc_003D5AB5;

loc_003D5ACF: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -112) = eax;

loc_003D5AD8: ;
    eax = MEM32(ebp + -112);
    ecx = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -120))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D5B7B; /* jg: greater (signed >) */

loc_003D5AE9: ;
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -112))) >> 32) & 1);
    eax = eax + MEM32(ebp + -112);
    xmm0.d[0] = (double)(int32_t)MEM32(eax * 4 + 0x4D4CD8); /* cvtsi2sd */
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -112))) >> 32) & 1);
    eax = eax + MEM32(ebp + -112);
    MEMD(ebp + eax * 8 + -312) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -116) = 0;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */

loc_003D5B19: ;
    eax = MEM32(ebp + -116);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D5B59; /* jg: greater (signed >) */

loc_003D5B21: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -116);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + ecx * 8)); /* movsd */
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -112))) >> 32) & 1);
    eax = eax + MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -116)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -116))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + eax * 8 + -312); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -116) = eax;
    goto loc_003D5B19;

loc_003D5B59: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    eax = MEM32(ebp + -112);
    MEMD(ebp + eax * 8 + -632) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -112) = eax;
    goto loc_003D5AD8;

loc_003D5B7B: ;
    eax = MEM32(ebp + -120);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -4))) >> 32) & 1);
    eax = eax + MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    goto loc_003D5749;

loc_003D5B89: ;
    goto loc_003D5B8B;

loc_003D5B8B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003D5BD3; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_003D5B9C: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003D5BD3; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_003D5B9E: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -128);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -128) = eax;

loc_003D5BB0: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -108), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5BCE; /* jne: not equal / not zero */

loc_003D5BBA: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -128);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -128) = eax;
    goto loc_003D5BB0;

loc_003D5BCE: ;
    goto loc_003D5C95;

loc_003D5BD3: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -128)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -128))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEMD(esp) = xmm0.d[0]; /* movsd */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D5BEEu); RECOMP_ABI_CALL(0x00408C90u, sub_00408C90); /* call 0x00408C90 */

loc_003D5BEE: ;
    MEMD(ebp + -664) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -664)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43EB00)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_003D5C84; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003D5C1A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E778)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -144); /* mulsd */
    eax = (int32_t)xmm0.d[0]; /* cvttsd2si */
    xmm0.d[0] = (double)(int32_t)eax; /* cvtsi2sd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43EB00)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -152); /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    ecx = (int32_t)xmm0.d[0]; /* cvttsd2si */
    eax = MEM32(ebp + -4);
    MEM32(ebp + eax * 4 + -108) = ecx;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -128);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    MEM32(ebp + -128) = eax;
    ecx = (int32_t)MEMD(ebp + -152); /* cvttsd2si */
    eax = MEM32(ebp + -4);
    MEM32(ebp + eax * 4 + -108) = ecx;
    goto loc_003D5C93;

loc_003D5C84: ;
    ecx = (int32_t)MEMD(ebp + -144); /* cvttsd2si */
    eax = MEM32(ebp + -4);
    MEM32(ebp + eax * 4 + -108) = ecx;

loc_003D5C93: ;
    goto loc_003D5C95;

loc_003D5C95: ;
    eax = MEM32(ebp + -128);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D5CAEu); RECOMP_ABI_CALL(0x00408C90u, sub_00408C90); /* call 0x00408C90 */

loc_003D5CAE: ;
    MEMD(ebp + -672) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -672)); /* movsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -112) = eax;

loc_003D5CCA: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D5D14; /* jl: less (signed <) */

loc_003D5CD0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    eax = MEM32(ebp + -112);
    xmm1.d[0] = (double)(int32_t)MEM32(ebp + eax * 4 + -108); /* cvtsi2sd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    eax = MEM32(ebp + -112);
    MEMD(ebp + eax * 8 + -632) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E778)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -152); /* mulsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D5CCA;

loc_003D5D14: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -112) = eax;

loc_003D5D1A: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D5DC1; /* jl: less (signed <) */

loc_003D5D24: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -120) = 0;

loc_003D5D36: ;
    ecx = MEM32(ebp + -120);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -16) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -685) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_003D5D5A; /* jg: greater (signed >) */

loc_003D5D46: ;
    eax = MEM32(ebp + -120);
    ecx = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -112)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -112))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ebp + -685) = LO8(eax);

loc_003D5D5A: ;
    SET_LO8(eax, MEM8(ebp + -685));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D5D66; /* jne: not equal / not zero */

loc_003D5D64: ;
    goto loc_003D5D9C;

loc_003D5D66: ;
    eax = MEM32(ebp + -120);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax * 8 + 0x4D57A0)); /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -120))) >> 32) & 1);
    eax = eax + MEM32(ebp + -120);
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + eax * 8 + -632); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -120);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -120) = eax;
    goto loc_003D5D36;

loc_003D5D9C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -112)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -112))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEMD(ebp + eax * 8 + -472) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D5D1A;

loc_003D5DC1: ;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -692) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003D5DF6; /* je: equal / zero */

loc_003D5DCE: ;
    goto loc_003D5DD0;

loc_003D5DD0: ;
    eax = MEM32(ebp + -692);
    { uint32_t _zr = ((uint32_t)(eax) - 1u) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_003D5E7E; /* jb: below (unsigned <) */

loc_003D5DE0: ;
    goto loc_003D5DE2;

loc_003D5DE2: ;
    eax = MEM32(ebp + -692);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D5FAA; /* je: equal / zero */

loc_003D5DF1: ;
    goto loc_003D6161;

loc_003D5DF6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -112) = eax;

loc_003D5E07: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D5E34; /* jl: less (signed <) */

loc_003D5E0D: ;
    eax = MEM32(ebp + -112);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D5E07;

loc_003D5E34: ;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5E4F; /* jne: not equal / not zero */

loc_003D5E3D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -704) = xmm0.d[0]; /* movsd */
    goto loc_003D5E6A;

loc_003D5E4F: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -704) = xmm0.d[0]; /* movsd */

loc_003D5E6A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -704)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    goto loc_003D6161;

loc_003D5E7E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -112) = eax;

loc_003D5E8F: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D5EBC; /* jl: less (signed <) */

loc_003D5E95: ;
    eax = MEM32(ebp + -112);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D5E8F;

loc_003D5EBC: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5EE7; /* jne: not equal / not zero */

loc_003D5ED5: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -712) = xmm0.d[0]; /* movsd */
    goto loc_003D5F02;

loc_003D5EE7: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -712) = xmm0.d[0]; /* movsd */

loc_003D5F02: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -712)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -472)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -152); /* subsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -112) = 1;

loc_003D5F30: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003D5F5F; /* jg: greater (signed >) */

loc_003D5F38: ;
    eax = MEM32(ebp + -112);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -112) = eax;
    goto loc_003D5F30;

loc_003D5F5F: ;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D5F7A; /* jne: not equal / not zero */

loc_003D5F68: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -720) = xmm0.d[0]; /* movsd */
    goto loc_003D5F95;

loc_003D5F7A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -720) = xmm0.d[0]; /* movsd */

loc_003D5F95: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -720)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    goto loc_003D6161;

loc_003D5FAA: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -112) = eax;

loc_003D5FB0: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D6027; /* jle: less or equal (signed <=) */

loc_003D5FB6: ;
    eax = MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    eax = MEM32(ebp + -112);
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + eax * 8 + -472); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -152); /* subsd */
    eax = MEM32(ebp + -112);
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + eax * 8 + -472); /* addsd */
    MEMD(ebp + eax * 8 + -472) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEMD(ebp + eax * 8 + -472) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D5FB0;

loc_003D6027: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -112) = eax;

loc_003D602D: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D60A4; /* jle: less or equal (signed <=) */

loc_003D6033: ;
    eax = MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    eax = MEM32(ebp + -112);
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + eax * 8 + -472); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -152); /* subsd */
    eax = MEM32(ebp + -112);
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + eax * 8 + -472); /* addsd */
    MEMD(ebp + eax * 8 + -472) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEMD(ebp + eax * 8 + -472) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D602D;

loc_003D60A4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -112) = eax;

loc_003D60B5: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 2 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003D60E2; /* jl: less (signed <) */

loc_003D60BB: ;
    eax = MEM32(ebp + -112);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + eax * 8 + -472)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -112);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -112) = eax;
    goto loc_003D60B5;

loc_003D60E2: ;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D611C; /* jne: not equal / not zero */

loc_003D60EB: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -472)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -464)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    eax = MEM32(ebp + 0xC);
    MEMD(eax + 0x10) = xmm0.d[0]; /* movsd */
    goto loc_003D615F;

loc_003D611C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -472)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movapd */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    eax = MEM32(ebp + 0xC);
    XMM_STORE_LOW(eax, xmm0); /* movlpd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -464)); /* movsd */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    eax = MEM32(ebp + 0xC);
    XMM_STORE_LOW(eax + 8, xmm0); /* movlpd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    eax = MEM32(ebp + 0xC);
    MEMD(eax + 0x10) = xmm0.d[0]; /* movsd */

loc_003D615F: ;
    goto loc_003D6161;

loc_003D6161: ;
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    eax = eax & 7;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2E8)) >> 32) & 1);
    esp = esp + 0x2E8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D6170
 * Original: 0x003D6170 - 0x003D629D (301 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6170(void)
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

loc_003D6170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x30;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -16); /* mulsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E6B0)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(ebp + -16); /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E430)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm2.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm0.d[0]; /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E298)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -40); /* mulsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x43E428)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(ebp + -16); /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E998)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D6243; /* jne: not equal / not zero */

loc_003D6214: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(ebp + -24); /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1A0)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D628B;

loc_003D6243: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(ebp + 0x10); /* mulsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(ebp + -24); /* mulsd */
    xmm2.d[0] = xmm2.d[0] - xmm3.d[0]; /* subsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + 0x10); /* subsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1A0)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(ebp + -32); /* mulsd */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D628B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -48)); /* fld double */
    esp = esp + 0x30;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D62A0
 * Original: 0x003D62A0 - 0x003D6683 (995 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D62A0(void)
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

loc_003D62A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xB8;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -92) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -88);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -76);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE59428) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FE59428 (32-bit) */
    SET_LO8(eax, (CMP_AE(_fa, _fb)) ? 1 : 0); /* setae */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -80) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D6342; /* je: equal / zero */

loc_003D62E4: ;
    eax = MEM32(ebp + -76);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -84) = eax;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D6317; /* je: equal / zero */

loc_003D62F3: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movapd */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    XMM_STORE_LOW(ebp + 8, xmm0); /* movlpd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + 0x10) = xmm0.d[0]; /* movsd */

loc_003D6317: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E618)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 8); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E2E8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + 0x10); /* subsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + 0x10) = xmm0.d[0]; /* movsd */

loc_003D6342: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -16); /* mulsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D57E8)); /* movsd */
    MEMD(ebp + -168) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -176) = xmm0.d[0]; /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D57F8)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(0x4D5808)); /* movsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(0x4D5818)); /* movsd */
    xmm7 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D5828)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(0x4D5838); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    xmm7.d[0] = xmm7.d[0] * xmm0.d[0]; /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -168)); /* movsd */
    xmm6.d[0] = xmm6.d[0] + xmm7.d[0]; /* addsd */
    xmm5.d[0] = xmm5.d[0] * xmm6.d[0]; /* mulsd */
    xmm4.d[0] = xmm4.d[0] + xmm5.d[0]; /* addsd */
    xmm3.d[0] = xmm3.d[0] * xmm4.d[0]; /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D57F0)); /* movsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D5800)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(0x4D5810)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm7 = XMM_SCALAR_DOUBLE(MEMD(0x4D5820)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -160) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D5830)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D5840); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    xmm7.d[0] = xmm7.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm6.d[0] = xmm6.d[0] * xmm7.d[0]; /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm6.d[0]; /* addsd */
    xmm4.d[0] = xmm4.d[0] * xmm5.d[0]; /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm3.d[0] = xmm3.d[0] + MEMD(ebp + -32); /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm2.d[0] = xmm2.d[0] + MEMD(ebp + 0x10); /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(0x4D57E0); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D659D; /* je: equal / zero */

loc_003D6505: ;
    ecx = MEM32(ebp + 0x18);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = 1;
    eax = eax - ecx;
    xmm0.d[0] = (double)(int32_t)eax; /* cvtsi2sd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(ebp + -40); /* mulsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm4.d[0] = xmm4.d[0] + MEMD(ebp + -48); /* addsd */
    xmm3.d[0] = xmm3.d[0] / xmm4.d[0]; /* divsd */
    xmm1.d[0] = xmm1.d[0] - xmm3.d[0]; /* subsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D657E; /* je: equal / zero */

loc_003D6564: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -184) = xmm0.d[0]; /* movsd */
    goto loc_003D658B;

loc_003D657E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    MEMD(ebp + -184) = xmm0.d[0]; /* movsd */

loc_003D658B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6668;

loc_003D659D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D65B2; /* jne: not equal / not zero */

loc_003D65A3: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6668;

loc_003D65B2: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(ebp + -108) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -104);
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -100) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -100)); /* movsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + 8); /* subsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / MEMD(ebp + -40); /* divsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(ebp + -124) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -120);
    MEM32(ebp + -112) = eax;
    MEM32(ebp + -116) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -116)); /* movsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(ebp + -64); /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(ebp + -32); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D6668: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -136)); /* fld double */
    esp = esp + 0xB8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D6690
 * Original: 0x003D6690 - 0x003D6928 (664 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6690(void)
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

loc_003D6690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -52);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x3FF00000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003D6729; /* jb: below (unsigned <) */

loc_003D66C2: ;
    goto loc_003D66C4;

loc_003D66C4: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -76) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -76);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -56);
    eax = eax - 0x3FF00000;
    eax = eax | MEM32(ebp + -68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D670E; /* jne: not equal / not zero */

loc_003D66E4: ;
    eax = MEM32(ebp + -52);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D6701; /* je: equal / zero */

loc_003D66EF: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EBA8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6913;

loc_003D6701: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6913;

loc_003D670E: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + 8); /* subsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6913;

loc_003D6729: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x3FE00000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D67C1; /* jae: above or equal (unsigned >=) */

loc_003D6736: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C600000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x3C600000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D6751; /* ja: above (unsigned >) */

loc_003D673F: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E9F8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6913;

loc_003D6751: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D677Fu); RECOMP_ABI_CALL(0x003D6930u, sub_003D6930); /* call 0x003D6930 */

loc_003D677F: ;
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -136)); /* movsd */
    MEMD(ebp + -120) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * xmm0.d[0]; /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E438)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E9F8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6913;

loc_003D67C1: ;
    eax = MEM32(ebp + -52);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D6855; /* je: equal / zero */

loc_003D67D0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = sqrt(xmm0.d[0]); /* sqrtsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D680Bu); RECOMP_ABI_CALL(0x003D6930u, sub_003D6930); /* call 0x003D6930 */

loc_003D680B: ;
    MEMD(ebp + -112) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -32); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E438)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E9F8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6913;

loc_003D6855: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 8); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = sqrt(xmm0.d[0]); /* sqrtsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    MEMD(ebp + -92) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -88);
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -84) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -84)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -48); /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + MEMD(ebp + -48); /* addsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D68E1u); RECOMP_ABI_CALL(0x003D6930u, sub_003D6930); /* call 0x003D6930 */

loc_003D68E1: ;
    MEMD(ebp + -104) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -32); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -40); /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + MEMD(ebp + -24); /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D6913: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -128)); /* fld double */
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D6930
 * Original: 0x003D6930 - 0x003D6A26 (246 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6930(void)
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

loc_003D6930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E738)); /* movsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E058)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = xmm0; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E740)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E7E8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = xmm0; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E7F0)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43EBB0)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E8B8)); /* movsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43EA68)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = xmm0; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43DF70)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E2F0)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -24)); /* fld double */
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
 * sub_003D6A30
 * Original: 0x003D6A30 - 0x003D6CCE (670 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6A30(void)
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

loc_003D6A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -44);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x3FF00000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003D6AC2; /* jb: below (unsigned <) */

loc_003D6A62: ;
    goto loc_003D6A64;

loc_003D6A64: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -60) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -40);
    eax = eax - 0x3FF00000;
    eax = eax | MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D6AA7; /* jne: not equal / not zero */

loc_003D6A84: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E9F8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E7F8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6CB9;

loc_003D6AA7: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + 8); /* subsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6CB9;

loc_003D6AC2: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x3FE00000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6B3E; /* jae: above or equal (unsigned >=) */

loc_003D6ACB: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E500000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x3E500000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6AEC; /* jae: above or equal (unsigned >=) */

loc_003D6AD4: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x100000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003D6AEC; /* jb: below (unsigned <) */

loc_003D6ADD: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6CB9;

loc_003D6AEC: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D6B17u); RECOMP_ABI_CALL(0x003D6CD0u, sub_003D6CD0); /* call 0x003D6CD0 */

loc_003D6B17: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -136)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    MEMD(ebp + -112) = fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6CB9;

loc_003D6B3E: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = sqrt(xmm0.d[0]); /* sqrtsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D6B88u); RECOMP_ABI_CALL(0x003D6CD0u, sub_003D6CD0); /* call 0x003D6CD0 */

loc_003D6B88: ;
    MEMD(ebp + -104) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FEF3333) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x3FEF3333 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003D6BDF; /* jb: below (unsigned <) */

loc_003D6B9E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -24); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm0.d[0]; /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E438)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E9F8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */
    goto loc_003D6C8D;

loc_003D6BDF: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -92);
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -88) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -72); /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + MEMD(ebp + -72); /* addsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -32); /* mulsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -24); /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(ebp + -80); /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E438)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(ebp + -72); /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E618)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E618)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */

loc_003D6C8D: ;
    eax = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D6CAF; /* je: equal / zero */

loc_003D6C98: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D6CB9;

loc_003D6CAF: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D6CB9: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -120)); /* fld double */
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D6CD0
 * Original: 0x003D6CD0 - 0x003D6DC6 (246 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6CD0(void)
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

loc_003D6CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E738)); /* movsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E058)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = xmm0; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E740)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E7E8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = xmm0; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E7F0)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43EBB0)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E8B8)); /* movsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43EA68)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = xmm0; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43DF70)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E2F0)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -24)); /* fld double */
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
 * sub_003D6DD0
 * Original: 0x003D6DD0 - 0x003D7184 (948 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6DD0(void)
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

loc_003D6DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x88;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -60) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -56);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -44);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x44100000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003D6E77; /* jb: below (unsigned <) */

loc_003D6E0B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm0.d[0]; /* ucomisd */
    SET_LO8(eax, ((isnan(_fca) || isnan(_fcb))) ? 1 : 0); /* setp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D6E1D; /* jne: not equal / not zero */

loc_003D6E1B: ;
    goto loc_003D6E2C;

loc_003D6E1D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D716F;

loc_003D6E2C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E7F8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(0x4D5860); /* addsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D6E5E; /* je: equal / zero */

loc_003D6E47: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    goto loc_003D6E68;

loc_003D6E5E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */

loc_003D6E68: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D716F;

loc_003D6E77: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FDC0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x3FDC0000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6EC4; /* jae: above or equal (unsigned >=) */

loc_003D6E80: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x3E400000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6EB8; /* jae: above or equal (unsigned >=) */

loc_003D6E89: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x100000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6EA9; /* jae: above or equal (unsigned >=) */

loc_003D6E92: ;
    goto loc_003D6E94;

loc_003D6E94: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D6EA7u); RECOMP_ABI_CALL(0x003D7190u, sub_003D7190); /* call 0x003D7190 */

loc_003D6EA7: ;
    goto loc_003D6EA9;

loc_003D6EA9: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D716F;

loc_003D6EB8: ;
    MEM32(ebp + -52) = 0xFFFFFFFFu;
    goto loc_003D6FB5;

loc_003D6EC4: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x3FF30000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6F53; /* jae: above or equal (unsigned >=) */

loc_003D6EE2: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE60000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x3FE60000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6F23; /* jae: above or equal (unsigned >=) */

loc_003D6EEB: ;
    MEM32(ebp + -52) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + MEMD(ebp + 8); /* addsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */
    goto loc_003D6F51;

loc_003D6F23: ;
    MEM32(ebp + -52) = 1;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + MEMD(ebp + 8); /* addsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */

loc_003D6F51: ;
    goto loc_003D6FB3;

loc_003D6F53: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40038000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x40038000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D6F98; /* jae: above or equal (unsigned >=) */

loc_003D6F5C: ;
    MEM32(ebp + -52) = 2;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E760)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E760)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */
    goto loc_003D6FB1;

loc_003D6F98: ;
    MEM32(ebp + -52) = 3;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / MEMD(ebp + 8); /* divsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */

loc_003D6FB1: ;
    goto loc_003D6FB3;

loc_003D6FB3: ;
    goto loc_003D6FB5;

loc_003D6FB5: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -40); /* mulsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D5868)); /* movsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D5878)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(0x4D5888)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm7 = XMM_SCALAR_DOUBLE(MEMD(0x4D5898)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D58A8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D58B8); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm7.d[0] = xmm7.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm6.d[0] = xmm6.d[0] * xmm7.d[0]; /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm6.d[0]; /* addsd */
    xmm4.d[0] = xmm4.d[0] * xmm5.d[0]; /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D5870)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D5880)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(0x4D5890)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm7 = XMM_SCALAR_DOUBLE(MEMD(0x4D58A0)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D58B0); /* mulsd */
    xmm7.d[0] = xmm7.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm6.d[0] = xmm6.d[0] * xmm7.d[0]; /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm6.d[0]; /* addsd */
    xmm4.d[0] = xmm4.d[0] * xmm5.d[0]; /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003D7105; /* jge: greater or equal (signed >=) */

loc_003D70E2: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + MEMD(ebp + -32); /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D716F;

loc_003D7105: ;
    eax = MEM32(ebp + -52);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax * 8 + 0x4D5848)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + MEMD(ebp + -32); /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    eax = MEM32(ebp + -52);
    xmm1.d[0] = xmm1.d[0] - MEMD(eax * 8 + 0x4D58C0); /* subsd */
    xmm1.d[0] = xmm1.d[0] - MEMD(ebp + 8); /* subsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D715B; /* je: equal / zero */

loc_003D7144: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    goto loc_003D7165;

loc_003D715B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */

loc_003D7165: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D716F: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -72)); /* fld double */
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
 * sub_003D7190
 * Original: 0x003D7190 - 0x003D71A8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7190(void)
{
    uint32_t ebp = g_ebp;

loc_003D7190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D71B0
 * Original: 0x003D71B0 - 0x003D7572 (962 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D71B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003D71B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xA8));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xA8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm0.d[0]; /* ucomisd */
    SET_LO8(eax, ((isnan(_fca) || isnan(_fcb))) ? 1 : 0); /* setp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D71E5; /* jne: not equal / not zero */

loc_003D71D3: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm0.d[0]; /* ucomisd */
    SET_LO8(eax, ((isnan(_fca) || isnan(_fcb))) ? 1 : 0); /* setp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D71E5; /* jne: not equal / not zero */

loc_003D71E3: ;
    goto loc_003D71F9;

loc_003D71E5: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D71F9: ;
    goto loc_003D71FB;

loc_003D71FB: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -44);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -24) = eax;
    goto loc_003D721D;

loc_003D721D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -64);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -32);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x3FF00000));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x3FF00000)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D726E; /* jne: not equal / not zero */

loc_003D724D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D725Cu); RECOMP_ABI_CALL(0x003D6DD0u, sub_003D6DD0); /* call 0x003D6DD0 */

loc_003D725C: ;
    MEMD(ebp + -88) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D726E: ;
    eax = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    ecx = MEM32(ebp + -32);
    _shift_result = RECOMP_SHIFT(ecx, 0x1E, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -32);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -36);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D72FC; /* jne: not equal / not zero */

loc_003D72A6: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -100) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_003D72C7; /* jb: below (unsigned <) */

loc_003D72B1: ;
    goto loc_003D72B3;

loc_003D72B3: ;
    eax = MEM32(ebp + -100);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D72D6; /* je: equal / zero */

loc_003D72BB: ;
    goto loc_003D72BD;

loc_003D72BD: ;
    eax = MEM32(ebp + -100);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D72E8; /* je: equal / zero */

loc_003D72C5: ;
    goto loc_003D72FA;

loc_003D72C7: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D72D6: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EBA8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D72E8: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E440)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D72FA: ;
    goto loc_003D72FC;

loc_003D72FC: ;
    eax = MEM32(ebp + -32);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D7345; /* jne: not equal / not zero */

loc_003D7307: ;
    eax = MEM32(ebp + -20);
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E140)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E9F8)); /* movsd */
    MEMD(ebp + -120) = xmm1.d[0]; /* movsd */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    if (CMP_NE(_fa, _fb)) goto loc_003D7336; /* jne: not equal / not zero */

loc_003D732C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */

loc_003D7336: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D7345: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0x7FF00000 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D741A; /* jne: not equal / not zero */

loc_003D7352: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x7FF00000 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D73BC; /* jne: not equal / not zero */

loc_003D735B: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -124) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_003D73BA; /* ja: above (unsigned >) */

loc_003D7366: ;
    eax = MEM32(ebp + -124);
    eax = MEM32(eax * 4 + 0x4D58F0);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003D7372u) goto loc_003D7372;
    if (_jt == 0x003D7384u) goto loc_003D7384;
    if (_jt == 0x003D7396u) goto loc_003D7396;
    if (_jt == 0x003D73A8u) goto loc_003D73A8;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003D7372: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E618)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D7384: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E7E0)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D7396: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E6B8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D73A8: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E620)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D73BA: ;
    goto loc_003D7418;

loc_003D73BC: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -128) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_003D7416; /* ja: above (unsigned >) */

loc_003D73C7: ;
    eax = MEM32(ebp + -128);
    eax = MEM32(eax * 4 + 0x4D58E0);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003D73D3u) goto loc_003D73D3;
    if (_jt == 0x003D73E0u) goto loc_003D73E0;
    if (_jt == 0x003D73F2u) goto loc_003D73F2;
    if (_jt == 0x003D7404u) goto loc_003D7404;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003D73D3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D73E0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E5D0)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D73F2: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EBA8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D7404: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E440)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D7416: ;
    goto loc_003D7418;

loc_003D7418: ;
    goto loc_003D741A;

loc_003D741A: ;
    eax = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x4000000)) >> 32) & 1);
    eax = eax + 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D7430; /* jb: below (unsigned <) */

loc_003D7427: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x7FF00000 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D747D; /* jne: not equal / not zero */

loc_003D7430: ;
    eax = MEM32(ebp + -20);
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E140)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E9F8)); /* movsd */
    MEMD(ebp + -144) = xmm1.d[0]; /* movsd */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    if (CMP_NE(_fa, _fb)) goto loc_003D746B; /* jne: not equal / not zero */

loc_003D745B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */

loc_003D746B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -136)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D747D: ;
    eax = MEM32(ebp + -20);
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D749F; /* je: equal / zero */

loc_003D7488: ;
    eax = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x4000000)) >> 32) & 1);
    eax = eax + 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D749F; /* jae: above or equal (unsigned >=) */

loc_003D7495: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D74CB;

loc_003D749F: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / MEMD(ebp + 0x10); /* divsd */
    xmm1 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D74BEu); RECOMP_ABI_CALL(0x003D6DD0u, sub_003D6DD0); /* call 0x003D6DD0 */

loc_003D74BE: ;
    MEMD(ebp + -80) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */

loc_003D74CB: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -148) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003D74F4; /* je: equal / zero */

loc_003D74D8: ;
    goto loc_003D74DA;

loc_003D74DA: ;
    eax = MEM32(ebp + -148);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D7500; /* je: equal / zero */

loc_003D74E5: ;
    goto loc_003D74E7;

loc_003D74E7: ;
    eax = MEM32(ebp + -148);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003D7517; /* je: equal / zero */

loc_003D74F2: ;
    goto loc_003D753B;

loc_003D74F4: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D7500: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D7517: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E240)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EBA8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D755D;

loc_003D753B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E240)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43EBA8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D755D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -96)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xA8)) >> 32) & 1);
    esp = esp + 0xA8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D7580
 * Original: 0x003D7580 - 0x003D7743 (451 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7580(void)
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

loc_003D7580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x78;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -36);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE921FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x3FE921FB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003D760D; /* ja: above (unsigned >) */

loc_003D75AF: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E46A09E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x3E46A09E (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003D75E3; /* jae: above or equal (unsigned >=) */

loc_003D75B8: ;
    goto loc_003D75BA;

loc_003D75BA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EA00)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D75D1u); RECOMP_ABI_CALL(0x003D7750u, sub_003D7750); /* call 0x003D7750 */

loc_003D75D1: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D7731;

loc_003D75E3: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D75FBu); RECOMP_ABI_CALL(0x003D4B70u, sub_003D4B70); /* call 0x003D4B70 */

loc_003D75FB: ;
    MEMD(ebp + -80) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D7731;

loc_003D760D: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x7FF00000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003D762A; /* jb: below (unsigned <) */

loc_003D7616: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 8); /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D7731;

loc_003D762A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = esp;
    ecx = ebp + -24;
    MEM32(eax + 8) = ecx;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7640u); RECOMP_ABI_CALL(0x003D4E80u, sub_003D4E80); /* call 0x003D4E80 */

loc_003D7640: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    eax = eax & 3;
    MEM32(ebp + -92) = eax;
    if ((eax == 0)) goto loc_003D7667; /* je: equal / zero */

loc_003D764E: ;
    goto loc_003D7650;

loc_003D7650: ;
    eax = MEM32(ebp + -92);
    eax = eax - 1;
    if ((eax == 0)) goto loc_003D7693; /* je: equal / zero */

loc_003D7658: ;
    goto loc_003D765A;

loc_003D765A: ;
    eax = MEM32(ebp + -92);
    eax = eax - 2;
    if ((eax == 0)) goto loc_003D76CE; /* je: equal / zero */

loc_003D7662: ;
    goto loc_003D7702;

loc_003D7667: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7681u); RECOMP_ABI_CALL(0x003D4B70u, sub_003D4B70); /* call 0x003D4B70 */

loc_003D7681: ;
    MEMD(ebp + -64) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D7731;

loc_003D7693: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = esp;
    MEMD(eax + 8) = xmm1.d[0]; /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    MEM32(eax + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D76B4u); RECOMP_ABI_CALL(0x003D6170u, sub_003D6170); /* call 0x003D6170 */

loc_003D76B4: ;
    MEMD(ebp + -56) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D7731;

loc_003D76CE: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = esp;
    MEMD(eax + 8) = xmm1.d[0]; /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D76E8u); RECOMP_ABI_CALL(0x003D4B70u, sub_003D4B70); /* call 0x003D4B70 */

loc_003D76E8: ;
    MEMD(ebp + -48) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D7731;

loc_003D7702: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7724u); RECOMP_ABI_CALL(0x003D6170u, sub_003D6170); /* call 0x003D6170 */

loc_003D7724: ;
    MEMD(ebp + -72) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D7731: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -88)); /* fld double */
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
 * sub_003D7750
 * Original: 0x003D7750 - 0x003D776A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7750(void)
{
    uint32_t ebp = g_ebp;

loc_003D7750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D7770
 * Original: 0x003D7770 - 0x003D7B6E (1022 bytes, 218 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7770(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
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

loc_003D7770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF0));
    esp = esp - 0xF0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D778Fu); RECOMP_ABI_CALL(0x003D7B70u, sub_003D7B70); /* call 0x003D7B70 */

loc_003D778F: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -212) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E060)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D77B2u); RECOMP_ABI_CALL(0x003D7B70u, sub_003D7B70); /* call 0x003D7B70 */

loc_003D77B2: ;
    ecx = eax;
    eax = MEM32(ebp + -212);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    MEM32(ebp + -204) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E780)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D77D4u); RECOMP_ABI_CALL(0x003D7B70u, sub_003D7B70); /* call 0x003D7B70 */

loc_003D77D4: ;
    MEM32(ebp + -208) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E060)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D77ECu); RECOMP_ABI_CALL(0x003D7B70u, sub_003D7B70); /* call 0x003D7B70 */

loc_003D77EC: ;
    ecx = MEM32(ebp + -208);
    edx = eax;
    eax = MEM32(ebp + -204);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D795A; /* jb: below (unsigned <) */

loc_003D7804: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -216) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E060)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D781Fu); RECOMP_ABI_CALL(0x003D7B70u, sub_003D7B70); /* call 0x003D7B70 */

loc_003D781F: ;
    ecx = eax;
    eax = MEM32(ebp + -216);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D7847; /* jb: below (unsigned <) */

loc_003D7830: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D7B51;

loc_003D7847: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -220) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E9A0)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7862u); RECOMP_ABI_CALL(0x003D7B70u, sub_003D7B70); /* call 0x003D7B70 */

loc_003D7862: ;
    ecx = eax;
    eax = MEM32(ebp + -220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D7953; /* jb: below (unsigned <) */

loc_003D7872: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -120);
    ecx = MEM32(ebp + -116);
    MEM32(ebp + -124) = 0xFFF00000u;
    MEM32(ebp + -128) = 0;
    edx = MEM32(ebp + -128);
    esi = MEM32(ebp + -124);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D78AD; /* jne: not equal / not zero */

loc_003D789E: ;
    goto loc_003D78A0;

loc_003D78A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D7B51;

loc_003D78AD: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -224) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E248)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D78C8u); RECOMP_ABI_CALL(0x003D7B70u, sub_003D7B70); /* call 0x003D7B70 */

loc_003D78C8: ;
    ecx = eax;
    eax = MEM32(ebp + -224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D78EB; /* jb: below (unsigned <) */

loc_003D78D4: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D7B51;

loc_003D78EB: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -132);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003D792D; /* je: equal / zero */

loc_003D7905: ;
    goto loc_003D7907;

loc_003D7907: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7915u); RECOMP_ABI_CALL(0x003D4D70u, sub_003D4D70); /* call 0x003D4D70 */

loc_003D7915: ;
    MEMD(ebp + -192) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -192)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D7B51;

loc_003D792D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D793Bu); RECOMP_ABI_CALL(0x003D4D40u, sub_003D4D40); /* call 0x003D4D40 */

loc_003D793B: ;
    MEMD(ebp + -184) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D7B51;

loc_003D7953: ;
    MEM32(ebp + -20) = 0;

loc_003D795A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D5900)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D5908)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D798Cu); RECOMP_ABI_CALL(0x003D7B90u, sub_003D7B90); /* call 0x003D7B90 */

loc_003D798C: ;
    MEMD(ebp + -64) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D5908)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D5910)); /* movsd */
    xmm2 = xmm1; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D5918)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -32);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = 0;
    eax = MEM32(ebp + -32);
    _shift_result = RECOMP_SHIFT(eax, 0xD, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -48) = 0;
    eax = MEM32(ebp + -40);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax * 8 + 0x4D5970)); /* movsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    ecx = MEM32(ebp + -40);
    eax = MEM32(ecx * 8 + 0x4D597C);
    ecx = MEM32(ecx * 8 + 0x4D5978);
    esi = MEM32(ebp + -48);
    edx = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -56) = ecx;
    MEM32(ebp + -52) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -80); /* mulsd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -80); /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D5920)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(0x4D5928); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -88); /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D5930)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(0x4D5938); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D7B07; /* jne: not equal / not zero */

loc_003D7ACA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    ecx = MEM32(ebp + -56);
    edx = MEM32(ebp + -52);
    esi = MEM32(ebp + -32);
    edi = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7AF2u); RECOMP_ABI_CALL(0x003D7BC0u, sub_003D7BC0); /* call 0x003D7BC0 */

loc_003D7AF2: ;
    MEMD(ebp + -176) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D7B51;

loc_003D7B07: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(ebp + -160) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -112); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7B3Eu); RECOMP_ABI_CALL(0x003D7B90u, sub_003D7B90); /* call 0x003D7B90 */

loc_003D7B3E: ;
    MEMD(ebp + -168) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -168)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */

loc_003D7B51: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -200) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -200)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xF0)) >> 32) & 1);
    esp = esp + 0xF0;
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
 * sub_003D7B70
 * Original: 0x003D7B70 - 0x003D7B90 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7B70(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003D7B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D7B90
 * Original: 0x003D7B90 - 0x003D7BB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7B90(void)
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

loc_003D7B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D7BC0
 * Original: 0x003D7BC0 - 0x003D7D8E (462 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7BC0(void)
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

loc_003D7BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    SET_LO8(eax, MEM8(ebp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D7C44; /* jne: not equal / not zero */

loc_003D7BDE: ;
    goto loc_003D7BE0;

loc_003D7BE0: ;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0xC0F00000u;
    MEM32(ebp + 0x14) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E748)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7C32u); RECOMP_ABI_CALL(0x003D7B90u, sub_003D7B90); /* call 0x003D7B90 */

loc_003D7C32: ;
    MEMD(ebp + -88) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D7D7C;

loc_003D7C44: ;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x3FE00000;
    MEM32(ebp + 0x14) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    _fca = xmm0.d[0]; _fcb = MEMD(ebp + -24); /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003D7D4E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMD(ebp + -24)) */

loc_003D7C8E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -24); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -48); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -56); /* addsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -56); /* addsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7CEDu); RECOMP_ABI_CALL(0x003D7B90u, sub_003D7B90); /* call 0x003D7B90 */

loc_003D7CED: ;
    MEMD(ebp + -64) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003D7D1E; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_003D7D14: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003D7D1E; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_003D7D16: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */

loc_003D7D1E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E2A0)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7D30u); RECOMP_ABI_CALL(0x003D7DB0u, sub_003D7DB0); /* call 0x003D7DB0 */

loc_003D7D30: ;
    MEMD(ebp + -72) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E2A0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7D4Eu); RECOMP_ABI_CALL(0x003D7D90u, sub_003D7D90); /* call 0x003D7D90 */

loc_003D7D4E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E2A0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -24); /* mulsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7D6Fu); RECOMP_ABI_CALL(0x003D7B90u, sub_003D7B90); /* call 0x003D7B90 */

loc_003D7D6F: ;
    MEMD(ebp + -80) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D7D7C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -96)); /* fld double */
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
 * sub_003D7D90
 * Original: 0x003D7D90 - 0x003D7DAA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7D90(void)
{
    uint32_t ebp = g_ebp;

loc_003D7D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D7DB0
 * Original: 0x003D7DB0 - 0x003D7DD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7DB0(void)
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

loc_003D7DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D7DE0
 * Original: 0x003D7DE0 - 0x003D83A4 (1476 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7DE0(void)
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
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003D7DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10C));
    esp = esp - 0x10C;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -156) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -156)); /* movsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D7E1Bu); RECOMP_ABI_CALL(0x003D83B0u, sub_003D83B0); /* call 0x003D83B0 */

loc_003D7E1B: ;
    MEM32(ebp + -140) = eax;
    edx = MEM32(ebp + -120);
    eax = MEM32(ebp + -116);
    MEM32(ebp + -160) = 0x3FEE0000;
    MEM32(ebp + -164) = 0;
    esi = MEM32(ebp + -164);
    ecx = MEM32(ebp + -160);
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
    MEM32(ebp + -168) = 0x3FF10900;
    MEM32(ebp + -172) = 0;
    esi = MEM32(ebp + -172);
    ecx = MEM32(ebp + -168);
    MEM32(ebp + -176) = 0x3FEE0000;
    MEM32(ebp + -180) = 0;
    ebx = MEM32(ebp + -180);
    edi = MEM32(ebp + -176);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    {
      _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      ecx = _sbb_result;
    } /* sbb */
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
    if (!_cf) goto loc_003D80B1; /* jae: above or equal (unsigned >=) */

loc_003D7E99: ;
    goto loc_003D7E9B;

loc_003D7E9B: ;
    eax = MEM32(ebp + -120);
    ecx = MEM32(ebp + -116);
    MEM32(ebp + -184) = 0x3FF00000;
    MEM32(ebp + -188) = 0;
    edx = MEM32(ebp + -188);
    esi = MEM32(ebp + -184);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D7ED8; /* jne: not equal / not zero */

loc_003D7EC9: ;
    goto loc_003D7ECB;

loc_003D7ECB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8386;

loc_003D7ED8: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -48); /* mulsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -56); /* mulsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D6A40)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(0x4D6A48); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(0x4D6A50); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D6A58)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm4.d[0] = xmm4.d[0] * MEMD(0x4D6A60); /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm4.d[0] = xmm4.d[0] * MEMD(0x4D6A68); /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(0x4D6A70)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm6.d[0] = xmm6.d[0] * MEMD(0x4D6A78); /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm6.d[0]; /* addsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm6.d[0] = xmm6.d[0] * MEMD(0x4D6A80); /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm6.d[0]; /* addsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm6.d[0] = xmm6.d[0] * MEMD(0x4D6A88); /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm6.d[0]; /* addsd */
    xmm4.d[0] = xmm4.d[0] * xmm5.d[0]; /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E540)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -48); /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -32); /* addsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -32); /* subsd */
    MEMD(ebp + -200) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -200); /* subsd */
    MEMD(ebp + -208) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -200)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -200); /* mulsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D6A38); /* mulsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -32); /* addsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -104); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -32); /* addsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D6A38)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -208); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -200)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + MEMD(ebp + -48); /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -112); /* addsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -72); /* addsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -72); /* addsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8099u); RECOMP_ABI_CALL(0x003D83D0u, sub_003D83D0); /* call 0x003D83D0 */

loc_003D8099: ;
    MEMD(ebp + -264) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -264)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8386;

loc_003D80B1: ;
    eax = MEM32(ebp + -140);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x10));
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FE0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D81B0; /* jb: below (unsigned <) */

loc_003D80C5: ;
    ecx = MEM32(ebp + -120);
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D80F7; /* jne: not equal / not zero */

loc_003D80D1: ;
    goto loc_003D80D3;

loc_003D80D3: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D80DFu); RECOMP_ABI_CALL(0x003D4C90u, sub_003D4C90); /* call 0x003D4C90 */

loc_003D80DF: ;
    MEMD(ebp + -256) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -256)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8386;

loc_003D80F7: ;
    eax = MEM32(ebp + -120);
    ecx = MEM32(ebp + -116);
    MEM32(ebp + -212) = 0x7FF00000;
    MEM32(ebp + -216) = 0;
    edx = MEM32(ebp + -216);
    esi = MEM32(ebp + -212);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D8136; /* jne: not equal / not zero */

loc_003D8125: ;
    goto loc_003D8127;

loc_003D8127: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8386;

loc_003D8136: ;
    eax = MEM32(ebp + -140);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D8158; /* jne: not equal / not zero */

loc_003D8146: ;
    eax = MEM32(ebp + -140);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D817F; /* jne: not equal / not zero */

loc_003D8158: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8167u); RECOMP_ABI_CALL(0x003D4D10u, sub_003D4D10); /* call 0x003D4D10 */

loc_003D8167: ;
    MEMD(ebp + -248) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -248)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8386;

loc_003D817F: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -224) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -224)); /* movsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFCC00000u)) >> 32) & 1);
    eax = eax + 0xFCC00000u;
    MEM32(ebp + -116) = eax;

loc_003D81B0: ;
    ecx = MEM32(ebp + -120);
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC01A0000u)) >> 32) & 1);
    eax = eax + 0xC01A0000u;
    MEM32(ebp + -136) = ecx;
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -132);
    _shift_result = RECOMP_SHIFT(eax, 0xD, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    MEM32(ebp + -148) = eax;
    eax = MEM32(ebp + -132);
    eax = RECOMP_SAR(eax, 0x14, 32, &_cf);
    MEM32(ebp + -144) = eax;
    ecx = MEM32(ebp + -120);
    eax = MEM32(ebp + -116);
    edx = MEM32(ebp + -132);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF00000u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    MEM32(ebp + -128) = ecx;
    MEM32(ebp + -124) = eax;
    eax = MEM32(ebp + -148);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D6A90)); /* movsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -148);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D6A98)); /* movsd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    MEMD(ebp + -232) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -232)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    ecx = MEM32(ebp + -148);
    eax = 0x4D6A00;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x890)) >> 32) & 1);
    eax = eax + 0x890;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    xmm0.d[0] = xmm0.d[0] - MEMD(eax); /* subsd */
    ecx = MEM32(ebp + -148);
    eax = 0x4D6A00;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x890)) >> 32) & 1);
    eax = eax + 0x890;
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    xmm0.d[0] = xmm0.d[0] - MEMD(eax + 8); /* subsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -80); /* mulsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0.d[0] = (double)(int32_t)MEM32(ebp + -144); /* cvtsi2sd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D6A00); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -88); /* addsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -48); /* addsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -104); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -48); /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(0x4D6A08); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -48); /* mulsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(0x4D6A10); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -56); /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D6A18)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(0x4D6A20); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(0x4D6A28)); /* movsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm5.d[0] = xmm5.d[0] * MEMD(0x4D6A30); /* mulsd */
    xmm4.d[0] = xmm4.d[0] + xmm5.d[0]; /* addsd */
    xmm3.d[0] = xmm3.d[0] * xmm4.d[0]; /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -104); /* addsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8373u); RECOMP_ABI_CALL(0x003D83D0u, sub_003D83D0); /* call 0x003D83D0 */

loc_003D8373: ;
    MEMD(ebp + -240) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */

loc_003D8386: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -20)); /* movsd */
    MEMD(ebp + -272) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -272)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
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
 * sub_003D83B0
 * Original: 0x003D83B0 - 0x003D83CE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D83B0(void)
{
    uint32_t ebp = g_ebp;

loc_003D83B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    eax = ZX16(MEM16(ebp + -2));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D83D0
 * Original: 0x003D83D0 - 0x003D83F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D83D0(void)
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

loc_003D83D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D8400
 * Original: 0x003D8400 - 0x003D87A0 (928 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8400(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003D8400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x90)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -12);
    MEM32(ebp + -132) = eax;
    MEM32(ebp + -136) = 0;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0x100000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_003D8449; /* jb: below (unsigned <) */

loc_003D8437: ;
    eax = MEM32(ebp + -132);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D84DA; /* je: equal / zero */

loc_003D8449: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    eax = eax + eax;
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D8477; /* jne: not equal / not zero */

loc_003D8455: ;
    goto loc_003D8457;

loc_003D8457: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D8785;

loc_003D8477: ;
    eax = MEM32(ebp + -132);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003D84A0; /* je: equal / zero */

loc_003D8485: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 8); /* subsd */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D8785;

loc_003D84A0: ;
    eax = MEM32(ebp + -136);
    eax = eax + 0xFFFFFFCAu;
    MEM32(ebp + -136) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E628)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -12);
    MEM32(ebp + -132) = eax;
    goto loc_003D851B;

loc_003D84DA: ;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0x7FF00000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_003D84F5; /* jb: below (unsigned <) */

loc_003D84E6: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D8785;

loc_003D84F5: ;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0x3FF00000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003D8517; /* jne: not equal / not zero */

loc_003D8501: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003D8517; /* jne: not equal / not zero */

loc_003D8508: ;
    goto loc_003D850A;

loc_003D850A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003D8785;

loc_003D8517: ;
    goto loc_003D8519;

loc_003D8519: ;
    goto loc_003D851B;

loc_003D851B: ;
    eax = MEM32(ebp + -132);
    eax = eax + 0x95F62;
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -132);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + -136);
    eax = eax + ecx + -1023;
    MEM32(ebp + -136) = eax;
    eax = MEM32(ebp + -132);
    eax = eax & 0xFFFFF;
    eax = eax + 0x3FE6A09E;
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -132);
    MEM32(ebp + -12) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E598)); /* movsd */
    xmm0 = xmm1; /* movaps */
    xmm0.d[0] = xmm0.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E138)); /* movsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm0.d[0]; /* mulsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm0.d[0]; /* mulsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E938)); /* movsd */
    xmm2 = xmm0; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43DF78)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E448)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43EA08)); /* movsd */
    xmm3 = xmm1; /* movaps */
    xmm3.d[0] = xmm3.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1E0)); /* movsd */
    xmm3.d[0] = xmm3.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = xmm1; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x43E5E0)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E250)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -16) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -104); /* subsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -24); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm2.d[0] = xmm2.d[0] + MEMD(ebp + -56); /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E750)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -104); /* mulsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    xmm0.d[0] = (double)(int32_t)MEM32(ebp + -136); /* cvtsi2sd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EA70)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -88); /* mulsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E5D8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -88); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + MEMD(ebp + -104); /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E930)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E750)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -112); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -120); /* addsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -64); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -120); /* addsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -128); /* addsd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -120); /* addsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003D8785: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -144)); /* fld double */
    esp = esp + 0x90;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D87A0
 * Original: 0x003D87A0 - 0x003D8E31 (1681 bytes, 308 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D87A0(void)
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
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_empty_mask &= (uint8_t)~(1u << g_fp_top); \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_empty_mask |= (uint8_t)(1u << g_fp_top), \
                      g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003D87A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x15C));
    esp = esp - 0x15C;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -180) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -180)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D87DEu); RECOMP_ABI_CALL(0x003D8E40u, sub_003D8E40); /* call 0x003D8E40 */

loc_003D87DE: ;
    MEM32(ebp + -164) = eax;
    edx = MEM32(ebp + -144);
    eax = MEM32(ebp + -140);
    MEM32(ebp + -184) = 0x3FEEA4AF;
    MEM32(ebp + -188) = 0;
    esi = MEM32(ebp + -188);
    ecx = MEM32(ebp + -184);
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
    MEM32(ebp + -192) = 0x3FF0B559;
    MEM32(ebp + -196) = 0;
    esi = MEM32(ebp + -196);
    ecx = MEM32(ebp + -192);
    MEM32(ebp + -200) = 0x3FEEA4AF;
    MEM32(ebp + -204) = 0;
    ebx = MEM32(ebp + -204);
    edi = MEM32(ebp + -200);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    {
      _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      ecx = _sbb_result;
    } /* sbb */
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
    if (!_cf) goto loc_003D8A8A; /* jae: above or equal (unsigned >=) */

loc_003D8862: ;
    goto loc_003D8864;

loc_003D8864: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(ebp + -140);
    MEM32(ebp + -208) = 0x3FF00000;
    MEM32(ebp + -212) = 0;
    edx = MEM32(ebp + -212);
    esi = MEM32(ebp + -208);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D88A7; /* jne: not equal / not zero */

loc_003D8898: ;
    goto loc_003D889A;

loc_003D889A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8E13;

loc_003D88A7: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -248) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -244);
    MEM32(ebp + -236) = eax;
    MEM32(ebp + -240) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    MEMD(ebp + -224) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -224); /* subsd */
    MEMD(ebp + -232) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -224)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D6170); /* mulsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -232)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D6170); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(0x4D6178); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -40); /* mulsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -48); /* mulsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D61B0)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(0x4D61B8); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -136); /* addsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -64); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -136); /* addsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -104); /* addsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D61C0)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm2.d[0] = xmm2.d[0] * MEMD(0x4D61C8); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D61D0)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm4.d[0] = xmm4.d[0] * MEMD(0x4D61D8); /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D61E0)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm4.d[0] = xmm4.d[0] * MEMD(0x4D61E8); /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(0x4D61F0)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm6.d[0] = xmm6.d[0] * MEMD(0x4D61F8); /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm6.d[0]; /* addsd */
    xmm4.d[0] = xmm4.d[0] * xmm5.d[0]; /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -104); /* addsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -64); /* addsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8A72u); RECOMP_ABI_CALL(0x003D8E60u, sub_003D8E60); /* call 0x003D8E60 */

loc_003D8A72: ;
    MEMD(ebp + -336) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -336)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8E13;

loc_003D8A8A: ;
    eax = MEM32(ebp + -164);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x10));
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FE0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D8B9E; /* jb: below (unsigned <) */

loc_003D8A9E: ;
    ecx = MEM32(ebp + -144);
    eax = MEM32(ebp + -140);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D8AD6; /* jne: not equal / not zero */

loc_003D8AB0: ;
    goto loc_003D8AB2;

loc_003D8AB2: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8ABEu); RECOMP_ABI_CALL(0x003D4C90u, sub_003D4C90); /* call 0x003D4C90 */

loc_003D8ABE: ;
    MEMD(ebp + -328) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -328)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8E13;

loc_003D8AD6: ;
    eax = MEM32(ebp + -144);
    ecx = MEM32(ebp + -140);
    MEM32(ebp + -252) = 0x7FF00000;
    MEM32(ebp + -256) = 0;
    edx = MEM32(ebp + -256);
    esi = MEM32(ebp + -252);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D8B1B; /* jne: not equal / not zero */

loc_003D8B0A: ;
    goto loc_003D8B0C;

loc_003D8B0C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8E13;

loc_003D8B1B: ;
    eax = MEM32(ebp + -164);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D8B3D; /* jne: not equal / not zero */

loc_003D8B2B: ;
    eax = MEM32(ebp + -164);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D8B64; /* jne: not equal / not zero */

loc_003D8B3D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8B4Cu); RECOMP_ABI_CALL(0x003D4D10u, sub_003D4D10); /* call 0x003D4D10 */

loc_003D8B4C: ;
    MEMD(ebp + -320) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -320)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_003D8E13;

loc_003D8B64: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -264) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -264)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -140);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFCC00000u)) >> 32) & 1);
    eax = eax + 0xFCC00000u;
    MEM32(ebp + -140) = eax;

loc_003D8B9E: ;
    ecx = MEM32(ebp + -144);
    eax = MEM32(ebp + -140);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC01A0000u)) >> 32) & 1);
    eax = eax + 0xC01A0000u;
    MEM32(ebp + -160) = ecx;
    MEM32(ebp + -156) = eax;
    eax = MEM32(ebp + -156);
    _shift_result = RECOMP_SHIFT(eax, 0xE, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3F;
    MEM32(ebp + -172) = eax;
    eax = MEM32(ebp + -156);
    eax = RECOMP_SAR(eax, 0x14, 32, &_cf);
    MEM32(ebp + -168) = eax;
    ecx = MEM32(ebp + -144);
    eax = MEM32(ebp + -140);
    edx = MEM32(ebp + -156);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF00000u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    MEM32(ebp + -152) = ecx;
    MEM32(ebp + -148) = eax;
    eax = MEM32(ebp + -172);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D6200)); /* movsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -172);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D6208)); /* movsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -272) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -272)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0.d[0] = (double)(int32_t)MEM32(ebp + -168); /* cvtsi2sd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    eax = MEM32(ebp + -172);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D6600)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D6608)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -304) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -300);
    MEM32(ebp + -292) = eax;
    MEM32(ebp + -296) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -296)); /* movsd */
    MEMD(ebp + -280) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -280); /* subsd */
    MEMD(ebp + -288) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -280)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D6170); /* mulsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -288)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(0x4D6170); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(0x4D6178); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -80); /* addsd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -112); /* addsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -96); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -112); /* addsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -120); /* addsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -40); /* mulsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -48); /* mulsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D6180)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(0x4D6188); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D6190)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(0x4D6198); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D61A0)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(0x4D61A8); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -136); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -96); /* addsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8E00u); RECOMP_ABI_CALL(0x003D8E60u, sub_003D8E60); /* call 0x003D8E60 */

loc_003D8E00: ;
    MEMD(ebp + -312) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -312)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */

loc_003D8E13: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -20)); /* movsd */
    MEMD(ebp + -344) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -344)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x15C)) >> 32) & 1);
    esp = esp + 0x15C;
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
 * sub_003D8E40
 * Original: 0x003D8E40 - 0x003D8E5E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8E40(void)
{
    uint32_t ebp = g_ebp;

loc_003D8E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    eax = ZX16(MEM16(ebp + -2));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D8E60
 * Original: 0x003D8E60 - 0x003D8E87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8E60(void)
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

loc_003D8E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D8E90
 * Original: 0x003D8E90 - 0x003D94D0 (1600 bytes, 369 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8E90(void)
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
loc_003D8E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x154));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x154)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEM32(ebp + -16) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8EE2u); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D8EE2: ;
    MEM32(ebp + -36) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8EF4u); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D8EF4: ;
    MEM32(ebp + -40) = eax;
    ecx = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FE (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -281) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003D8F28; /* jae: above or equal (unsigned >=) */

loc_003D8F0D: ;
    eax = MEM32(ebp + -40);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x3BE));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x3BE)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_AE(_fa, _fb)) ? 1 : 0); /* setae */
    MEM8(ebp + -281) = LO8(eax);

loc_003D8F28: ;
    SET_LO8(eax, MEM8(ebp + -281));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003D8F37; /* jne: not equal / not zero */

loc_003D8F32: ;
    goto loc_003D937B;

loc_003D8F37: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D8F49u); RECOMP_ABI_CALL(0x003D94F0u, sub_003D94F0); /* call 0x003D94F0 */

loc_003D8F49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D90B8; /* je: equal / zero */

loc_003D8F52: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D8F72; /* jne: not equal / not zero */

loc_003D8F5E: ;
    goto loc_003D8F60;

loc_003D8F60: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D8F72: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -60) = 0x3FF00000;
    MEM32(ebp + -64) = 0;
    edx = MEM32(ebp + -64);
    esi = MEM32(ebp + -60);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D8FA8; /* jne: not equal / not zero */

loc_003D8F94: ;
    goto loc_003D8F96;

loc_003D8F96: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D8FA8: ;
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    _shift_result = RECOMP_DOUBLE_SHIFT(ecx, esi, 1, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(esi)) >> 32) & 1);
    esi = esi + esi;
    MEM32(ebp + -68) = 0x7FF00000;
    MEM32(ebp + -72) = 0;
    edx = MEM32(ebp + -72);
    eax = MEM32(ebp + -68);
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, 1, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edx)) >> 32) & 1);
    edx = edx + edx;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
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
    if (_cf) goto loc_003D9004; /* jb: below (unsigned <) */

loc_003D8FD4: ;
    goto loc_003D8FD6;

loc_003D8FD6: ;
    esi = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    _shift_result = RECOMP_DOUBLE_SHIFT(ecx, esi, 1, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(esi)) >> 32) & 1);
    esi = esi + esi;
    MEM32(ebp + -76) = 0x7FF00000;
    MEM32(ebp + -80) = 0;
    edx = MEM32(ebp + -80);
    eax = MEM32(ebp + -76);
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, 1, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edx)) >> 32) & 1);
    edx = edx + edx;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
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
    if (!_cf) goto loc_003D9018; /* jae: above or equal (unsigned >=) */

loc_003D9002: ;
    goto loc_003D9004;

loc_003D9004: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 0x10); /* addsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D9018: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -84) = 0x3FF00000;
    MEM32(ebp + -88) = 0;
    esi = MEM32(ebp + -88);
    edx = MEM32(ebp + -84);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _shift_result = RECOMP_DOUBLE_SHIFT(ecx, eax, 1, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D9054; /* jne: not equal / not zero */

loc_003D9040: ;
    goto loc_003D9042;

loc_003D9042: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D9054: ;
    edx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, 1, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edx)) >> 32) & 1);
    edx = edx + edx;
    MEM32(ebp + -92) = 0x3FF00000;
    MEM32(ebp + -96) = 0;
    esi = MEM32(ebp + -96);
    ecx = MEM32(ebp + -92);
    _shift_result = RECOMP_DOUBLE_SHIFT(ecx, esi, 1, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(esi)) >> 32) & 1);
    esi = esi + esi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
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
    SET_LO8(eax, (_cf) ? 1 : 0); /* setb */
    eax = ZX8(LO8(eax));
    ecx = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ 0xFF);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D90A4; /* jne: not equal / not zero */

loc_003D9097: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D90A4: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 0x10); /* mulsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D90B8: ;
    ecx = MEM32(ebp + -24);
    edx = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D90CAu); RECOMP_ABI_CALL(0x003D94F0u, sub_003D94F0); /* call 0x003D94F0 */

loc_003D90CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D9173; /* je: equal / zero */

loc_003D90D3: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm0.d[0]; /* mulsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003D9119; /* je: equal / zero */

loc_003D90EB: ;
    goto loc_003D90ED;

loc_003D90ED: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D90FFu); RECOMP_ABI_CALL(0x003D9550u, sub_003D9550); /* call 0x003D9550 */

loc_003D90FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D9119; /* jne: not equal / not zero */

loc_003D9104: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */

loc_003D9119: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003D9154; /* je: equal / zero */

loc_003D9123: ;
    goto loc_003D9125;

loc_003D9125: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / MEMD(ebp + -104); /* divsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D913Cu); RECOMP_ABI_CALL(0x003D9640u, sub_003D9640); /* call 0x003D9640 */

loc_003D913C: ;
    MEMD(ebp + -272) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -272)); /* movsd */
    MEMD(ebp + -296) = xmm0.d[0]; /* movsd */
    goto loc_003D9161;

loc_003D9154: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(ebp + -296) = xmm0.d[0]; /* movsd */

loc_003D9161: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -296)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D9173: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003D91E1; /* je: equal / zero */

loc_003D917D: ;
    goto loc_003D917F;

loc_003D917F: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9191u); RECOMP_ABI_CALL(0x003D9550u, sub_003D9550); /* call 0x003D9550 */

loc_003D9191: ;
    MEM32(ebp + -108) = eax;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D91C1; /* jne: not equal / not zero */

loc_003D919A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D91A9u); RECOMP_ABI_CALL(0x003D4D10u, sub_003D4D10); /* call 0x003D4D10 */

loc_003D91A9: ;
    MEMD(ebp + -264) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -264)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D91C1: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D91CE; /* jne: not equal / not zero */

loc_003D91C7: ;
    MEM32(ebp + -16) = 0x40000;

loc_003D91CE: ;
    SET_LO8(eax, MEM8(ebp + -17));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(ebp + -17) = LO8(eax);
    eax = MEM32(ebp + -36);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF;
    MEM32(ebp + -36) = eax;

loc_003D91E1: ;
    eax = MEM32(ebp + -40);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x3BE));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x3BE)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D933A; /* jb: below (unsigned <) */

loc_003D91F9: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -112) = 0x3FF00000;
    MEM32(ebp + -116) = 0;
    edx = MEM32(ebp + -116);
    esi = MEM32(ebp + -112);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003D922F; /* jne: not equal / not zero */

loc_003D921B: ;
    goto loc_003D921D;

loc_003D921D: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D922F: ;
    eax = MEM32(ebp + -40);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3BE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3BE (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003D929E; /* jae: above or equal (unsigned >=) */

loc_003D923E: ;
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -120) = 0x3FF00000;
    MEM32(ebp + -124) = 0;
    edx = MEM32(ebp + -124);
    eax = MEM32(ebp + -120);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
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
    if (!_cf) goto loc_003D9277; /* jae: above or equal (unsigned >=) */

loc_003D925E: ;
    goto loc_003D9260;

loc_003D9260: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 0x10); /* addsd */
    MEMD(ebp + -304) = xmm0.d[0]; /* movsd */
    goto loc_003D928C;

loc_003D9277: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 0x10); /* subsd */
    MEMD(ebp + -304) = xmm0.d[0]; /* movsd */

loc_003D928C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -304)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D929E: ;
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -128) = 0x3FF00000;
    MEM32(ebp + -132) = 0;
    edx = MEM32(ebp + -132);
    eax = MEM32(ebp + -128);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
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
    SET_LO8(eax, (_cf) ? 1 : 0); /* setb */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x800 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D9304; /* jne: not equal / not zero */

loc_003D92DE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D92ECu); RECOMP_ABI_CALL(0x003D4D40u, sub_003D4D40); /* call 0x003D4D40 */

loc_003D92EC: ;
    MEMD(ebp + -256) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -256)); /* movsd */
    MEMD(ebp + -312) = xmm0.d[0]; /* movsd */
    goto loc_003D9328;

loc_003D9304: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9312u); RECOMP_ABI_CALL(0x003D4D70u, sub_003D4D70); /* call 0x003D4D70 */

loc_003D9312: ;
    MEMD(ebp + -248) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -248)); /* movsd */
    MEMD(ebp + -312) = xmm0.d[0]; /* movsd */

loc_003D9328: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -312)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */
    goto loc_003D94B4;

loc_003D933A: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D9379; /* jne: not equal / not zero */

loc_003D9340: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -140) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -140)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    SET_LO8(eax, MEM8(ebp + -17));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(ebp + -17) = LO8(eax);
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFCC00000u)) >> 32) & 1);
    eax = eax + 0xFCC00000u;
    MEM32(ebp + -20) = eax;

loc_003D9379: ;
    goto loc_003D937B;

loc_003D937B: ;
    ecx = MEM32(ebp + -24);
    edx = MEM32(ebp + -20);
    eax = esp;
    esi = ebp + -152;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9396u); RECOMP_ABI_CALL(0x003D9670u, sub_003D9670); /* call 0x003D9670 */

loc_003D9396: ;
    MEMD(ebp + -160) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF8000000u;
    MEM32(ebp + -188) = ecx;
    MEM32(ebp + -192) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -192)); /* movsd */
    MEMD(ebp + -184) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -200) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(ebp + -224) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -224);
    ecx = MEM32(ebp + -220);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF8000000u;
    MEM32(ebp + -212) = ecx;
    MEM32(ebp + -216) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -216)); /* movsd */
    MEMD(ebp + -208) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -208); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -152); /* addsd */
    MEMD(ebp + -232) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -208); /* mulsd */
    MEMD(ebp + -168) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -200)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -208); /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -232); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -176) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -168)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    eax = MEM32(ebp + -16);
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D94A1u); RECOMP_ABI_CALL(0x003D9A20u, sub_003D9A20); /* call 0x003D9A20 */

loc_003D94A1: ;
    MEMD(ebp + -240) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */

loc_003D94B4: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -12)); /* movsd */
    MEMD(ebp + -280) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -280)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x154)) >> 32) & 1);
    esp = esp + 0x154;
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
 * sub_003D94D0
 * Original: 0x003D94D0 - 0x003D94F0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D94D0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003D94D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D94F0
 * Original: 0x003D94F0 - 0x003D9541 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D94F0(void)
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

loc_003D94F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, 1, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edx)) >> 32) & 1);
    edx = edx + edx;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    edx = edx + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -8) = 0x7FF00000;
    MEM32(ebp + -12) = 0;
    esi = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_DOUBLE_SHIFT(ecx, esi, 1, 32, 0, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(esi)) >> 32) & 1);
    esi = esi + esi;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    esi = esi + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
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
    SET_LO8(eax, (!_cf) ? 1 : 0); /* setae */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D9550
 * Original: 0x003D9550 - 0x003D9631 (225 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003D9550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x3FF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003D9582; /* jge: greater or equal (signed >=) */

loc_003D9576: ;
    MEM32(ebp + -16) = 0;
    goto loc_003D9626;

loc_003D9582: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x433) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x433 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D9597; /* jle: less or equal (signed <=) */

loc_003D958B: ;
    MEM32(ebp + -16) = 2;
    goto loc_003D9626;

loc_003D9597: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -24) = ecx;
    SET_LO8(ecx, MEM8(ebp + -20));
    SET_LO8(ebx, 0x33);
    _cf = (int)((uint32_t)(LO8(ebx)) < (uint32_t)(LO8(ecx)));
    SET_LO8(ebx, LO8(ebx) - LO8(ecx));
    edx = 1;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    esi = edi;
    _shift_result = RECOMP_DOUBLE_SHIFT(esi, edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    esi = _shift_result;
    SET_LO8(ecx, LO8(ebx));
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) esi = edx; /* cmovne */
    if (TEST_NZ(_fa, _fb)) edx = edi; /* cmovne */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    edx = edx + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(esi) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* adc */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax == 0)) goto loc_003D95DE; /* je: equal / zero */

loc_003D95D3: ;
    goto loc_003D95D5;

loc_003D95D5: ;
    MEM32(ebp + -16) = 0;
    goto loc_003D9626;

loc_003D95DE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = ecx;
    SET_LO8(ecx, MEM8(ebp + -20));
    SET_LO8(ebx, 0x33);
    _cf = (int)((uint32_t)(LO8(ebx)) < (uint32_t)(LO8(ecx)));
    SET_LO8(ebx, LO8(ebx) - LO8(ecx));
    edx = 1;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    esi = edi;
    _shift_result = RECOMP_DOUBLE_SHIFT(esi, edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    esi = _shift_result;
    SET_LO8(ecx, LO8(ebx));
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    ecx = MEM32(ebp + -28);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) esi = edx; /* cmovne */
    if (TEST_NZ(_fa, _fb)) edx = edi; /* cmovne */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax == 0)) goto loc_003D961F; /* je: equal / zero */

loc_003D9614: ;
    goto loc_003D9616;

loc_003D9616: ;
    MEM32(ebp + -16) = 1;
    goto loc_003D9626;

loc_003D961F: ;
    MEM32(ebp + -16) = 2;

loc_003D9626: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003D9640
 * Original: 0x003D9640 - 0x003D9667 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9640(void)
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

loc_003D9640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D9670
 * Original: 0x003D9670 - 0x003D9A1C (940 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9670(void)
{
    uint32_t ebp = g_ebp;
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

loc_003D9670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF8));
    esp = esp - 0xF8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC0196AABu)) >> 32) & 1);
    eax = eax + 0xC0196AABu;
    MEM32(ebp + -128) = ecx;
    MEM32(ebp + -124) = eax;
    eax = MEM32(ebp + -124);
    _shift_result = RECOMP_SHIFT(eax, 0xD, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    MEM32(ebp + -136) = eax;
    eax = MEM32(ebp + -124);
    eax = RECOMP_SAR(eax, 0x14, 32, &_cf);
    MEM32(ebp + -132) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -124);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF00000u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    MEM32(ebp + -120) = ecx;
    MEM32(ebp + -116) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0.d[0] = (double)(int32_t)MEM32(ebp + -132); /* cvtsi2sd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -136);
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D7AD8)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -136);
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D7AE8)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -136);
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x4D7AF0)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    ecx = MEM32(ebp + -120);
    eax = MEM32(ebp + -116);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    ecx = ecx + 0x80000000u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -156) = eax;
    MEM32(ebp + -160) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -168) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -176) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -168)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -184) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D7A90)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D7A98)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AA0)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -192) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -192)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -200) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -200)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -208) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AA0)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -232) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -232)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -240) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -192)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -232)); /* movsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -216) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -224) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -208)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AA8)); /* movsd */
    xmm4 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AB0)); /* movsd */
    xmm2 = xmm4; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(ebp + -200)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AB8)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AC0)); /* movsd */
    xmm5 = xmm4; /* movaps */
    xmm5.d[0] = xmm5.d[0] * xmm6.d[0]; /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm5.d[0]; /* addsd */
    xmm5 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AC8)); /* movsd */
    xmm6 = XMM_SCALAR_DOUBLE(MEMD(0x4D7AD0)); /* movsd */
    xmm4.d[0] = xmm4.d[0] * xmm6.d[0]; /* mulsd */
    xmm5.d[0] = xmm5.d[0] + xmm4.d[0]; /* addsd */
    xmm4 = xmm2; /* movaps */
    xmm4.d[0] = xmm4.d[0] * xmm5.d[0]; /* mulsd */
    xmm3.d[0] = xmm3.d[0] + xmm4.d[0]; /* addsd */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm2.d[0]; /* addsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -216)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -224)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    eax = MEM32(ebp + 0x10);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(ebp + -248) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -248)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xF8)) >> 32) & 1);
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
 * sub_003D9A20
 * Original: 0x003D9A20 - 0x003D9DEF (975 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9A20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
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

loc_003D9A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF0));
    esp = esp - 0xF0;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9A47u); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D9A47: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -204) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E060)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9A6Au); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D9A6A: ;
    ecx = eax;
    eax = MEM32(ebp + -204);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    MEM32(ebp + -196) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E780)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9A8Cu); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D9A8C: ;
    MEM32(ebp + -200) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E060)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9AA4u); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D9AA4: ;
    ecx = MEM32(ebp + -200);
    edx = eax;
    eax = MEM32(ebp + -196);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D9BC3; /* jb: below (unsigned <) */

loc_003D9ABC: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -208) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E060)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9AD7u); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D9AD7: ;
    ecx = eax;
    eax = MEM32(ebp + -208);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D9B39; /* jb: below (unsigned <) */

loc_003D9AE8: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003D9B1A; /* je: equal / zero */

loc_003D9B00: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -216) = xmm0.d[0]; /* movsd */
    goto loc_003D9B27;

loc_003D9B1A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(ebp + -216) = xmm0.d[0]; /* movsd */

loc_003D9B27: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -216)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D9DD2;

loc_003D9B39: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -220) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E9A0)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9B54u); RECOMP_ABI_CALL(0x003D94D0u, sub_003D94D0); /* call 0x003D94D0 */

loc_003D9B54: ;
    ecx = eax;
    eax = MEM32(ebp + -220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003D9BBC; /* jb: below (unsigned <) */

loc_003D9B60: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003D9B99; /* je: equal / zero */

loc_003D9B74: ;
    goto loc_003D9B76;

loc_003D9B76: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9B81u); RECOMP_ABI_CALL(0x003D4D70u, sub_003D4D70); /* call 0x003D4D70 */

loc_003D9B81: ;
    MEMD(ebp + -184) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D9DD2;

loc_003D9B99: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9BA4u); RECOMP_ABI_CALL(0x003D4D40u, sub_003D4D40); /* call 0x003D4D40 */

loc_003D9BA4: ;
    MEMD(ebp + -176) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D9DD2;

loc_003D9BBC: ;
    MEM32(ebp + -20) = 0;

loc_003D9BC3: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x4D5900)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D5908)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9BF5u); RECOMP_ABI_CALL(0x003D9DF0u, sub_003D9DF0); /* call 0x003D9DF0 */

loc_003D9BF5: ;
    MEMD(ebp + -64) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -136)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x4D5908)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(0x4D5910)); /* movsd */
    xmm2 = xmm1; /* movaps */
    xmm2.d[0] = xmm2.d[0] * xmm3.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm2.d[0]; /* addsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D5918)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -32);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = 0;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x18);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _shift_result = RECOMP_SHIFT(eax, 0xD, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -48) = 0;
    eax = MEM32(ebp + -40);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax * 8 + 0x4D5970)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    ecx = MEM32(ebp + -40);
    eax = MEM32(ecx * 8 + 0x4D597C);
    ecx = MEM32(ecx * 8 + 0x4D5978);
    esi = MEM32(ebp + -48);
    edx = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -56) = ecx;
    MEM32(ebp + -52) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -80); /* mulsd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -80); /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D5920)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(0x4D5928); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -88); /* mulsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x4D5930)); /* movsd */
    xmm3 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm3.d[0] = xmm3.d[0] * MEMD(0x4D5938); /* mulsd */
    xmm2.d[0] = xmm2.d[0] + xmm3.d[0]; /* addsd */
    xmm1.d[0] = xmm1.d[0] * xmm2.d[0]; /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003D9D88; /* jne: not equal / not zero */

loc_003D9D4B: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    ecx = MEM32(ebp + -56);
    edx = MEM32(ebp + -52);
    esi = MEM32(ebp + -32);
    edi = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9D73u); RECOMP_ABI_CALL(0x003D9E20u, sub_003D9E20); /* call 0x003D9E20 */

loc_003D9D73: ;
    MEMD(ebp + -168) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -168)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    goto loc_003D9DD2;

loc_003D9D88: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + -112); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9DBFu); RECOMP_ABI_CALL(0x003D9DF0u, sub_003D9DF0); /* call 0x003D9DF0 */

loc_003D9DBF: ;
    MEMD(ebp + -160) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */

loc_003D9DD2: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(ebp + -192) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -192)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xF0)) >> 32) & 1);
    esp = esp + 0xF0;
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
 * sub_003D9DF0
 * Original: 0x003D9DF0 - 0x003D9E17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9DF0(void)
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

loc_003D9DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -16)); /* fld double */
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_003D9E20
 * Original: 0x003D9E20 - 0x003DA028 (520 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9E20(void)
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

loc_003D9E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x78;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    SET_LO8(eax, MEM8(ebp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003D9EA4; /* jne: not equal / not zero */

loc_003D9E3E: ;
    goto loc_003D9E40;

loc_003D9E40: ;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0xC0F00000u;
    MEM32(ebp + 0x14) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -32)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm1.d[0] = xmm1.d[0] + xmm0.d[0]; /* addsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E748)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9E92u); RECOMP_ABI_CALL(0x003D9DF0u, sub_003D9DF0); /* call 0x003D9DF0 */

loc_003D9E92: ;
    MEMD(ebp + -104) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA016;

loc_003D9EA4: ;
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x3FE00000;
    MEM32(ebp + 0x14) = eax;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003D9FE8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003D9EFD: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E400)); /* movsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.d[0]; _fcb = MEMD(ebp + -24); /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003D9F21; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMD(ebp + -24)) */

loc_003D9F14: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E050)); /* movsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */

loc_003D9F21: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -24); /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    xmm1.d[0] = xmm1.d[0] * MEMD(ebp + 8); /* mulsd */
    xmm0.d[0] = xmm0.d[0] + xmm1.d[0]; /* addsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -48); /* subsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -24); /* addsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -56); /* addsd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + -56); /* addsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9F7Au); RECOMP_ABI_CALL(0x003D9DF0u, sub_003D9DF0); /* call 0x003D9DF0 */

loc_003D9F7A: ;
    MEMD(ebp + -80) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + -64); /* subsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_003D9FB8; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_003D9F9A: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_003D9FB8; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_003D9F9C: ;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0x80000000u;
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -72) = 0;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */

loc_003D9FB8: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E2A0)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9FCAu); RECOMP_ABI_CALL(0x003D9640u, sub_003D9640); /* call 0x003D9640 */

loc_003D9FCA: ;
    MEMD(ebp + -88) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E2A0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * xmm1.d[0]; /* mulsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D9FE8u); RECOMP_ABI_CALL(0x003DA030u, sub_003DA030); /* call 0x003DA030 */

loc_003D9FE8: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E2A0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] * MEMD(ebp + -24); /* mulsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA009u); RECOMP_ABI_CALL(0x003D9DF0u, sub_003D9DF0); /* call 0x003D9DF0 */

loc_003DA009: ;
    MEMD(ebp + -96) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003DA016: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -112)); /* fld double */
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
 * sub_003DA030
 * Original: 0x003DA030 - 0x003DA04A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA030(void)
{
    uint32_t ebp = g_ebp;

loc_003DA030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA050
 * Original: 0x003DA050 - 0x003DA249 (505 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA050(void)
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

loc_003DA050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x78;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -36);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE921FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x3FE921FB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DA113; /* ja: above (unsigned >) */

loc_003DA083: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E500000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x3E500000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DA0DF; /* jae: above or equal (unsigned >=) */

loc_003DA08C: ;
    goto loc_003DA08E;

loc_003DA08E: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x100000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DA0AF; /* jae: above or equal (unsigned >=) */

loc_003DA097: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43EA00)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    goto loc_003DA0C1;

loc_003DA0AF: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EA00)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */

loc_003DA0C1: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA0D0u); RECOMP_ABI_CALL(0x003DA250u, sub_003DA250); /* call 0x003DA250 */

loc_003DA0D0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA237;

loc_003DA0DF: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA101u); RECOMP_ABI_CALL(0x003D6170u, sub_003D6170); /* call 0x003D6170 */

loc_003DA101: ;
    MEMD(ebp + -80) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA237;

loc_003DA113: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x7FF00000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DA130; /* jb: below (unsigned <) */

loc_003DA11C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 8); /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA237;

loc_003DA130: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = esp;
    ecx = ebp + -24;
    MEM32(eax + 8) = ecx;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA146u); RECOMP_ABI_CALL(0x003D4E80u, sub_003D4E80); /* call 0x003D4E80 */

loc_003DA146: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    eax = eax & 3;
    MEM32(ebp + -100) = eax;
    if ((eax == 0)) goto loc_003DA16D; /* je: equal / zero */

loc_003DA154: ;
    goto loc_003DA156;

loc_003DA156: ;
    eax = MEM32(ebp + -100);
    eax = eax - 1;
    if ((eax == 0)) goto loc_003DA1A1; /* je: equal / zero */

loc_003DA15E: ;
    goto loc_003DA160;

loc_003DA160: ;
    eax = MEM32(ebp + -100);
    eax = eax - 2;
    if ((eax == 0)) goto loc_003DA1CA; /* je: equal / zero */

loc_003DA168: ;
    goto loc_003DA205;

loc_003DA16D: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA18Fu); RECOMP_ABI_CALL(0x003D6170u, sub_003D6170); /* call 0x003D6170 */

loc_003DA18F: ;
    MEMD(ebp + -64) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA237;

loc_003DA1A1: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA1BBu); RECOMP_ABI_CALL(0x003D4B70u, sub_003D4B70); /* call 0x003D4B70 */

loc_003DA1BB: ;
    MEMD(ebp + -56) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA237;

loc_003DA1CA: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = esp;
    MEMD(eax + 8) = xmm1.d[0]; /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    MEM32(eax + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA1EBu); RECOMP_ABI_CALL(0x003D6170u, sub_003D6170); /* call 0x003D6170 */

loc_003DA1EB: ;
    MEMD(ebp + -48) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA237;

loc_003DA205: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = esp;
    MEMD(eax + 8) = xmm1.d[0]; /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA21Fu); RECOMP_ABI_CALL(0x003D4B70u, sub_003D4B70); /* call 0x003D4B70 */

loc_003DA21F: ;
    MEMD(ebp + -72) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    xmm1 = XMM_MEM(0x43ECC0); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* pxor */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003DA237: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -88)); /* fld double */
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
 * sub_003DA250
 * Original: 0x003DA250 - 0x003DA26A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA250(void)
{
    uint32_t ebp = g_ebp;

loc_003DA250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA270
 * Original: 0x003DA270 - 0x003DA3A6 (310 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA270(void)
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

loc_003DA270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -40) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -36);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE921FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x3FE921FB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DA330; /* ja: above (unsigned >) */

loc_003DA2A3: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x3E400000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DA2FF; /* jae: above or equal (unsigned >=) */

loc_003DA2AC: ;
    goto loc_003DA2AE;

loc_003DA2AE: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x100000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DA2CF; /* jae: above or equal (unsigned >=) */

loc_003DA2B7: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43EA00)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    goto loc_003DA2E1;

loc_003DA2CF: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43EA00)); /* movsd */
    xmm0.d[0] = xmm0.d[0] + MEMD(ebp + 8); /* addsd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */

loc_003DA2E1: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(esp) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA2F0u); RECOMP_ABI_CALL(0x003DA3B0u, sub_003DA3B0); /* call 0x003DA3B0 */

loc_003DA2F0: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA394;

loc_003DA2FF: ;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA321u); RECOMP_ABI_CALL(0x003D62A0u, sub_003D62A0); /* call 0x003D62A0 */

loc_003DA321: ;
    MEMD(ebp + -56) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA394;

loc_003DA330: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x7FF00000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DA34A; /* jb: below (unsigned <) */

loc_003DA339: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - MEMD(ebp + 8); /* subsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    goto loc_003DA394;

loc_003DA34A: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = ebp + -24;
    MEMD(esp) = xmm0.d[0]; /* movsd */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA360u); RECOMP_ABI_CALL(0x003D4E80u, sub_003D4E80); /* call 0x003D4E80 */

loc_003DA360: ;
    MEM32(ebp + -32) = eax;
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = MEM32(ebp + -32);
    eax = eax & 1;
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA387u); RECOMP_ABI_CALL(0x003D62A0u, sub_003D62A0); /* call 0x003D62A0 */

loc_003DA387: ;
    MEMD(ebp + -48) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */

loc_003DA394: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -64)); /* fld double */
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
 * sub_003DA3B0
 * Original: 0x003DA3B0 - 0x003DA3CA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA3B0(void)
{
    uint32_t ebp = g_ebp;

loc_003DA3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA3D0
 * Original: 0x003DA3D0 - 0x003DA45A (138 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA3D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DA3D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0x452F3B;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DA3FA; /* jne: not equal / not zero */

loc_003DA3EF: ;
    eax = 0x49A046;
    MEM32(ebp + -12) = eax;
    goto loc_003DA428;

loc_003DA3FA: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DA426; /* je: equal / zero */

loc_003DA405: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0x45C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DA426; /* jbe: below or equal (unsigned <=) */

loc_003DA412: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA417u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DA417: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -8) = 0;
    goto loc_003DA451;

loc_003DA426: ;
    goto loc_003DA428;

loc_003DA428: ;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -12);
    ecx = 0x463B55;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA44Bu); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003DA44B: ;
    eax = eax + 1;
    MEM32(ebp + -8) = eax;

loc_003DA451: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA460
 * Original: 0x003DA460 - 0x003DA49C (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA460(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DA460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x15 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DA486; /* jb: below (unsigned <) */

loc_003DA472: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA477u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DA477: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DA494;

loc_003DA486: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x4D8AD8);
    MEM32(ebp + -4) = eax;

loc_003DA494: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA4A0
 * Original: 0x003DA4A0 - 0x003DA4B7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA4A0(void)
{
    uint32_t ebp = g_ebp;

loc_003DA4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM32(esp) = 0x53;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA4B2u); RECOMP_ABI_CALL(0x003DA550u, sub_003DA550); /* call 0x003DA550 */

loc_003DA4B2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA4C0
 * Original: 0x003DA4C0 - 0x003DA4D7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA4C0(void)
{
    uint32_t ebp = g_ebp;

loc_003DA4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM32(esp) = 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA4D2u); RECOMP_ABI_CALL(0x003DA550u, sub_003DA550); /* call 0x003DA550 */

loc_003DA4D2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA4E0
 * Original: 0x003DA4E0 - 0x003DA4F7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA4E0(void)
{
    uint32_t ebp = g_ebp;

loc_003DA4E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM32(esp) = 0x55;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA4F2u); RECOMP_ABI_CALL(0x003DA550u, sub_003DA550); /* call 0x003DA550 */

loc_003DA4F2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA500
 * Original: 0x003DA500 - 0x003DA517 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA500(void)
{
    uint32_t ebp = g_ebp;

loc_003DA500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    MEM32(esp) = 0x56;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA512u); RECOMP_ABI_CALL(0x003DA550u, sub_003DA550); /* call 0x003DA550 */

loc_003DA512: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA520
 * Original: 0x003DA520 - 0x003DA544 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA520(void)
{
    uint32_t ebp = g_ebp;

loc_003DA520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = 0xFFFFFFFFu;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA53Fu); RECOMP_ABI_CALL(0x003DA460u, sub_003DA460); /* call 0x003DA460 */

loc_003DA53F: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA550
 * Original: 0x003DA550 - 0x003DA939 (1001 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003DA550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x238));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x238)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFB (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003DA573; /* jae: above or equal (unsigned >=) */

loc_003DA565: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax * 2 + 0x4D8B38)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x4D8B38), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DA58A; /* jne: not equal / not zero */

loc_003DA573: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA578u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DA578: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DA92E;

loc_003DA58A: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x4D8B38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003DA5AD; /* jl: less (signed <) */

loc_003DA59A: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x4D8B38);
    MEM32(ebp + -4) = eax;
    goto loc_003DA92E;

loc_003DA5AD: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x4D8B38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF00u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003DA64A; /* jge: greater or equal (signed >=) */

loc_003DA5C3: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + eax + 0x4D8B38));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3FFF;
    eax = esp;
    edx = ebp + -20;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA5E3u); RECOMP_ABI_CALL(0x0040E010u, sub_0040E010); /* call 0x0040E010 */

loc_003DA5E3: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -16);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xFFFFFFFFu));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xFFFFFFFFu)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax != 0)) goto loc_003DA5FE; /* jne: not equal / not zero */

loc_003DA5F0: ;
    goto loc_003DA5F2;

loc_003DA5F2: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DA92E;

loc_003DA5FE: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax == 0)) goto loc_003DA622; /* je: equal / zero */

loc_003DA60B: ;
    goto loc_003DA60D;

loc_003DA60D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx = 0x7FFFFFFF;
    MEM32(ebp + -492) = ecx;
    MEM32(ebp + -488) = eax;
    goto loc_003DA636;

loc_003DA622: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -16);
    MEM32(ebp + -492) = ecx;
    MEM32(ebp + -488) = eax;
    goto loc_003DA636;

loc_003DA636: ;
    eax = MEM32(ebp + -492);
    ecx = MEM32(ebp + -488);
    MEM32(ebp + -4) = eax;
    goto loc_003DA92E;

loc_003DA64A: ;
    goto loc_003DA64C;

loc_003DA64C: ;
    goto loc_003DA64E;

loc_003DA64E: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + eax + 0x4D8B38));
    { uint32_t _zr = ((uint32_t)(eax) - 1u) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -496) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_003DA920; /* ja: above (unsigned >) */

loc_003DA669: ;
    eax = MEM32(ebp + -496);
    eax = MEM32(eax * 4 + 0x4D8B04);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003DA678u) goto loc_003DA678;
    if (_jt == 0x003DA684u) goto loc_003DA684;
    if (_jt == 0x003DA690u) goto loc_003DA690;
    if (_jt == 0x003DA69Cu) goto loc_003DA69C;
    if (_jt == 0x003DA6A8u) goto loc_003DA6A8;
    if (_jt == 0x003DA6B4u) goto loc_003DA6B4;
    if (_jt == 0x003DA6C0u) goto loc_003DA6C0;
    if (_jt == 0x003DA7C9u) goto loc_003DA7C9;
    if (_jt == 0x003DA8C1u) goto loc_003DA8C1;
    if (_jt == 0x003DA917u) goto loc_003DA917;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003DA678: ;
    MEM32(ebp + -4) = 0x31069;
    goto loc_003DA92E;

loc_003DA684: ;
    MEM32(ebp + -4) = 0x20000;
    goto loc_003DA92E;

loc_003DA690: ;
    MEM32(ebp + -4) = 0x8000;
    goto loc_003DA92E;

loc_003DA69C: ;
    MEM32(ebp + -4) = 0x1000;
    goto loc_003DA92E;

loc_003DA6A8: ;
    MEM32(ebp + -4) = 0x7FFFFFFF;
    goto loc_003DA92E;

loc_003DA6B4: ;
    MEM32(ebp + -4) = 0x7FFFFFFF;
    goto loc_003DA92E;

loc_003DA6C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -520, xmm0); /* movaps */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    XMM_STORE(ebp + -56, xmm0); /* movaps */
    XMM_STORE(ebp + -72, xmm0); /* movaps */
    XMM_STORE(ebp + -88, xmm0); /* movaps */
    XMM_STORE(ebp + -104, xmm0); /* movaps */
    XMM_STORE(ebp + -120, xmm0); /* movaps */
    XMM_STORE(ebp + -136, xmm0); /* movaps */
    XMM_STORE(ebp + -152, xmm0); /* movaps */
    MEM8(ebp + -152) = 1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx = ebp + -152;
    eax = esp;
    MEM32(ebp + -500) = eax;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x80;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA73Bu); RECOMP_ABI_CALL(0x003DA940u, sub_003DA940); /* call 0x003DA940 */

loc_003DA73B: ;
    MEM32(ebp + -160) = 0;
    MEM32(ebp + -156) = 0;

loc_003DA74F: ;
    _fa = (uint32_t)(MEM32(ebp + -156)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -156), 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003DA7BB; /* jae: above or equal (unsigned >=) */

loc_003DA75B: ;
    goto loc_003DA75D;

loc_003DA75D: ;
    eax = MEM32(ebp + -156);
    _fa = (uint32_t)(MEM8(ebp + eax + -152)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + -152), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003DA7A8; /* je: equal / zero */

loc_003DA76D: ;
    goto loc_003DA76F;

loc_003DA76F: ;
    eax = MEM32(ebp + -156);
    edx = ZX8(MEM8(ebp + eax + -152));
    _cf = (int)((uint32_t)(edx) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    eax = MEM32(ebp + -156);
    ecx = ZX8(MEM8(ebp + eax + -152));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    MEM8(ebp + eax + -152) = LO8(ecx);
    eax = MEM32(ebp + -160);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -160) = eax;
    goto loc_003DA75D;

loc_003DA7A8: ;
    goto loc_003DA7AA;

loc_003DA7AA: ;
    eax = MEM32(ebp + -156);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -156) = eax;
    goto loc_003DA74F;

loc_003DA7BB: ;
    eax = MEM32(ebp + -160);
    MEM32(ebp + -4) = eax;
    goto loc_003DA92E;

loc_003DA7C9: ;
    eax = ebp + -480;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA7D7u); RECOMP_ABI_CALL(0x003E0ED0u, sub_003E0ED0); /* call 0x003E0ED0 */

loc_003DA7D7: ;
    _fa = (uint32_t)(MEM32(ebp + -428)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -428), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DA7EA; /* jne: not equal / not zero */

loc_003DA7E0: ;
    MEM32(ebp + -428) = 1;

loc_003DA7EA: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x55 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DA808; /* jne: not equal / not zero */

loc_003DA7F0: ;
    eax = MEM32(ebp + -464);
    MEM32(ebp + -168) = eax;
    MEM32(ebp + -164) = 0;
    goto loc_003DA826;

loc_003DA808: ;
    eax = MEM32(ebp + -460);
    ecx = MEM32(ebp + -452);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -168) = eax;
    MEM32(ebp + -164) = 0;

loc_003DA826: ;
    edx = MEM32(ebp + -428);
    eax = MEM32(ebp + -168);
    ecx = MEM32(ebp + -164);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    MEM32(ebp + -168) = eax;
    MEM32(ebp + -164) = edx;
    edx = MEM32(ebp + -168);
    ecx = MEM32(ebp + -164);
    eax = ecx;
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, 0x14, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(ecx, 0xC, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    MEM32(ebp + -164) = ecx;
    MEM32(ebp + -168) = eax;
    eax = MEM32(ebp + -168);
    ecx = MEM32(ebp + -164);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax == 0)) goto loc_003DA896; /* je: equal / zero */

loc_003DA87F: ;
    goto loc_003DA881;

loc_003DA881: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx = 0x7FFFFFFF;
    MEM32(ebp + -528) = ecx;
    MEM32(ebp + -524) = eax;
    goto loc_003DA8B0;

loc_003DA896: ;
    ecx = MEM32(ebp + -168);
    eax = MEM32(ebp + -164);
    MEM32(ebp + -528) = ecx;
    MEM32(ebp + -524) = eax;
    goto loc_003DA8B0;

loc_003DA8B0: ;
    eax = MEM32(ebp + -528);
    ecx = MEM32(ebp + -524);
    MEM32(ebp + -4) = eax;
    goto loc_003DA92E;

loc_003DA8C1: ;
    MEM32(esp) = 0x33;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA8CDu); RECOMP_ABI_CALL(0x0040DEA0u, sub_0040DEA0); /* call 0x0040DEA0 */

loc_003DA8CD: ;
    MEM32(ebp + -484) = eax;
    _fa = (uint32_t)(MEM32(ebp + -484)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -484), 0x800 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003DA8E9; /* jge: greater or equal (signed >=) */

loc_003DA8DF: ;
    MEM32(ebp + -484) = 0x800;

loc_003DA8E9: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x4D8B38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF0Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF0Du (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DA90C; /* jne: not equal / not zero */

loc_003DA8FB: ;
    eax = MEM32(ebp + -484);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1800)) >> 32) & 1);
    eax = eax + 0x1800;
    MEM32(ebp + -484) = eax;

loc_003DA90C: ;
    eax = MEM32(ebp + -484);
    MEM32(ebp + -4) = eax;
    goto loc_003DA92E;

loc_003DA917: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DA92E;

loc_003DA920: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x4D8B38);
    MEM32(ebp + -4) = eax;

loc_003DA92E: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x238)) >> 32) & 1);
    esp = esp + 0x238;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA940
 * Original: 0x003DA940 - 0x003DA9DB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA940(void)
{
    uint32_t ebp = g_ebp;

loc_003DA940: ;
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
    PUSH32(esp, 0x003DA9D3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DA9D3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA9E0
 * Original: 0x003DA9E0 - 0x003DA9EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA9E0(void)
{
    uint32_t ebp = g_ebp;

loc_003DA9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x4D8D30;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DA9F0
 * Original: 0x003DA9F0 - 0x003DAA1F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA9F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DA9F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DA9FBu); RECOMP_ABI_CALL(0x003DAA20u, sub_003DAA20); /* call 0x003DAA20 */

loc_003DA9FB: ;
    eax = MEM32(eax + 0x60);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) ^ 0xFF);
    SET_LO8(edx, LO8(edx) ^ 0xFF);
    eax = 1;
    ecx = 4;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAA20
 * Original: 0x003DAA20 - 0x003DAA30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAA20(void)
{
    uint32_t ebp = g_ebp;

loc_003DAA20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DAA2Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_003DAA2B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAA30
 * Original: 0x003DAA30 - 0x003DAA3B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAA30(void)
{
    uint32_t ebp = g_ebp;

loc_003DAA30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x4D9034;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAA40
 * Original: 0x003DAA40 - 0x003DAA4B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAA40(void)
{
    uint32_t ebp = g_ebp;

loc_003DAA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x4D9638;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAA50
 * Original: 0x003DAA50 - 0x003DAAA9 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAA50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAA50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003DAA61; /* jne: not equal / not zero */

loc_003DAA5F: ;
    goto loc_003DAA7A;

loc_003DAA61: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DAA6Cu); RECOMP_ABI_CALL(0x003DAAD0u, sub_003DAAD0); /* call 0x003DAAD0 */

loc_003DAA6C: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003DAA9C; /* jne: not equal / not zero */

loc_003DAA78: ;
    goto loc_003DAA8D;

loc_003DAA7A: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx | 0x20;
    ecx = ecx - 0x61;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DAA9C; /* jb: below (unsigned <) */

loc_003DAA8D: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -1) = LO8(eax);

loc_003DAA9C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAAB0
 * Original: 0x003DAAB0 - 0x003DAACC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAAB0(void)
{
    uint32_t ebp = g_ebp;

loc_003DAAB0: ;
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
    PUSH32(esp, 0x003DAAC7u); RECOMP_ABI_CALL(0x003DAA50u, sub_003DAA50); /* call 0x003DAA50 */

loc_003DAAC7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAAD0
 * Original: 0x003DAAD0 - 0x003DAAEC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAAD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAAD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax | 0x20;
    eax = eax - 0x61;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAAF0
 * Original: 0x003DAAF0 - 0x003DAB0C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAAF0(void)
{
    uint32_t ebp = g_ebp;

loc_003DAAF0: ;
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
    PUSH32(esp, 0x003DAB07u); RECOMP_ABI_CALL(0x003DAAD0u, sub_003DAAD0); /* call 0x003DAAD0 */

loc_003DAB07: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAB10
 * Original: 0x003DAB10 - 0x003DAB2B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAB10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAB10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFFFFF80u;
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
 * sub_003DAB30
 * Original: 0x003DAB30 - 0x003DAB59 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAB30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAB30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x20 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003DAB4C; /* je: equal / zero */

loc_003DAB42: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 9 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_003DAB4C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAB60
 * Original: 0x003DAB60 - 0x003DAB7C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAB60(void)
{
    uint32_t ebp = g_ebp;

loc_003DAB60: ;
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
    PUSH32(esp, 0x003DAB77u); RECOMP_ABI_CALL(0x003DAB30u, sub_003DAB30); /* call 0x003DAB30 */

loc_003DAB77: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAB80
 * Original: 0x003DAB80 - 0x003DABA9 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAB80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAB80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x20 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DAB9C; /* jb: below (unsigned <) */

loc_003DAB92: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x7F (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_003DAB9C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DABB0
 * Original: 0x003DABB0 - 0x003DABCC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DABB0(void)
{
    uint32_t ebp = g_ebp;

loc_003DABB0: ;
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
    PUSH32(esp, 0x003DABC7u); RECOMP_ABI_CALL(0x003DAB80u, sub_003DAB80); /* call 0x003DAB80 */

loc_003DABC7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DABD0
 * Original: 0x003DABD0 - 0x003DABE9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DABD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DABD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DABF0
 * Original: 0x003DABF0 - 0x003DAC0C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DABF0(void)
{
    uint32_t ebp = g_ebp;

loc_003DABF0: ;
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
    PUSH32(esp, 0x003DAC07u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003DAC07: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAC10
 * Original: 0x003DAC10 - 0x003DAC29 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAC10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAC10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x21;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAC30
 * Original: 0x003DAC30 - 0x003DAC4C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAC30(void)
{
    uint32_t ebp = g_ebp;

loc_003DAC30: ;
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
    PUSH32(esp, 0x003DAC47u); RECOMP_ABI_CALL(0x003DAC10u, sub_003DAC10); /* call 0x003DAC10 */

loc_003DAC47: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAC50
 * Original: 0x003DAC50 - 0x003DAC69 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAC50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x61;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAC70
 * Original: 0x003DAC70 - 0x003DAC8C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAC70(void)
{
    uint32_t ebp = g_ebp;

loc_003DAC70: ;
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
    PUSH32(esp, 0x003DAC87u); RECOMP_ABI_CALL(0x003DAC50u, sub_003DAC50); /* call 0x003DAC50 */

loc_003DAC87: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAC90
 * Original: 0x003DAC90 - 0x003DACA9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAC90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DACB0
 * Original: 0x003DACB0 - 0x003DACCC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DACB0(void)
{
    uint32_t ebp = g_ebp;

loc_003DACB0: ;
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
    PUSH32(esp, 0x003DACC7u); RECOMP_ABI_CALL(0x003DAC90u, sub_003DAC90); /* call 0x003DAC90 */

loc_003DACC7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DACD0
 * Original: 0x003DACD0 - 0x003DAD2D (93 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DACD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DACD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003DACE1; /* jne: not equal / not zero */

loc_003DACDF: ;
    goto loc_003DACFA;

loc_003DACE1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DACECu); RECOMP_ABI_CALL(0x003DAC10u, sub_003DAC10); /* call 0x003DAC10 */

loc_003DACEC: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003DAD0A; /* jne: not equal / not zero */

loc_003DACF8: ;
    goto loc_003DAD20;

loc_003DACFA: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 0x21;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5E (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003DAD20; /* jae: above or equal (unsigned >=) */

loc_003DAD0A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DAD15u); RECOMP_ABI_CALL(0x003DAA50u, sub_003DAA50); /* call 0x003DAA50 */

loc_003DAD15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -1) = LO8(eax);

loc_003DAD20: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAD30
 * Original: 0x003DAD30 - 0x003DAD4C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAD30(void)
{
    uint32_t ebp = g_ebp;

loc_003DAD30: ;
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
    PUSH32(esp, 0x003DAD47u); RECOMP_ABI_CALL(0x003DACD0u, sub_003DACD0); /* call 0x003DACD0 */

loc_003DAD47: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAD50
 * Original: 0x003DAD50 - 0x003DAD7E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAD50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAD50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x20 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003DAD71; /* je: equal / zero */

loc_003DAD62: ;
    eax = MEM32(ebp + 8);
    eax = eax - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -1) = LO8(eax);

loc_003DAD71: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAD80
 * Original: 0x003DAD80 - 0x003DAD9C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAD80(void)
{
    uint32_t ebp = g_ebp;

loc_003DAD80: ;
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
    PUSH32(esp, 0x003DAD97u); RECOMP_ABI_CALL(0x003DAD50u, sub_003DAD50); /* call 0x003DAD50 */

loc_003DAD97: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DADA0
 * Original: 0x003DADA0 - 0x003DADB9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DADA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DADA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DADC0
 * Original: 0x003DADC0 - 0x003DADDC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DADC0(void)
{
    uint32_t ebp = g_ebp;

loc_003DADC0: ;
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
    PUSH32(esp, 0x003DADD7u); RECOMP_ABI_CALL(0x003DADA0u, sub_003DADA0); /* call 0x003DADA0 */

loc_003DADD7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DADE0
 * Original: 0x003DADE0 - 0x003DAE3B (91 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DADE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DADE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003DADF1; /* jne: not equal / not zero */

loc_003DADEF: ;
    goto loc_003DAE0A;

loc_003DADF1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DADFCu); RECOMP_ABI_CALL(0x003DB190u, sub_003DB190); /* call 0x003DB190 */

loc_003DADFC: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003DAE2E; /* jne: not equal / not zero */

loc_003DAE08: ;
    goto loc_003DAE1A;

loc_003DAE0A: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 0x30;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DAE2E; /* jb: below (unsigned <) */

loc_003DAE1A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DAE25u); RECOMP_ABI_CALL(0x003DAE60u, sub_003DAE60); /* call 0x003DAE60 */

loc_003DAE25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003DAE2E: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAE40
 * Original: 0x003DAE40 - 0x003DAE5C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAE40(void)
{
    uint32_t ebp = g_ebp;

loc_003DAE40: ;
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
    PUSH32(esp, 0x003DAE57u); RECOMP_ABI_CALL(0x003DADE0u, sub_003DADE0); /* call 0x003DADE0 */

loc_003DAE57: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAE60
 * Original: 0x003DAE60 - 0x003DAEC8 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAE60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003DAE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x20000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DAEA7; /* jae: above or equal (unsigned >=) */

loc_003DAE70: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = ZX8(MEM8(eax + 0x4D9C3C));
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 0xFF;
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = ZX8(MEM8(eax + 0x4D9C3C));
    ecx = MEM32(ebp + 8);
    ecx = ecx & 7;
    eax = RECOMP_SAR(eax, LO8(ecx), 32, NULL);
    eax = eax & 1;
    MEM32(ebp + -4) = eax;
    goto loc_003DAEC0;

loc_003DAEA7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x2FFFE (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DAEB9; /* jae: above or equal (unsigned >=) */

loc_003DAEB0: ;
    MEM32(ebp + -4) = 1;
    goto loc_003DAEC0;

loc_003DAEB9: ;
    MEM32(ebp + -4) = 0;

loc_003DAEC0: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAED0
 * Original: 0x003DAED0 - 0x003DAEEC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAED0(void)
{
    uint32_t ebp = g_ebp;

loc_003DAED0: ;
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
    PUSH32(esp, 0x003DAEE7u); RECOMP_ABI_CALL(0x003DAE60u, sub_003DAE60); /* call 0x003DAE60 */

loc_003DAEE7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAEF0
 * Original: 0x003DAEF0 - 0x003DAF09 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAEF0(void)
{
    uint32_t ebp = g_ebp;

loc_003DAEF0: ;
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
    PUSH32(esp, 0x003DAF04u); RECOMP_ABI_CALL(0x003DAB30u, sub_003DAB30); /* call 0x003DAB30 */

loc_003DAF04: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAF10
 * Original: 0x003DAF10 - 0x003DAF2C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAF10(void)
{
    uint32_t ebp = g_ebp;

loc_003DAF10: ;
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
    PUSH32(esp, 0x003DAF27u); RECOMP_ABI_CALL(0x003DAEF0u, sub_003DAEF0); /* call 0x003DAEF0 */

loc_003DAF27: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAF30
 * Original: 0x003DAF30 - 0x003DAF83 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAF30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DAF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x20 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DAF76; /* jb: below (unsigned <) */

loc_003DAF42: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 0x7F;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x21 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DAF76; /* jb: below (unsigned <) */

loc_003DAF52: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 0x2028;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DAF76; /* jb: below (unsigned <) */

loc_003DAF65: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0xFFF9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -1) = LO8(eax);

loc_003DAF76: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAF90
 * Original: 0x003DAF90 - 0x003DAFAC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAF90(void)
{
    uint32_t ebp = g_ebp;

loc_003DAF90: ;
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
    PUSH32(esp, 0x003DAFA7u); RECOMP_ABI_CALL(0x003DAF30u, sub_003DAF30); /* call 0x003DAF30 */

loc_003DAFA7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DAFB0
 * Original: 0x003DAFB0 - 0x003DB0B9 (265 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAFB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003DAFB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax--;
    MEM32(ebp + -8) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xB));
    eax = eax - 0xB;
    if ((!_cf && eax != 0)) goto loc_003DB0AA; /* ja: above (unsigned >) */

loc_003DAFCC: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0x4DAB7C);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003DAFD8u) goto loc_003DAFD8;
    if (_jt == 0x003DAFEBu) goto loc_003DAFEB;
    if (_jt == 0x003DAFFEu) goto loc_003DAFFE;
    if (_jt == 0x003DB011u) goto loc_003DB011;
    if (_jt == 0x003DB024u) goto loc_003DB024;
    if (_jt == 0x003DB03Au) goto loc_003DB03A;
    if (_jt == 0x003DB04Au) goto loc_003DB04A;
    if (_jt == 0x003DB05Au) goto loc_003DB05A;
    if (_jt == 0x003DB06Au) goto loc_003DB06A;
    if (_jt == 0x003DB07Au) goto loc_003DB07A;
    if (_jt == 0x003DB08Au) goto loc_003DB08A;
    if (_jt == 0x003DB09Au) goto loc_003DB09A;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003DAFD8: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DAFE3u); RECOMP_ABI_CALL(0x003DADE0u, sub_003DADE0); /* call 0x003DADE0 */

loc_003DAFE3: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DAFEB: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DAFF6u); RECOMP_ABI_CALL(0x003DAE60u, sub_003DAE60); /* call 0x003DAE60 */

loc_003DAFF6: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DAFFE: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB009u); RECOMP_ABI_CALL(0x003DAEF0u, sub_003DAEF0); /* call 0x003DAEF0 */

loc_003DB009: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB011: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB01Cu); RECOMP_ABI_CALL(0x003DAF30u, sub_003DAF30); /* call 0x003DAF30 */

loc_003DB01C: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB024: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB03A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB045u); RECOMP_ABI_CALL(0x003DB1D0u, sub_003DB1D0); /* call 0x003DB1D0 */

loc_003DB045: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB04A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB055u); RECOMP_ABI_CALL(0x003DB240u, sub_003DB240); /* call 0x003DB240 */

loc_003DB055: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB05A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB065u); RECOMP_ABI_CALL(0x003DB290u, sub_003DB290); /* call 0x003DB290 */

loc_003DB065: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB06A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB075u); RECOMP_ABI_CALL(0x003DB340u, sub_003DB340); /* call 0x003DB340 */

loc_003DB075: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB07A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB085u); RECOMP_ABI_CALL(0x003DB3C0u, sub_003DB3C0); /* call 0x003DB3C0 */

loc_003DB085: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB08A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB095u); RECOMP_ABI_CALL(0x003DB430u, sub_003DB430); /* call 0x003DB430 */

loc_003DB095: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB09A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB0A5u); RECOMP_ABI_CALL(0x003DB480u, sub_003DB480); /* call 0x003DB480 */

loc_003DB0A5: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DB0B1;

loc_003DB0AA: ;
    MEM32(ebp + -4) = 0;

loc_003DB0B1: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB0C0
 * Original: 0x003DB0C0 - 0x003DB135 (117 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB0C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003DB0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 1;
    eax = 0x4DABAC;
    MEM32(ebp + -12) = eax;

loc_003DB0D9: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003DB126; /* je: equal / zero */

loc_003DB0E1: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003DB110; /* jne: not equal / not zero */

loc_003DB0F1: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB103u); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_003DB103: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003DB110; /* jne: not equal / not zero */

loc_003DB108: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_003DB12D;

loc_003DB110: ;
    goto loc_003DB112;

loc_003DB112: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -12);
    eax = eax + 6;
    MEM32(ebp + -12) = eax;
    goto loc_003DB0D9;

loc_003DB126: ;
    MEM32(ebp + -4) = 0;

loc_003DB12D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB140
 * Original: 0x003DB140 - 0x003DB166 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB140(void)
{
    uint32_t ebp = g_ebp;

loc_003DB140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB161u); RECOMP_ABI_CALL(0x003DAFB0u, sub_003DAFB0); /* call 0x003DAFB0 */

loc_003DB161: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB170
 * Original: 0x003DB170 - 0x003DB18C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB170(void)
{
    uint32_t ebp = g_ebp;

loc_003DB170: ;
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
    PUSH32(esp, 0x003DB187u); RECOMP_ABI_CALL(0x003DB0C0u, sub_003DB0C0); /* call 0x003DB0C0 */

loc_003DB187: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB190
 * Original: 0x003DB190 - 0x003DB1A9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB190(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB1B0
 * Original: 0x003DB1B0 - 0x003DB1CC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB1B0(void)
{
    uint32_t ebp = g_ebp;

loc_003DB1B0: ;
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
    PUSH32(esp, 0x003DB1C7u); RECOMP_ABI_CALL(0x003DB190u, sub_003DB190); /* call 0x003DB190 */

loc_003DB1C7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB1D0
 * Original: 0x003DB1D0 - 0x003DB211 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB1D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB1D0: ;
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
    PUSH32(esp, 0x003DB1E4u); RECOMP_ABI_CALL(0x003DB3C0u, sub_003DB3C0); /* call 0x003DB3C0 */

loc_003DB1E4: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003DB204; /* jne: not equal / not zero */

loc_003DB1F0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB1FBu); RECOMP_ABI_CALL(0x003DB290u, sub_003DB290); /* call 0x003DB290 */

loc_003DB1FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003DB204: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB220
 * Original: 0x003DB220 - 0x003DB23C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB220(void)
{
    uint32_t ebp = g_ebp;

loc_003DB220: ;
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
    PUSH32(esp, 0x003DB237u); RECOMP_ABI_CALL(0x003DB1D0u, sub_003DB1D0); /* call 0x003DB1D0 */

loc_003DB237: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB240
 * Original: 0x003DB240 - 0x003DB264 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB240(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB240: ;
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
    PUSH32(esp, 0x003DB254u); RECOMP_ABI_CALL(0x003DB850u, sub_003DB850); /* call 0x003DB850 */

loc_003DB254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB270
 * Original: 0x003DB270 - 0x003DB28C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB270(void)
{
    uint32_t ebp = g_ebp;

loc_003DB270: ;
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
    PUSH32(esp, 0x003DB287u); RECOMP_ABI_CALL(0x003DB240u, sub_003DB240); /* call 0x003DB240 */

loc_003DB287: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB290
 * Original: 0x003DB290 - 0x003DB31F (143 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB290(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DB2B9; /* jae: above or equal (unsigned >=) */

loc_003DB2A0: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    SET_LO8(eax, (CMP_AE(_fa, _fb)) ? 1 : 0); /* setae */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    goto loc_003DB317;

loc_003DB2B9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2028) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x2028 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DB2E0; /* jb: below (unsigned <) */

loc_003DB2C2: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0x202A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7D6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DB2E0; /* jb: below (unsigned <) */

loc_003DB2D1: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0xE000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF9 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DB2E9; /* jae: above or equal (unsigned >=) */

loc_003DB2E0: ;
    MEM32(ebp + -4) = 1;
    goto loc_003DB317;

loc_003DB2E9: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0xFFFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100003) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100003 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DB307; /* ja: above (unsigned >) */

loc_003DB2F8: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFFE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DB310; /* jne: not equal / not zero */

loc_003DB307: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DB317;

loc_003DB310: ;
    MEM32(ebp + -4) = 1;

loc_003DB317: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB320
 * Original: 0x003DB320 - 0x003DB33C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB320(void)
{
    uint32_t ebp = g_ebp;

loc_003DB320: ;
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
    PUSH32(esp, 0x003DB337u); RECOMP_ABI_CALL(0x003DB290u, sub_003DB290); /* call 0x003DB290 */

loc_003DB337: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB340
 * Original: 0x003DB340 - 0x003DB396 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003DB340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x20000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DB387; /* jae: above or equal (unsigned >=) */

loc_003DB350: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = ZX8(MEM8(eax + 0x4DABF5));
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 0xFF;
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = ZX8(MEM8(eax + 0x4DABF5));
    ecx = MEM32(ebp + 8);
    ecx = ecx & 7;
    eax = RECOMP_SAR(eax, LO8(ecx), 32, NULL);
    eax = eax & 1;
    MEM32(ebp + -4) = eax;
    goto loc_003DB38E;

loc_003DB387: ;
    MEM32(ebp + -4) = 0;

loc_003DB38E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB3A0
 * Original: 0x003DB3A0 - 0x003DB3BC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB3A0(void)
{
    uint32_t ebp = g_ebp;

loc_003DB3A0: ;
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
    PUSH32(esp, 0x003DB3B7u); RECOMP_ABI_CALL(0x003DB340u, sub_003DB340); /* call 0x003DB340 */

loc_003DB3B7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB3C0
 * Original: 0x003DB3C0 - 0x003DB402 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB3C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003DB3F5; /* je: equal / zero */

loc_003DB3D4: ;
    eax = MEM32(ebp + 8);
    ecx = 0x4DBB96;
    MEM32(esp) = ecx;
    eax = ZX16(LO16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB3ECu); RECOMP_ABI_CALL(0x0042B4E0u, sub_0042B4E0); /* call 0x0042B4E0 */

loc_003DB3EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003DB3F5: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB410
 * Original: 0x003DB410 - 0x003DB42C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB410(void)
{
    uint32_t ebp = g_ebp;

loc_003DB410: ;
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
    PUSH32(esp, 0x003DB427u); RECOMP_ABI_CALL(0x003DB3C0u, sub_003DB3C0); /* call 0x003DB3C0 */

loc_003DB427: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB430
 * Original: 0x003DB430 - 0x003DB454 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB430(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB430: ;
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
    PUSH32(esp, 0x003DB444u); RECOMP_ABI_CALL(0x003DB650u, sub_003DB650); /* call 0x003DB650 */

loc_003DB444: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB460
 * Original: 0x003DB460 - 0x003DB47C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB460(void)
{
    uint32_t ebp = g_ebp;

loc_003DB460: ;
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
    PUSH32(esp, 0x003DB477u); RECOMP_ABI_CALL(0x003DB430u, sub_003DB430); /* call 0x003DB430 */

loc_003DB477: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB480
 * Original: 0x003DB480 - 0x003DB4B6 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = ecx - 0x30;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DB4A9; /* jb: below (unsigned <) */

loc_003DB497: ;
    eax = MEM32(ebp + 8);
    eax = eax | 0x20;
    eax = eax - 0x61;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -1) = LO8(eax);

loc_003DB4A9: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB4C0
 * Original: 0x003DB4C0 - 0x003DB4DC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB4C0(void)
{
    uint32_t ebp = g_ebp;

loc_003DB4C0: ;
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
    PUSH32(esp, 0x003DB4D7u); RECOMP_ABI_CALL(0x003DB480u, sub_003DB480); /* call 0x003DB480 */

loc_003DB4D7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB4E0
 * Original: 0x003DB4E0 - 0x003DB539 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB4E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB4E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003DB4F1; /* jne: not equal / not zero */

loc_003DB4EF: ;
    goto loc_003DB50A;

loc_003DB4F1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB4FCu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_003DB4FC: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003DB52C; /* jne: not equal / not zero */

loc_003DB508: ;
    goto loc_003DB51A;

loc_003DB50A: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 0x30;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_003DB52C; /* jb: below (unsigned <) */

loc_003DB51A: ;
    eax = MEM32(ebp + 8);
    eax = eax | 0x20;
    eax = eax - 0x61;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -1) = LO8(eax);

loc_003DB52C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB540
 * Original: 0x003DB540 - 0x003DB55C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB540(void)
{
    uint32_t ebp = g_ebp;

loc_003DB540: ;
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
    PUSH32(esp, 0x003DB557u); RECOMP_ABI_CALL(0x003DB4E0u, sub_003DB4E0); /* call 0x003DB4E0 */

loc_003DB557: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB560
 * Original: 0x003DB560 - 0x003DB56E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB560(void)
{
    uint32_t ebp = g_ebp;

loc_003DB560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax & 0x7F;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB570
 * Original: 0x003DB570 - 0x003DB5B7 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB570(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003DB581; /* jne: not equal / not zero */

loc_003DB57F: ;
    goto loc_003DB593;

loc_003DB581: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB58Cu); RECOMP_ABI_CALL(0x003DADA0u, sub_003DADA0); /* call 0x003DADA0 */

loc_003DB58C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DB59E; /* jne: not equal / not zero */

loc_003DB591: ;
    goto loc_003DB5A9;

loc_003DB593: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DB5A9; /* jae: above or equal (unsigned >=) */

loc_003DB59E: ;
    eax = MEM32(ebp + 8);
    eax = eax | 0x20;
    MEM32(ebp + -4) = eax;
    goto loc_003DB5AF;

loc_003DB5A9: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003DB5AF: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB5C0
 * Original: 0x003DB5C0 - 0x003DB5DC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB5C0(void)
{
    uint32_t ebp = g_ebp;

loc_003DB5C0: ;
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
    PUSH32(esp, 0x003DB5D7u); RECOMP_ABI_CALL(0x003DB570u, sub_003DB570); /* call 0x003DB570 */

loc_003DB5D7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB5E0
 * Original: 0x003DB5E0 - 0x003DB627 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB5E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003DB5F1; /* jne: not equal / not zero */

loc_003DB5EF: ;
    goto loc_003DB603;

loc_003DB5F1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB5FCu); RECOMP_ABI_CALL(0x003DAC50u, sub_003DAC50); /* call 0x003DAC50 */

loc_003DB5FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DB60E; /* jne: not equal / not zero */

loc_003DB601: ;
    goto loc_003DB619;

loc_003DB603: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0x61;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DB619; /* jae: above or equal (unsigned >=) */

loc_003DB60E: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0x5F;
    MEM32(ebp + -4) = eax;
    goto loc_003DB61F;

loc_003DB619: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003DB61F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB630
 * Original: 0x003DB630 - 0x003DB64C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB630(void)
{
    uint32_t ebp = g_ebp;

loc_003DB630: ;
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
    PUSH32(esp, 0x003DB647u); RECOMP_ABI_CALL(0x003DB5E0u, sub_003DB5E0); /* call 0x003DB5E0 */

loc_003DB647: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB650
 * Original: 0x003DB650 - 0x003DB673 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB650(void)
{
    uint32_t ebp = g_ebp;

loc_003DB650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB66Eu); RECOMP_ABI_CALL(0x003DB680u, sub_003DB680); /* call 0x003DB680 */

loc_003DB66E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB680
 * Original: 0x003DB680 - 0x003DB847 (455 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB680(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003DB680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x20000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DB6A7; /* jb: below (unsigned <) */

loc_003DB69C: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    goto loc_003DB83E;

loc_003DB6A7: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFF;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    ecx = 3;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    ecx = 3;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -20) = edx;
    eax = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax + 0x4DC120));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = eax + MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + 0x4DC120));
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx * 4 + 0x4DBBC4));
    _shift_result = RECOMP_SHIFT(eax, 0xB, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    ecx = 6;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -24) = edx;
    eax = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax + 0x4DCB8A));
    eax = eax + MEM32(ebp + -24);
    eax = MEM32(eax * 4 + 0x4DBBD0);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    eax = eax & 0xFF;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -40);
    eax = RECOMP_SAR(eax, 8, 32, NULL);
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DB760; /* jae: above or equal (unsigned >=) */

loc_003DB744: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -44);
    esi = MEM32(ebp + -28);
    esi = esi ^ MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    edx = edx - esi;
    ecx = ecx & edx;
    eax = eax + ecx;
    MEM32(ebp + -8) = eax;
    goto loc_003DB83E;

loc_003DB760: ;
    eax = MEM32(ebp + -44);
    eax = eax & 0xFF;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -32) = eax;

loc_003DB774: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DB838; /* je: equal / zero */

loc_003DB77E: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = ZX8(MEM8(eax * 2 + 0x4DBF90));
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DB807; /* jne: not equal / not zero */

loc_003DB79B: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = ZX8(MEM8(eax * 2 + 0x4DBF91));
    eax = MEM32(eax * 4 + 0x4DBBD0);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    eax = eax & 0xFF;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -40);
    eax = RECOMP_SAR(eax, 8, 32, NULL);
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DB7EA; /* jae: above or equal (unsigned >=) */

loc_003DB7D1: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -44);
    esi = MEM32(ebp + -28);
    esi = esi ^ MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    edx = edx - esi;
    ecx = ecx & edx;
    eax = eax + ecx;
    MEM32(ebp + -8) = eax;
    goto loc_003DB83E;

loc_003DB7EA: ;
    eax = MEM32(ebp + -48);
    esi = MEM32(ebp + 0xC);
    ecx = 1;
    edx = 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = edx; /* cmovne */
    eax = eax + ecx;
    MEM32(ebp + -8) = eax;
    goto loc_003DB83E;

loc_003DB807: ;
    eax = MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DB819; /* jbe: below or equal (unsigned <=) */

loc_003DB80F: ;
    eax = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -36) = eax;
    goto loc_003DB831;

loc_003DB819: ;
    eax = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(ebp + -32);
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + -36);
    eax = eax - ecx;
    MEM32(ebp + -36) = eax;

loc_003DB831: ;
    goto loc_003DB833;

loc_003DB833: ;
    goto loc_003DB774;

loc_003DB838: ;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -8) = eax;

loc_003DB83E: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB850
 * Original: 0x003DB850 - 0x003DB871 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB850(void)
{
    uint32_t ebp = g_ebp;

loc_003DB850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB86Cu); RECOMP_ABI_CALL(0x003DB680u, sub_003DB680); /* call 0x003DB680 */

loc_003DB86C: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB880
 * Original: 0x003DB880 - 0x003DB89C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB880(void)
{
    uint32_t ebp = g_ebp;

loc_003DB880: ;
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
    PUSH32(esp, 0x003DB897u); RECOMP_ABI_CALL(0x003DB850u, sub_003DB850); /* call 0x003DB850 */

loc_003DB897: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB8A0
 * Original: 0x003DB8A0 - 0x003DB8BC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB8A0(void)
{
    uint32_t ebp = g_ebp;

loc_003DB8A0: ;
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
    PUSH32(esp, 0x003DB8B7u); RECOMP_ABI_CALL(0x003DB650u, sub_003DB650); /* call 0x003DB650 */

loc_003DB8B7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB8C0
 * Original: 0x003DB8C0 - 0x003DB954 (148 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB8C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB8C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -8) = 0;

loc_003DB8DA: ;
    ecx = MEM32(ebp + 0xC);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003DB919; /* je: equal / zero */

loc_003DB8EF: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003DB919; /* je: equal / zero */

loc_003DB8FF: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB90Du); RECOMP_ABI_CALL(0x003DBA60u, sub_003DBA60); /* call 0x003DBA60 */

loc_003DB90D: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM8(ebp + -9) = LO8(eax);

loc_003DB919: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003DB922; /* jne: not equal / not zero */

loc_003DB920: ;
    goto loc_003DB938;

loc_003DB922: ;
    goto loc_003DB924;

loc_003DB924: ;
    eax = MEM32(ebp + -8);
    eax = eax + MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_003DB8DA;

loc_003DB938: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DB946; /* jge: greater or equal (signed >=) */

loc_003DB93E: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -16) = eax;
    goto loc_003DB94C;

loc_003DB946: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;

loc_003DB94C: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB960
 * Original: 0x003DB960 - 0x003DB9C0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0x458811;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB97Eu); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_003DB97E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DB98D; /* jne: not equal / not zero */

loc_003DB983: ;
    eax = 1;
    MEM32(ebp + -4) = eax;
    goto loc_003DB9B8;

loc_003DB98D: ;
    ecx = MEM32(ebp + 8);
    eax = 0x447559;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB9A2u); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_003DB9A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DB9B1; /* jne: not equal / not zero */

loc_003DB9A7: ;
    eax = 2;
    MEM32(ebp + -4) = eax;
    goto loc_003DB9B8;

loc_003DB9B1: ;
    MEM32(ebp + -4) = 0;

loc_003DB9B8: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DB9C0
 * Original: 0x003DB9C0 - 0x003DBA0E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB9C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DB9E6; /* jne: not equal / not zero */

loc_003DB9D6: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB9E1u); RECOMP_ABI_CALL(0x003DB850u, sub_003DB850); /* call 0x003DB850 */

loc_003DB9E1: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DBA06;

loc_003DB9E6: ;
    eax = 2;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DBA00; /* jne: not equal / not zero */

loc_003DB9F0: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DB9FBu); RECOMP_ABI_CALL(0x003DB650u, sub_003DB650); /* call 0x003DB650 */

loc_003DB9FB: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DBA06;

loc_003DBA00: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003DBA06: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBA10
 * Original: 0x003DBA10 - 0x003DBA2C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA10(void)
{
    uint32_t ebp = g_ebp;

loc_003DBA10: ;
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
    PUSH32(esp, 0x003DBA27u); RECOMP_ABI_CALL(0x003DB960u, sub_003DB960); /* call 0x003DB960 */

loc_003DBA27: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBA30
 * Original: 0x003DBA30 - 0x003DBA56 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA30(void)
{
    uint32_t ebp = g_ebp;

loc_003DBA30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBA51u); RECOMP_ABI_CALL(0x003DB9C0u, sub_003DB9C0); /* call 0x003DB9C0 */

loc_003DBA51: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBA60
 * Original: 0x003DBA60 - 0x003DBBC6 (358 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003DBA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DBAAD; /* jae: above or equal (unsigned >=) */

loc_003DBA75: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax + 1;
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DBA8E; /* jl: less (signed <) */

loc_003DBA84: ;
    eax = 1;
    MEM32(ebp + -8) = eax;
    goto loc_003DBAA2;

loc_003DBA8E: ;
    edx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    ecx = 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -8) = eax;

loc_003DBAA2: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_003DBBBE;

loc_003DBAAD: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax & 0xFFFEFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DBB53; /* jae: above or equal (unsigned >=) */

loc_003DBAC1: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = RECOMP_SAR(eax, 8, 32, NULL);
    eax = ZX8(MEM8(eax + 0x4DCD8A));
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ZX16(MEM16(ebp + 8));
    ecx = ecx & 0xFF;
    ecx = RECOMP_SAR(ecx, 3, 32, NULL);
    eax = eax + ecx;
    eax = ZX8(MEM8(eax + 0x4DCD8A));
    ecx = ZX16(MEM16(ebp + 8));
    ecx = ecx & 7;
    eax = RECOMP_SAR(eax, LO8(ecx), 32, NULL);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBB07; /* je: equal / zero */

loc_003DBAFB: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DBBBE;

loc_003DBB07: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = RECOMP_SAR(eax, 8, 32, NULL);
    eax = ZX8(MEM8(eax + 0x4DD86A));
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ZX16(MEM16(ebp + 8));
    ecx = ecx & 0xFF;
    ecx = RECOMP_SAR(ecx, 3, 32, NULL);
    eax = eax + ecx;
    eax = ZX8(MEM8(eax + 0x4DD86A));
    ecx = ZX16(MEM16(ebp + 8));
    ecx = ecx & 7;
    eax = RECOMP_SAR(eax, LO8(ecx), 32, NULL);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBB4A; /* je: equal / zero */

loc_003DBB41: ;
    MEM32(ebp + -4) = 2;
    goto loc_003DBBBE;

loc_003DBB4A: ;
    MEM32(ebp + -4) = 1;
    goto loc_003DBBBE;

loc_003DBB53: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax & 0xFFFE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DBB6C; /* jne: not equal / not zero */

loc_003DBB63: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DBBBE;

loc_003DBB6C: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax - 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DBB85; /* jae: above or equal (unsigned >=) */

loc_003DBB7C: ;
    MEM32(ebp + -4) = 2;
    goto loc_003DBBBE;

loc_003DBB85: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBBAE; /* je: equal / zero */

loc_003DBB90: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax - 0xE0020;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DBBAE; /* jb: below (unsigned <) */

loc_003DBB9E: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax - 0xE0100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DBBB7; /* jae: above or equal (unsigned >=) */

loc_003DBBAE: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DBBBE;

loc_003DBBB7: ;
    MEM32(ebp + -4) = 1;

loc_003DBBBE: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBBD0
 * Original: 0x003DBBD0 - 0x003DBBFD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBBD0(void)
{
    uint32_t ebp = g_ebp;

loc_003DBBD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 0x13;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax + 0x13;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBBF8u); RECOMP_ABI_CALL(0x003E55D0u, sub_003E55D0); /* call 0x003E55D0 */

loc_003DBBF8: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBC00
 * Original: 0x003DBC00 - 0x003DBC2D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBC00(void)
{
    uint32_t ebp = g_ebp;

loc_003DBC00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBC17u); RECOMP_ABI_CALL(0x00438CA0u, sub_00438CA0); /* call 0x00438CA0 */

loc_003DBC17: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBC25u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003DBC25: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBC30
 * Original: 0x003DBC30 - 0x003DBC3E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBC30(void)
{
    uint32_t ebp = g_ebp;

loc_003DBC30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBC40
 * Original: 0x003DBC40 - 0x003DBD23 (227 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBC40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xA8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -152;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBC61u); RECOMP_ABI_CALL(0x00415EB0u, sub_00415EB0); /* call 0x00415EB0 */

loc_003DBC61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DBC72; /* jge: greater or equal (signed >=) */

loc_003DBC66: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DBD18;

loc_003DBC72: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBC85u); RECOMP_ABI_CALL(0x003DD330u, sub_003DD330); /* call 0x003DD330 */

loc_003DBC85: ;
    eax = eax & 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBCA3; /* je: equal / zero */

loc_003DBC8F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBC94u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DBC94: ;
    MEM32(eax) = 9;
    MEM32(ebp + -4) = 0;
    goto loc_003DBD18;

loc_003DBCA3: ;
    eax = MEM32(ebp + -136);
    eax = eax & 0xF000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBCC9; /* je: equal / zero */

loc_003DBCB5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBCBAu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DBCBA: ;
    MEM32(eax) = 0x14;
    MEM32(ebp + -4) = 0;
    goto loc_003DBD18;

loc_003DBCC9: ;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x818;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBCDDu); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_003DBCDD: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DBCEE; /* jne: not equal / not zero */

loc_003DBCE5: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DBD18;

loc_003DBCEE: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBD09u); RECOMP_ABI_CALL(0x003DD330u, sub_003DD330); /* call 0x003DD330 */

loc_003DBD09: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_003DBD18: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0xA8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBD30
 * Original: 0x003DBD30 - 0x003DBDBB (139 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBD30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBD30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x90000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBD4Cu); RECOMP_ABI_CALL(0x003DD880u, sub_003DD880); /* call 0x003DD880 */

loc_003DBD4C: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DBD5D; /* jge: greater or equal (signed >=) */

loc_003DBD54: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DBDB3;

loc_003DBD5D: ;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x818;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBD71u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_003DBD71: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DBDA4; /* jne: not equal / not zero */

loc_003DBD79: ;
    ecx = MEM32(ebp + -8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBD9Bu); RECOMP_ABI_CALL(0x003DBDC0u, sub_003DBDC0); /* call 0x003DBDC0 */

loc_003DBD9B: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DBDB3;

loc_003DBDA4: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;

loc_003DBDB3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBDC0
 * Original: 0x003DBDC0 - 0x003DBE3F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBDC0(void)
{
    uint32_t ebp = g_ebp;

loc_003DBDC0: ;
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
    PUSH32(esp, 0x003DBE38u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DBE38: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBE40
 * Original: 0x003DBE40 - 0x003DBF1F (223 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBE40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DBEE1; /* jl: less (signed <) */

loc_003DBE5D: ;
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = esi + 0x18;
    edi = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -24) = eax;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x800;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x3D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBE9Eu); RECOMP_ABI_CALL(0x003DBF20u, sub_003DBF20); /* call 0x003DBF20 */

loc_003DBE9E: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003DBECE; /* jg: greater (signed >) */

loc_003DBEA7: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DBEC5; /* jge: greater or equal (signed >=) */

loc_003DBEAD: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBEC5; /* je: equal / zero */

loc_003DBEB3: ;
    eax = 0; /* xor self */
    eax = eax - MEM32(ebp + -20);
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBEC0u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DBEC0: ;
    ecx = MEM32(ebp + -28);
    MEM32(eax) = ecx;

loc_003DBEC5: ;
    MEM32(ebp + -12) = 0;
    goto loc_003DBF15;

loc_003DBECE: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = 0;

loc_003DBEE1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = eax + ecx + 0x18;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = ZX16(MEM16(eax + 0x10));
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    ecx = ecx + edx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 8)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;

loc_003DBF15: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBF20
 * Original: 0x003DBF20 - 0x003DBFBB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBF20(void)
{
    uint32_t ebp = g_ebp;

loc_003DBF20: ;
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
    PUSH32(esp, 0x003DBFB3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DBFB3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DBFC0
 * Original: 0x003DBFC0 - 0x003DC086 (198 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBFC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBFC0: ;
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
    PUSH32(esp, 0x003DBFD4u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DBFD4: ;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBFE7u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DBFE7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBFECu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DBFEC: ;
    MEM32(eax) = 0;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DBFFDu); RECOMP_ABI_CALL(0x003DBE40u, sub_003DBE40); /* call 0x003DBE40 */

loc_003DBFFD: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC005u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DC005: ;
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC025; /* je: equal / zero */

loc_003DC00F: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC01Du); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DC01D: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    goto loc_003DC07E;

loc_003DC025: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC030u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DC030: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC05A; /* je: equal / zero */

loc_003DC03B: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 0x10));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC058u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003DC058: ;
    goto loc_003DC061;

loc_003DC05A: ;
    MEM32(ebp + 0xC) = 0;

loc_003DC061: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC06Fu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DC06F: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_003DC07E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC090
 * Original: 0x003DC090 - 0x003DC103 (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC090(void)
{
    uint32_t ebp = g_ebp;

loc_003DC090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x14;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC0A8u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DC0A8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC0CCu); RECOMP_ABI_CALL(0x0043AFF0u, sub_0043AFF0); /* call 0x0043AFF0 */

loc_003DC0CC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    eax = MEM32(ebp + 8);
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC0FEu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DC0FE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC110
 * Original: 0x003DC110 - 0x003DC2DC (460 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC110(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003DC110: ;
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
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC12Du); RECOMP_ABI_CALL(0x003DBD30u, sub_003DBD30); /* call 0x003DBD30 */

loc_003DC12D: ;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -16) = 0;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC14Au); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DC14A: ;
    eax = MEM32(eax);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC161; /* jne: not equal / not zero */

loc_003DC155: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DC2D4;

loc_003DC161: ;
    goto loc_003DC163;

loc_003DC163: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC168u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DC168: ;
    MEM32(eax) = 0;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC179u); RECOMP_ABI_CALL(0x003DBE40u, sub_003DBE40); /* call 0x003DBE40 */

loc_003DC179: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC239; /* je: equal / zero */

loc_003DC185: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC19D; /* je: equal / zero */

loc_003DC18B: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003DC196u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003DC196: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC19D; /* jne: not equal / not zero */

loc_003DC19B: ;
    goto loc_003DC163;

loc_003DC19D: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DC1E1; /* jb: below (unsigned <) */

loc_003DC1A5: ;
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x3FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DC1BB; /* jbe: below or equal (unsigned <=) */

loc_003DC1B9: ;
    goto loc_003DC239;

loc_003DC1BB: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC1D0u); RECOMP_ABI_CALL(0x003E9E40u, sub_003E9E40); /* call 0x003E9E40 */

loc_003DC1D0: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC1DB; /* jne: not equal / not zero */

loc_003DC1D9: ;
    goto loc_003DC239;

loc_003DC1DB: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;

loc_003DC1E1: ;
    eax = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax + 0x10));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC1F0u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003DC1F0: ;
    edx = eax;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -24);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC209; /* jne: not equal / not zero */

loc_003DC207: ;
    goto loc_003DC239;

loc_003DC209: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -24);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -24) = edx;
    edx = MEM32(eax + ecx * 4);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax + 0x10));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC234u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003DC234: ;
    goto loc_003DC163;

loc_003DC239: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC244u); RECOMP_ABI_CALL(0x003DBC00u, sub_003DBC00); /* call 0x003DBC00 */

loc_003DC244: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC249u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DC249: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC28F; /* je: equal / zero */

loc_003DC24E: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC27B; /* je: equal / zero */

loc_003DC254: ;
    goto loc_003DC256;

loc_003DC256: ;
    eax = MEM32(ebp + -24);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + -24) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DC279; /* jbe: below or equal (unsigned <=) */

loc_003DC266: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -24);
    eax = MEM32(eax + ecx * 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC277u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003DC277: ;
    goto loc_003DC256;

loc_003DC279: ;
    goto loc_003DC27B;

loc_003DC27B: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC286u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003DC286: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DC2D4;

loc_003DC28F: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -36) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC29Au); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DC29A: ;
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC2C6; /* je: equal / zero */

loc_003DC2A5: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC2C6u); RECOMP_ABI_CALL(0x00427130u, sub_00427130); /* call 0x00427130 */

loc_003DC2C6: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -4) = eax;

loc_003DC2D4: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC2E0
 * Original: 0x003DC2E0 - 0x003DC352 (114 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC2E0(void)
{
    uint32_t ebp = g_ebp;

loc_003DC2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x14;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC2FCu); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DC2FC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0xC);
    esi = edx;
    esi = RECOMP_SAR(esi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC320u); RECOMP_ABI_CALL(0x0043AFF0u, sub_0043AFF0); /* call 0x0043AFF0 */

loc_003DC320: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(ebp + 8);
    eax = eax + 0x14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC34Cu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DC34C: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC360
 * Original: 0x003DC360 - 0x003DC36D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC360(void)
{
    uint32_t ebp = g_ebp;

loc_003DC360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC370
 * Original: 0x003DC370 - 0x003DC39D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC370(void)
{
    uint32_t ebp = g_ebp;

loc_003DC370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 0x13;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax + 0x13;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC398u); RECOMP_ABI_CALL(0x0042B0F0u, sub_0042B0F0); /* call 0x0042B0F0 */

loc_003DC398: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC3A0
 * Original: 0x003DC3A0 - 0x003DC450 (176 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC3A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC3A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC3ABu); RECOMP_ABI_CALL(0x003DC450u, sub_003DC450); /* call 0x003DC450 */

loc_003DC3AB: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC44B; /* je: equal / zero */

loc_003DC3C3: ;
    eax = MEM32(0xDFC000);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 1;

loc_003DC3D2: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DC449; /* ja: above (unsigned >) */

loc_003DC3DA: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + ecx * 4);
    eax = eax - 0;
    MEM32(ebp + -20) = eax;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC40Bu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003DC40B: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -8);
    ecx = ecx + MEM32(eax + 8);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ebp + -8);
    eax = eax - MEM32(edx + 8);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC436u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003DC436: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    goto loc_003DC3D2;

loc_003DC449: ;
    goto loc_003DC44B;

loc_003DC44B: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC450
 * Original: 0x003DC450 - 0x003DC460 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC450(void)
{
    uint32_t ebp = g_ebp;

loc_003DC450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC45Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_003DC45B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC460
 * Original: 0x003DC460 - 0x003DC46B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC460(void)
{
    uint32_t ebp = g_ebp;

loc_003DC460: ;
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
 * sub_003DC470
 * Original: 0x003DC470 - 0x003DC4C2 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC470(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xDFBE3C);
    MEM32(ebp + -4) = eax;
    MEM32(0xDFBE3C) = 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC4BB; /* je: equal / zero */

loc_003DC48E: ;
    goto loc_003DC490;

loc_003DC490: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC4B9; /* je: equal / zero */

loc_003DC498: ;
    eax = MEM32(ebp + -4);
    ecx = eax;
    ecx = ecx + 4;
    MEM32(ebp + -4) = ecx;
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC4B7u); RECOMP_ABI_CALL(0x003DC7D0u, sub_003DC7D0); /* call 0x003DC7D0 */

loc_003DC4B7: ;
    goto loc_003DC490;

loc_003DC4B9: ;
    goto loc_003DC4BB;

loc_003DC4BB: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC4D0
 * Original: 0x003DC4D0 - 0x003DC57E (174 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC4D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003DC4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x3D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC4ECu); RECOMP_ABI_CALL(0x004299F0u, sub_004299F0); /* call 0x004299F0 */

loc_003DC4EC: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003DC56F; /* je: equal / zero */

loc_003DC4FA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003DC56F; /* jne: not equal / not zero */

loc_003DC506: ;
    _fa = (uint32_t)(MEM32(0xDFBE3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBE3C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003DC56F; /* je: equal / zero */

loc_003DC50F: ;
    eax = MEM32(0xDFBE3C);
    MEM32(ebp + -12) = eax;

loc_003DC517: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003DC56D; /* je: equal / zero */

loc_003DC51F: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC53Au); RECOMP_ABI_CALL(0x0042A280u, sub_0042A280); /* call 0x0042A280 */

loc_003DC53A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003DC560; /* jne: not equal / not zero */

loc_003DC53F: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003DC560; /* jne: not equal / not zero */

loc_003DC550: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    eax = eax + MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003DC576;

loc_003DC560: ;
    goto loc_003DC562;

loc_003DC562: ;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    MEM32(ebp + -12) = eax;
    goto loc_003DC517;

loc_003DC56D: ;
    goto loc_003DC56F;

loc_003DC56F: ;
    MEM32(ebp + -4) = 0;

loc_003DC576: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC580
 * Original: 0x003DC580 - 0x003DC58B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC580(void)
{
    uint32_t ebp = g_ebp;

loc_003DC580: ;
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
 * sub_003DC590
 * Original: 0x003DC590 - 0x003DC713 (387 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003DC590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    _fa = (uint32_t)(MEM32(0xDFBE3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBE3C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC628; /* je: equal / zero */

loc_003DC5AF: ;
    eax = MEM32(0xDFBE3C);
    MEM32(ebp + -12) = eax;

loc_003DC5B7: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC626; /* je: equal / zero */

loc_003DC5BF: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC5DDu); RECOMP_ABI_CALL(0x0042A280u, sub_0042A280); /* call 0x0042A280 */

loc_003DC5DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC610; /* jne: not equal / not zero */

loc_003DC5E2: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC604u); RECOMP_ABI_CALL(0x003DC7D0u, sub_003DC7D0); /* call 0x003DC7D0 */

loc_003DC604: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DC70B;

loc_003DC610: ;
    goto loc_003DC612;

loc_003DC612: ;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003DC5B7;

loc_003DC626: ;
    goto loc_003DC628;

loc_003DC628: ;
    eax = MEM32(0xDFBE3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xDFBE40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xDFBE40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC660; /* jne: not equal / not zero */

loc_003DC635: ;
    ecx = MEM32(0xDFBE40);
    eax = MEM32(ebp + -8);
    eax = eax + 2;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC650u); RECOMP_ABI_CALL(0x003E9E40u, sub_003E9E40); /* call 0x003E9E40 */

loc_003DC650: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC65E; /* jne: not equal / not zero */

loc_003DC659: ;
    goto loc_003DC6F9;

loc_003DC65E: ;
    goto loc_003DC6AE;

loc_003DC660: ;
    eax = MEM32(ebp + -8);
    eax = eax + 2;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC671u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003DC671: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC67C; /* jne: not equal / not zero */

loc_003DC67A: ;
    goto loc_003DC6F9;

loc_003DC67C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC6A1; /* je: equal / zero */

loc_003DC682: ;
    edx = MEM32(ebp + -20);
    ecx = MEM32(0xDFBE3C);
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC6A1u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003DC6A1: ;
    eax = MEM32(0xDFBE40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC6AEu); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003DC6AE: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    MEM32(eax + ecx * 4 + 4) = 0;
    eax = MEM32(ebp + -20);
    MEM32(0xDFBE40) = eax;
    MEM32(0xDFBE3C) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC6F0; /* je: equal / zero */

loc_003DC6DB: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC6F0u); RECOMP_ABI_CALL(0x003DC7D0u, sub_003DC7D0); /* call 0x003DC7D0 */

loc_003DC6F0: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DC70B;

loc_003DC6F9: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC704u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003DC704: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_003DC70B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC720
 * Original: 0x003DC720 - 0x003DC78D (109 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC720(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003DC720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x3D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC73Cu); RECOMP_ABI_CALL(0x004299F0u, sub_004299F0); /* call 0x004299F0 */

loc_003DC73C: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003DC756; /* je: equal / zero */

loc_003DC74A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003DC766; /* jne: not equal / not zero */

loc_003DC756: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC761u); RECOMP_ABI_CALL(0x003DC9E0u, sub_003DC9E0); /* call 0x003DC9E0 */

loc_003DC761: ;
    MEM32(ebp + -4) = eax;
    goto loc_003DC785;

loc_003DC766: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC782u); RECOMP_ABI_CALL(0x003DC590u, sub_003DC590); /* call 0x003DC590 */

loc_003DC782: ;
    MEM32(ebp + -4) = eax;

loc_003DC785: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC790
 * Original: 0x003DC790 - 0x003DC7C2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC790(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(0xDFBFF6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC7AC; /* je: equal / zero */

loc_003DC7A5: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_003DC7BA;

loc_003DC7AC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC7B7u); RECOMP_ABI_CALL(0x003DC4D0u, sub_003DC4D0); /* call 0x003DC4D0 */

loc_003DC7B7: ;
    MEM32(ebp + -4) = eax;

loc_003DC7BA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC7D0
 * Original: 0x003DC7D0 - 0x003DC8AA (218 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC7D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003DC7D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;

loc_003DC7E4: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xDFBE48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xDFBE48) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003DC855; /* jae: above or equal (unsigned >=) */

loc_003DC7EF: ;
    eax = MEM32(0xDFBE44);
    ecx = MEM32(ebp + -8);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC81D; /* jne: not equal / not zero */

loc_003DC7FF: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(0xDFBE44);
    ecx = MEM32(ebp + -8);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC818u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003DC818: ;
    goto loc_003DC8A4;

loc_003DC81D: ;
    eax = MEM32(0xDFBE44);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC846; /* jne: not equal / not zero */

loc_003DC82B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC846; /* je: equal / zero */

loc_003DC831: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(0xDFBE44);
    ecx = MEM32(ebp + -8);
    MEM32(eax + ecx * 4) = edx;
    MEM32(ebp + 0xC) = 0;

loc_003DC846: ;
    goto loc_003DC848;

loc_003DC848: ;
    goto loc_003DC84A;

loc_003DC84A: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003DC7E4;

loc_003DC855: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC85D; /* jne: not equal / not zero */

loc_003DC85B: ;
    goto loc_003DC8A4;

loc_003DC85D: ;
    ecx = MEM32(0xDFBE44);
    eax = MEM32(0xDFBE48);
    eax = eax + 1;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC87Au); RECOMP_ABI_CALL(0x003E9E40u, sub_003E9E40); /* call 0x003E9E40 */

loc_003DC87A: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC885; /* jne: not equal / not zero */

loc_003DC883: ;
    goto loc_003DC8A4;

loc_003DC885: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    MEM32(0xDFBE44) = eax;
    ecx = MEM32(0xDFBE48);
    esi = ecx;
    esi = esi + 1;
    MEM32(0xDFBE48) = esi;
    MEM32(eax + ecx * 4) = edx;

loc_003DC8A4: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC8B0
 * Original: 0x003DC8B0 - 0x003DC9C7 (279 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC8B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC8B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC8F4; /* je: equal / zero */

loc_003DC8C5: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x3D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC8D8u); RECOMP_ABI_CALL(0x004299F0u, sub_004299F0); /* call 0x004299F0 */

loc_003DC8D8: ;
    ecx = MEM32(ebp + 8);
    eax = eax - ecx;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC8F4; /* je: equal / zero */

loc_003DC8E5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC90B; /* je: equal / zero */

loc_003DC8F4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC8F9u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DC8F9: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DC9BF;

loc_003DC90B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC92D; /* jne: not equal / not zero */

loc_003DC911: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC91Cu); RECOMP_ABI_CALL(0x003DC4D0u, sub_003DC4D0); /* call 0x003DC4D0 */

loc_003DC91C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC92D; /* je: equal / zero */

loc_003DC921: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DC9BF;

loc_003DC92D: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC938u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003DC938: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    eax = eax + MEM32(ebp + -16);
    eax = eax + 2;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC94Cu); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003DC94C: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC95E; /* jne: not equal / not zero */

loc_003DC955: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DC9BF;

loc_003DC95E: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC977u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003DC977: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);
    MEM8(eax + ecx) = 0x3D;
    edx = MEM32(ebp + -8);
    edx = edx + MEM32(ebp + -12);
    edx = edx + 1;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC9A3u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003DC9A3: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC9BCu); RECOMP_ABI_CALL(0x003DC590u, sub_003DC590); /* call 0x003DC590 */

loc_003DC9BC: ;
    MEM32(ebp + -4) = eax;

loc_003DC9BF: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DC9D0
 * Original: 0x003DC9D0 - 0x003DC9DB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC9D0(void)
{
    uint32_t ebp = g_ebp;

loc_003DC9D0: ;
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
 * sub_003DC9E0
 * Original: 0x003DC9E0 - 0x003DCAFA (282 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC9E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x3D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DC9FCu); RECOMP_ABI_CALL(0x004299F0u, sub_004299F0); /* call 0x004299F0 */

loc_003DC9FC: ;
    ecx = MEM32(ebp + 8);
    eax = eax - ecx;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCA19; /* je: equal / zero */

loc_003DCA0A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCA30; /* je: equal / zero */

loc_003DCA19: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCA1Eu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003DCA1E: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DCAF2;

loc_003DCA30: ;
    _fa = (uint32_t)(MEM32(0xDFBE3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBE3C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCAEB; /* je: equal / zero */

loc_003DCA3D: ;
    eax = MEM32(0xDFBE3C);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -16) = eax;

loc_003DCA4B: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCAD8; /* je: equal / zero */

loc_003DCA57: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCA72u); RECOMP_ABI_CALL(0x0042A280u, sub_0042A280); /* call 0x0042A280 */

loc_003DCA72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCAA1; /* jne: not equal / not zero */

loc_003DCA77: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCAA1; /* jne: not equal / not zero */

loc_003DCA88: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCA9Fu); RECOMP_ABI_CALL(0x003DC7D0u, sub_003DC7D0); /* call 0x003DC7D0 */

loc_003DCA9F: ;
    goto loc_003DCAC8;

loc_003DCAA1: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCABD; /* je: equal / zero */

loc_003DCAA9: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -16);
    edx = eax;
    edx = edx + 4;
    MEM32(ebp + -16) = edx;
    MEM32(eax) = ecx;
    goto loc_003DCAC6;

loc_003DCABD: ;
    eax = MEM32(ebp + -16);
    eax = eax + 4;
    MEM32(ebp + -16) = eax;

loc_003DCAC6: ;
    goto loc_003DCAC8;

loc_003DCAC8: ;
    goto loc_003DCACA;

loc_003DCACA: ;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    MEM32(ebp + -12) = eax;
    goto loc_003DCA4B;

loc_003DCAD8: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCAE9; /* je: equal / zero */

loc_003DCAE0: ;
    eax = MEM32(ebp + -16);
    MEM32(eax) = 0;

loc_003DCAE9: ;
    goto loc_003DCAEB;

loc_003DCAEB: ;
    MEM32(ebp + -4) = 0;

loc_003DCAF2: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCB00
 * Original: 0x003DCB00 - 0x003DCB13 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB00(void)
{
    uint32_t ebp = g_ebp;

loc_003DCB00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCB0Bu); RECOMP_ABI_CALL(0x003DCB20u, sub_003DCB20); /* call 0x003DCB20 */

loc_003DCB0B: ;
    eax = eax + 0x1C;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCB20
 * Original: 0x003DCB20 - 0x003DCB30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB20(void)
{
    uint32_t ebp = g_ebp;

loc_003DCB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCB2Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_003DCB2B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCB30
 * Original: 0x003DCB30 - 0x003DCB7C (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCB30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x84 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DCB4C; /* jb: below (unsigned <) */

loc_003DCB45: ;
    MEM32(ebp + 8) = 0;

loc_003DCB4C: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax * 2 + 0x4DE624));
    eax = 0x4DDEAA;
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCB77u); RECOMP_ABI_CALL(0x003E0FA0u, sub_003E0FA0); /* call 0x003E0FA0 */

loc_003DCB77: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCB80
 * Original: 0x003DCB80 - 0x003DCBAB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB80(void)
{
    uint32_t ebp = g_ebp;

loc_003DCB80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCB94u); RECOMP_ABI_CALL(0x003DCBB0u, sub_003DCBB0); /* call 0x003DCBB0 */

loc_003DCB94: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(eax + 0x60);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCBA6u); RECOMP_ABI_CALL(0x003DCB30u, sub_003DCB30); /* call 0x003DCB30 */

loc_003DCBA6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCBB0
 * Original: 0x003DCBB0 - 0x003DCBC0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCBB0(void)
{
    uint32_t ebp = g_ebp;

loc_003DCBB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCBBBu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_003DCBBB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCBC0
 * Original: 0x003DCBC0 - 0x003DCC0F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCBC0(void)
{
    uint32_t ebp = g_ebp;

loc_003DCBC0: ;
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
    MEM32(eax) = 0x5E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCBEBu); RECOMP_ABI_CALL(0x003DCC10u, sub_003DCC10); /* call 0x003DCC10 */

loc_003DCBEB: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x5D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCC0Du); RECOMP_ABI_CALL(0x003DCC10u, sub_003DCC10); /* call 0x003DCC10 */

loc_003DCC0D: ;
    goto loc_003DCBEB;

}


/**
 * sub_003DCC10
 * Original: 0x003DCC10 - 0x003DCC8F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCC10(void)
{
    uint32_t ebp = g_ebp;

loc_003DCC10: ;
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
    PUSH32(esp, 0x003DCC88u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DCC88: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCC90
 * Original: 0x003DCC90 - 0x003DCDE3 (339 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCC90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = esp;
    MEM32(eax) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCCA3u); RECOMP_ABI_CALL(0x00414090u, sub_00414090); /* call 0x00414090 */

loc_003DCCA3: ;
    eax = esp;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCCB0u); RECOMP_ABI_CALL(0x00413B20u, sub_00413B20); /* call 0x00413B20 */

loc_003DCCB0: ;
    eax = esp;
    MEM32(eax) = 0xDFBE4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCCBDu); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DCCBD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -24, xmm0); /* movaps */
    MEM32(ebp + -8) = 0;
    eax = esp;
    MEM32(ebp + -44) = eax;
    ecx = ebp + -24;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 6;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x86;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCD19u); RECOMP_ABI_CALL(0x003DCDF0u, sub_003DCDF0); /* call 0x003DCDF0 */

loc_003DCD19: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCD1Eu); RECOMP_ABI_CALL(0x003DCF30u, sub_003DCF30); /* call 0x003DCF30 */

loc_003DCD1E: ;
    ecx = MEM32(eax + 0x18);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 6;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x82;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCD4Eu); RECOMP_ABI_CALL(0x003DCEA0u, sub_003DCEA0); /* call 0x003DCEA0 */

loc_003DCD4E: ;
    MEM32(ebp + -32) = 0x20;
    eax = ebp + -32;
    eax = eax + 4;
    ecx = ebp + -32;
    ecx = ecx + 8;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = eax;

loc_003DCD67: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -40);
    MEM32(eax) = 0;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -36) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003DCD67; /* jne: not equal / not zero */

loc_003DCD7D: ;
    edx = 0; /* xor self */
    ecx = ebp + -32;
    eax = esp;
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
    PUSH32(esp, 0x003DCDC6u); RECOMP_ABI_CALL(0x003DCDF0u, sub_003DCDF0); /* call 0x003DCDF0 */

loc_003DCDC6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCDCBu); RECOMP_ABI_CALL(0x003DCF40u, sub_003DCF40); /* call 0x003DCF40 */

loc_003DCDCB: ;
    MEM32(esp) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCDD7u); RECOMP_ABI_CALL(0x00414090u, sub_00414090); /* call 0x00414090 */

loc_003DCDD7: ;
    MEM32(esp) = 0x7F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCDE3u); RECOMP_ABI_CALL(0x003DCBC0u, sub_003DCBC0); /* call 0x003DCBC0 */

}


/**
 * sub_003DCDF0
 * Original: 0x003DCDF0 - 0x003DCE9B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCDF0(void)
{
    uint32_t ebp = g_ebp;

loc_003DCDF0: ;
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
    PUSH32(esp, 0x003DCE93u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DCE93: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCEA0
 * Original: 0x003DCEA0 - 0x003DCF2B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCEA0(void)
{
    uint32_t ebp = g_ebp;

loc_003DCEA0: ;
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
    PUSH32(esp, 0x003DCF23u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DCF23: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCF30
 * Original: 0x003DCF30 - 0x003DCF40 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCF30(void)
{
    uint32_t ebp = g_ebp;

loc_003DCF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCF3Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_003DCF3B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCF40
 * Original: 0x003DCF40 - 0x003DCF46 (6 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCF40(void)
{
    uint32_t ebp = g_ebp;

loc_003DCF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    recomp_unsupported_instruction(0x003DCF43u); /* TODO: hlt  */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DCF50
 * Original: 0x003DCF50 - 0x003DCF9E (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCF50(void)
{
    uint32_t ebp = g_ebp;

loc_003DCF50: ;
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
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    ebx = 0x838DC4;
    edi = 0x460EA8;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCF99u); RECOMP_ABI_CALL(0x0041AA40u, sub_0041AA40); /* call 0x0041AA40 */

loc_003DCF99: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCF9Eu); RECOMP_ABI_CALL(0x003DCC90u, sub_003DCC90); /* call 0x003DCC90 */

}


/**
 * sub_003DCFA0
 * Original: 0x003DCFA0 - 0x003DCFFD (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCFA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xDFBE50;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCFB4u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DCFB4: ;
    _fa = (uint32_t)(MEM32(0xDFBE54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBE54), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DCFF8; /* jle: less or equal (signed <=) */

loc_003DCFBD: ;
    eax = MEM32(0xDFBE54);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(0xDFBE54) = ecx;
    eax = MEM32(eax * 4 + 0xDFBE54);
    MEM32(ebp + -4) = eax;
    eax = 0xDFBE50;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCFE5u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DCFE5: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ebp + -4); PUSH32(esp, 0x003DCFE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003DCFE8: ;
    eax = 0xDFBE50;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DCFF6u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DCFF6: ;
    goto loc_003DCFB4;

loc_003DCFF8: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD000
 * Original: 0x003DD000 - 0x003DD060 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    eax = 0xDFBE50;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD01Eu); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DD01E: ;
    _fa = (uint32_t)(MEM32(0xDFBE54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBE54), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD030; /* jne: not equal / not zero */

loc_003DD027: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DD04A;

loc_003DD030: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(0xDFBE54);
    edx = eax;
    edx = edx + 1;
    MEM32(0xDFBE54) = edx;
    MEM32(eax * 4 + 0xDFBE58) = ecx;

loc_003DD04A: ;
    eax = 0xDFBE50;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD058u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DD058: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD060
 * Original: 0x003DD060 - 0x003DD10A (170 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD060(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xDFBED8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD074u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DD074: ;
    _fa = (uint32_t)(MEM32(0xDFBEDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBEDC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD105; /* je: equal / zero */

loc_003DD081: ;
    goto loc_003DD083;

loc_003DD083: ;
    eax = MEM32(0xDFBEE0);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(0xDFBEE0) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DD0E8; /* jle: less or equal (signed <=) */

loc_003DD098: ;
    eax = MEM32(0xDFBEDC);
    ecx = MEM32(0xDFBEE0);
    eax = MEM32(eax + ecx * 4 + 4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(0xDFBEDC);
    ecx = MEM32(0xDFBEE0);
    eax = MEM32(eax + ecx * 4 + 0x84);
    MEM32(ebp + -8) = eax;
    eax = 0xDFBED8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD0CDu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DD0CD: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003DD0D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003DD0D8: ;
    eax = 0xDFBED8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD0E6u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DD0E6: ;
    goto loc_003DD083;

loc_003DD0E8: ;
    goto loc_003DD0EA;

loc_003DD0EA: ;
    eax = MEM32(0xDFBEDC);
    eax = MEM32(eax);
    MEM32(0xDFBEDC) = eax;
    MEM32(0xDFBEE0) = 0x20;
    goto loc_003DD074;

loc_003DD105: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD110
 * Original: 0x003DD110 - 0x003DD118 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD110(void)
{
    uint32_t ebp = g_ebp;

loc_003DD110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD120
 * Original: 0x003DD120 - 0x003DD1FC (220 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD120(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0xDFBED8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD13Du); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_003DD13D: ;
    _fa = (uint32_t)(MEM32(0xDFBEDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBEDC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD151; /* jne: not equal / not zero */

loc_003DD146: ;
    eax = 0xDFBEE4;
    MEM32(0xDFBEDC) = eax;

loc_003DD151: ;
    _fa = (uint32_t)(MEM32(0xDFBEE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBEE0), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD1AB; /* jne: not equal / not zero */

loc_003DD15A: ;
    MEM32(esp) = 0x104;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD16Eu); RECOMP_ABI_CALL(0x003E6010u, sub_003E6010); /* call 0x003E6010 */

loc_003DD16E: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD18E; /* jne: not equal / not zero */

loc_003DD177: ;
    eax = 0xDFBED8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD185u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DD185: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003DD1F4;

loc_003DD18E: ;
    ecx = MEM32(0xDFBEDC);
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(0xDFBEDC) = eax;
    MEM32(0xDFBEE0) = 0;

loc_003DD1AB: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(0xDFBEDC);
    ecx = MEM32(0xDFBEE0);
    MEM32(eax + ecx * 4 + 4) = edx;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(0xDFBEDC);
    ecx = MEM32(0xDFBEE0);
    MEM32(eax + ecx * 4 + 0x84) = edx;
    eax = MEM32(0xDFBEE0);
    eax = eax + 1;
    MEM32(0xDFBEE0) = eax;
    eax = 0xDFBED8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD1EDu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_003DD1ED: ;
    MEM32(ebp + -4) = 0;

loc_003DD1F4: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD200
 * Original: 0x003DD200 - 0x003DD22D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD200(void)
{
    uint32_t ebp = g_ebp;

loc_003DD200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0x3DD230;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD228u); RECOMP_ABI_CALL(0x003DD120u, sub_003DD120); /* call 0x003DD120 */

loc_003DD228: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD230
 * Original: 0x003DD230 - 0x003DD241 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD230(void)
{
    uint32_t ebp = g_ebp;

loc_003DD230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x003DD23Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003DD23C: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD250
 * Original: 0x003DD250 - 0x003DD255 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD250(void)
{
    uint32_t ebp = g_ebp;

loc_003DD250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD260
 * Original: 0x003DD260 - 0x003DD297 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD260(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003DD260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = 0x55C91C;
    MEM32(ebp + -4) = eax;

loc_003DD26F: ;
    eax = 0x55C91C;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003DD28D; /* jbe: below or equal (unsigned <=) */

loc_003DD27A: ;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DD282u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003DD282: ;
    eax = MEM32(ebp + -4);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003DD26F;

loc_003DD28D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD292u); RECOMP_ABI_CALL(0x003DD250u, sub_003DD250); /* call 0x003DD250 */

loc_003DD292: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD2A0
 * Original: 0x003DD2A0 - 0x003DD2C3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD2A0(void)
{
    uint32_t ebp = g_ebp;

loc_003DD2A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD2AEu); RECOMP_ABI_CALL(0x003DD060u, sub_003DD060); /* call 0x003DD060 */

loc_003DD2AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD2B3u); RECOMP_ABI_CALL(0x003DD260u, sub_003DD260); /* call 0x003DD260 */

loc_003DD2B3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD2B8u); RECOMP_ABI_CALL(0x00418170u, sub_00418170); /* call 0x00418170 */

loc_003DD2B8: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD2C3u); RECOMP_ABI_CALL(0x003DCBC0u, sub_003DCBC0); /* call 0x003DCBC0 */

}


/**
 * sub_003DD2D0
 * Original: 0x003DD2D0 - 0x003DD2D5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD2D0(void)
{
    uint32_t ebp = g_ebp;

loc_003DD2D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD2E0
 * Original: 0x003DD2E0 - 0x003DD2F9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD2E0(void)
{
    uint32_t ebp = g_ebp;

loc_003DD2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD2EEu); RECOMP_ABI_CALL(0x003DCFA0u, sub_003DCFA0); /* call 0x003DCFA0 */

loc_003DD2EE: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD2F9u); RECOMP_ABI_CALL(0x003DCBC0u, sub_003DCBC0); /* call 0x003DCBC0 */

}


/**
 * sub_003DD300
 * Original: 0x003DD300 - 0x003DD32B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD300(void)
{
    uint32_t ebp = g_ebp;

loc_003DD300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x241;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD326u); RECOMP_ABI_CALL(0x003DD880u, sub_003DD880); /* call 0x003DD880 */

loc_003DD326: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD330
 * Original: 0x003DD330 - 0x003DD756 (1062 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003DD330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x9C));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x9C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + -24) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD369; /* jne: not equal / not zero */

loc_003DD35E: ;
    eax = MEM32(ebp + -20);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x8000;
    MEM32(ebp + -20) = eax;

loc_003DD369: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xE (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD3EB; /* jne: not equal / not zero */

loc_003DD36F: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -44) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, &_cf);
    ebx = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -48) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -44);
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
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD3DBu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_003DD3DB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD3E3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD3E3: ;
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD3EB: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 9 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD4C0; /* jne: not equal / not zero */

loc_003DD3F5: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    esi = ebp + -32;
    eax = esp;
    MEM32(ebp + -52) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x10;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD433u); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD433: ;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0xFFFFFFEAu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD486; /* jne: not equal / not zero */

loc_003DD43C: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -56) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, &_cf);
    ebx = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -60) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -56);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD47Eu); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD47E: ;
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD486: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD49F; /* je: equal / zero */

loc_003DD48C: ;
    eax = MEM32(ebp + -36);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD497u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD497: ;
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD49F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 2 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD4AF; /* jne: not equal / not zero */

loc_003DD4A5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -28)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -28))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -64) = eax;
    goto loc_003DD4B5;

loc_003DD4AF: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -64) = eax;

loc_003DD4B5: ;
    eax = MEM32(ebp + -64);
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD4C0: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x406) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x406 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD68F; /* jne: not equal / not zero */

loc_003DD4CD: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -68) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x406;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD50Bu); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD50B: ;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0xFFFFFFEAu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD56E; /* je: equal / zero */

loc_003DD514: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003DD55B; /* jl: less (signed <) */

loc_003DD51A: ;
    ecx = MEM32(ebp + -40);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    eax = esp;
    MEM32(ebp + -72) = eax;
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
    PUSH32(esp, 0x003DD55Bu); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD55B: ;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD566u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD566: ;
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD56E: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    eax = esp;
    MEM32(ebp + -76) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x406;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD5AFu); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD5AF: ;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0xFFFFFFEAu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD5F4; /* je: equal / zero */

loc_003DD5B8: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003DD5E0; /* jl: less (signed <) */

loc_003DD5BE: ;
    ecx = MEM32(ebp + -40);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD5E0u); RECOMP_ABI_CALL(0x003DD800u, sub_003DD800); /* call 0x003DD800 */

loc_003DD5E0: ;
    MEM32(esp) = 0xFFFFFFEAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD5ECu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD5EC: ;
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD5F4: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -80) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD632u); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD632: ;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003DD67C; /* jl: less (signed <) */

loc_003DD63B: ;
    ecx = MEM32(ebp + -40);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    eax = esp;
    MEM32(ebp + -84) = eax;
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
    PUSH32(esp, 0x003DD67Cu); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD67C: ;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD687u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD687: ;
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD68F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -88) = eax;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF4u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_003DD6AC; /* jb: below (unsigned <) */

loc_003DD69D: ;
    goto loc_003DD69F;

loc_003DD69F: ;
    eax = MEM32(ebp + -88);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF1u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF1u;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_003DD6FB; /* ja: above (unsigned >) */

loc_003DD6AA: ;
    goto loc_003DD6AC;

loc_003DD6AC: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -92) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, &_cf);
    ebx = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -96) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -92);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD6EEu); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD6EE: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD6F6u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD6F6: ;
    MEM32(ebp + -16) = eax;
    goto loc_003DD748;

loc_003DD6FB: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -100) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, &_cf);
    ebx = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -104) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD73Du); RECOMP_ABI_CALL(0x003DD760u, sub_003DD760); /* call 0x003DD760 */

loc_003DD73D: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD745u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD745: ;
    MEM32(ebp + -16) = eax;

loc_003DD748: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x9C)) >> 32) & 1);
    esp = esp + 0x9C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD760
 * Original: 0x003DD760 - 0x003DD7FB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD760(void)
{
    uint32_t ebp = g_ebp;

loc_003DD760: ;
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
    PUSH32(esp, 0x003DD7F3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DD7F3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD800
 * Original: 0x003DD800 - 0x003DD87F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD800(void)
{
    uint32_t ebp = g_ebp;

loc_003DD800: ;
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
    PUSH32(esp, 0x003DD878u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DD878: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD880
 * Original: 0x003DD880 - 0x003DD9A2 (290 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD880(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = 0;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD8B0; /* jne: not equal / not zero */

loc_003DD8A1: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x410000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x410000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD8C6; /* jne: not equal / not zero */

loc_003DD8B0: ;
    eax = ebp + 0x10;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    ecx = eax;
    ecx = ecx + 4;
    MEM32(ebp + -20) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;

loc_003DD8C6: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    edx = 0; /* xor self */
    edi = MEM32(ebp + 0xC);
    esi = edi;
    esi = esi | 0x8000;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + -16);
    ecx = edx;
    eax = esp;
    MEM32(ebp + -32) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD937u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_003DD937: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DD98E; /* jl: less (signed <) */

loc_003DD940: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD98E; /* je: equal / zero */

loc_003DD94D: ;
    ecx = MEM32(ebp + -24);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -36) = eax;
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
    PUSH32(esp, 0x003DD98Eu); RECOMP_ABI_CALL(0x003DD9B0u, sub_003DD9B0); /* call 0x003DD9B0 */

loc_003DD98E: ;
    ecx = MEM32(ebp + -24);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD99Au); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DD99A: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DD9B0
 * Original: 0x003DD9B0 - 0x003DDA4B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD9B0(void)
{
    uint32_t ebp = g_ebp;

loc_003DD9B0: ;
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
    PUSH32(esp, 0x003DDA43u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DDA43: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDA50
 * Original: 0x003DDA50 - 0x003DDB1C (204 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDA50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDA50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = 0;
    eax = MEM32(ebp + 0x10);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDA83; /* jne: not equal / not zero */

loc_003DDA74: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 0x410000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x410000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDA99; /* jne: not equal / not zero */

loc_003DDA83: ;
    eax = ebp + 0x14;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    ecx = eax;
    ecx = ecx + 4;
    MEM32(ebp + -20) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;

loc_003DDA99: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x10);
    edi = ebx;
    edi = edi | 0x8000;
    ebx = RECOMP_SAR(ebx, 0x1F, 32, NULL);
    ecx = MEM32(ebp + -16);
    eax = esp;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DDB09u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_003DDB09: ;
    ecx = eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DDB14u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_003DDB14: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDB20
 * Original: 0x003DDB20 - 0x003DDBAB (139 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDB20(void)
{
    uint32_t ebp = g_ebp;

loc_003DDB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x1C);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -32) = eax;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -36) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + -24);
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    MEM32(ebp + -40) = eax;
    ecx = MEM32(ebp + 0x1C);
    MEM32(ebp + -44) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -40);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xDF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DDB9Du); RECOMP_ABI_CALL(0x003DDBB0u, sub_003DDBB0); /* call 0x003DDBB0 */

loc_003DDB9D: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDBB0
 * Original: 0x003DDBB0 - 0x003DDC5B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDBB0(void)
{
    uint32_t ebp = g_ebp;

loc_003DDBB0: ;
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
    PUSH32(esp, 0x003DDC53u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DDC53: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDC60
 * Original: 0x003DDC60 - 0x003DDCDE (126 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDC60(void)
{
    uint32_t ebp = g_ebp;

loc_003DDC60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -32) = eax;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -36) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + -24);
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    eax = esp;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DDCD0u); RECOMP_ABI_CALL(0x003DDCE0u, sub_003DDCE0); /* call 0x003DDCE0 */

loc_003DDCD0: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDCE0
 * Original: 0x003DDCE0 - 0x003DDD8B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDCE0(void)
{
    uint32_t ebp = g_ebp;

loc_003DDCE0: ;
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
    PUSH32(esp, 0x003DDD83u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_003DDD83: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDD90
 * Original: 0x003DDD90 - 0x003DDDFD (109 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDD90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003DDD90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DDD9Bu); RECOMP_ABI_CALL(0x003DDFE9u, sub_003DDFE9); /* call 0x003DDFE9 */

loc_003DDD9B: ;
    ecx = eax;
    MEM32(ebp + -8) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_Z(_fa, _fb)) goto loc_003DDDD3; /* je: equal / zero */

loc_003DDDA4: ;
    goto loc_003DDDA6;

loc_003DDDA6: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x400)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003DDDE5; /* je: equal / zero */

loc_003DDDB0: ;
    goto loc_003DDDB2;

loc_003DDDB2: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x800)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_003DDDDC; /* je: equal / zero */

loc_003DDDBC: ;
    goto loc_003DDDBE;

loc_003DDDBE: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xC00)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax != 0)) goto loc_003DDDEE; /* jne: not equal / not zero */

loc_003DDDC8: ;
    goto loc_003DDDCA;

loc_003DDDCA: ;
    MEM32(ebp + -4) = 0;
    goto loc_003DDDF5;

loc_003DDDD3: ;
    MEM32(ebp + -4) = 1;
    goto loc_003DDDF5;

loc_003DDDDC: ;
    MEM32(ebp + -4) = 2;
    goto loc_003DDDF5;

loc_003DDDE5: ;
    MEM32(ebp + -4) = 3;
    goto loc_003DDDF5;

loc_003DDDEE: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_003DDDF5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDE00
 * Original: 0x003DDE00 - 0x003DDE27 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDE00(void)
{
    uint32_t ebp = g_ebp;

loc_003DDE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DDE17u); RECOMP_ABI_CALL(0x003DE072u, sub_003DE072); /* call 0x003DE072 */

loc_003DDE17: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 8);
    MEM16(eax) = LO16(ecx);
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003DDE30
 * Original: 0x003DDE30 - 0x003DDE57 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDE30(void)
{
    uint32_t ebp = g_ebp;

loc_003DDE30: ;
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
    PUSH32(esp, 0x003DDE44u); RECOMP_ABI_CALL(0x003DDFF4u, sub_003DDFF4); /* call 0x003DDFF4 */

loc_003DDE44: ;
    MEM32(esp) = 0x3F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DDE50u); RECOMP_ABI_CALL(0x003DDF28u, sub_003DDF28); /* call 0x003DDF28 */

loc_003DDE50: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

